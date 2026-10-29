// rea decompile_all
// name: FUN_1000ea628
// address: 0x1000ea628
// body: available
// range: 0x1000ea628-0x1000ea90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ea628(long param_1)

{
  code *pcVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  long lVar4;
  undefined *puVar5;
  LocalizationValue LVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  String stringLiteral;
  String SVar16;
  undefined *local_70;
  undefined *puStack_68;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown =
       (undefined *)
       ((long)&local_70 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  lVar4 = 0;
  FUN_10040211c();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  pcVar13 = LVar3.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054ac40;
  puVar9 = &DAT_10041ce70;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar15 = (long)pcVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar15 - extraout_x12;
  FUN_1000e3868();
  local_70 = puVar5;
  puStack_68 = puVar9;
  FUN_1000e3728(lVar14);
  FUN_1000087e4(lVar14,lVar15,&DAT_10054ac40,&DAT_10041ce70);
  lVar12 = lVar15;
  (**(code **)(lVar11 + 0x30))(lVar15,1,lVar4);
  if ((int)lVar12 == 1) {
    FUN_10002a29c(lVar14,&DAT_10054ac40,&DAT_10041ce70);
    stringLiteral.bridgeObject = (void *)0x80000001004dd720;
    stringLiteral.str = (char *)0xd000000000000012;
    LVar6 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    SVar16 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
  }
  else {
    pcVar10 = pcVar13;
    FUN_100007e64(lVar15,pcVar13,FUN_10040211c);
    lVar12 = *(long *)(param_1 + 0x10);
    if (lVar12 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ea90c);
      (*pcVar1)();
    }
    _swift_retain(lVar12);
    pcVar7 = pcVar13;
    FUN_10026a7c8(pcVar13);
    SVar16.bridgeObject = pcVar10;
    SVar16.str = pcVar7;
    _swift_release(lVar12);
    FUN_100029548(pcVar13,FUN_10040211c);
    FUN_10002a29c(lVar14,&DAT_10054ac40,&DAT_10041ce70);
  }
  uVar8 = 0;
  FUN_10012ea08(0);
  _swift_initStaticObject();
  puVar5 = puStack_68;
  FUN_10012e26c(local_70,puStack_68,SVar16.str,SVar16.bridgeObject,uVar8);
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  return;
}

