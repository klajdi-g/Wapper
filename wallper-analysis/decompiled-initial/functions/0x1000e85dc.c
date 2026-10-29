// rea decompile_all
// name: FUN_1000e85dc
// address: 0x1000e85dc
// body: available
// range: 0x1000e85dc-0x1000e88d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e85dc(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  HorizontalAlignment HVar1;
  Set SVar2;
  Set SVar3;
  CGFloat CVar4;
  State SVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_c30 [367];
  char local_ac1;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined1 auStack_810 [288];
  undefined1 auStack_6f0 [288];
  undefined *local_5d0;
  undefined8 local_5c8;
  undefined1 local_5c0;
  undefined1 auStack_5bf [295];
  undefined *local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined1 auStack_487 [295];
  undefined1 auStack_360 [312];
  undefined1 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined1 auStack_1f8 [312];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_6);
  FUN_1000ea90c(auStack_c30);
  _memcpy(auStack_810,auStack_c30,0x119);
  _memcpy(auStack_6f0,auStack_c30,0x119);
  FUN_1000087e4(auStack_810,auStack_1f8,&DAT_100551e88,&DAT_100423e40);
  FUN_10002a29c(auStack_6f0,&DAT_100551e88,&DAT_100423e40);
  SVar2.unknown = _memcpy((void *)((ulong)auStack_1f8 | 7),auStack_810,0x119);
  SVar3 = SwiftUI::Edge::Set::get_vertical(SVar2);
  local_5c8 = 0x4000000000000000;
  local_5c0 = 0;
  local_5d0 = HVar1.unknown;
  CVar4.unknown = _memcpy(auStack_5bf,auStack_1f8,0x120);
  uVar6 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init(CVar4);
  uVar9 = param_3;
  uVar10 = param_4;
  uVar11 = param_5;
  _memcpy(&local_950,&local_5d0,0x131);
  local_490 = 0x4000000000000000;
  local_488 = 0;
  local_498 = HVar1.unknown;
  _memcpy(auStack_487,auStack_1f8,0x120);
  FUN_1000087e4(&local_5d0,auStack_c30,&DAT_100551e90,&DAT_100423e48);
  SVar2.unknown = (undefined *)&local_498;
  FUN_10002a29c(SVar2.unknown,&DAT_100551e90,&DAT_100423e48);
  SVar2 = SwiftUI::Edge::Set::get_horizontal(SVar2);
  CVar4.unknown = _memcpy(auStack_360,&local_950,0x138);
  local_200 = 0;
  uVar7 = 0x403a000000000000;
  local_228 = (char)SVar3.unknown;
  local_220 = uVar6;
  local_218 = param_3;
  local_210 = param_4;
  local_208 = param_5;
  SwiftUI::EdgeInsets::init(CVar4);
  _memcpy(auStack_c30,auStack_360,0x161);
  _memcpy(auStack_1f8,&local_950,0x138);
  local_98 = 0;
  local_c0 = (char)SVar3.unknown;
  local_b8 = uVar6;
  local_b0 = param_3;
  local_a8 = param_4;
  local_a0 = param_5;
  FUN_1000087e4(auStack_360,&local_ac0,&DAT_100551e98,&DAT_100423e50);
  FUN_10002a29c(auStack_1f8,&DAT_100551e98,&DAT_100423e50);
  uStack_948 = *(undefined8 *)(unaff_x20 + 0x60);
  local_950 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_ab8 = *(undefined8 *)(unaff_x20 + 0x60);
  local_ac0 = *(undefined8 *)(unaff_x20 + 0x58);
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar6 = 0x3ff0000000000000;
  if (local_ac1 == '\0') {
    uVar6 = 0;
  }
  uStack_ab8 = *(undefined8 *)(unaff_x20 + 0x60);
  local_ac0 = *(undefined8 *)(unaff_x20 + 0x58);
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar12 = 0;
  if (local_ac1 == '\0') {
    uVar12 = 0x402c000000000000;
  }
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar8 = 0;
  if ((char)local_ac0 == '\0') {
    uVar8 = 0x4024000000000000;
  }
  *(undefined8 *)((long)param_1 + 0x1b0) = 0;
  *(undefined8 *)((long)param_1 + 0x1b8) = uVar8;
  _memcpy(param_1,auStack_c30,0x168);
  *(char *)((long)param_1 + 0x168) = (char)SVar2.unknown;
  *(undefined8 *)((long)param_1 + 0x170) = uVar7;
  *(undefined8 *)((long)param_1 + 0x178) = uVar9;
  *(undefined8 *)((long)param_1 + 0x180) = uVar10;
  *(undefined8 *)((long)param_1 + 0x188) = uVar11;
  *(undefined1 *)((long)param_1 + 400) = 0;
  *(undefined8 *)((long)param_1 + 0x198) = uVar6;
  *(undefined8 *)((long)param_1 + 0x1a0) = uVar12;
  *(undefined1 *)((long)param_1 + 0x1a8) = 0;
  return;
}

