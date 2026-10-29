// rea decompile_all
// name: FUN_1003b52c8
// address: 0x1003b52c8
// body: available
// range: 0x1003b52c8-0x1003b54bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b52c8(void)

{
  String SVar1;
  CharacterSet CVar2;
  URL UVar3;
  URL UVar4;
  CharacterSet CVar5;
  undefined *puVar6;
  CharacterSet CVar7;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  URL UVar8;
  CharacterSet withAllowedCharacters;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  String SVar13;
  String SVar14;
  char *local_90;
  void *pvStack_88;
  String local_80;
  undefined8 local_70;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  withAllowedCharacters.unknown =
       (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  UVar8.unknown = withAllowedCharacters.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)UVar8.unknown - extraout_x12;
  UVar4 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar4);
  pcVar12 = *(code **)(lVar10 + 8);
  (*pcVar12)(UVar8.unknown,UVar3.unknown);
  SVar13 = Foundation::URL::get_lastPathComponent(UVar8);
  CVar7.unknown = SVar13.bridgeObject;
  (*pcVar12)(lVar9,UVar3.unknown);
  SVar13 = Swift::String::lowercased(SVar13);
  _swift_bridgeObjectRelease();
  local_80 = SVar13;
  CVar5 = Foundation::CharacterSet::get_urlPathAllowed(CVar7);
  FUN_100026df4();
  CVar7.unknown = withAllowedCharacters.unknown;
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
  SVar1.bridgeObject = puVar6;
  SVar1.str = CVar7.unknown;
  (**(code **)(lVar11 + 8))(withAllowedCharacters.unknown,CVar2.unknown);
  if (puVar6 != (undefined *)0x0) {
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    SVar13 = SVar1;
  }
  local_80.str = (char *)0xd00000000000001b;
  local_80.bridgeObject = (void *)0x80000001004e6eb0;
  SVar14.bridgeObject = in_x3;
  SVar14.str = CVar5.unknown;
  Swift::String::append(SVar13,SVar14);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  local_70 = *(undefined8 *)(unaff_x20 + 0x40);
  local_90 = local_80.str;
  pvStack_88 = local_80.bridgeObject;
  puVar6 = &DAT_10054dd08;
  local_80 = *(String *)(unaff_x20 + 0x30);
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue((State *)&local_80,&local_90,puVar6);
  return;
}

