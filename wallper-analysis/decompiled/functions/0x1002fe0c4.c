// rea decompile_all
// name: FUN_1002fe0c4
// address: 0x1002fe0c4
// body: available
// range: 0x1002fe0c4-0x1002fe433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fe0c4(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6,undefined8 param_7,undefined8 param_8
                  ,undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  VerticalAlignment VVar1;
  Set SVar2;
  Set SVar3;
  CGFloat CVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_1090 [384];
  undefined1 auStack_f10 [384];
  undefined1 auStack_d90 [264];
  undefined1 auStack_c88 [264];
  undefined *local_b80;
  undefined8 local_b78;
  undefined1 local_b70;
  undefined1 auStack_b6f [271];
  undefined *local_a60;
  undefined8 local_a58;
  undefined1 local_a50;
  undefined1 auStack_a4f [271];
  undefined1 auStack_940 [288];
  undefined1 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined1 local_7f8;
  undefined1 auStack_7f0 [288];
  undefined1 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined1 local_6a8;
  undefined1 auStack_6a0 [336];
  undefined1 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528;
  undefined1 auStack_520 [336];
  undefined1 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined1 auStack_3a0 [377];
  undefined1 local_227;
  undefined1 auStack_220 [377];
  undefined1 local_a7;
  
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_6);
  FUN_1002fe434(auStack_220,param_6.unknown,param_7,param_8,param_9,param_10,param_11,param_12);
  _memcpy(auStack_d90,auStack_220,0x108);
  _memcpy(auStack_c88,auStack_220,0x108);
  FUN_1000087e4(auStack_d90,auStack_3a0,&DAT_10055b5c8,&DAT_10042ff80);
  FUN_10002a29c(auStack_c88,&DAT_10055b5c8,&DAT_10042ff80);
  SVar2.unknown = _memcpy((void *)((ulong)auStack_3a0 | 7),auStack_d90,0x108);
  SVar3 = SwiftUI::Edge::Set::get_horizontal(SVar2);
  local_b78 = 0x402a000000000000;
  local_b70 = 0;
  local_b80 = VVar1.unknown;
  CVar4.unknown = _memcpy(auStack_b6f,auStack_3a0,0x10f);
  uVar5 = 0x403a000000000000;
  SwiftUI::EdgeInsets::init(CVar4);
  uVar7 = param_3;
  uVar8 = param_4;
  uVar9 = param_5;
  _memcpy(auStack_1090,&local_b80,0x120);
  local_a58 = 0x402a000000000000;
  local_a50 = 0;
  local_a60 = VVar1.unknown;
  _memcpy(auStack_a4f,auStack_3a0,0x10f);
  FUN_1000087e4(&local_b80,auStack_220,&DAT_10055b5a0,&DAT_10042ff58);
  SVar2.unknown = (undefined *)&local_a60;
  FUN_10002a29c(SVar2.unknown,&DAT_10055b5a0,&DAT_10042ff58);
  SVar2 = SwiftUI::Edge::Set::get_vertical(SVar2);
  CVar4.unknown = _memcpy(auStack_940,auStack_1090,0x120);
  local_7f8 = 0;
  uVar6 = 0x402c000000000000;
  local_820 = (char)SVar3.unknown;
  local_818 = uVar5;
  local_810 = param_3;
  local_808 = param_4;
  local_800 = param_5;
  SwiftUI::EdgeInsets::init(CVar4);
  _memcpy(auStack_3a0,auStack_940,0x149);
  _memcpy(auStack_7f0,auStack_1090,0x120);
  local_6a8 = 0;
  local_6d0 = (char)SVar3.unknown;
  local_6c8 = uVar5;
  local_6c0 = param_3;
  local_6b8 = param_4;
  local_6b0 = param_5;
  FUN_1000087e4(auStack_940,auStack_220,&DAT_10055b590,&DAT_10042ff50);
  FUN_10002a29c(auStack_7f0,&DAT_10055b590,&DAT_10042ff50);
  _memcpy(auStack_6a0,auStack_3a0,0x150);
  local_528 = 0;
  local_550 = (char)SVar2.unknown;
  local_548 = uVar6;
  local_540 = uVar7;
  local_538 = uVar8;
  local_530 = uVar9;
  _memcpy(auStack_f10,auStack_6a0,0x179);
  _memcpy(auStack_520,auStack_3a0,0x150);
  local_3a8 = 0;
  local_3d0 = (char)SVar2.unknown;
  local_3c8 = uVar6;
  local_3c0 = uVar7;
  local_3b8 = uVar8;
  local_3b0 = uVar9;
  FUN_1000087e4(auStack_6a0,auStack_220,&DAT_10055b580,&DAT_10042ff48);
  FUN_10002a29c(auStack_520,&DAT_10055b580,&DAT_10042ff48);
  _memcpy(auStack_3a0,auStack_f10,0x179);
  local_227 = 0;
  _memcpy(auStack_220,auStack_f10,0x179);
  local_a7 = 0;
  FUN_1000087e4(auStack_3a0,auStack_1090,&DAT_10055b568,&DAT_10042ff40);
  FUN_10002a29c(auStack_220,&DAT_10055b568,&DAT_10042ff40);
  _memcpy(param_1,auStack_3a0,0x17a);
  return;
}

