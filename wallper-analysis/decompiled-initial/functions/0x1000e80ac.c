// rea decompile_all
// name: FUN_1000e80ac
// address: 0x1000e80ac
// body: available
// range: 0x1000e80ac-0x1000e85db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e80ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  Alignment param_5)

{
  Alignment AVar1;
  Set SVar2;
  CGFloat _all;
  State SVar3;
  Animation AVar4;
  Animation AVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  undefined1 auStack_2c90 [648];
  undefined1 auStack_2a08 [608];
  undefined8 local_27a8;
  undefined1 auStack_27a0 [608];
  undefined8 local_2540;
  undefined1 auStack_2538 [616];
  undefined8 local_22d0;
  undefined8 local_22c8;
  undefined1 auStack_22c0 [616];
  undefined8 local_2058;
  undefined8 local_2050;
  undefined1 auStack_2048 [632];
  undefined *local_1dd0;
  undefined1 local_1dc8;
  undefined1 auStack_1dc0 [632];
  undefined *local_1b48;
  undefined1 local_1b40;
  long local_1b38 [81];
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined1 auStack_1620 [616];
  undefined1 auStack_13b8 [448];
  undefined1 auStack_11f8 [560];
  undefined1 auStack_fc8 [560];
  undefined1 auStack_d98 [608];
  undefined1 auStack_b38 [448];
  undefined1 auStack_978 [560];
  undefined1 auStack_748 [560];
  undefined1 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined1 local_4f0;
  undefined1 auStack_4e8 [632];
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 auStack_240 [464];
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  SwiftUI::Alignment::get_center(param_5);
  AVar1.unknown = (undefined *)SwiftUI::_FrameLayout::_init((Alignment)0x0);
  FUN_1000e85dc(auStack_b38);
  SwiftUI::Alignment::get_center(AVar1);
  _memcpy(auStack_240,auStack_b38,0x1c0);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  _memcpy(auStack_978,auStack_240,0x1c0);
  _memcpy(auStack_13b8,auStack_b38,0x1c0);
  FUN_1000087e4(auStack_240,&local_18b0,&DAT_100551e58,&DAT_100423e10);
  SVar2.unknown = auStack_13b8;
  FUN_10002a29c(SVar2.unknown,&DAT_100551e58,&DAT_100423e10);
  SVar2 = SwiftUI::Edge::Set::get_horizontal(SVar2);
  _all.unknown = _memcpy(auStack_11f8,auStack_978,0x230);
  uVar6 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init(_all);
  local_518 = SUB81(SVar2.unknown,0);
  local_4f0 = 0;
  local_510 = uVar6;
  local_508 = param_2;
  local_500 = param_3;
  local_4f8 = param_4;
  _memcpy(auStack_748,auStack_978,0x230);
  _memcpy(auStack_fc8,auStack_978,0x230);
  FUN_1000087e4(auStack_11f8,&local_18b0,&DAT_100551e60,&DAT_100423e18);
  FUN_10002a29c(auStack_fc8,&DAT_100551e60,&DAT_100423e18);
  uStack_18a8 = *(undefined8 *)(param_5.unknown + 0x80);
  local_18b0 = *(undefined8 *)(param_5.unknown + 0x78);
  SVar3.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar3);
  _memcpy(auStack_d98,auStack_748,0x259);
  _memcpy(auStack_27a0,auStack_748,0x259);
  local_1b40 = 0 < local_1b38[0];
  local_2540 = 0x3ff0000000000000;
  if (local_1b38[0] < 1) {
    local_2540 = 0;
  }
  uVar6 = 0;
  if (local_1b38[0] < 1) {
    uVar6 = 0x402c000000000000;
  }
  _memcpy(auStack_2a08,auStack_748,0x259);
  local_27a8 = local_2540;
  _memcpy(auStack_1620,auStack_2a08,0x268);
  FUN_1000087e4(auStack_d98,&local_18b0,&DAT_100551e68,&DAT_100423e20);
  FUN_1000087e4(auStack_2a08,&local_18b0,&DAT_100551e70,&DAT_100423e28);
  AVar4.unknown = auStack_27a0;
  FUN_10002a29c(AVar4.unknown,&DAT_100551e70,&DAT_100423e28);
  AVar4 = SwiftUI::Animation::easeOut(0.38,AVar4);
  AVar5 = SwiftUI::Animation::delay(0.0,AVar4);
  _swift_release(AVar4.unknown);
  _memcpy(auStack_2538,auStack_1620,0x268);
  local_22d0 = 0;
  local_22c8 = uVar6;
  _memcpy(auStack_4e8,auStack_2538,0x278);
  _memcpy(auStack_22c0,auStack_1620,0x268);
  local_2058 = 0;
  local_2050 = uVar6;
  FUN_1000087e4(auStack_2538,&local_18b0,&DAT_100551e78,&DAT_100423e30);
  FUN_10002a29c(auStack_22c0,&DAT_100551e78,&DAT_100423e30);
  FUN_10002a29c(auStack_748,&DAT_100551e68,&DAT_100423e20);
  _memcpy(auStack_2048,auStack_4e8,0x278);
  local_1dd0 = AVar5.unknown;
  local_1dc8 = local_1b40;
  _memcpy(auStack_1dc0,auStack_4e8,0x278);
  local_1b48 = AVar5.unknown;
  FUN_1000087e4(auStack_2048,&local_18b0,&DAT_100551e80,&DAT_100423e38);
  FUN_10002a29c(auStack_1dc0,&DAT_100551e80,&DAT_100423e38);
  _memcpy(&local_18b0,auStack_2048,0x281);
  _memcpy(local_1b38,auStack_2048,0x281);
  *extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 1) = 1;
  extraout_x8[2] = local_270;
  *(undefined1 *)(extraout_x8 + 3) = local_268;
  extraout_x8[4] = local_260;
  *(undefined1 *)(extraout_x8 + 5) = local_258;
  extraout_x8[6] = local_250;
  extraout_x8[7] = local_248;
  _memcpy(extraout_x8 + 8,auStack_2048,0x281);
  FUN_1000087e4(local_1b38,auStack_2c90,&DAT_100551e80,&DAT_100423e38);
  FUN_10002a29c(&local_18b0,&DAT_100551e80,&DAT_100423e38);
  return;
}

