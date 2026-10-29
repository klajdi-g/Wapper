// rea decompile_all
// name: FUN_10002bc30
// address: 0x10002bc30
// body: available
// range: 0x10002bc30-0x10002bdf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002bc30(undefined8 *param_1,Color param_2,undefined8 param_3,long param_4)

{
  Alignment AVar1;
  Color CVar2;
  _FrameLayout _Var3;
  Animation AVar4;
  long lVar5;
  undefined1 auStack_270 [80];
  undefined *local_220;
  undefined2 uStack_218;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 local_206;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 local_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined *puStack_1e0;
  undefined2 local_1d8;
  undefined8 local_1d6;
  undefined8 uStack_1ce;
  undefined8 local_1c6;
  undefined8 uStack_1be;
  undefined8 local_1b6;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *local_160;
  long lStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *local_110;
  long lStack_108;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)param_2.unknown;
  AVar1.unknown = (undefined *)SwiftUI::Color::get_white(param_2);
  CVar2 = (Color)AVar1.unknown;
  if (lVar5 != param_4) {
    CVar2 = SwiftUI::Color::opacity(0.3,(Color)AVar1.unknown);
    _swift_release();
  }
  SwiftUI::Alignment::get_center(AVar1);
  _Var3 = SwiftUI::_FrameLayout::_init((Alignment)0x4020000000000000);
  uStack_e8 = (undefined2)uStack_78;
  uStack_e6 = (undefined6)((ulong)uStack_78 >> 0x10);
  local_f0 = (undefined2)local_80;
  uStack_ee = (undefined6)((ulong)local_80 >> 0x10);
  uStack_d8 = (undefined2)uStack_68;
  uStack_d6 = (undefined6)((ulong)uStack_68 >> 0x10);
  local_e0 = (undefined2)uStack_70;
  uStack_de = (undefined6)((ulong)uStack_70 >> 0x10);
  uStack_c8 = (undefined2)uStack_58;
  uStack_c6 = (undefined6)((ulong)uStack_58 >> 0x10);
  local_d0 = (undefined2)local_60;
  uStack_ce = (undefined6)((ulong)local_60 >> 0x10);
  AVar4 = SwiftUI::Animation::easeOut(0.2,_Var3.unknown);
  uStack_218 = 0x100;
  uStack_20e = uStack_ee;
  uStack_208 = uStack_e8;
  uStack_210 = local_f0;
  uStack_1ce = CONCAT26(uStack_e8,uStack_ee);
  local_1d6 = CONCAT26(local_f0,uStack_f6);
  uStack_1be = CONCAT26(uStack_d8,uStack_de);
  local_1c6 = CONCAT26(local_e0,uStack_e6);
  uStack_1fe = uStack_de;
  uStack_1f8 = uStack_d8;
  local_206 = uStack_e6;
  uStack_200 = local_e0;
  uStack_1ee = uStack_ce;
  local_1f6 = uStack_d6;
  uStack_1f0 = local_d0;
  uStack_1e8 = uStack_c8;
  uStack_1e6 = uStack_c6;
  uStack_b8 = CONCAT62(uStack_f6,0x100);
  uStack_a8 = CONCAT62(uStack_e6,uStack_e8);
  uStack_b0 = CONCAT62(uStack_ee,local_f0);
  uStack_98 = CONCAT62(uStack_d6,uStack_d8);
  local_a0 = CONCAT62(uStack_de,local_e0);
  uStack_88 = CONCAT62(uStack_c6,uStack_c8);
  uStack_90 = CONCAT62(uStack_ce,local_d0);
  local_1d8 = 0x100;
  local_1b6 = CONCAT26(local_d0,uStack_d6);
  uStack_1a6 = uStack_c6;
  uStack_1ae = uStack_ce;
  uStack_1a8 = uStack_c8;
  local_220 = CVar2.unknown;
  puStack_1e0 = CVar2.unknown;
  local_c0 = CVar2.unknown;
  FUN_1000087e4(&local_220,&local_150,&DAT_10054b7b8,&DAT_1004222a0);
  FUN_10002a29c(&puStack_1e0,&DAT_10054b7b8,&DAT_1004222a0);
  uStack_198 = uStack_b8;
  local_1a0 = local_c0;
  uStack_188 = uStack_a8;
  uStack_190 = uStack_b0;
  uStack_178 = uStack_98;
  local_180 = local_a0;
  uStack_168 = uStack_88;
  uStack_170 = uStack_90;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  uStack_140 = uStack_b0;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  local_160 = AVar4.unknown;
  lStack_158 = param_4;
  local_110 = AVar4.unknown;
  lStack_108 = param_4;
  FUN_1000087e4(&local_1a0,auStack_270,&DAT_10054b790,&DAT_10041cd18);
  FUN_10002a29c(&local_150,&DAT_10054b790,&DAT_10041cd18);
  param_1[5] = uStack_178;
  param_1[4] = local_180;
  param_1[7] = uStack_168;
  param_1[6] = uStack_170;
  param_1[9] = lStack_158;
  param_1[8] = local_160;
  param_1[1] = uStack_198;
  *param_1 = local_1a0;
  param_1[3] = uStack_188;
  param_1[2] = uStack_190;
  return;
}

