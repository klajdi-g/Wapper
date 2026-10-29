// rea decompile_all
// name: FUN_1000cd408
// address: 0x1000cd408
// body: available
// range: 0x1000cd408-0x1000cdb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cd408(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  StringInterpolation SVar5;
  undefined *puVar6;
  long lVar7;
  LocalizationValue LVar8;
  UUID UVar9;
  StringInterpolation SVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  undefined *puVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  LocalizationValue local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_d8 = *param_5;
  puVar12 = &DAT_10054a9c8;
  local_e0 = param_1;
  local_d0 = param_2;
  local_c8 = param_5;
  local_a8 = param_4;
  local_98 = param_3;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = auStack_f0 + -extraout_x8;
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar11 = (long)(auStack_f0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar11;
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  puVar12 = (undefined *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_c0.unknown = puVar12;
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  SVar5.unknown = puVar12 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)0x0;
  FUN_1001d59ac();
  lVar11 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = (long)SVar5.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_10054a9d0;
  local_e8 = lVar13;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar13 - extraout_x12_00;
  puVar12 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar21 = lVar15 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar21 - extraout_x12_01;
  lVar7 = 0;
  FUN_1001d537c();
  lVar20 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar18 = lVar22 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(local_98,lVar15,&DAT_10054a9d0,&DAT_10041bc60);
  pcVar14 = *(code **)(lVar11 + 0x30);
  lVar11 = lVar15;
  (*pcVar14)(lVar15,1,puVar6);
  bVar2 = (int)lVar11 != 1;
  if (bVar2) {
    FUN_100029504(lVar15,lVar22,FUN_1001d537c);
    FUN_100029548(lVar15,FUN_1001d59ac);
  }
  else {
    FUN_10002a29c(lVar15,&DAT_10054a9d0,&DAT_10041bc60);
  }
  (**(code **)(lVar20 + 0x38))(lVar22,!bVar2,1,lVar7);
  FUN_1000ce158(lVar22,lVar21);
  pcVar16 = *(code **)(lVar20 + 0x30);
  lVar15 = lVar21;
  (*pcVar16)(lVar21,1,lVar7);
  lVar11 = local_a8;
  if ((int)lVar15 == 1) {
    _swift_storeEnumTagMultiPayload(lVar18,lVar7,3);
    lVar15 = lVar21;
    (*pcVar16)(lVar21,1,lVar7);
    if ((int)lVar15 != 1) {
      FUN_10002a29c(lVar21,&DAT_100550ec0,&DAT_100422eb0);
    }
  }
  else {
    FUN_100007e64(lVar21,lVar18,FUN_1001d537c);
  }
  uStack_78 = local_e0;
  local_70 = local_d0;
  uStack_68 = local_d8;
  local_80 = lVar18;
  FUN_1001b9fc0(lVar11,FUN_1000ce1a8,auStack_90);
  FUN_100029548(lVar18,FUN_1001d537c);
  uVar19 = local_98;
  FUN_1000087e4(local_98,lVar13,&DAT_10054a9d0,&DAT_10041bc60);
  lVar15 = lVar13;
  SVar10.unknown = puVar6;
  (*pcVar14)(lVar13,1);
  lVar7 = local_e8;
  if ((int)lVar15 == 1) {
    LocalizationValue::StringInterpolation::_init(0xf,1);
    SVar23.bridgeObject = (void *)0xac0000009c80e220;
    SVar23.str = (char *)0x6f74206465646441;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar23,SVar10);
    lVar7 = 0;
    FUN_10025ee04();
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar11 + *(int *)(lVar7 + 0x14)),SVar10);
    SVar24.bridgeObject = (void *)0xa300000000000000;
    SVar24.str = (char *)0x9d80e2;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar24,SVar10);
    LVar4.unknown = local_c0.unknown;
    LVar8 = LocalizationValue::_init(SVar5);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    SVar25 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
  }
  else {
    pcVar16 = FUN_1001d59ac;
    FUN_100007e64(lVar13,local_e8);
    LocalizationValue::StringInterpolation::_init(0x12,2);
    SVar25.bridgeObject = (void *)0xe800000000000000;
    SVar25.str = (char *)0x20726f6620746553;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar25,(StringInterpolation)pcVar16);
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar7 + *(int *)(puVar6 + 0x14)),(StringInterpolation)pcVar16);
    SVar26.bridgeObject = (void *)0xa700000000000000;
    SVar26.str = (char *)0x9c80e2206e6920;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar26,(StringInterpolation)pcVar16);
    lVar13 = 0;
    FUN_10025ee04();
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar11 + *(int *)(lVar13 + 0x14)),(StringInterpolation)pcVar16);
    SVar27.bridgeObject = (void *)0xa300000000000000;
    SVar27.str = (char *)0x9d80e2;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar27,(StringInterpolation)pcVar16);
    LVar4.unknown = local_c0.unknown;
    LVar8 = LocalizationValue::_init(SVar5);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    SVar25 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    FUN_100029548(lVar7,FUN_1001d59ac);
  }
  lVar7 = local_b0;
  if (DAT_100551178 != -1) {
    _swift_once(&DAT_100551178,FUN_1000c7edc);
  }
  FUN_1000087e4(uVar19,lVar7,&DAT_10054a9d0,&DAT_10041bc60);
  lVar13 = lVar7;
  (*pcVar14)(lVar7,1,puVar6);
  if ((int)lVar13 == 1) {
    FUN_10002a29c(lVar7,&DAT_10054a9d0,&DAT_10041bc60);
    uVar17 = 0xef73756c702e6567;
    uVar19 = 0x6461622e74786574;
  }
  else {
    uVar19 = *(undefined8 *)(lVar7 + *(int *)(puVar6 + 0x18));
    uVar17 = ((undefined8 *)(lVar7 + *(int *)(puVar6 + 0x18)))[1];
    _swift_bridgeObjectRetain(uVar17);
    FUN_100029548(lVar7,FUN_1001d59ac);
  }
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  puVar1 = local_a0;
  lVar7 = *(long *)(UVar9.unknown + -8);
  (**(code **)(lVar7 + 0x10))(local_a0,lVar11,UVar9.unknown);
  (**(code **)(lVar7 + 0x38))(puVar1,0,1,UVar9.unknown);
  FUN_1000c7780(SVar25.str,SVar25.bridgeObject,uVar19,uVar17,puVar1);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  _swift_bridgeObjectRelease(uVar17);
  FUN_10002a29c(puVar1,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

