// rea decompile_all
// name: FUN_100322ee8
// address: 0x100322ee8
// body: available
// range: 0x100322ee8-0x1003230c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100322ee8(undefined8 *param_1,Alignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  _FrameLayout _Var3;
  Alignment AVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_230 [80];
  code *local_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2.unknown);
  *param_1 = HVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_10055c680;
  FUN_100002f94(&DAT_10055c680,&DAT_100431460);
  FUN_1003230c4((long)param_1 + (long)*(int *)(puVar2 + 0x2c),param_2.unknown);
  puVar2 = &DAT_10053aad0;
  _swift_allocObject(&DAT_10053aad0,0x108,7);
  uVar6 = *(undefined8 *)(param_2.unknown + 0xc0);
  uVar8 = *(undefined8 *)(param_2.unknown + 0xd8);
  uVar7 = *(undefined8 *)(param_2.unknown + 0xd0);
  *(undefined8 *)(puVar2 + 0xd8) = *(undefined8 *)(param_2.unknown + 200);
  *(undefined8 *)(puVar2 + 0xd0) = uVar6;
  *(undefined8 *)(puVar2 + 0xe8) = uVar8;
  *(undefined8 *)(puVar2 + 0xe0) = uVar7;
  uVar6 = *(undefined8 *)(param_2.unknown + 0xe0);
  *(undefined8 *)(puVar2 + 0xf8) = *(undefined8 *)(param_2.unknown + 0xe8);
  *(undefined8 *)(puVar2 + 0xf0) = uVar6;
  *(undefined8 *)(puVar2 + 0x100) = *(undefined8 *)(param_2.unknown + 0xf0);
  uVar6 = *(undefined8 *)(param_2.unknown + 0x80);
  uVar8 = *(undefined8 *)(param_2.unknown + 0x98);
  uVar7 = *(undefined8 *)(param_2.unknown + 0x90);
  *(undefined8 *)(puVar2 + 0x98) = *(undefined8 *)(param_2.unknown + 0x88);
  *(undefined8 *)(puVar2 + 0x90) = uVar6;
  *(undefined8 *)(puVar2 + 0xa8) = uVar8;
  *(undefined8 *)(puVar2 + 0xa0) = uVar7;
  uVar6 = *(undefined8 *)(param_2.unknown + 0xa0);
  uVar8 = *(undefined8 *)(param_2.unknown + 0xb8);
  uVar7 = *(undefined8 *)(param_2.unknown + 0xb0);
  *(undefined8 *)(puVar2 + 0xb8) = *(undefined8 *)(param_2.unknown + 0xa8);
  *(undefined8 *)(puVar2 + 0xb0) = uVar6;
  *(undefined8 *)(puVar2 + 200) = uVar8;
  *(undefined8 *)(puVar2 + 0xc0) = uVar7;
  uVar6 = *(undefined8 *)(param_2.unknown + 0x40);
  uVar8 = *(undefined8 *)(param_2.unknown + 0x58);
  uVar7 = *(undefined8 *)(param_2.unknown + 0x50);
  *(undefined8 *)(puVar2 + 0x58) = *(undefined8 *)(param_2.unknown + 0x48);
  *(undefined8 *)(puVar2 + 0x50) = uVar6;
  *(undefined8 *)(puVar2 + 0x68) = uVar8;
  *(undefined8 *)(puVar2 + 0x60) = uVar7;
  uVar6 = *(undefined8 *)(param_2.unknown + 0x60);
  uVar8 = *(undefined8 *)(param_2.unknown + 0x78);
  uVar7 = *(undefined8 *)(param_2.unknown + 0x70);
  *(undefined8 *)(puVar2 + 0x78) = *(undefined8 *)(param_2.unknown + 0x68);
  *(undefined8 *)(puVar2 + 0x70) = uVar6;
  *(undefined8 *)(puVar2 + 0x88) = uVar8;
  *(undefined8 *)(puVar2 + 0x80) = uVar7;
  uVar6 = *(undefined8 *)param_2.unknown;
  uVar8 = *(undefined8 *)(param_2.unknown + 0x18);
  uVar7 = *(undefined8 *)(param_2.unknown + 0x10);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_2.unknown + 8);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(param_2.unknown + 0x20);
  uVar8 = *(undefined8 *)(param_2.unknown + 0x38);
  uVar7 = *(undefined8 *)(param_2.unknown + 0x30);
  *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(param_2.unknown + 0x28);
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  *(undefined8 *)(puVar2 + 0x40) = uVar7;
  FUN_100327eb8(param_2.unknown,&local_1e0);
  SwiftUI::Alignment::get_center(param_2);
  uVar6 = 0;
  _Var3 = SwiftUI::_FrameLayout::_init((Alignment)0x0);
  AVar4 = SwiftUI::Alignment::get_center(_Var3.unknown);
  local_b8 = FUN_10032a8e8;
  local_a8 = local_e8;
  local_a0 = local_e0;
  local_98 = local_d8;
  uStack_90 = local_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  puVar5 = &DAT_10055c590;
  puStack_b0 = puVar2;
  local_78 = AVar4.unknown;
  uStack_70 = uVar6;
  FUN_100002f94(&DAT_10055c590,&DAT_1004311d0);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  param_1[5] = CONCAT71(uStack_8f,uStack_90);
  param_1[4] = local_98;
  param_1[7] = uStack_80;
  param_1[6] = local_88;
  param_1[9] = uStack_70;
  param_1[8] = local_78;
  param_1[1] = puStack_b0;
  *param_1 = local_b8;
  param_1[3] = CONCAT71(uStack_9f,local_a0);
  param_1[2] = local_a8;
  local_1e0 = FUN_10032a8e8;
  local_1d0 = local_e8;
  local_1c8 = local_e0;
  local_1c0 = local_d8;
  local_1b8 = local_d0;
  local_1b0 = local_c8;
  uStack_1a8 = uStack_c0;
  puStack_1d8 = puVar2;
  local_1a0 = AVar4.unknown;
  uStack_198 = uVar6;
  FUN_1000087e4(&local_b8,auStack_230,&DAT_10055c5b8,&DAT_1004311e0);
  FUN_10002a29c(&local_1e0,&DAT_10055c5b8,&DAT_1004311e0);
  return;
}

