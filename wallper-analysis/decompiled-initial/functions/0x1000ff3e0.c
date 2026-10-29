// rea decompile_all
// name: FUN_1000ff3e0
// address: 0x1000ff3e0
// body: available
// range: 0x1000ff3e0-0x1000ff573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ff3e0(undefined8 *param_1,VerticalAlignment param_2)

{
  VerticalAlignment VVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_260 [88];
  undefined7 uStack_208;
  undefined1 local_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined *local_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined *local_140;
  undefined8 uStack_138;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  
  uStack_1b8 = unaff_x20[1];
  local_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  uStack_198 = unaff_x20[5];
  local_1a0 = unaff_x20[4];
  local_190 = unaff_x20[6];
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_2);
  FUN_1000ff2cc(&local_a8,&local_1c0);
  uStack_168 = uStack_90;
  uStack_167 = uStack_8f;
  uStack_170 = local_98;
  uStack_16f = uStack_97;
  uStack_178 = uStack_a0;
  local_180 = local_a8;
  uStack_158 = uStack_80;
  uStack_157 = uStack_7f;
  local_160 = local_88;
  uStack_15f = uStack_87;
  uStack_148 = uStack_70;
  uStack_147 = uStack_6f;
  uStack_150 = local_78;
  uStack_14f = uStack_77;
  uStack_138 = uStack_a0;
  local_140 = local_a8;
  FUN_1000087e4(&local_180,&local_100,&DAT_1005528e8,&DAT_100424e38);
  FUN_10002a29c(&local_140,&DAT_1005528e8,&DAT_100424e38);
  uStack_1f9 = (undefined1)uStack_178;
  uStack_1f8 = (undefined7)((ulong)uStack_178 >> 8);
  local_201 = SUB81(local_180,0);
  uStack_200 = (undefined7)((ulong)local_180 >> 8);
  uStack_e7 = uStack_200;
  uStack_e0 = uStack_1f9;
  local_ef = uStack_208;
  uStack_e8 = local_201;
  uStack_af = uStack_147;
  uStack_b7 = uStack_14f;
  uStack_b0 = uStack_148;
  local_bf = uStack_157;
  uStack_b8 = uStack_150;
  uStack_c7 = uStack_15f;
  uStack_c0 = uStack_158;
  local_cf = uStack_167;
  uStack_c8 = local_160;
  uStack_d7 = uStack_16f;
  uStack_d0 = uStack_168;
  local_df = uStack_1f8;
  uStack_d8 = uStack_170;
  uStack_f8 = 0x4020000000000000;
  local_f0 = 0;
  uStack_a0 = 0x4020000000000000;
  local_98 = 0;
  uStack_8f = uStack_200;
  local_88 = uStack_1f9;
  uStack_90 = local_201;
  uStack_87 = uStack_1f8;
  local_100 = VVar1.unknown;
  local_a8 = VVar1.unknown;
  FUN_1000087e4(&local_100,auStack_260,&DAT_1005528f0,&DAT_100424e40);
  FUN_10002a29c(&local_a8,&DAT_1005528f0,&DAT_100424e40);
  param_1[5] = CONCAT71(uStack_d7,uStack_d8);
  param_1[4] = CONCAT71(local_df,uStack_e0);
  param_1[7] = CONCAT71(uStack_c7,uStack_c8);
  param_1[6] = CONCAT71(local_cf,uStack_d0);
  param_1[9] = CONCAT71(uStack_b7,uStack_b8);
  param_1[8] = CONCAT71(local_bf,uStack_c0);
  param_1[10] = CONCAT71(uStack_af,uStack_b0);
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = CONCAT71(uStack_e7,uStack_e8);
  param_1[2] = CONCAT71(local_ef,local_f0);
  return;
}

