// rea decompile_all
// name: FUN_100373bac
// address: 0x100373bac
// body: available
// range: 0x100373bac-0x100374a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100373c44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100373bac(undefined8 *param_1,CGFloat param_2,MainActor *param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  MainActor MVar1;
  int iVar2;
  undefined4 uVar3;
  Design DVar4;
  PopoverAttachmentAnchor PVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  Text TVar9;
  undefined *puVar10;
  Font FVar11;
  Text TVar12;
  Color CVar13;
  Color CVar14;
  LocalizedStringKey LVar15;
  long lVar16;
  MainActor *this;
  MainActor *pMVar17;
  undefined8 *puVar18;
  MainActor *pMVar19;
  Source SVar21;
  Source SVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  StringInterpolation SVar26;
  undefined *puVar27;
  Text TVar28;
  undefined8 uVar29;
  StringInterpolation SVar30;
  undefined8 uVar31;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long extraout_x13_00;
  code *pcVar32;
  long lVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  double dVar43;
  String stringLiteral;
  String SVar44;
  String SVar45;
  String SVar46;
  long local_1c0;
  ulong local_1b8;
  uint local_1ac;
  undefined *local_1a8;
  code *local_1a0;
  long local_198;
  undefined *local_190;
  long local_188;
  undefined1 *local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  MainActor *local_158;
  long local_150;
  MainActor *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  undefined4 local_11c;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined8 *local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  MainActor *local_c8;
  MainActor *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  code *pcStack_a8;
  undefined *local_a0;
  Binding<bool> local_80;
  long lStack_78;
  byte local_70;
  undefined *puVar20;
  
  lVar7 = 0;
  local_100 = param_1;
  local_c8 = param_3;
  FUN_10038f3a0();
  param_3 = param_3 + *(int *)(lVar7 + 0x14);
  lVar8 = 0;
  local_f0 = lVar7;
  FUN_1001d59ac();
  local_158 = *(MainActor **)(param_3 + *(int *)(lVar8 + 0x14));
  puVar10 = *(undefined **)(param_3 + *(int *)(lVar8 + 0x14) + 8);
  local_168 = lVar8;
  local_148 = param_3;
  local_c0 = local_158;
  local_b8 = puVar10;
  FUN_100026df4();
  local_160 = puVar10;
  _swift_bridgeObjectRetain(puVar10);
  puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar9 = SwiftUI::Text::_init(lVar8,PTR___type_metadata_for_Swift_String_100523a98,lVar8);
  SwiftUI::Font::Weight::get_semibold((Weight)TVar9.unknown);
  puVar10 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar42 = (long)&local_1c0 - extraout_x8;
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71((int7)((ulong)puVar10 >> 8),DVar4.value);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar42,1,1,lVar7);
  FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar42,&DAT_10054a828,&DAT_10041e3c0);
  TVar28 = TVar9;
  puVar10 = puVar27;
  lVar16 = lVar8;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar9.unknown,puVar27,lVar8);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(param_6);
  pMVar17 = local_c8;
  lVar7 = local_f0;
  dVar43 = 1.0;
  if (local_c8[*(int *)(local_f0 + 0x1c)] == (MainActor)0x0) {
    dVar43 = 0.75;
  }
  CVar14 = SwiftUI::Color::opacity(dVar43,CVar13);
  _swift_release(CVar13.unknown);
  local_c0 = (MainActor *)CVar14;
  FUN_100028d58();
  TVar9 = TVar12;
  puVar27 = TVar28.unknown;
  puVar20 = puVar10;
  local_110 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_11c = SUB84(puVar27,0);
  local_118 = TVar9.unknown;
  local_108 = puVar20;
  FUN_100025b34(TVar12.unknown,TVar28.unknown,puVar10);
  _swift_release(CVar14.unknown);
  _swift_bridgeObjectRelease(lVar16);
  puVar10 = &DAT_100433a90;
  _swift_getKeyPath();
  CVar13.unknown = &DAT_10055ee70;
  local_128 = puVar10;
  FUN_100002f94(&DAT_10055ee70,&DAT_100434698);
  local_130 = *(long *)(*(long *)(CVar13.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(local_130 + 0xfU & 0xfffffffffffffff0);
  lVar42 = lVar42 - extraout_x8_00;
  MVar1 = pMVar17[*(int *)(lVar7 + 0x20)];
  if (MVar1 == (MainActor)0x1) {
    CVar13 = SwiftUI::Color::get_green(CVar13);
    SwiftUI::Alignment::get_center((Alignment)CVar13.unknown);
    uVar31 = 0;
    SwiftUI::_FrameLayout::_init((Alignment)0x4018000000000000);
    local_b8 = (undefined *)CONCAT62(local_b8._2_6_,0x100);
    uVar29 = 0xeb00000000776f6e;
    stringLiteral.bridgeObject = (void *)0xeb00000000776f6e;
    stringLiteral.str = (char *)0x20676e6979616c50;
    local_c0 = (MainActor *)CVar13;
    LVar15 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    FUN_100002f94(&DAT_10054b7b8,&DAT_1004222a0);
    FUN_10002c070();
    (extension_SwiftUI)::SwiftUI::View::_help(LVar15);
    _swift_bridgeObjectRelease(uVar31);
    _swift_bridgeObjectRelease(uVar29);
    FUN_10002a29c(&local_c0,&DAT_10054b7b8,&DAT_1004222a0);
  }
  puVar10 = &DAT_10055ee78;
  FUN_100002f94(&DAT_10055ee78,&DAT_1004346a0);
  (**(code **)(*(long *)(puVar10 + -8) + 0x38))(lVar42,MVar1 != (MainActor)0x1,1,puVar10);
  puVar10 = &DAT_10055ef70;
  FUN_100002f94(&DAT_10055ef70,&DAT_100434760);
  local_140 = *(long *)(*(long *)(puVar10 + -8) + 0x40);
  local_138 = lVar42;
  (*(code *)PTR____chkstk_darwin_100521118)(local_140 + 0xfU & 0xfffffffffffffff0);
  puVar38 = (undefined1 *)(lVar42 - extraout_x8_01);
  local_f8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_e0 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)puVar38 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar8;
  local_e8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x13;
  local_170 = extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = lVar8 - extraout_x13_00;
  lVar16 = 0;
  local_178 = extraout_x13_00;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  pMVar17 = local_148;
  lVar36 = lVar33 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(local_148,lVar36);
  lVar7 = lVar36;
  _swift_getEnumCaseMultiPayload(lVar36,lVar16);
  puVar10 = local_f8;
  local_d8 = puVar38;
  local_d0 = lVar42;
  if ((int)lVar7 == 1) {
    pcVar32 = *(code **)(local_e0 + 0x20);
    local_1a0 = pcVar32;
    local_180 = puVar38;
    (*pcVar32)(lVar33,lVar36,local_f8);
    (*pcVar32)(lVar8,lVar33,puVar10);
    (*pcVar32)(local_e8,lVar8,puVar10);
    lVar7 = local_150;
    puVar10 = &DAT_10055ef88;
    FUN_100002f94(&DAT_10055ef88,&DAT_100434778);
    local_188 = lVar7;
    local_198 = *(long *)(puVar10 + -8);
    local_190 = puVar10;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar7 = lVar7 - extraout_x8_03;
    local_148 = (MainActor *)0x2d0;
    if ((pMVar17 + *(int *)(local_168 + 0x1c))[8] != (MainActor)0x1) {
      local_148 = *(MainActor **)(pMVar17 + *(int *)(local_168 + 0x1c));
    }
    lVar42 = *(long *)(local_f0 + -8);
    lVar16 = *(long *)(lVar42 + 0x40);
    local_150 = lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)();
    pMVar17 = local_c8;
    uVar40 = lVar16 + 0xfU & 0xfffffffffffffff0;
    FUN_100029504(local_c8,lVar7 - uVar40);
    uVar35 = (ulong)*(byte *)(lVar42 + 0x50);
    uVar37 = uVar35 + 0x10 & (uVar35 ^ 0xffffffffffffffff);
    local_1c0 = uVar37 + lVar16;
    uVar41 = uVar35 | 7;
    puVar10 = &DAT_10053c6a0;
    local_1b8 = uVar37;
    _swift_allocObject(&DAT_10053c6a0,local_1c0,uVar41);
    local_1a8 = puVar10;
    FUN_100007e64(lVar7 - uVar40,puVar10 + uVar37,FUN_10038f3a0);
    local_f0 = lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)();
    FUN_100029504(pMVar17,lVar7 - uVar40,FUN_10038f3a0);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar10 = PTR_typeMetadataAccessor_1005246d8;
    pMVar17 = Swift::MainActor::get_shared(this,this);
    puVar18 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    uVar35 = uVar35 + 0x20 & (uVar35 ^ 0xffffffffffffffff);
    puVar10 = &DAT_10053c6c8;
    _swift_allocObject(&DAT_10053c6c8,uVar35 + lVar16,uVar41);
    *(MainActor **)(puVar10 + 0x10) = pMVar17;
    *(undefined8 **)(puVar10 + 0x18) = puVar18;
    FUN_100007e64(lVar7 - uVar40,puVar10 + uVar35,FUN_10038f3a0);
    lVar7 = local_f0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    pMVar17 = local_c8;
    pMVar19 = local_c8;
    FUN_100029504(local_c8,lVar7 - uVar40,FUN_10038f3a0);
    pMVar19 = Swift::MainActor::get_shared(this,pMVar19);
    puVar10 = &DAT_10053c6f0;
    _swift_allocObject(&DAT_10053c6f0,uVar35 + lVar16,uVar41);
    *(MainActor **)(puVar10 + 0x10) = pMVar19;
    *(undefined8 **)(puVar10 + 0x18) = puVar18;
    FUN_100007e64(lVar7 - uVar40,puVar10 + uVar35,FUN_10038f3a0);
    lVar7 = local_f0;
    SwiftUI::Binding::init();
    local_168 = lStack_78;
    local_1ac = (uint)local_70;
    local_f0 = lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar7 = lVar7 - uVar40;
    FUN_100029504(pMVar17,lVar7,FUN_10038f3a0);
    local_c8 = (MainActor *)lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar16 = local_e0;
    puVar27 = local_f8;
    lVar42 = lVar7 - local_178;
    (**(code **)(local_e0 + 0x10))(lVar42,local_e8,local_f8);
    uVar35 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar37 = local_1c0 + uVar35 & (uVar35 ^ 0xffffffffffffffff);
    puVar10 = &DAT_10053c718;
    _swift_allocObject(&DAT_10053c718,uVar37 + local_170,uVar41 | uVar35);
    FUN_100007e64(lVar7,puVar10 + local_1b8,FUN_10038f3a0);
    (*local_1a0)(puVar10 + uVar37,lVar42,puVar27);
    PVar5 = SwiftUI::PopoverAttachmentAnchor::typeMetadataAccessor();
    puVar20 = (undefined *)CONCAT71((int7)((ulong)puVar10 >> 8),PVar5.value);
    lVar7 = *(long *)(puVar20 + -8);
    SVar21.unknown = puVar20;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
    puVar34 = (undefined8 *)(lVar42 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    SVar22 = (extension_SwiftUI)::Anchor::Source::_get_bounds(SVar21);
    *puVar34 = SVar22.unknown;
    (**(code **)(lVar7 + 0x68))
              (puVar34,*(undefined4 *)
                        PTR___enum_case_for_SwiftUI_PopoverAttachmentAnchor_rect_SwiftUI_PopoverAttachmentAnchor_Type___>__SwiftUI_Anchor<__C_CGRect>_Source___>_SwiftUI_PopoverAttachmentAnchor_100522a30
               ,puVar20);
    puVar27 = local_1a8;
    local_c0 = local_148;
    local_b8 = (undefined *)0x6b636f6c63;
    local_b0 = (undefined *)0xe500000000000000;
    pcStack_a8 = FUN_1003991cc;
    local_a0 = local_1a8;
    bVar6 = Swift::_stdlib_isOSVersionAtLeast(0xf,1,0);
    puVar18 = puVar34;
    if ((bVar6 & 1) == 0) {
      puVar23 = &DAT_100549d08;
      FUN_100002f94(&DAT_100549d08,&DAT_100434780);
      puVar24 = puVar23;
      FUN_100003530();
      puVar25 = puVar24;
      FUN_100003620();
      lVar16 = local_168;
      puVar34[-3] = puVar24;
      puVar34[-2] = puVar25;
      puVar34[-4] = puVar23;
      SVar30.unknown = (undefined *)(ulong)local_1ac;
      (extension_SwiftUI)::SwiftUI::View::_popover
                (local_80,(PopoverAttachmentAnchor)(__int8)local_168,(Edge)(__int8)local_1ac);
    }
    else {
      SwiftUI::Edge::Set::init((Edge)0x2);
      puVar23 = &DAT_100549d08;
      FUN_100002f94(&DAT_100549d08,&DAT_100434780);
      puVar24 = puVar23;
      FUN_100003530();
      puVar25 = puVar24;
      FUN_100003620();
      lVar16 = local_168;
      puVar34[-2] = puVar24;
      puVar34[-1] = puVar25;
      puVar34[-4] = &DAT_10053bab0;
      puVar34[-3] = puVar23;
      SVar30.unknown = (undefined *)(ulong)local_1ac;
      (extension_SwiftUI)::SwiftUI::View::_popoverCore
                (local_80,(PopoverAttachmentAnchor)(__int8)local_168,SUB41(local_1ac,0));
    }
    _swift_release(lVar16);
    _swift_release(puVar10);
    _swift_release(local_80.unknown);
    (**(code **)(lVar7 + 8))(puVar34,puVar20);
    _swift_release(puVar27);
    lVar7 = local_f0;
    SVar26 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(SVar26.unknown + -8) + 0x40));
    SwiftUI::LocalizedStringKey::StringInterpolation::init(0xc,1);
    SVar44.bridgeObject = (void *)0xe500000000000000;
    SVar44.str = (char *)0x206e656857;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar44,SVar30);
    SVar45.bridgeObject = local_160;
    SVar45.str = (char *)local_158;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar45,SVar30);
    SVar46.bridgeObject = (void *)0xe700000000000000;
    SVar46.str = (char *)0x736e6967656220;
    uVar29 = 0xe700000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar46,SVar30);
    LVar15 = SwiftUI::LocalizedStringKey::init
                       ((undefined *)(lVar7 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0)));
    puVar10 = &DAT_100549d08;
    FUN_100002fe4(&DAT_100549d08,&DAT_100434780);
    puVar27 = puVar10;
    FUN_100003530();
    puVar20 = puVar27;
    FUN_100003620();
    local_c0 = (MainActor *)&DAT_10053bab0;
    local_b8 = puVar10;
    local_b0 = puVar27;
    pcStack_a8 = (code *)puVar20;
    _swift_getOpaqueTypeConformance2(&local_c0,&DAT_100437e20,1);
    puVar39 = local_d8;
    lVar7 = local_150;
    puVar10 = local_190;
    (extension_SwiftUI)::SwiftUI::View::_help(LVar15);
    _swift_bridgeObjectRelease(puVar18);
    _swift_bridgeObjectRelease(uVar29);
    (**(code **)(local_198 + 8))(lVar7,puVar10);
    (**(code **)(local_e0 + 8))(local_e8,local_f8);
    puVar10 = &DAT_10055ef78;
    FUN_100002f94(&DAT_10055ef78,&DAT_100434768);
    (**(code **)(*(long *)(puVar10 + -8) + 0x38))(puVar39,0,1,puVar10);
    puVar38 = local_180;
    lVar42 = local_d0;
  }
  else {
    FUN_100029548(lVar36,FUN_1001d537c);
    puVar10 = &DAT_10055ef78;
    FUN_100002f94(local_150,&DAT_10055ef78,&DAT_100434768);
    (**(code **)(*(long *)(puVar10 + -8) + 0x38))(puVar38,1,1,puVar10);
    puVar39 = puVar38;
  }
  local_c8 = (MainActor *)puVar38;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)puVar38 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(lVar42,lVar7,&DAT_10055ee70,&DAT_100434698);
  local_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar7 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(puVar39,lVar16,&DAT_10055ef70,&DAT_100434760);
  puVar18 = local_100;
  puVar24 = local_108;
  puVar23 = local_110;
  puVar20 = local_118;
  uVar3 = local_11c;
  puVar27 = local_128;
  *local_100 = local_110;
  local_100[1] = local_118;
  *(char *)(local_100 + 2) = (char)local_11c;
  local_100[3] = local_108;
  local_100[4] = local_128;
  local_100[5] = 1;
  *(undefined1 *)(local_100 + 6) = 0;
  puVar10 = &DAT_10055ef80;
  FUN_100002f94(&DAT_10055ef80,&DAT_100434770);
  FUN_1000087e4(lVar7,(long)puVar18 + (long)*(int *)(puVar10 + 0x30),&DAT_10055ee70,&DAT_100434698);
  iVar2 = *(int *)(puVar10 + 0x40);
  *(undefined8 *)((long)puVar18 + (long)iVar2) = 0x4018000000000000;
  *(undefined1 *)((undefined8 *)((long)puVar18 + (long)iVar2) + 1) = 0;
  FUN_1000087e4(lVar16,(long)puVar18 + (long)*(int *)(puVar10 + 0x50),&DAT_10055ef70,&DAT_100434760)
  ;
  FUN_100007b14(puVar23,puVar20,uVar3);
  _swift_bridgeObjectRetain(puVar24);
  _swift_retain(puVar27);
  FUN_10002a29c(local_d8,&DAT_10055ef70,&DAT_100434760);
  FUN_10002a29c(local_d0,&DAT_10055ee70,&DAT_100434698);
  FUN_10002a29c(lVar16,&DAT_10055ef70,&DAT_100434760);
  FUN_10002a29c(lVar7,&DAT_10055ee70,&DAT_100434698);
  FUN_100025b34(puVar23,puVar20,uVar3);
  _swift_release(puVar27);
  _swift_bridgeObjectRelease(puVar24);
  return;
}

