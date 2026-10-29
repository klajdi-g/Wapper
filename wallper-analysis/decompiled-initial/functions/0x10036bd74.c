// rea decompile_all
// name: FUN_10036bd74
// address: 0x10036bd74
// body: available
// range: 0x10036bd74-0x10036c463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036bd74(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  bool bVar8;
  Design DVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  Text TVar13;
  undefined7 extraout_var;
  Font FVar14;
  Text TVar15;
  Color CVar16;
  Color CVar17;
  Color CVar18;
  LocalizedStringKey LVar19;
  undefined1 *puVar20;
  State SVar21;
  EnvironmentObject<undefined> EVar22;
  Text TVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar27;
  long lVar28;
  long extraout_x12;
  long extraout_x12_00;
  double dVar29;
  String stringLiteral;
  undefined1 auStack_130 [8];
  long local_128;
  long local_120;
  undefined4 local_114;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  long local_f8;
  undefined1 *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_78;
  undefined8 local_70;
  
  lVar10 = 0;
  local_128 = param_3;
  local_d0 = param_1;
  FUN_1001d537c();
  local_f8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar11 = &DAT_10055ee68;
  local_f0 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10055ee68,&DAT_100434690);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar28 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar28 - extraout_x12;
  puVar11 = &DAT_10055ee70;
  local_e0 = lVar28;
  FUN_100002f94(&DAT_10055ee70,&DAT_100434698);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar28 = lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar28 - extraout_x12_00;
  puVar11 = &DAT_10054a828;
  local_c0 = lVar28;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = lVar28 - extraout_x8_02;
  lVar10 = 0;
  FUN_10038ee8c();
  param_3 = param_3 + *(int *)(lVar10 + 0x14);
  puVar12 = (undefined *)0x0;
  local_c8 = lVar10;
  FUN_1001d59ac();
  puVar1 = (undefined8 *)(param_3 + *(int *)(puVar12 + 0x14));
  local_b8 = (undefined *)*puVar1;
  uVar24 = puVar1[1];
  local_120 = param_3;
  local_b0 = uVar24;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar24);
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar13 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_semibold((Weight)TVar13.unknown);
  DVar9 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar9.value) + -8) + 0x38))
            (lVar28,1,1,CONCAT71(extraout_var,DVar9.value));
  FVar14 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar28,&DAT_10054a828,&DAT_10041e3c0);
  TVar23 = TVar13;
  puVar25 = puVar11;
  CVar18.unknown = puVar12;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  lVar7 = local_c0;
  lVar10 = local_128;
  FUN_100025b34(TVar13.unknown,puVar11,puVar12);
  _swift_bridgeObjectRelease();
  CVar16 = SwiftUI::Color::get_white(param_6);
  lVar28 = local_c8;
  dVar29 = 1.0;
  if (*(char *)(lVar10 + *(int *)(local_c8 + 0x1c)) == '\0') {
    dVar29 = 0.75;
  }
  CVar17 = SwiftUI::Color::opacity(dVar29,CVar16);
  _swift_release(CVar16.unknown);
  local_b8 = CVar17.unknown;
  FUN_100028d58();
  TVar13 = TVar15;
  puVar11 = TVar23.unknown;
  puVar12 = puVar25;
  puStack_108 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_114 = SUB84(puVar11,0);
  local_110 = TVar13.unknown;
  local_100 = puVar12;
  FUN_100025b34(TVar15.unknown,TVar23.unknown,puVar25);
  _swift_release(CVar17.unknown);
  _swift_bridgeObjectRelease();
  bVar8 = *(char *)(lVar10 + *(int *)(lVar28 + 0x20)) != '\x01';
  if (!bVar8) {
    CVar18 = SwiftUI::Color::get_green(CVar18);
    SwiftUI::Alignment::get_center((Alignment)CVar18.unknown);
    uVar26 = 0;
    SwiftUI::_FrameLayout::_init((Alignment)0x4018000000000000);
    local_b0 = CONCAT62(local_b0._2_6_,0x100);
    uVar24 = 0xeb00000000776f6e;
    stringLiteral.bridgeObject = (void *)0xeb00000000776f6e;
    stringLiteral.str = (char *)0x20676e6979616c50;
    local_b8 = CVar18.unknown;
    LVar19 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    FUN_100002f94(&DAT_10054b7b8,&DAT_1004222a0);
    FUN_10002c070();
    (extension_SwiftUI)::SwiftUI::View::_help(LVar19);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar24);
    FUN_10002a29c(&local_b8,&DAT_10054b7b8,&DAT_1004222a0);
  }
  puVar11 = &DAT_10055ee78;
  FUN_100002f94(&DAT_10055ee78,&DAT_1004346a0);
  (**(code **)(*(long *)(puVar11 + -8) + 0x38))(lVar7,bVar8,1,puVar11);
  puVar2 = local_f0;
  FUN_100029504(local_120,local_f0,FUN_1001d537c);
  puVar20 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,local_f8);
  lVar28 = local_e0;
  bVar8 = (int)puVar20 == 0;
  if (bVar8) {
    uVar3 = *puVar2;
    FUN_100029504(lVar10,local_e0,FUN_10025ee04);
    puVar2 = (undefined1 *)(lVar10 + *(int *)(local_c8 + 0x38));
    local_78 = *puVar2;
    local_70 = *(undefined8 *)(puVar2 + 8);
    SVar21.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_projectedValue(SVar21);
    uVar24 = local_b0;
    puVar25 = local_b8;
    FUN_1001b7378(0);
    puVar11 = &DAT_100553df0;
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    EVar22 = SwiftUI::EnvironmentObject::init();
    lVar10 = 0;
    FUN_100398bd0();
    *(undefined1 *)(lVar28 + *(int *)(lVar10 + 0x14)) = uVar3;
    puVar1 = (undefined8 *)(lVar28 + *(int *)(lVar10 + 0x18));
    *puVar1 = puVar25;
    puVar1[1] = uVar24;
    *(undefined1 *)(puVar1 + 2) = local_a8;
    puVar1 = (undefined8 *)(lVar28 + *(int *)(lVar10 + 0x1c));
    *puVar1 = EVar22.unknown;
    puVar1[1] = puVar11;
    pcVar27 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
  }
  else {
    FUN_100029548(puVar2,FUN_1001d537c);
    lVar10 = 0;
    FUN_100398bd0();
    pcVar27 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
    lVar28 = local_e0;
  }
  (*pcVar27)(lVar28,!bVar8,1,lVar10);
  lVar10 = local_e8;
  FUN_1000087e4(lVar7,local_e8,&DAT_10055ee70,&DAT_100434698);
  lVar7 = local_d8;
  FUN_1000087e4(lVar28,local_d8,&DAT_10055ee68,&DAT_100434690);
  puVar1 = local_d0;
  puVar6 = local_100;
  puVar12 = puStack_108;
  puVar25 = local_110;
  uVar5 = local_114;
  *local_d0 = puStack_108;
  local_d0[1] = local_110;
  *(char *)(local_d0 + 2) = (char)local_114;
  local_d0[3] = local_100;
  puVar11 = &DAT_10055ee80;
  FUN_100002f94(&DAT_10055ee80,&DAT_1004346a8);
  FUN_1000087e4(lVar10,(long)puVar1 + (long)*(int *)(puVar11 + 0x30),&DAT_10055ee70,&DAT_100434698);
  iVar4 = *(int *)(puVar11 + 0x40);
  *(undefined8 *)((long)puVar1 + (long)iVar4) = 0x4020000000000000;
  *(undefined1 *)((undefined8 *)((long)puVar1 + (long)iVar4) + 1) = 0;
  FUN_1000087e4(lVar7,(long)puVar1 + (long)*(int *)(puVar11 + 0x50),&DAT_10055ee68,&DAT_100434690);
  FUN_100007b14(puVar12,puVar25,uVar5);
  _swift_bridgeObjectRetain(puVar6);
  FUN_10002a29c(lVar28,&DAT_10055ee68,&DAT_100434690);
  FUN_10002a29c(local_c0,&DAT_10055ee70,&DAT_100434698);
  FUN_10002a29c(lVar7,&DAT_10055ee68,&DAT_100434690);
  FUN_10002a29c(lVar10,&DAT_10055ee70,&DAT_100434698);
  FUN_100025b34(puVar12,puVar25,uVar5);
  _swift_bridgeObjectRelease(puVar6);
  return;
}

