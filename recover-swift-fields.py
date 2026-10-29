import json
import hashlib
from pathlib import Path
import re
import struct
import subprocess

root = Path(__file__).resolve().parent / "wallper-analysis"
binary = (root / "original/Wallper-arm64").read_bytes()
evidence = json.loads((root / "evidence/rea-native-dispatch-20000.json").read_text())
declarations = evidence["normalized_result"]["result"]["swift_decls"]
assert hashlib.sha256(binary).hexdigest() == evidence["normalized_result"]["target_sha256"]
assert struct.unpack_from("<I", binary)[0] == 0xFEEDFACF
segments = []
cursor = 32
for ordinal in range(struct.unpack_from("<I", binary, 16)[0]):
    command, size = struct.unpack_from("<II", binary, cursor)
    if command == 0x19:
        address, memory_size, offset, file_size = struct.unpack_from("<QQQQ", binary, cursor + 24)
        segments.append((address, offset, file_size))
    cursor += size


def file_offset(address):
    for base, offset, size in segments:
        if base <= address < base + size:
            return offset + address - base
    raise ValueError("Address has no file-backed segment: " + hex(address))


def relative(address):
    displacement = struct.unpack_from("<i", binary, file_offset(address))[0]
    return address + displacement if displacement else None


def string(address):
    offset = file_offset(address)
    return binary[offset:binary.index(b"\0", offset)].decode("utf-8")


nominals = {}
for declaration in declarations:
    if declaration["module"] != "Wallper" or declaration["generic"]:
        continue
    if declaration["qualified_name"] != declaration["name"]:
        continue
    suffix = {"class": "C", "struct": "V", "enum": "O"}.get(declaration["kind"])
    if suffix:
        name = declaration["name"]
        nominals[int(declaration["location"]["address"], 16)] = "7Wallper" + str(len(name.encode())) + name + suffix

fixups = {}
for line in (root / "evidence/dyld-fixups.txt").read_text().splitlines():
    match = re.search(r"\s(0x[0-9A-Fa-f]+)\s+(rebase|bind)\s+(\S+)", line)
    if not match:
        continue
    pointer, kind, target = int(match[1], 16), match[2], match[3]
    if kind == "rebase":
        fixups[pointer] = nominals.get(int(target, 16))
    else:
        symbol = target.rsplit("/", 1)[-1]
        if symbol.startswith("_$s") and symbol.endswith("Mn"):
            fixups[pointer] = symbol[3:-2]


def mangled_type(address):
    start = file_offset(address)
    offset = start
    tokens = []
    unresolved = False
    while binary[offset] != 0:
        byte = binary[offset]
        if 1 <= byte <= 0x17:
            pointer_address = address + offset - start + 1
            displacement = struct.unpack_from("<i", binary, offset + 1)[0]
            target = pointer_address + displacement
            replacement = nominals.get(target) if byte == 1 else fixups.get(target) if byte == 2 else None
            if replacement:
                tokens.append(replacement)
            else:
                tokens.append("<symbolic_" + hex(byte) + "_" + hex(target) + ">")
                unresolved = True
            offset += 5
        elif 0x18 <= byte <= 0x1F:
            tokens.append("<absolute_symbolic_reference>")
            unresolved = True
            offset += 9
        else:
            tokens.append(chr(byte))
            offset += 1
    encoded = "".join(tokens)
    return {"address": hex(address), "raw_hex": binary[start:offset].hex(),
            "expanded_mangling": encoded, "unresolved": unresolved}


recovered = []
demangle_requests = []
for declaration in declarations:
    if declaration["module"] != "Wallper":
        continue
    item = {"name": declaration["name"], "qualified_name": declaration["qualified_name"],
            "kind": declaration["kind"], "generic": declaration["generic"],
            "descriptor_address": declaration["location"]["address"], "fields": []}
    try:
        descriptor = relative(int(item["descriptor_address"], 16) + 16)
        if descriptor:
            descriptor_offset = file_offset(descriptor)
            kind, record_size, count = struct.unpack_from("<HHI", binary, descriptor_offset + 8)
            if record_size < 12:
                raise ValueError("Field record is shorter than its required header")
            item["field_descriptor_address"] = hex(descriptor)
            item["field_descriptor_kind"] = kind
            for ordinal in range(count):
                address = descriptor + 16 + ordinal * record_size
                flags = struct.unpack_from("<I", binary, file_offset(address))[0]
                name_address = relative(address + 8)
                type_address = relative(address + 4)
                field = {"name": string(name_address) if name_address else None,
                         "flags": flags, "record_address": hex(address)}
                if type_address:
                    field["type_reference"] = mangled_type(type_address)
                    if not field["type_reference"]["unresolved"]:
                        demangle_requests.append(field)
                item["fields"].append(field)
    except (ValueError, UnicodeDecodeError, struct.error, IndexError) as error:
        item["decode_error"] = str(error)
    recovered.append(item)

requests = ["$s" + field["type_reference"]["expanded_mangling"] + "D" for field in demangle_requests]
if requests:
    result = subprocess.run(["xcrun", "swift-demangle", "--compact"],
                            input="\n".join(requests) + "\n", text=True,
                            check=True, capture_output=True).stdout.splitlines()
    for field, request, display in zip(demangle_requests, requests, result):
        if request != display:
            field["decoded_type"] = display

output = {"target_sha256": evidence["normalized_result"]["target_sha256"],
          "provenance": "Swift nominal and field descriptors from the preserved ARM64 executable",
          "indirect_reference_provenance": "Apple dyld_info -fixups output for the same preserved executable",
          "limitations": ["Names and types describe compiled metadata, not original Swift declarations",
                           "Generic and unresolved symbolic type references remain explicit",
                           "Enum field records identify cases; associated-value labels and source syntax may be missing"],
          "declarations": recovered}
(root / "evidence/swift-fields.json").write_text(json.dumps(output, indent=2) + "\n")
document = ["# Recovered Swift types and fields", "",
            "Observed compiled metadata, not original or buildable Swift source.", "",
            "Unresolved symbolic type references remain explicit in `evidence/swift-fields.json`.", ""]
for item in sorted(recovered, key=lambda value: value["name"]):
    document.extend(["## " + item["kind"] + " " + item["name"], "",
                     "Descriptor: `" + item["descriptor_address"] + "`", ""])
    for field in item["fields"]:
        display = field.get("decoded_type") or field.get("type_reference", {}).get("expanded_mangling")
        document.append("- `" + str(field["name"]) + "`" + (": `" + display + "`" if display else ""))
    if "decode_error" in item:
        document.append("Decode limitation: " + item["decode_error"])
    document.append("")
(root / "SWIFT-TYPES.md").write_text("\n".join(document) + "\n")
print(json.dumps({"declarations": len(recovered), "fields_and_cases": sum(len(item["fields"]) for item in recovered),
                  "decoded_field_types": sum("decoded_type" in field for item in recovered for field in item["fields"]),
                  "declaration_errors": sum("decode_error" in item for item in recovered)}, indent=2))
