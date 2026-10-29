// rea decompile_all
// name: FUN_1003d944c
// address: 0x1003d944c
// body: available
// range: 0x1003d944c-0x1003d95c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1003d944c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  CharacterSet CVar3;
  long lVar4;
  CharacterSet CVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  CharacterSet in;
  char *pcVar7;
  undefined *puVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  String local_60;
  void *pvVar6;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar9 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_10040211c();
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c));
  CVar5.unknown = (undefined *)puVar1[1];
  if (CVar5.unknown == (undefined *)0x0) {
    pcVar7 = (char *)*unaff_x20;
    puVar8 = (undefined *)unaff_x20[1];
    _swift_bridgeObjectRetain(puVar8);
    CVar5.unknown = (undefined *)0x0;
  }
  else {
    pcVar7 = (char *)*puVar1;
    puVar8 = CVar5.unknown;
  }
  local_60.bridgeObject = puVar8;
  local_60.str = pcVar7;
  _swift_bridgeObjectRetain();
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
  FUN_100026df4();
  SVar10 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar6 = SVar10.bridgeObject;
  (**(code **)(lVar9 + 8))(in.unknown,CVar3.unknown);
  _swift_bridgeObjectRelease(puVar8);
  uVar2 = (ulong)SVar10.str & 0xffffffffffff;
  if (((ulong)pvVar6 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)pvVar6 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    _swift_bridgeObjectRelease(pvVar6);
    SVar10.bridgeObject = (void *)0xe900000000000072;
    SVar10.str = (char *)0x657061706c6c6157;
  }
  else {
    SVar11 = Swift::String::lowercased(SVar10);
    _swift_bridgeObjectRelease(pvVar6);
    local_60 = SVar11;
    SVar10 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  return SVar10;
}

