// rea decompile_all
// name: FUN_1000df9b8
// address: 0x1000df9b8
// body: available
// range: 0x1000df9b8-0x1000dfbaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000dfa94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000df9b8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  Color CVar3;
  Color CVar4;
  StrokeStyle SVar5;
  Alignment AVar6;
  undefined8 uVar7;
  Alignment unaff_x20;
  undefined1 auStack_220 [88];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined *puStack_1a0;
  undefined2 local_198;
  undefined6 uStack_196;
  undefined *puStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 uStack_50;
  
  FUN_1000dfbb0();
  SwiftUI::Alignment::get_center(unaff_x20);
  SwiftUI::_FrameLayout::_init((Alignment)0x4048000000000000);
  puVar2 = &DAT_10054e520;
  FUN_100002f94(&DAT_10054e520,&DAT_10041f468);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar2 + 0x24));
  puVar1[1] = uStack_178;
  *puVar1 = local_180;
  puVar1[3] = uStack_168;
  puVar1[2] = uStack_170;
  puVar1[5] = uStack_158;
  puVar1[4] = local_160;
  CVar3.unknown = &DAT_10054e528;
  FUN_100002f94(&DAT_10054e528,&DAT_10041f470);
  *(undefined2 *)(param_1 + *(int *)(CVar3.unknown + 0x24)) = 0x100;
  CVar3 = SwiftUI::Color::get_white(CVar3);
  CVar4 = SwiftUI::Color::opacity(0.8,CVar3);
  _swift_release(CVar3.unknown);
  uVar7 = 0;
  SVar5 = SwiftUI::StrokeStyle::init
                    (&local_1c8,0x3fe0000000000000,0x4024000000000000,0,CVar4.unknown,0,
                     PTR___swiftEmptyArrayStorage_100524190);
  puStack_190 = (undefined *)SwiftUI::Alignment::get_center(SVar5.unknown);
  local_198 = 0x100;
  puStack_1a0 = CVar4.unknown;
  local_188 = uVar7;
  AVar6 = SwiftUI::Alignment::get_center((Alignment)puStack_190);
  uStack_120 = CONCAT62(uStack_196,local_198);
  puStack_128 = puStack_1a0;
  local_130 = local_1a8;
  puStack_118 = puStack_190;
  local_110 = local_188;
  uStack_148 = uStack_1c0;
  local_150 = local_1c8;
  uStack_138 = uStack_1b0;
  uStack_140 = local_1b8;
  puStack_78 = puStack_1a0;
  local_80 = local_1a8;
  puStack_68 = puStack_190;
  local_60 = local_188;
  uStack_98 = uStack_1c0;
  local_a0 = local_1c8;
  uStack_88 = uStack_1b0;
  uStack_90 = local_1b8;
  puStack_d8 = puStack_1a0;
  local_e0 = local_1a8;
  puStack_c8 = puStack_190;
  uStack_f8 = uStack_1c0;
  local_100 = local_1c8;
  uStack_e8 = uStack_1b0;
  uStack_f0 = local_1b8;
  local_c0 = local_188;
  puVar2 = &DAT_10054e530;
  uStack_d0 = uStack_120;
  puStack_b8 = AVar6.unknown;
  local_b0 = uVar7;
  uStack_70 = uStack_120;
  FUN_100002f94(&DAT_10054e530,&DAT_10041f478);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar2 + 0x24));
  puVar1[5] = puStack_d8;
  puVar1[4] = local_e0;
  puVar1[7] = puStack_c8;
  puVar1[6] = uStack_d0;
  puVar1[9] = puStack_b8;
  puVar1[8] = local_c0;
  puVar1[10] = local_b0;
  puVar1[1] = uStack_f8;
  *puVar1 = local_100;
  puVar1[3] = uStack_e8;
  puVar1[2] = uStack_f0;
  local_58 = AVar6.unknown;
  uStack_50 = uVar7;
  FUN_1000087e4(&local_150,auStack_220,&DAT_10054a798,&DAT_10041f480);
  FUN_1000087e4(&local_100,auStack_220,&DAT_10054a788,&DAT_100425370);
  FUN_10002a29c(&local_a0,&DAT_10054a788,&DAT_100425370);
  FUN_10002a29c(&local_1c8,&DAT_10054a798,&DAT_10041f480);
  return;
}

