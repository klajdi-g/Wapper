// rea decompile_all
// name: FUN_10013c818
// address: 0x10013c818
// body: available
// range: 0x10013c818-0x10013c993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10013c818(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  String SVar4;
  String separator;
  undefined *local_80 [3];
  undefined8 local_68;
  undefined *local_58;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    SVar4.bridgeObject = (void *)0xe600000000000000;
    SVar4.str = (char *)0x3e746f6f723c;
  }
  else {
    local_58 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,lVar3,0);
    param_1 = param_1 + 0x20;
    do {
      puVar2 = local_58;
      FUN_10013d448(param_1,local_80);
      FUN_100007bd0(local_80,local_68);
      SVar4 = Swift::CodingKey::get_stringValue();
      FUN_100043f24(local_80);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      local_58 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar2 = local_58;
      *(ulong *)(local_58 + 0x10) = uVar1 + 1;
      *(String *)(local_58 + uVar1 * 0x10 + 0x20) = SVar4;
      param_1 = param_1 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    local_80[0] = local_58;
    FUN_100002f94(&DAT_100553858,&DAT_100429e10);
    FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                  PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x2e;
    SVar4 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_release(puVar2);
  }
  return SVar4;
}

