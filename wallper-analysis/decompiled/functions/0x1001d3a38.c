// rea decompile_all
// name: FUN_1001d3a38
// address: 0x1001d3a38
// body: available
// range: 0x1001d3a38-0x1001d3b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1001d3a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  char *pcVar4;
  char *pcVar5;
  long extraout_x8;
  CharacterSet in;
  long lVar7;
  String SVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  void *pvVar6;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar7 = *(long *)(CVar2.unknown + -8);
  CVar3 = CVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  in.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_50 = param_1;
  uStack_48 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
  FUN_100026df4();
  SVar8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar6 = SVar8.bridgeObject;
  pcVar4 = SVar8.str;
  (**(code **)(lVar7 + 8))(in.unknown,CVar2.unknown);
  uVar1 = (ulong)pcVar4 & 0xffffffffffff;
  if (((ulong)pvVar6 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar6 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar6);
    SVar8 = (String)ZEXT816(0);
  }
  else {
    pcVar5 = (char *)0x3c;
    FUN_1001d39ac(0x3c,pcVar4,pvVar6);
    _swift_bridgeObjectRelease(pvVar6);
    SVar8.bridgeObject = pcVar4;
    SVar8.str = pcVar5;
    SVar8 = Swift::String::__fromSubstring(SVar8);
    _swift_bridgeObjectRelease(param_4);
  }
  return SVar8;
}

