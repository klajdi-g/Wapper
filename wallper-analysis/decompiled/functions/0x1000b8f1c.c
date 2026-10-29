// rea decompile_all
// name: FUN_1000b8f1c
// address: 0x1000b8f1c
// body: available
// range: 0x1000b8f1c-0x1000b913b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b8f1c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  State SVar2;
  State SVar3;
  Alignment AVar4;
  Color CVar5;
  _FrameLayout _Var6;
  Animation AVar7;
  undefined *puVar8;
  undefined1 auStack_280 [80];
  undefined *local_230;
  undefined2 uStack_228;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 local_216;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 local_206;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined *puStack_1f0;
  undefined2 local_1e8;
  undefined8 local_1e6;
  undefined8 uStack_1de;
  undefined8 local_1d6;
  undefined8 uStack_1ce;
  undefined8 local_1c6;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined6 uStack_106;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar8 = (undefined *)*param_2;
  uStack_158 = *(undefined8 *)(param_3 + 0x18);
  local_160 = *(undefined **)(param_3 + 0x10);
  SVar2.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SVar3.unknown = SVar2.unknown;
  SwiftUI::State::get_wrappedValue(SVar2);
  puVar1 = local_1b0;
  AVar4.unknown = (undefined *)SwiftUI::Color::get_white(SVar3.unknown);
  CVar5 = (Color)AVar4.unknown;
  if (puVar8 != puVar1) {
    CVar5 = SwiftUI::Color::opacity(0.35,(Color)AVar4.unknown);
    _swift_release();
  }
  SwiftUI::Alignment::get_center(AVar4);
  _Var6 = SwiftUI::_FrameLayout::_init((Alignment)0x4018000000000000);
  uStack_f8 = (undefined2)uStack_88;
  uStack_f6 = (undefined6)((ulong)uStack_88 >> 0x10);
  local_100 = (undefined2)local_90;
  uStack_fe = (undefined6)((ulong)local_90 >> 0x10);
  uStack_e8 = (undefined2)uStack_78;
  uStack_e6 = (undefined6)((ulong)uStack_78 >> 0x10);
  local_f0 = (undefined2)uStack_80;
  uStack_ee = (undefined6)((ulong)uStack_80 >> 0x10);
  uStack_d8 = (undefined2)uStack_68;
  uStack_d6 = (undefined6)((ulong)uStack_68 >> 0x10);
  local_e0 = (undefined2)local_70;
  uStack_de = (undefined6)((ulong)local_70 >> 0x10);
  AVar7 = SwiftUI::Animation::easeInOut(0.18,_Var6.unknown);
  uStack_158 = *(undefined8 *)(param_3 + 0x18);
  local_160 = *(undefined **)(param_3 + 0x10);
  SwiftUI::State::get_wrappedValue(SVar2);
  puVar1 = local_1b0;
  uStack_228 = 0x100;
  uStack_21e = uStack_fe;
  uStack_218 = uStack_f8;
  uStack_220 = local_100;
  uStack_1de = CONCAT26(uStack_f8,uStack_fe);
  local_1e6 = CONCAT26(local_100,uStack_106);
  uStack_1ce = CONCAT26(uStack_e8,uStack_ee);
  local_1d6 = CONCAT26(local_f0,uStack_f6);
  uStack_20e = uStack_ee;
  uStack_208 = uStack_e8;
  local_216 = uStack_f6;
  uStack_210 = local_f0;
  uStack_1fe = uStack_de;
  local_206 = uStack_e6;
  uStack_200 = local_e0;
  uStack_1f8 = uStack_d8;
  uStack_1f6 = uStack_d6;
  uStack_a8 = CONCAT62(uStack_e6,uStack_e8);
  local_b0 = CONCAT62(uStack_ee,local_f0);
  uStack_98 = CONCAT62(uStack_d6,uStack_d8);
  uStack_a0 = CONCAT62(uStack_de,local_e0);
  uStack_c8 = CONCAT62(uStack_106,0x100);
  uStack_b8 = CONCAT62(uStack_f6,uStack_f8);
  uStack_c0 = CONCAT62(uStack_fe,local_100);
  local_1e8 = 0x100;
  local_1c6 = CONCAT26(local_e0,uStack_e6);
  uStack_1b6 = uStack_d6;
  uStack_1be = uStack_de;
  uStack_1b8 = uStack_d8;
  local_230 = CVar5.unknown;
  puStack_1f0 = CVar5.unknown;
  local_d0 = CVar5.unknown;
  FUN_1000087e4(&local_230,&local_160,&DAT_10054b7b8,&DAT_1004222a0);
  FUN_10002a29c(&puStack_1f0,&DAT_10054b7b8,&DAT_1004222a0);
  uStack_1a8 = uStack_c8;
  local_1b0 = local_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = uStack_c0;
  uStack_188 = uStack_a8;
  local_190 = local_b0;
  uStack_178 = uStack_98;
  uStack_180 = uStack_a0;
  puStack_168 = puVar1;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  uStack_150 = uStack_c0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  puStack_118 = puVar1;
  local_170 = AVar7.unknown;
  local_120 = AVar7.unknown;
  FUN_1000087e4(&local_1b0,auStack_280,&DAT_10054b790,&DAT_10041cd18);
  FUN_10002a29c(&local_160,&DAT_10054b790,&DAT_10041cd18);
  param_1[5] = uStack_188;
  param_1[4] = local_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = puStack_168;
  param_1[8] = local_170;
  param_1[1] = uStack_1a8;
  *param_1 = local_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  return;
}

