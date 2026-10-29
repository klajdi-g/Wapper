// rea decompile_all
// name: FUN_1000236ac
// address: 0x1000236ac
// body: available
// range: 0x1000236ac-0x100023fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000236ac(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  RoundedCornerStyle RVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  UUID UVar13;
  undefined *puVar14;
  undefined *puVar15;
  RoundedRectangle RVar16;
  undefined7 extraout_var;
  Color CVar17;
  Color CVar18;
  Alignment AVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar24;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  long lVar30;
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined1 auStack_c8 [8];
  byte local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined *puStack_98;
  undefined1 local_90;
  long local_80 [2];
  
  local_d8 = param_1;
  local_e8 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  puVar11 = &DAT_10054a818;
  local_f8 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a818,&DAT_10041ba38);
  local_108 = *(long *)(puVar11 + -8);
  local_100 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = (long)(auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar12 = 0;
  local_110 = lVar20;
  FUN_10025ee04();
  local_130 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_128 = extraout_x12;
  local_120 = lVar20;
  UVar13 = Foundation::UUID::typeMetadataAccessor();
  lVar24 = *(long *)(UVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054a9c0;
  local_158 = lVar20;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_02;
  puVar14 = &DAT_10054a9c8;
  puVar15 = &DAT_10041bbe0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar23 = lVar20 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar23 - extraout_x12_01;
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar12 + 0x14));
  local_138 = *puVar1;
  local_140 = puVar1[1];
  local_e0 = lVar12;
  local_d0 = param_2;
  FUN_100026840();
  lVar12 = *param_3;
  local_148 = param_2;
  local_118 = puVar15;
  if (lVar12 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x100023fac);
    (*pcVar26)();
  }
  puVar14 = &DAT_10041bb00;
  _swift_getKeyPath(&DAT_10041bb00);
  puVar15 = &DAT_10041bb28;
  _swift_getKeyPath(&DAT_10041bb28);
  _swift_retain(lVar12);
  Combine::Published::_get_subscript(local_c0);
  _swift_release(puVar14);
  _swift_release(puVar15);
  if ((local_c0[0] & 1) == 0) {
    puVar14 = &DAT_10041bbe8;
    _swift_getKeyPath(&DAT_10041bbe8);
    puVar15 = &DAT_10041bc10;
    _swift_getKeyPath(&DAT_10041bc10);
    Combine::Published::_get_subscript(lVar27,lVar12,puVar14,puVar15);
    _swift_release(lVar12);
    _swift_release(puVar14);
    _swift_release(puVar15);
    (**(code **)(lVar24 + 0x10))(lVar23,local_d0,UVar13.unknown);
    (**(code **)(lVar24 + 0x38))(lVar23,0,1,UVar13.unknown);
    lVar28 = (long)*(int *)(puVar11 + 0x30);
    FUN_1000087e4(lVar27,lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar23,lVar20 + lVar28,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar26 = *(code **)(lVar24 + 0x30);
    lVar30 = lVar20;
    (*pcVar26)(lVar20,1,UVar13.unknown);
    if ((int)lVar30 == 1) {
      FUN_10002a29c(lVar23,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar27,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar28 = lVar20 + lVar28;
      (*pcVar26)(lVar28,1,UVar13.unknown);
      if ((int)lVar28 == 1) {
        FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
        bVar10 = true;
        goto LAB_100023b14;
      }
    }
    else {
      FUN_1000087e4(lVar20,local_150,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar30 = lVar20 + lVar28;
      (*pcVar26)(lVar30,1,UVar13.unknown);
      lVar4 = local_158;
      if ((int)lVar30 != 1) {
        (**(code **)(lVar24 + 0x20))(local_158,lVar20 + lVar28,UVar13.unknown);
        puVar11 = &DAT_10054a130;
        FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
        lVar28 = local_150;
        bVar10 = Swift::Equatable::___infix(local_150,lVar4,UVar13.unknown,puVar11);
        pcVar26 = *(code **)(lVar24 + 8);
        (*pcVar26)(lVar4,UVar13.unknown);
        FUN_10002a29c(lVar23,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar27,&DAT_10054a9c8,&DAT_10041bbe0);
        (*pcVar26)(lVar28,UVar13.unknown);
        FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
        goto LAB_100023b14;
      }
      FUN_10002a29c(lVar23,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar27,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar24 + 8))(local_150,UVar13.unknown);
    }
    FUN_10002a29c(lVar20,&DAT_10054a9c0,&DAT_100422d20);
  }
  else {
    _swift_release(lVar12);
  }
  bVar10 = false;
LAB_100023b14:
  lVar27 = local_d0;
  lVar24 = local_120;
  lVar20 = param_3[3];
  local_80[0] = param_3[4];
  FUN_100029504(local_d0,local_120,FUN_10025ee04);
  uVar21 = (ulong)*(byte *)(local_130 + 0x50);
  uVar25 = uVar21 + 0x38 & (uVar21 ^ 0xffffffffffffffff);
  puVar11 = &DAT_100525468;
  _swift_allocObject(&DAT_100525468,uVar25 + local_128,uVar21 | 7);
  lVar23 = *param_3;
  lVar30 = param_3[3];
  lVar28 = param_3[2];
  *(long *)(puVar11 + 0x18) = param_3[1];
  *(long *)(puVar11 + 0x10) = lVar23;
  *(long *)(puVar11 + 0x28) = lVar30;
  *(long *)(puVar11 + 0x20) = lVar28;
  *(long *)(puVar11 + 0x30) = param_3[4];
  FUN_100007e64(lVar24,puVar11 + uVar25,FUN_10025ee04);
  puVar5 = local_118;
  local_b0 = local_138;
  uStack_a8 = local_140;
  local_a0 = local_148;
  puStack_98 = local_118;
  local_90 = bVar10;
  _swift_retain(lVar12);
  _swift_retain(lVar20);
  FUN_1000087e4(local_80,auStack_c8,&DAT_10054a850,&DAT_10041ba68);
  _swift_retain(puVar11);
  FUN_100002f94(&DAT_10054a858,&DAT_10041ba70);
  FUN_100025b9c();
  lVar12 = local_110;
  SwiftUI::Button::_init();
  puVar7 = local_f8;
  SwiftUI::PlainButtonStyle::init();
  puVar14 = &DAT_10054a8a8;
  FUN_1000087a0(&DAT_10054a8a8,&DAT_10054a818,&DAT_10041ba38,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar15 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  lVar20 = local_d8;
  puVar8 = local_e8;
  puVar6 = local_100;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_d8,puVar7,local_100,local_e8,puVar14,puVar15);
  (**(code **)(local_f0 + 8))(puVar7,puVar8);
  (**(code **)(local_108 + 8))(lVar12,puVar6);
  puVar14 = &DAT_10054a820;
  FUN_100002f94(&DAT_10054a820,&DAT_10041ba40);
  puVar1 = (undefined8 *)(lVar20 + *(int *)(puVar14 + 0x24));
  RVar16 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar16.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar9 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar18.unknown = (undefined *)((long)puVar1 + (long)iVar3);
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar9.value) + -8) + 0x68))
            (CVar18.unknown,uVar2,CONCAT71(extraout_var,RVar9.value));
  auVar29 = NEON_fmov(0x4018000000000000,8);
  puVar1[1] = auVar29._8_8_;
  *puVar1 = auVar29._0_8_;
  if (bVar10 == false) {
    CVar18 = SwiftUI::Color::get_clear(CVar18);
  }
  else {
    CVar17 = SwiftUI::Color::get_primary(CVar18);
    CVar18 = SwiftUI::Color::opacity(0.08,CVar17);
    _swift_release(CVar17.unknown);
  }
  AVar19.unknown = &DAT_10054a8b8;
  puVar14 = &DAT_10041fc00;
  FUN_100002f94();
  *(undefined **)((long)puVar1 + (long)*(int *)(AVar19.unknown + 0x34)) = CVar18.unknown;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(AVar19.unknown + 0x38)) = 0x100;
  AVar19 = SwiftUI::Alignment::get_center(AVar19);
  _swift_release(puVar11);
  _swift_bridgeObjectRelease(puVar5);
  puVar11 = &DAT_10054a8c0;
  FUN_100002f94(&DAT_10054a8c0,&DAT_10041baa0);
  iVar3 = *(int *)(puVar11 + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar3) = AVar19.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar3))[1] = puVar14;
  lVar23 = *(long *)(lVar27 + *(int *)(local_e0 + 0x20));
  lVar12 = *(long *)(lVar23 + 0x10);
  puVar11 = &DAT_10041bc30;
  _swift_getKeyPath();
  puVar14 = &DAT_100525490;
  _swift_allocObject(&DAT_100525490,0x11,7);
  puVar14[0x10] = lVar12 == 0;
  puVar15 = &DAT_10054a990;
  FUN_100002f94(&DAT_10054a990,&DAT_10041bbc8);
  puVar1 = (undefined8 *)(lVar20 + *(int *)(puVar15 + 0x24));
  *puVar1 = puVar11;
  puVar1[1] = FUN_100026d68;
  puVar1[2] = puVar14;
  uVar22 = 0x3fe199999999999a;
  if (*(long *)(lVar23 + 0x10) != 0) {
    uVar22 = 0x3ff0000000000000;
  }
  puVar11 = &DAT_10054a970;
  FUN_100002f94(&DAT_10054a970,&DAT_10041bbc0);
  *(undefined8 *)(lVar20 + *(int *)(puVar11 + 0x24)) = uVar22;
  return;
}

