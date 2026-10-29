// rea decompile_all
// name: FUN_1000a71d8
// address: 0x1000a71d8
// body: available
// range: 0x1000a71d8-0x1000a75d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a71d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  VerticalAlignment param_5)

{
  VerticalAlignment VVar1;
  long lVar2;
  Set SVar3;
  Set SVar4;
  CGFloat CVar5;
  Alignment AVar6;
  void *extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1f58 [728];
  undefined1 auStack_1c80 [568];
  undefined1 local_1a48;
  double local_1a40;
  undefined8 local_1a38;
  undefined8 local_1a30;
  undefined8 local_1a28;
  undefined1 local_1a20;
  undefined1 auStack_1a18 [728];
  undefined1 auStack_1740 [728];
  undefined1 auStack_1468 [568];
  undefined1 auStack_1230 [728];
  undefined1 auStack_f58 [496];
  undefined1 auStack_d68 [496];
  undefined *local_b78;
  double local_b70;
  undefined1 local_b68;
  undefined1 auStack_b67 [503];
  undefined *local_970;
  double local_968;
  undefined1 local_960;
  undefined1 auStack_95f [503];
  undefined1 auStack_768 [520];
  undefined1 local_560;
  double local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined1 local_538;
  undefined1 auStack_530 [520];
  undefined1 local_328;
  double local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined1 auStack_2f8 [568];
  undefined1 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_5);
  lVar2 = 0;
  FUN_1000b0ffc();
  dVar11 = *(double *)(unaff_x20 + *(int *)(lVar2 + 0x14));
  dVar10 = dVar11 * 8.0;
  FUN_1000a75d8(auStack_1230);
  _memcpy(auStack_f58,auStack_1230,0x1f0);
  _memcpy(auStack_d68,auStack_1230,0x1f0);
  FUN_1000087e4(auStack_f58,auStack_1740,&DAT_100550298,&DAT_100421b28);
  FUN_10002a29c(auStack_d68,&DAT_100550298,&DAT_100421b28);
  SVar3.unknown = _memcpy((void *)((ulong)auStack_1a18 | 7),auStack_f58,0x1f0);
  SVar4 = SwiftUI::Edge::Set::get_horizontal(SVar3);
  dVar11 = dVar11 * 10.0;
  local_b68 = 0;
  local_b78 = VVar1.unknown;
  local_b70 = dVar10;
  CVar5.unknown = _memcpy(auStack_b67,auStack_1a18,0x1f7);
  SwiftUI::EdgeInsets::init(CVar5);
  uVar7 = param_2;
  uVar8 = param_3;
  uVar9 = param_4;
  _memcpy(auStack_1740,&local_b78,0x208);
  local_960 = 0;
  local_970 = VVar1.unknown;
  local_968 = dVar10;
  _memcpy(auStack_95f,auStack_1a18,0x1f7);
  FUN_1000087e4(&local_b78,auStack_1230,&DAT_1005502a0,&DAT_100421b30);
  SVar3.unknown = (undefined *)&local_970;
  FUN_10002a29c(SVar3.unknown,&DAT_1005502a0,&DAT_100421b30);
  SVar3 = SwiftUI::Edge::Set::get_vertical(SVar3);
  CVar5.unknown = _memcpy(auStack_768,auStack_1740,0x208);
  local_538 = 0;
  local_560 = (char)SVar4.unknown;
  local_558 = dVar11;
  local_550 = param_2;
  local_548 = param_3;
  local_540 = param_4;
  SwiftUI::EdgeInsets::init(CVar5);
  _memcpy(auStack_1468,auStack_768,0x231);
  _memcpy(auStack_530,auStack_1740,0x208);
  local_300 = 0;
  local_328 = (char)SVar4.unknown;
  local_320 = dVar11;
  local_318 = param_2;
  local_310 = param_3;
  local_308 = param_4;
  FUN_1000087e4(auStack_768,auStack_1230,&DAT_1005502a8,&DAT_100421b38);
  AVar6.unknown = auStack_530;
  FUN_10002a29c(AVar6.unknown,&DAT_1005502a8,&DAT_100421b38);
  SwiftUI::Alignment::get_center(AVar6);
  _memcpy(auStack_2f8,auStack_1468,0x238);
  local_98 = 0;
  local_c0 = (char)SVar3.unknown;
  local_b8 = dVar10;
  local_b0 = uVar7;
  local_a8 = uVar8;
  local_a0 = uVar9;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  _memcpy(auStack_1230,auStack_2f8,0x261);
  _memcpy(auStack_1c80,auStack_1468,0x238);
  local_1a20 = 0;
  local_1a48 = (char)SVar3.unknown;
  local_1a40 = dVar10;
  local_1a38 = uVar7;
  local_1a30 = uVar8;
  local_1a28 = uVar9;
  FUN_1000087e4(auStack_2f8,auStack_1740,&DAT_1005502b0,&DAT_100421b40);
  FUN_10002a29c(auStack_1c80,&DAT_1005502b0,&DAT_100421b40);
  _memcpy(auStack_1a18,auStack_1230,0x2d8);
  _memcpy(auStack_1740,auStack_1230,0x2d8);
  FUN_1000087e4(auStack_1a18,auStack_1f58,&DAT_1005502b8,&DAT_100421b48);
  FUN_10002a29c(auStack_1740,&DAT_1005502b8,&DAT_100421b48);
  _memcpy(extraout_x8,auStack_1a18,0x2d8);
  return;
}

