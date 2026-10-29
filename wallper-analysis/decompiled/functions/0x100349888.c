// rea decompile_all
// name: FUN_100349888
// address: 0x100349888
// body: available
// range: 0x100349888-0x100349cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100349ab4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100349888(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                  StringInterpolation param_4)

{
  Design DVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  StringInterpolation SVar4;
  State SVar5;
  char *pcVar6;
  Text TVar7;
  Font FVar9;
  Text TVar10;
  Color CVar11;
  Text TVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  Color CVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String stringLiteral;
  String SVar24;
  undefined8 *local_110;
  char local_101;
  String local_100 [10];
  long lVar8;
  
  puVar19 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&local_110 - extraout_x8;
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown =
       (undefined *)
       ((lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  SVar4 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  pcVar17 = (char *)param_2[1];
  if ((long)pcVar17 < 1) {
    TVar12.unknown = (undefined *)0x0;
    TVar7.unknown = (undefined *)0x0;
    uVar20 = 0;
    puVar19 = (undefined *)0x0;
  }
  else {
    local_100[0].bridgeObject = (void *)param_2[10];
    local_100[0].str = (char *)param_2[9];
    SVar5.unknown = &DAT_10055d470;
    FUN_100002f94(&DAT_10055d470,&DAT_100432b18);
    SwiftUI::State::get_wrappedValue(SVar5);
    local_110 = param_1;
    if (local_101 == '\0') {
      LocalizationValue::StringInterpolation::_init(0x19,1);
      LocalizationValue::StringInterpolation::_appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
      SVar4.unknown = (undefined *)0xe400000000000000;
      local_100[0].str = pcVar17;
      LocalizationValue::StringInterpolation::_appendInterpolation
                (local_100,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8
                 ,
                 PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
                );
      SVar24.bridgeObject = (void *)0x80000001004e6820;
      SVar24.str = (char *)0xd000000000000019;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar24,SVar4);
      LVar2.unknown =
           (undefined *)
           LocalizationValue::_init(LVar3.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    }
    else {
      stringLiteral.bridgeObject = (void *)0x80000001004e6800;
      stringLiteral.str = (char *)0xd000000000000019;
      LVar2.unknown = (undefined *)LocalizationValue::_init(stringLiteral);
    }
    Foundation::Locale::get_current(LVar2);
    CVar16.unknown = (undefined *)0x0;
    SVar24 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
    local_100[0] = SVar24;
    FUN_100026df4();
    pcVar6 = SVar24.str;
    puVar19 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar7 = SwiftUI::Text::_init(pcVar6,PTR___type_metadata_for_Swift_String_100523a98,pcVar6);
    DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)TVar7.unknown >> 8),DVar1.value);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar18,1,1,lVar8);
    FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    FUN_10002a29c(lVar18,&DAT_10054a828,&DAT_10041e3c0);
    TVar14 = TVar7;
    puVar13 = puVar19;
    pcVar17 = pcVar6;
    TVar10 = SwiftUI::Text::_font(FVar9.unknown);
    _swift_release(FVar9.unknown);
    FUN_100025b34(TVar7.unknown,puVar19,pcVar6);
    _swift_bridgeObjectRelease();
    CVar16 = SwiftUI::Color::get_white(CVar16);
    CVar11 = SwiftUI::Color::opacity(0.5,CVar16);
    _swift_release(CVar16.unknown);
    local_100[0].str = CVar11.unknown;
    FUN_100028d58();
    TVar7 = TVar10;
    puVar15 = TVar14.unknown;
    puVar19 = puVar13;
    TVar12 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar10.unknown,TVar14.unknown,puVar13);
    _swift_release(CVar11.unknown);
    _swift_bridgeObjectRelease(pcVar17);
    uVar20 = (ulong)puVar15 & 0xff;
    FUN_100007b14(TVar12.unknown,TVar7.unknown,puVar15);
    _swift_bridgeObjectRetain(puVar19);
    param_1 = local_110;
  }
  puVar13 = &DAT_10053b970;
  _swift_allocObject(&DAT_10053b970,0x99,7);
  uVar21 = param_2[0xc];
  uVar23 = param_2[0xf];
  uVar22 = param_2[0xe];
  *(undefined8 *)(puVar13 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar13 + 0x70) = uVar21;
  *(undefined8 *)(puVar13 + 0x88) = uVar23;
  *(undefined8 *)(puVar13 + 0x80) = uVar22;
  uVar21 = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)(puVar13 + 0x91) = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)(puVar13 + 0x89) = uVar21;
  uVar21 = param_2[4];
  uVar23 = param_2[7];
  uVar22 = param_2[6];
  *(undefined8 *)(puVar13 + 0x38) = param_2[5];
  *(undefined8 *)(puVar13 + 0x30) = uVar21;
  *(undefined8 *)(puVar13 + 0x48) = uVar23;
  *(undefined8 *)(puVar13 + 0x40) = uVar22;
  uVar23 = param_2[8];
  uVar22 = param_2[0xb];
  uVar21 = param_2[10];
  *(undefined8 *)(puVar13 + 0x58) = param_2[9];
  *(undefined8 *)(puVar13 + 0x50) = uVar23;
  *(undefined8 *)(puVar13 + 0x68) = uVar22;
  *(undefined8 *)(puVar13 + 0x60) = uVar21;
  uVar23 = *param_2;
  uVar22 = param_2[3];
  uVar21 = param_2[2];
  *(undefined8 *)(puVar13 + 0x18) = param_2[1];
  *(undefined8 *)(puVar13 + 0x10) = uVar23;
  *(undefined8 *)(puVar13 + 0x28) = uVar22;
  *(undefined8 *)(puVar13 + 0x20) = uVar21;
  FUN_10034b584(param_2,local_100);
  FUN_10006953c(TVar12.unknown,TVar7.unknown,uVar20,puVar19);
  _swift_retain(puVar13);
  FUN_100069568(TVar12.unknown,TVar7.unknown,uVar20,puVar19);
  *param_1 = TVar12.unknown;
  param_1[1] = TVar7.unknown;
  param_1[2] = uVar20;
  param_1[3] = puVar19;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0x4020000000000000;
  param_1[7] = FUN_10034b9cc;
  param_1[8] = puVar13;
  _swift_release(puVar13);
  FUN_100069568(TVar12.unknown,TVar7.unknown,uVar20,puVar19);
  return;
}

