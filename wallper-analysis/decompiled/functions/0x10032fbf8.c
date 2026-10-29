// rea decompile_all
// name: FUN_10032fbf8
// address: 0x10032fbf8
// body: available
// range: 0x10032fbf8-0x10032fd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010032fc34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10032fbf8(ulong *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  State<undefined> SVar1;
  Set _all;
  ulong uVar2;
  undefined1 auStack_230 [96];
  ulong local_1d0;
  ulong uStack_1c8;
  code *local_1c0;
  ulong uStack_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  ulong uStack_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  ulong local_198;
  ulong local_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  code *local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  ulong local_148;
  undefined1 local_140;
  ulong local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  ulong local_110;
  ulong uStack_108;
  code *pcStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  ulong local_b0;
  ulong uStack_a8;
  code *pcStack_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  local_110 = local_110 & 0xffffffffffffff00;
  SVar1 = SwiftUI::State::init(&local_b0,param_6,PTR___type_metadata_for_Swift_Bool_100523b70);
  _all = SwiftUI::Edge::Set::get_leading(SVar1.unknown);
  uVar2 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_1d0 = 0x6b72616d78;
  uStack_1c8 = 0xe500000000000000;
  local_1c0 = FUN_10032fd78;
  uStack_1b8 = 0;
  local_1b0 = (undefined1)local_b0;
  uStack_1a8 = uStack_a8;
  local_1a0 = SUB81(_all.unknown,0);
  uStack_188 = (undefined1)param_4;
  uStack_187 = (undefined7)((ulong)param_4 >> 8);
  uStack_180 = (undefined1)param_5;
  uStack_17f = (undefined7)((ulong)param_5 >> 8);
  local_178 = 0;
  local_170 = 0x6b72616d78;
  uStack_168 = 0xe500000000000000;
  local_160 = FUN_10032fd78;
  uStack_158 = 0;
  local_150 = (undefined1)local_b0;
  local_148 = uStack_a8;
  local_118 = 0;
  local_198 = uVar2;
  local_190 = param_3;
  local_140 = local_1a0;
  local_138 = uVar2;
  uStack_130 = param_3;
  local_128 = param_4;
  uStack_120 = param_5;
  FUN_1000087e4(&local_1d0,&local_b0,&DAT_10055b4f8,&DAT_100431c40);
  FUN_10002a29c(&local_170,&DAT_10055b4f8,&DAT_100431c40);
  local_f0 = CONCAT71(uStack_1af,local_1b0);
  uStack_e0 = CONCAT71(uStack_19f,local_1a0);
  uStack_88 = uStack_1a8;
  uStack_78 = local_198;
  uStack_68 = uStack_188;
  local_70 = local_190;
  uStack_bf = CONCAT17(local_178,uStack_17f);
  uStack_67 = uStack_187;
  uStack_60 = uStack_180;
  uStack_e8 = uStack_1a8;
  uStack_d8 = local_198;
  uStack_c8 = uStack_188;
  local_d0 = local_190;
  uStack_c7 = uStack_187;
  uStack_c0 = uStack_180;
  uStack_a8 = uStack_1c8;
  local_b0 = local_1d0;
  uStack_98 = uStack_1b8;
  pcStack_a0 = local_1c0;
  uStack_108 = uStack_1c8;
  local_110 = local_1d0;
  uStack_f8 = uStack_1b8;
  pcStack_100 = local_1c0;
  param_1[5] = uStack_1a8;
  param_1[4] = CONCAT71(uStack_1af,local_1b0);
  param_1[7] = local_198;
  param_1[6] = CONCAT71(uStack_19f,local_1a0);
  param_1[9] = CONCAT71(uStack_187,uStack_188);
  param_1[8] = local_190;
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(local_178,uStack_17f);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_180,uStack_187);
  param_1[1] = uStack_1c8;
  *param_1 = local_1d0;
  param_1[3] = uStack_1b8;
  param_1[2] = (ulong)local_1c0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  local_90 = local_f0;
  uStack_80 = uStack_e0;
  uStack_5f = uStack_bf;
  FUN_1000087e4(&local_110,auStack_230,&DAT_10055b4f8,&DAT_100431c40);
  FUN_10002a29c(&local_b0,&DAT_10055b4f8,&DAT_100431c40);
  return;
}

