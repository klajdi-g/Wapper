// rea decompile_all
// name: FUN_10004add4
// address: 0x10004add4
// body: available
// range: 0x10004add4-0x10004b00b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10004add4(void)

{
  code *pcVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long unaff_x20;
  char *pcVar9;
  long lVar10;
  long lVar11;
  String stringLiteral;
  String SVar12;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(&stack0xffffffffffffffb0 +
                 (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                 (extraout_x8 + 0xfU & 0xfffffffffffffff0))) - extraout_x8_01;
  lVar5 = 0;
  FUN_10040211c();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  pcVar9 = (char *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100049bb4(lVar10);
  lVar8 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar5);
  if ((int)lVar8 == 1) {
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    stringLiteral.bridgeObject = (void *)0x80000001004dbdb0;
    stringLiteral.str = (char *)0xd000000000000014;
    LVar3 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar3.unknown);
    SVar12 = (extension_Foundation)::Swift::String::_init
                       ((LocalizationValue)
                        (&stack0xffffffffffffffb0 +
                        (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                        (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  }
  else {
    pcVar7 = pcVar9;
    FUN_100007e64(lVar10,pcVar9,FUN_10040211c);
    lVar8 = *(long *)(unaff_x20 + 0x60);
    if (lVar8 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004b00c);
      (*pcVar1)();
    }
    _swift_retain(lVar8);
    pcVar6 = pcVar9;
    FUN_10026a7c8(pcVar9);
    _swift_release(lVar8);
    FUN_100029548(pcVar9,FUN_10040211c);
    SVar12.bridgeObject = pcVar7;
    SVar12.str = pcVar6;
  }
  return SVar12;
}

