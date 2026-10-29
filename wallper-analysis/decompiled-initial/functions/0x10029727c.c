// rea decompile_all
// name: FUN_10029727c
// address: 0x10029727c
// body: available
// range: 0x10029727c-0x10029777f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029727c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  VerticalAlignment VVar3;
  Set SVar4;
  Set SVar5;
  CGFloat CVar6;
  Set SVar7;
  AnyTransition AVar8;
  UnitPoint scale;
  AnyTransition AVar9;
  AnyTransition AVar10;
  UnitPoint UVar11;
  AnyTransition AVar12;
  AnyTransition AVar13;
  long extraout_x8;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_1130 [384];
  undefined1 auStack_fb0 [432];
  undefined1 local_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined8 local_de8;
  undefined8 local_de0;
  undefined1 local_dd8;
  undefined1 auStack_dd0 [312];
  undefined1 auStack_c98 [312];
  undefined *local_b60;
  undefined8 local_b58;
  undefined1 local_b50;
  undefined1 auStack_b4f [319];
  undefined *local_a10;
  undefined8 local_a08;
  undefined1 local_a00;
  undefined1 auStack_9ff [319];
  undefined1 auStack_8c0 [336];
  undefined1 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined1 local_748;
  undefined1 auStack_740 [336];
  undefined1 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined1 local_5c8;
  undefined1 auStack_5c0 [384];
  undefined1 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 local_418;
  undefined1 auStack_410 [384];
  undefined1 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268;
  byte local_260 [480];
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar2 = &DAT_10042db28;
  _swift_getKeyPath(&DAT_10042db28);
  VVar3.unknown = &DAT_10042db50;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(local_260,param_6,puVar2,VVar3.unknown);
  _swift_release(puVar2);
  _swift_release();
  bVar1 = (local_260[0] & 1) == 0;
  if (bVar1) {
    VVar3 = SwiftUI::VerticalAlignment::get_center(VVar3);
    FUN_100297780(local_260,param_5,param_6);
    _memcpy(auStack_dd0,local_260,0x138);
    _memcpy(auStack_c98,local_260,0x138);
    FUN_1000087e4(auStack_dd0,auStack_fb0,&DAT_100559a30,&DAT_10042dc38);
    FUN_10002a29c(auStack_c98,&DAT_100559a30,&DAT_10042dc38);
    SVar4.unknown = _memcpy((void *)((ulong)auStack_410 | 7),auStack_dd0,0x138);
    SVar5 = SwiftUI::Edge::Set::get_vertical(SVar4);
    local_b58 = 0x4028000000000000;
    local_b50 = 0;
    local_b60 = VVar3.unknown;
    CVar6.unknown = _memcpy(auStack_b4f,auStack_410,0x13f);
    uVar15 = 0x4020000000000000;
    SwiftUI::EdgeInsets::init(CVar6);
    uVar17 = param_2;
    uVar19 = param_3;
    uVar21 = param_4;
    _memcpy(auStack_fb0,&local_b60,0x150);
    local_a08 = 0x4028000000000000;
    local_a00 = 0;
    local_a10 = VVar3.unknown;
    _memcpy(auStack_9ff,auStack_410,0x13f);
    FUN_1000087e4(&local_b60,local_260,&DAT_100559a38,&DAT_10042dc40);
    SVar4.unknown = (undefined *)&local_a10;
    FUN_10002a29c(SVar4.unknown,&DAT_100559a38,&DAT_10042dc40);
    SVar7 = SwiftUI::Edge::Set::get_leading(SVar4);
    CVar6.unknown = _memcpy(auStack_8c0,auStack_fb0,0x150);
    local_748 = 0;
    uVar16 = 0x4024000000000000;
    local_770 = (char)SVar5.unknown;
    local_768 = uVar15;
    local_760 = param_2;
    local_758 = param_3;
    local_750 = param_4;
    SwiftUI::EdgeInsets::init(CVar6);
    uVar18 = uVar17;
    uVar20 = uVar19;
    uVar22 = uVar21;
    _memcpy(auStack_1130,auStack_8c0,0x179);
    _memcpy(auStack_740,auStack_fb0,0x150);
    local_5c8 = 0;
    local_5f0 = (char)SVar5.unknown;
    local_5e8 = uVar15;
    local_5e0 = param_2;
    local_5d8 = param_3;
    local_5d0 = param_4;
    FUN_1000087e4(auStack_8c0,local_260,&DAT_100559a40,&DAT_1004343a0);
    SVar4.unknown = auStack_740;
    FUN_10002a29c(SVar4.unknown,&DAT_100559a40,&DAT_1004343a0);
    SVar4 = SwiftUI::Edge::Set::get_trailing(SVar4);
    CVar6.unknown = _memcpy(auStack_5c0,auStack_1130,0x180);
    local_418 = 0;
    uVar15 = 0x4030000000000000;
    local_440 = (char)SVar7.unknown;
    local_438 = uVar16;
    local_430 = uVar17;
    local_428 = uVar19;
    local_420 = uVar21;
    SwiftUI::EdgeInsets::init(CVar6);
    local_e00 = SUB81(SVar4.unknown,0);
    local_dd8 = 0;
    local_df8 = uVar15;
    local_df0 = uVar18;
    local_de8 = uVar20;
    local_de0 = uVar22;
    _memcpy(auStack_fb0,auStack_5c0,0x1a9);
    _memcpy(auStack_410,auStack_1130,0x180);
    local_268 = 0;
    local_290 = (char)SVar7.unknown;
    local_288 = uVar16;
    local_280 = uVar17;
    local_278 = uVar19;
    local_270 = uVar21;
    FUN_1000087e4(auStack_5c0,local_260,&DAT_100559a48,&DAT_10042dc50);
    FUN_10002a29c(auStack_410,&DAT_100559a48,&DAT_10042dc50);
    _memcpy(local_260,auStack_fb0,0x1d9);
    FUN_100353f1c(extraout_x8);
    UVar11.unknown = &DAT_100559a50;
    AVar13.unknown = &DAT_100434380;
    AVar12.unknown = auStack_fb0;
    FUN_10002a29c();
    AVar8 = SwiftUI::AnyTransition::get_opacity(AVar12);
    scale = SwiftUI::UnitPoint::get_center(AVar8.unknown);
    CVar6.unknown = (undefined *)SwiftUI::AnyTransition::scale(scale.unknown,UVar11,AVar13);
    AVar12 = AVar8;
    AVar9 = SwiftUI::AnyTransition::combined((AnyTransition)CVar6.unknown,AVar8);
    _swift_release(AVar8.unknown);
    _swift_release();
    AVar10 = SwiftUI::AnyTransition::offset(CVar6,AVar12.unknown,AVar13);
    AVar12 = AVar9;
    AVar8 = SwiftUI::AnyTransition::combined(AVar10,AVar9);
    _swift_release(AVar9.unknown);
    _swift_release();
    AVar9 = SwiftUI::AnyTransition::get_opacity(AVar10);
    UVar11 = SwiftUI::UnitPoint::get_center(AVar9.unknown);
    CVar6.unknown = (undefined *)SwiftUI::AnyTransition::scale(UVar11.unknown,AVar12.unknown,AVar13)
    ;
    AVar12 = AVar9;
    AVar10 = SwiftUI::AnyTransition::combined((AnyTransition)CVar6.unknown,AVar9);
    _swift_release(AVar9.unknown);
    _swift_release();
    AVar12 = SwiftUI::AnyTransition::offset(CVar6,AVar12.unknown,AVar13);
    AVar9 = SwiftUI::AnyTransition::combined(AVar12,AVar10);
    _swift_release(AVar10.unknown);
    _swift_release(AVar12.unknown);
    AVar13 = SwiftUI::AnyTransition::asymmetric(AVar8,AVar9,AVar13);
    _swift_release(AVar8.unknown);
    _swift_release(AVar9.unknown);
    puVar2 = &DAT_100559a58;
    FUN_100002f94(&DAT_100559a58,&DAT_10042dc60);
    *(undefined **)(extraout_x8 + *(int *)(puVar2 + 0x24)) = AVar13.unknown;
    pcVar14 = *(code **)(*(long *)(puVar2 + -8) + 0x38);
  }
  else {
    puVar2 = &DAT_100559a58;
    FUN_100002f94(&DAT_100559a58,&DAT_10042dc60);
    pcVar14 = *(code **)(*(long *)(puVar2 + -8) + 0x38);
  }
  (*pcVar14)(extraout_x8,!bVar1,1,puVar2);
  return;
}

