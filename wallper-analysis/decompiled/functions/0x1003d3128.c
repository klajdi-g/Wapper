// rea decompile_all
// name: FUN_1003d3128
// address: 0x1003d3128
// body: available
// range: 0x1003d3128-0x1003d32cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003d31b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003d3128(long param_1)

{
  undefined8 *puVar1;
  Color CVar2;
  Color CVar3;
  StrokeStyle SVar4;
  Alignment AVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_1f0 [88];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined2 local_168;
  undefined6 uStack_166;
  undefined *puStack_160;
  undefined8 local_158;
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
  
  FUN_1003d6dc0();
  CVar2.unknown = &DAT_100560b28;
  FUN_100002f94(&DAT_100560b28,&DAT_100436800);
  *(undefined2 *)(param_1 + *(int *)(CVar2.unknown + 0x24)) = 0x100;
  CVar2 = SwiftUI::Color::get_white(CVar2);
  CVar3 = SwiftUI::Color::opacity(0.15,CVar2);
  _swift_release(CVar2.unknown);
  uVar7 = 0;
  SVar4 = SwiftUI::StrokeStyle::init
                    (&local_198,0x3ff0000000000000,0x4024000000000000,0,CVar3.unknown,0,
                     PTR___swiftEmptyArrayStorage_100524190);
  puStack_160 = (undefined *)SwiftUI::Alignment::get_center(SVar4.unknown);
  local_168 = 0x100;
  puStack_170 = CVar3.unknown;
  local_158 = uVar7;
  AVar5 = SwiftUI::Alignment::get_center((Alignment)puStack_160);
  uStack_120 = CONCAT62(uStack_166,local_168);
  puStack_128 = puStack_170;
  local_130 = local_178;
  puStack_118 = puStack_160;
  local_110 = local_158;
  uStack_148 = uStack_190;
  local_150 = local_198;
  uStack_138 = uStack_180;
  uStack_140 = local_188;
  puStack_78 = puStack_170;
  local_80 = local_178;
  puStack_68 = puStack_160;
  local_60 = local_158;
  uStack_98 = uStack_190;
  local_a0 = local_198;
  uStack_88 = uStack_180;
  uStack_90 = local_188;
  puStack_d8 = puStack_170;
  local_e0 = local_178;
  puStack_c8 = puStack_160;
  uStack_f8 = uStack_190;
  local_100 = local_198;
  uStack_e8 = uStack_180;
  uStack_f0 = local_188;
  local_c0 = local_158;
  puVar6 = &DAT_100560b30;
  uStack_d0 = uStack_120;
  puStack_b8 = AVar5.unknown;
  local_b0 = uVar7;
  uStack_70 = uStack_120;
  FUN_100002f94(&DAT_100560b30,&DAT_100436808);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x24));
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
  local_58 = AVar5.unknown;
  uStack_50 = uVar7;
  FUN_1000087e4(&local_150,auStack_1f0,&DAT_10054a798,&DAT_10041f480);
  FUN_1000087e4(&local_100,auStack_1f0,&DAT_10054a788,&DAT_100425370);
  FUN_10002a29c(&local_a0,&DAT_10054a788,&DAT_100425370);
  FUN_10002a29c(&local_198,&DAT_10054a798,&DAT_10041f480);
  return;
}

