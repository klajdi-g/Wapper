// rea decompile_all
// name: FUN_10037b390
// address: 0x10037b390
// body: available
// range: 0x10037b390-0x10037b81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037b390(CGFloat param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  Design DVar5;
  Case CVar6;
  VerticalAlignment VVar7;
  Weight WVar8;
  undefined7 extraout_var;
  Font FVar9;
  undefined *puVar10;
  Color CVar11;
  Color CVar12;
  undefined7 extraout_var_00;
  Set _all;
  Set SVar14;
  void *extraout_x8;
  long extraout_x8_00;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1c50 [8];
  undefined1 auStack_1c48 [728];
  undefined1 auStack_1970 [720];
  undefined1 auStack_16a0 [680];
  undefined1 auStack_13f8 [680];
  undefined *local_1150;
  undefined8 local_1148;
  undefined1 local_1140;
  undefined1 auStack_113f [687];
  undefined *local_e90;
  undefined8 local_e88;
  undefined1 local_e80;
  undefined1 auStack_e7f [687];
  undefined1 auStack_bd0 [704];
  undefined *local_910;
  undefined *local_908;
  undefined1 auStack_900 [704];
  undefined *local_640;
  undefined *local_638;
  undefined1 auStack_630 [720];
  undefined *local_360;
  undefined1 auStack_358 [720];
  undefined *local_88;
  long lVar13;
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  VVar7.unknown = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(VVar7.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  FUN_10037bbbc(auStack_358);
  _memcpy(auStack_16a0,auStack_358,0x2a8);
  _memcpy(auStack_13f8,auStack_358,0x2a8);
  FUN_1000087e4(auStack_16a0,auStack_630,&DAT_10055e880,&DAT_1004340c8);
  FUN_10002a29c(auStack_13f8,&DAT_10055e880,&DAT_1004340c8);
  WVar8.unknown = _memcpy((void *)((ulong)auStack_1c48 | 7),auStack_16a0,0x2a8);
  SwiftUI::Font::Weight::get_medium(WVar8);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            (auStack_1c50 + -extraout_x8_00,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar9 = SwiftUI::Font::_system(param_1,(Font)0x0);
  FUN_10002a29c(auStack_1c50 + -extraout_x8_00,&DAT_10054a828,&DAT_10041e3c0);
  local_1148 = 0x4038000000000000;
  local_1140 = 0;
  local_1150 = VVar7.unknown;
  _memcpy(auStack_113f,auStack_1c48,0x2af);
  puVar10 = &DAT_100432f88;
  _swift_getKeyPath();
  _memcpy(auStack_630,&local_1150,0x2c0);
  local_e88 = 0x4038000000000000;
  local_e80 = 0;
  local_e90 = VVar7.unknown;
  _memcpy(auStack_e7f,auStack_1c48,0x2af);
  FUN_1000087e4(&local_1150,auStack_358,&DAT_10055e888,&DAT_1004340d0);
  CVar11.unknown = (undefined *)&local_e90;
  FUN_10002a29c(CVar11.unknown,&DAT_10055e888,&DAT_1004340d0);
  CVar11 = SwiftUI::Color::get_white(CVar11);
  CVar12 = SwiftUI::Color::opacity(0.4,CVar11);
  _swift_release(CVar11.unknown);
  _memcpy(auStack_bd0,auStack_630,0x2c0);
  local_910 = puVar10;
  local_908 = FVar9.unknown;
  _memcpy(auStack_1970,auStack_bd0,0x2d0);
  _memcpy(auStack_900,auStack_630,0x2c0);
  local_640 = puVar10;
  local_638 = FVar9.unknown;
  FUN_1000087e4(auStack_bd0,auStack_358,&DAT_10055e890,&DAT_1004340d8);
  FUN_10002a29c(auStack_900,&DAT_10055e890,&DAT_1004340d8);
  puVar10 = &DAT_10055e898;
  FUN_100002f94(&DAT_10055e898,&DAT_1004340e0);
  puVar1 = (undefined8 *)((long)extraout_x8 + (long)*(int *)(puVar10 + 0x24));
  puVar10 = &DAT_10055e8a0;
  FUN_100002f94(&DAT_10055e8a0,&DAT_1004340e8);
  iVar4 = *(int *)(puVar10 + 0x1c);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Text_Case_uppercase_SwiftUI_Text_Case_Type___>_SwiftUI_Text_Case_100522dd8
  ;
  CVar6 = SwiftUI::Text::Case::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var_00,CVar6.value);
  lVar15 = *(long *)(lVar13 + -8);
  (**(code **)(lVar15 + 0x68))((long)puVar1 + (long)iVar4,uVar3,lVar13);
  (**(code **)(lVar15 + 0x38))((long)puVar1 + (long)iVar4,0,1,lVar13);
  _memcpy(auStack_630,auStack_1970,0x2d0);
  puVar10 = &DAT_1004340f0;
  local_360 = CVar12.unknown;
  _swift_getKeyPath();
  *puVar1 = puVar10;
  _memcpy(extraout_x8,auStack_630,0x2d8);
  _memcpy(auStack_358,auStack_1970,0x2d0);
  local_88 = CVar12.unknown;
  FUN_1000087e4(auStack_630,auStack_1c48,&DAT_10055e8a8,&DAT_100434120);
  SVar14.unknown = auStack_358;
  FUN_10002a29c(SVar14.unknown,&DAT_10055e8a8,&DAT_100434120);
  _all = SwiftUI::Edge::Set::get_horizontal(SVar14);
  uVar16 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar14.unknown = &DAT_10055e8b0;
  uVar17 = param_2;
  uVar18 = param_3;
  uVar19 = param_4;
  FUN_100002f94(&DAT_10055e8b0,&DAT_100434128);
  puVar2 = (undefined1 *)((long)extraout_x8 + (long)*(int *)(SVar14.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar16;
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar2[0x28] = 0;
  SVar14 = SwiftUI::Edge::Set::get_vertical(SVar14);
  uVar16 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  puVar10 = &DAT_10055e868;
  FUN_100002f94(&DAT_10055e868,&DAT_100434078);
  puVar2 = (undefined1 *)((long)extraout_x8 + (long)*(int *)(puVar10 + 0x24));
  *puVar2 = (char)SVar14.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar16;
  *(undefined8 *)(puVar2 + 0x10) = uVar17;
  *(undefined8 *)(puVar2 + 0x18) = uVar18;
  *(undefined8 *)(puVar2 + 0x20) = uVar19;
  puVar2[0x28] = 0;
  return;
}

