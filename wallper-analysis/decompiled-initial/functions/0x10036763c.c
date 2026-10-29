// rea decompile_all
// name: FUN_10036763c
// address: 0x10036763c
// body: available
// range: 0x10036763c-0x100367bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003679e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036763c(undefined8 *param_1,uint param_2,long param_3,StringInterpolation param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  Design DVar3;
  undefined *puVar4;
  StringInterpolation SVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  long lVar8;
  CGFloat size;
  Text TVar9;
  Font FVar10;
  Text TVar11;
  Color CVar12;
  Text TVar13;
  Text TVar14;
  undefined *puVar15;
  StringInterpolation SVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined *puVar19;
  Color CVar20;
  CGFloat CVar21;
  char *pcVar22;
  undefined *puVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar24;
  String stringLiteral;
  String SVar25;
  String SVar26;
  String stringLiteral_00;
  String SVar27;
  String SVar28;
  undefined1 auStack_d0 [8];
  long local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  uint local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  long local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  String local_70;
  
  puVar4 = &DAT_10054a828;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = auStack_d0 + -extraout_x8;
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  SVar5.unknown = auStack_d0 + -extraout_x8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  lVar24 = (long)SVar5.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar7.unknown = (undefined *)(lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_c8 = param_3;
  local_a4 = param_2;
  if ((param_2 & 1) == 0) {
    LocalizationValue::StringInterpolation::_init(0xe,1);
    SVar25.bridgeObject = (void *)0xee0020726f662072;
    SVar25.str = (char *)0x657061706c6c6157;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar25,param_4);
    lVar8 = 0;
    FUN_1001d59ac();
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(param_3 + *(int *)(lVar8 + 0x14)),param_4);
    LocalizationValue::StringInterpolation::_appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
    LVar6.unknown = (undefined *)LocalizationValue::_init(SVar5);
  }
  else {
    stringLiteral.bridgeObject = (void *)0xee00737265706170;
    stringLiteral.str = (char *)0x6c6c615720646441;
    LVar6.unknown = (undefined *)LocalizationValue::_init(stringLiteral);
  }
  Foundation::Locale::get_current(LVar6);
  CVar20.unknown = (undefined *)0x0;
  local_b0 = LVar7.unknown;
  local_88 = lVar24;
  SVar25 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
  local_70 = SVar25;
  FUN_100026df4();
  size.unknown = SVar25.str;
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  local_c0 = size.unknown;
  TVar9 = SwiftUI::Text::_init();
  SVar26.bridgeObject = (void *)0xe700000000000000;
  SVar26.str = (char *)0x616967726f6547;
  FVar10 = SwiftUI::Font::custom(SVar26,size,CVar20.unknown);
  TVar14 = TVar9;
  SVar16.unknown = puVar4;
  CVar21.unknown = size.unknown;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,puVar4,size.unknown);
  _swift_bridgeObjectRelease();
  CVar12 = SwiftUI::Color::get_white(CVar20);
  local_70.str = CVar12.unknown;
  CVar20 = CVar12;
  FUN_100028d58();
  TVar9 = TVar11;
  puVar4 = TVar14.unknown;
  puVar15 = SVar16.unknown;
  local_b8 = CVar20.unknown;
  puStack_98 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_a0 = TVar9.unknown;
  local_90 = puVar15;
  FUN_100025b34(TVar11.unknown,TVar14.unknown);
  _swift_release(CVar12.unknown);
  _swift_bridgeObjectRelease(CVar21.unknown);
  LVar7.unknown = local_b0;
  if ((local_a4 & 1) == 0) {
    LocalizationValue::StringInterpolation::_init(0x21,1);
    SVar27.bridgeObject = (void *)0x80000001004e6a00;
    SVar27.str = (char *)0xd000000000000020;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar27,SVar16);
    lVar24 = 0;
    FUN_1001d59ac();
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(local_c8 + *(int *)(lVar24 + 0x14)),SVar16);
    SVar28.bridgeObject = (void *)0xe100000000000000;
    SVar28.str = (char *)0x2e;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar28,SVar16);
    LVar7.unknown = local_b0;
    LVar6.unknown = (undefined *)LocalizationValue::_init(SVar5);
  }
  else {
    stringLiteral_00.bridgeObject = (void *)0x80000001004e6a30;
    stringLiteral_00.str = (char *)0xd00000000000002c;
    LVar6.unknown = (undefined *)LocalizationValue::_init(stringLiteral_00);
  }
  Foundation::Locale::get_current(LVar6);
  CVar20.unknown = (undefined *)0x0;
  local_70 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
  puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
  pcVar17 = local_c0;
  TVar9 = SwiftUI::Text::_init
                    (LVar6.unknown,PTR___type_metadata_for_Swift_String_100523a98,local_c0);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar2 = local_80;
  lVar24 = CONCAT71((int7)((ulong)TVar9.unknown >> 8),DVar3.value);
  (**(code **)(*(long *)(lVar24 + -8) + 0x38))(local_80,1,1,lVar24);
  FVar10 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(puVar2,&DAT_10054a828,&DAT_10041e3c0);
  TVar14 = TVar9;
  puVar18 = puVar15;
  pcVar22 = pcVar17;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,puVar15,pcVar17);
  _swift_bridgeObjectRelease();
  CVar20 = SwiftUI::Color::get_white(CVar20);
  CVar12 = SwiftUI::Color::opacity(0.5,CVar20);
  _swift_release(CVar20.unknown);
  local_70.str = CVar12.unknown;
  TVar9 = TVar11;
  puVar19 = TVar14.unknown;
  puVar23 = puVar18;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar11.unknown,TVar14.unknown,puVar18);
  _swift_release(CVar12.unknown);
  _swift_bridgeObjectRelease(pcVar22);
  puVar1 = local_90;
  puVar18 = puStack_98;
  puVar15 = local_a0;
  *local_78 = puStack_98;
  local_78[1] = local_a0;
  *(char *)(local_78 + 2) = (char)puVar4;
  local_78[3] = local_90;
  local_78[4] = TVar13.unknown;
  local_78[5] = TVar9.unknown;
  *(char *)(local_78 + 6) = (char)puVar19;
  local_78[7] = puVar23;
  FUN_100007b14(puStack_98,local_a0,puVar4);
  _swift_bridgeObjectRetain(puVar1);
  FUN_100007b14(TVar13.unknown,TVar9.unknown,puVar19);
  _swift_bridgeObjectRetain(puVar23);
  FUN_100025b34(TVar13.unknown,TVar9.unknown,puVar19);
  _swift_bridgeObjectRelease(puVar23);
  FUN_100025b34(puVar18,puVar15,puVar4);
  _swift_bridgeObjectRelease(puVar1);
  return;
}

