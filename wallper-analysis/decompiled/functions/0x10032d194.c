// rea decompile_all
// name: FUN_10032d194
// address: 0x10032d194
// body: available
// range: 0x10032d194-0x10032d44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10032d194(void)

{
  String SVar1;
  code *pcVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  _StringGuts _Var8;
  void *pvVar9;
  char *pcVar10;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  String stringLiteral;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_60 [8];
  char *local_58;
  String local_50;
  
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar11 = *(long *)(unaff_x20 + 0x20);
  if (lVar11 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10032d450);
    (*pcVar2)();
  }
  puVar5 = &DAT_100431bc8;
  _swift_getKeyPath(&DAT_100431bc8);
  puVar6 = &DAT_100431bf0;
  _swift_getKeyPath(&DAT_100431bf0);
  _swift_retain(lVar11);
  Combine::Published::_get_subscript(&local_50);
  _swift_release(puVar5);
  _swift_release(puVar6);
  if (((byte)local_50.str & 1) == 0) {
    _swift_release(lVar11);
    pvVar9 = (void *)0x80000001004e6410;
    pcVar7 = (char *)0x1000000000000011;
  }
  else {
    puVar5 = &DAT_100431ce8;
    _swift_getKeyPath();
    pcVar7 = "\x10\x1d\x14";
    _swift_getKeyPath();
    _Var8.unknown = puVar5;
    pcVar10 = pcVar7;
    Combine::Published::_get_subscript(&local_50,lVar11);
    _swift_release(puVar5);
    _swift_release(pcVar7);
    _swift_release(lVar11);
    if ((char)local_50.bridgeObject != '\x01') {
      pcVar7 = local_50.str;
      if ((long)local_50.str < 1) {
        SVar12.bridgeObject = (void *)0x80000001004e6470;
        SVar12.str = (char *)0xd00000000000001c;
        return SVar12;
      }
      if (local_50.str == (char *)0x1) {
        SVar1.bridgeObject = (void *)0x80000001004e6450;
        SVar1.str = (char *)0xd000000000000015;
        return SVar1;
      }
      local_50.str = (char *)0x0;
      local_50.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x17,_Var8);
      pvVar9 = local_50.bridgeObject;
      local_58 = pcVar7;
      SVar12 = Swift::CustomStringConvertible::get_description();
      _swift_bridgeObjectRelease(pvVar9);
      SVar13.bridgeObject = (void *)0x80000001004e6430;
      SVar13.str = (char *)0xd000000000000015;
      SVar14.bridgeObject = in_x3;
      SVar14.str = pcVar10;
      local_50 = SVar12;
      Swift::String::append(SVar13,SVar14);
      return local_50;
    }
    pcVar7 = (char *)0x6972742065657246;
    pvVar9 = (void *)0xea00000000006c61;
  }
  stringLiteral.bridgeObject = pvVar9;
  stringLiteral.str = pcVar7;
  LVar4 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar4.unknown);
  SVar12 = (extension_Foundation)::Swift::String::_init
                     ((LocalizationValue)
                      (auStack_60 +
                      (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                      (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar12;
}

