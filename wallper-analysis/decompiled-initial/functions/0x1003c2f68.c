// rea decompile_all
// name: FUN_1003c2f68
// address: 0x1003c2f68
// body: available
// range: 0x1003c2f68-0x1003c3433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c2f68(CGFloat param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined *puVar13;
  undefined7 extraout_var_00;
  Set _all;
  Set SVar15;
  void *extraout_x8;
  long extraout_x8_00;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_3740 [1424];
  undefined1 auStack_31b0 [1408];
  undefined1 auStack_2c30 [1368];
  undefined1 auStack_26d8 [1368];
  undefined *local_2180;
  undefined8 local_2178;
  undefined1 local_2170;
  undefined1 auStack_216f [1375];
  undefined *local_1c10;
  undefined8 local_1c08;
  undefined1 local_1c00;
  undefined1 auStack_1bff [1375];
  undefined1 auStack_16a0 [1392];
  undefined *local_1130;
  undefined *local_1128;
  undefined1 auStack_1120 [1392];
  undefined *local_bb0;
  undefined *local_ba8;
  undefined1 auStack_ba0 [1408];
  undefined *local_620;
  undefined *local_618;
  undefined1 auStack_610 [1408];
  undefined *local_90;
  undefined *local_88;
  long lVar14;
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  VVar7.unknown = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(VVar7.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  FUN_1003c57b4(auStack_610);
  _memcpy(auStack_2c30,auStack_610,0x558);
  _memcpy(auStack_26d8,auStack_610,0x558);
  FUN_1000087e4(auStack_2c30,auStack_ba0,&DAT_100560588,&DAT_100435fa8);
  FUN_10002a29c(auStack_26d8,&DAT_100560588,&DAT_100435fa8);
  WVar8.unknown = _memcpy((void *)((ulong)auStack_3740 | 7),auStack_2c30,0x558);
  SwiftUI::Font::Weight::get_medium(WVar8);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            (auStack_3740 + -extraout_x8_00,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar9 = SwiftUI::Font::_system(param_1,(Font)0x0);
  FUN_10002a29c(auStack_3740 + -extraout_x8_00,&DAT_10054a828,&DAT_10041e3c0);
  local_2178 = 0;
  local_2170 = 0;
  local_2180 = VVar7.unknown;
  _memcpy(auStack_216f,auStack_3740,0x55f);
  puVar10 = &DAT_100435fb0;
  _swift_getKeyPath();
  _memcpy(auStack_ba0,&local_2180,0x570);
  local_1c08 = 0;
  local_1c00 = 0;
  local_1c10 = VVar7.unknown;
  _memcpy(auStack_1bff,auStack_3740,0x55f);
  FUN_1000087e4(&local_2180,auStack_610,&DAT_100560500,&DAT_100435ee0);
  CVar11.unknown = (undefined *)&local_1c10;
  FUN_10002a29c(CVar11.unknown,&DAT_100560500,&DAT_100435ee0);
  CVar11 = SwiftUI::Color::get_white(CVar11);
  CVar12 = SwiftUI::Color::opacity(0.4,CVar11);
  _swift_release(CVar11.unknown);
  _memcpy(auStack_16a0,auStack_ba0,0x570);
  puVar13 = &DAT_100435fe0;
  local_1130 = puVar10;
  local_1128 = FVar9.unknown;
  _swift_getKeyPath();
  _memcpy(auStack_31b0,auStack_16a0,0x580);
  _memcpy(auStack_1120,auStack_ba0,0x570);
  local_bb0 = puVar10;
  local_ba8 = FVar9.unknown;
  FUN_1000087e4(auStack_16a0,auStack_610,&DAT_1005604f0,&DAT_100435ed8);
  FUN_10002a29c(auStack_1120,&DAT_1005604f0,&DAT_100435ed8);
  puVar10 = &DAT_1005604d0;
  FUN_100002f94(&DAT_1005604d0,&DAT_100435ec8);
  puVar1 = (undefined8 *)((long)extraout_x8 + (long)*(int *)(puVar10 + 0x24));
  puVar10 = &DAT_10055e8a0;
  FUN_100002f94(&DAT_10055e8a0,&DAT_1004340e8);
  iVar4 = *(int *)(puVar10 + 0x1c);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Text_Case_uppercase_SwiftUI_Text_Case_Type___>_SwiftUI_Text_Case_100522dd8
  ;
  CVar6 = SwiftUI::Text::Case::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var_00,CVar6.value);
  lVar16 = *(long *)(lVar14 + -8);
  (**(code **)(lVar16 + 0x68))((long)puVar1 + (long)iVar4,uVar3,lVar14);
  (**(code **)(lVar16 + 0x38))((long)puVar1 + (long)iVar4,0,1,lVar14);
  _memcpy(auStack_ba0,auStack_31b0,0x580);
  puVar10 = &DAT_100436010;
  local_620 = puVar13;
  local_618 = CVar12.unknown;
  _swift_getKeyPath();
  *puVar1 = puVar10;
  _memcpy(extraout_x8,auStack_ba0,0x590);
  _memcpy(auStack_610,auStack_31b0,0x580);
  local_90 = puVar13;
  local_88 = CVar12.unknown;
  FUN_1000087e4(auStack_ba0,auStack_3740,&DAT_1005604e0,&DAT_100435ed0);
  SVar15.unknown = auStack_610;
  FUN_10002a29c(SVar15.unknown,&DAT_1005604e0,&DAT_100435ed0);
  _all = SwiftUI::Edge::Set::get_horizontal(SVar15);
  uVar17 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar15.unknown = &DAT_1005604c0;
  uVar18 = param_2;
  uVar19 = param_3;
  uVar20 = param_4;
  FUN_100002f94(&DAT_1005604c0,&DAT_100435ec0);
  puVar2 = (undefined1 *)((long)extraout_x8 + (long)*(int *)(SVar15.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar17;
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar2[0x28] = 0;
  SVar15 = SwiftUI::Edge::Set::get_vertical(SVar15);
  uVar17 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
  puVar10 = &DAT_1005604b0;
  FUN_100002f94(&DAT_1005604b0,&DAT_100435eb8);
  puVar2 = (undefined1 *)((long)extraout_x8 + (long)*(int *)(puVar10 + 0x24));
  *puVar2 = (char)SVar15.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar17;
  *(undefined8 *)(puVar2 + 0x10) = uVar18;
  *(undefined8 *)(puVar2 + 0x18) = uVar19;
  *(undefined8 *)(puVar2 + 0x20) = uVar20;
  puVar2[0x28] = 0;
  return;
}

