import collections
import json
from pathlib import Path
import re
import shutil
import subprocess

root = Path(__file__).resolve().parent / "wallper-analysis"
evidence = root / "evidence"
native = json.loads((evidence / "rea-native-dispatch-20000.json").read_text())["normalized_result"]["result"]
methods = [{"class": method["class_name"], "selector": method["selector"],
            "address": method["implementation_address"]}
           for method in native["objc_dispatch_implementations"]
           if method["implementation_address"]]
classes = {}
for item in native["objc_classes"]:
    if item["is_meta_class"] or "Wallper" not in item["name"]:
        continue
    name = item["name"]
    classes[name] = {"mangled_name": name,
                     "fields": [field["name"] for field in native["objc_ivars"] if field["class_name"] == name],
                     "methods": [method for method in methods if method["class"] == name]}

for category in native["objc_categories"]:
    name = category["class_name"]
    if name not in classes:
        classes[name] = {"mangled_name": name, "fields": [], "category": category["name"],
                         "methods": [method for method in methods if method["class"] == name]}

names = list(classes)
demangled = subprocess.run(["xcrun", "swift-demangle", "--compact"],
                           input="\n".join(names) + "\n", text=True,
                           check=True, capture_output=True).stdout.splitlines()
for name, display in zip(names, demangled):
    category = classes[name].get("category")
    classes[name]["name"] = "extension " + display + " (" + category + ")" if category else display

strings = (evidence / "strings.txt").read_text().splitlines()
source_paths = sorted({match[0] for line in strings for match in
                       re.finditer(r"Wallper/[A-Za-z0-9_./-]+\.swift", line)})
endpoints = sorted({line for line in strings if re.fullmatch(r"https?://\S+", line)})
(evidence / "recovered-structure.json").write_text(json.dumps({
    "provenance": "REA native dispatch metadata, Swift demangler, and binary strings",
    "limitations": "Not a complete Swift type inventory; methods are Objective-C-visible entry points only",
    "classes": list(classes.values()), "source_paths": source_paths,
    "embedded_urls": endpoints}, indent=2) + "\n")

export = root / "decompiled"
index_path = export / "decompile-index.json"
records = []
if index_path.exists():
    index = json.loads(index_path.read_text())
    records = index.get("functions", [])
lookup = {record["address"]: record for record in records}
ghidra = json.loads((evidence / "ghidra-metadata.json").read_text())
functions = {function["address"]: function for function in ghidra["functions"]}
named_root = root / "named-code"
named_root.mkdir(exist_ok=True)
document = ["# Recovered code map", "", "Generated from local binary evidence.", "",
            "Names below are observed metadata, not reconstructed original source files.", "",
            "## Original source-path clues", ""]
document.extend("- `" + path + "`" for path in source_paths)
document.extend(["", "## Objective-C-visible Swift classes", ""])
named_count = 0
for item in sorted(classes.values(), key=lambda value: value["name"]):
    document.extend(["### " + item["name"], ""])
    if item["fields"]:
        document.extend(["Observed fields: " + ", ".join("`" + field + "`" for field in item["fields"]), ""])
    for method in item["methods"]:
        record = lookup.get(method["address"])
        label = "`" + method["selector"] + "` at `" + method["address"] + "`"
        if record and record.get("status") == "written":
            source = export / record["relative_path"]
            class_directory = named_root / re.sub(r"[^A-Za-z0-9_.-]", "_", item["name"])
            class_directory.mkdir(exist_ok=True)
            filename = re.sub(r"[^A-Za-z0-9_.-]", "_", method["selector"]) + "-" + method["address"] + ".c"
            target = class_directory / filename
            shutil.copy2(source, target)
            label += " — [pseudocode](" + target.relative_to(root).as_posix() + ")"
            named_count += 1
        document.append("- " + label)
        function = functions.get(method["address"])
        if function:
            internal = [callee for callee in function["calls"] if lookup.get(callee["address"], {}).get("status") == "written"]
            if internal:
                document.append("  - Direct callees: " + ", ".join(
                    "[" + callee["name"].replace("_", "\\_") + "](" +
                    (Path("decompiled") / lookup[callee["address"]]["relative_path"]).as_posix() + ")"
                    for callee in internal))
    document.append("")
(root / "CODE-MAP.md").write_text("\n".join(document) + "\n")
counts = collections.Counter(record.get("status", "unknown") for record in records)
summary = {"objc_visible_classes": sum("category" not in item for item in classes.values()),
           "objc_categories": sum("category" in item for item in classes.values()),
           "objc_visible_methods": len(methods),
           "source_path_clues": len(source_paths), "named_pseudocode_files": named_count,
           "export_status_counts": dict(counts)}
swift = json.loads((evidence / "swift-fields.json").read_text())["declarations"]
summary["swift_type_declarations"] = len(swift)
summary["swift_fields_and_enum_cases"] = sum(len(item["fields"]) for item in swift)
summary["decoded_field_types"] = sum("decoded_type" in field for item in swift for field in item["fields"])
(root / "recovery-summary.json").write_text(json.dumps(summary, indent=2) + "\n")
print(json.dumps(summary, indent=2))
