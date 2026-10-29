// rea decompile_all
// name: FUN_100364760
// address: 0x100364760
// body: available
// range: 0x100364760-0x100364f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100364760(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  Locale LVar8;
  LocalizationValue LVar9;
  LocalizationValue LVar10;
  LocalizedStringKey LVar11;
  LocalizedStringKey LVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  String stringLiteral;
  String SVar23;
  String stringLiteral_00;
  String stringLiteral_01;
  long local_110;
  long local_108;
  long local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  String local_a0;
  char local_90 [16];
  short local_80;
  code *local_78;
  undefined *puStack_70;
  
  puVar6 = &DAT_10055e1e0;
  local_c0 = param_1;
  FUN_100002f94(&DAT_10055e1e0,&DAT_100433ad8);
  local_c8 = *(long *)(puVar6 + -8);
  local_b0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar15 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12;
  puVar6 = &DAT_10055e1e8;
  local_d8 = lVar15;
  FUN_100002f94(&DAT_10055e1e8,&DAT_100433ae0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_00;
  puVar6 = &DAT_10055e1f0;
  FUN_100002f94(&DAT_10055e1f0,&DAT_100433ae8);
  local_f0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_e8 = lVar15 - extraout_x8_01;
  FUN_100386f18();
  lVar21 = *(long *)(lVar7 + -8);
  lVar19 = *(long *)(lVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (lVar15 - extraout_x8_01) - (lVar19 + 0xfU & 0xfffffffffffffff0);
  LVar8 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar9 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown =
       (undefined *)
       ((lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_10055e1f8;
  FUN_100002f94(&DAT_10055e1f8,&DAT_100433af0);
  local_100 = *(long *)(puVar6 + -8);
  puStack_f8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar7 = (long)LVar9.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar7 - extraout_x12_01;
  puVar6 = &DAT_10055e200;
  FUN_100002f94(&DAT_10055e200,&DAT_100433af8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar7 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_a8 = lVar17 - extraout_x12_02;
  FUN_10035d180();
  local_108 = param_3;
  if (((ulong)puVar6 & 1) == 0) {
    SVar23.bridgeObject = (void *)0xe400000000000000;
    SVar23.str = (char *)0x79616c50;
    LVar10 = LocalizationValue::_init(SVar23);
    Foundation::Locale::get_current((Locale)LVar10.unknown);
    uVar13 = 0;
    SVar23 = (extension_Foundation)::Swift::String::_init(LVar9,(Locale)0x0);
    lVar7 = 0;
    FUN_10025ee04();
    lVar17 = *(long *)(param_3 + *(int *)(lVar7 + 0x20));
    lVar7 = *(long *)(lVar17 + 0x10);
    FUN_100029504(param_2,lVar18,FUN_100386f18);
    uVar16 = (ulong)*(byte *)(lVar21 + 0x50);
    uVar22 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
    puVar6 = &DAT_10053c020;
    _swift_allocObject(&DAT_10053c020,uVar22 + lVar19,uVar16 | 7);
    FUN_100007e64(lVar18,puVar6 + uVar22,FUN_100386f18);
    builtin_strncpy(local_90,"play.fill",10);
    local_90[10] = '\0';
    local_90[0xb] = '\0';
    local_90[0xc] = '\0';
    local_90[0xd] = '\0';
    local_90[0xe] = '\0';
    local_90[0xf] = -0x17;
    local_80 = (ushort)(lVar7 != 0) << 8;
    local_78 = FUN_1003894b4;
    bVar5 = *(long *)(lVar17 + 0x10) != 0;
    pcVar1 = "t for your wallpaper";
    if (bVar5) {
      pcVar1 = "Double-click to rename";
    }
    pcVar2 = (char *)0xd000000000000015;
    if (bVar5) {
      pcVar2 = (char *)0xd000000000000024;
    }
    stringLiteral_01.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
    stringLiteral_01.str = pcVar2;
    local_a0 = SVar23;
    puStack_70 = puVar6;
    LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
    LVar12 = LVar11;
    FUN_10034b9d4();
    lVar7 = local_110;
    (extension_SwiftUI)::SwiftUI::View::_help(LVar11);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(stringLiteral_01.bridgeObject);
    FUN_10034ba14(&local_a0);
    lVar18 = local_e8;
    puVar6 = puStack_f8;
    lVar17 = local_100;
    (**(code **)(local_100 + 0x10))(local_e8,lVar7,puStack_f8);
    _swift_storeEnumTagMultiPayload(lVar18,local_f0,1);
    local_a0.bridgeObject = LVar12.unknown;
    local_a0.str = "";
    _swift_getOpaqueTypeConformance2
              (&local_a0,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    lVar19 = local_a8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
  }
  else {
    stringLiteral.bridgeObject = (void *)0xe400000000000000;
    stringLiteral.str = (char *)0x706f7453;
    LVar10 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar10.unknown);
    uVar14 = 0;
    SVar23 = (extension_Foundation)::Swift::String::_init(LVar9,(Locale)0x0);
    FUN_100029504(param_2,lVar18,FUN_100386f18);
    uVar16 = (ulong)*(byte *)(lVar21 + 0x50);
    uVar22 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
    puVar6 = &DAT_10053c048;
    _swift_allocObject(&DAT_10053c048,uVar22 + lVar19,uVar16 | 7);
    FUN_100007e64(lVar18,puVar6 + uVar22,FUN_100386f18);
    builtin_strncpy(local_90,"stop.fill",10);
    local_90[10] = '\0';
    local_90[0xb] = '\0';
    local_90[0xc] = '\0';
    local_90[0xd] = '\0';
    local_90[0xe] = '\0';
    local_90[0xf] = -0x17;
    local_80 = 0x101;
    local_78 = FUN_1003894c8;
    uVar13 = 0x80000001004e6ad0;
    stringLiteral_00.bridgeObject = (void *)0x80000001004e6ad0;
    stringLiteral_00.str = (char *)0xd000000000000027;
    local_a0 = SVar23;
    puStack_70 = puVar6;
    LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    LVar12 = LVar11;
    FUN_10034b9d4();
    (extension_SwiftUI)::SwiftUI::View::_help(LVar11);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(uVar13);
    FUN_10034ba14(&local_a0);
    lVar18 = local_e8;
    puVar6 = puStack_f8;
    lVar17 = local_100;
    (**(code **)(local_100 + 0x10))(local_e8,lVar7,puStack_f8);
    _swift_storeEnumTagMultiPayload(lVar18,local_f0,0);
    local_a0.bridgeObject = LVar12.unknown;
    local_a0.str = "";
    _swift_getOpaqueTypeConformance2
              (&local_a0,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    lVar19 = local_a8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
  }
  (**(code **)(lVar17 + 8))(lVar7,puVar6);
  lVar17 = 0;
  FUN_10025ee04();
  lVar7 = local_108;
  bVar5 = *(char *)(local_108 + *(int *)(lVar17 + 0x1c)) == '\0';
  if (bVar5) {
    FUN_10036513c(lVar15);
  }
  puVar6 = &DAT_10055e208;
  FUN_100002f94(&DAT_10055e208,&DAT_100433b00);
  (**(code **)(*(long *)(puVar6 + -8) + 0x38))(lVar15,!bVar5,1,puVar6);
  lVar17 = local_d8;
  FUN_10036549c(local_d8,lVar7);
  lVar7 = local_e0;
  FUN_1000087e4(lVar19,local_e0,&DAT_10055e200,&DAT_100433af8);
  lVar18 = local_d0;
  FUN_1000087e4(lVar15,local_d0,&DAT_10055e1e8,&DAT_100433ae0);
  puVar4 = local_b0;
  lVar3 = local_b8;
  lVar19 = local_c8;
  pcVar20 = *(code **)(local_c8 + 0x10);
  (*pcVar20)(local_b8,lVar17,local_b0);
  lVar21 = local_c0;
  FUN_1000087e4(lVar7,local_c0,&DAT_10055e200,&DAT_100433af8);
  puVar6 = &DAT_10055e210;
  FUN_100002f94(&DAT_10055e210,&DAT_100433b08);
  FUN_1000087e4(lVar18,lVar21 + *(int *)(puVar6 + 0x30),&DAT_10055e1e8,&DAT_100433ae0);
  (*pcVar20)(lVar21 + *(int *)(puVar6 + 0x40),lVar3,puVar4);
  pcVar20 = *(code **)(lVar19 + 8);
  (*pcVar20)(lVar17,puVar4);
  FUN_10002a29c(lVar15,&DAT_10055e1e8,&DAT_100433ae0);
  FUN_10002a29c(local_a8,&DAT_10055e200,&DAT_100433af8);
  (*pcVar20)(lVar3,puVar4);
  FUN_10002a29c(lVar18,&DAT_10055e1e8,&DAT_100433ae0);
  FUN_10002a29c(lVar7,&DAT_10055e200,&DAT_100433af8);
  return;
}

