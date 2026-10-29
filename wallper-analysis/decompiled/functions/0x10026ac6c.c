// rea decompile_all
// name: FUN_10026ac6c
// address: 0x10026ac6c
// body: available
// range: 0x10026ac6c-0x10026ad9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10026ac6c(void)

{
  ulong uVar1;
  CharacterSet CVar2;
  URL UVar3;
  void *pvVar4;
  CharacterSet CVar5;
  long extraout_x8;
  CharacterSet in;
  long lVar6;
  code *pcVar7;
  String SVar8;
  String local_60;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar6 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar3.unknown = (undefined *)0x0;
  FUN_10040211c();
  local_60 = Foundation::URL::get_lastPathComponent(UVar3);
  pvVar4 = local_60.bridgeObject;
  Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_60.str);
  FUN_100026df4();
  SVar8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  CVar5.unknown = SVar8.bridgeObject;
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(in.unknown,CVar2.unknown);
  _swift_bridgeObjectRelease(pvVar4);
  uVar1 = (ulong)SVar8.str & 0xffffffffffff;
  if (((ulong)CVar5.unknown & 0x2000000000000000) != 0) {
    uVar1 = (ulong)CVar5.unknown >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
    SVar8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (*pcVar7)(in.unknown,CVar2.unknown);
  }
  return SVar8;
}

