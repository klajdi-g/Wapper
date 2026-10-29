// rea decompile_all
// name: FUN_100066dd0
// address: 0x100066dd0
// body: available
// range: 0x100066dd0-0x100067073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100066eec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100066dd0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  Color CVar4;
  long lVar5;
  Color CVar6;
  StrokeStyle SVar7;
  Alignment AVar8;
  undefined8 uVar9;
  undefined *unaff_x20;
  double dVar10;
  undefined8 uVar11;
  undefined1 auStack_238 [88];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined2 local_a8;
  undefined6 uStack_a6;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  AVar8.unknown = unaff_x20;
  FUN_100067074();
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x4046000000000000);
  puVar3 = &DAT_10054e520;
  FUN_100002f94(&DAT_10054e520,&DAT_10041f468);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  puVar1[1] = uStack_88;
  *puVar1 = local_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  CVar4.unknown = &DAT_10054e528;
  FUN_100002f94(&DAT_10054e528,&DAT_10041f470);
  *(undefined2 *)(param_1 + *(int *)(CVar4.unknown + 0x24)) = 0x100;
  CVar4 = SwiftUI::Color::get_white(CVar4);
  lVar5 = 0;
  FUN_100069528();
  cVar2 = unaff_x20[*(int *)(lVar5 + 0x14)];
  dVar10 = 0.9;
  if (cVar2 == '\0') {
    dVar10 = 0.35;
  }
  uVar11 = 0x3ff8000000000000;
  if (cVar2 == '\0') {
    uVar11 = 0x3fe0000000000000;
  }
  CVar6 = SwiftUI::Color::opacity(dVar10,CVar4);
  _swift_release(CVar4.unknown);
  uVar9 = 0;
  SVar7 = SwiftUI::StrokeStyle::init
                    (&local_d8,uVar11,0x4024000000000000,0,CVar6.unknown,0,
                     PTR___swiftEmptyArrayStorage_100524190);
  puStack_a0 = (undefined *)SwiftUI::Alignment::get_center(SVar7.unknown);
  local_a8 = 0x100;
  puStack_b0 = CVar6.unknown;
  local_98 = uVar9;
  AVar8 = SwiftUI::Alignment::get_center((Alignment)puStack_a0);
  local_1b0 = CONCAT62(uStack_a6,local_a8);
  puStack_1a8 = puStack_a0;
  local_1a0 = local_98;
  uStack_1c8 = uStack_c0;
  local_1d0 = local_c8;
  puStack_1b8 = puStack_b0;
  uStack_1c0 = local_b8;
  uStack_1d8 = uStack_d0;
  local_1e0 = local_d8;
  puStack_108 = puStack_b0;
  local_110 = local_b8;
  puStack_f8 = puStack_a0;
  local_f0 = local_98;
  uStack_128 = uStack_d0;
  local_130 = local_d8;
  uStack_118 = uStack_c0;
  uStack_120 = local_c8;
  puStack_168 = puStack_b0;
  local_170 = local_b8;
  puStack_158 = puStack_a0;
  uStack_188 = uStack_d0;
  local_190 = local_d8;
  uStack_178 = uStack_c0;
  uStack_180 = local_c8;
  local_150 = local_98;
  puVar3 = &DAT_10054e530;
  uStack_160 = local_1b0;
  puStack_148 = AVar8.unknown;
  local_140 = uVar9;
  uStack_100 = local_1b0;
  FUN_100002f94(&DAT_10054e530,&DAT_10041f478);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  puVar1[5] = puStack_168;
  puVar1[4] = local_170;
  puVar1[7] = puStack_158;
  puVar1[6] = uStack_160;
  puVar1[9] = puStack_148;
  puVar1[8] = local_150;
  puVar1[10] = local_140;
  puVar1[1] = uStack_188;
  *puVar1 = local_190;
  puVar1[3] = uStack_178;
  puVar1[2] = uStack_180;
  local_e8 = AVar8.unknown;
  uStack_e0 = uVar9;
  FUN_1000087e4(&local_1e0,auStack_238,&DAT_10054a798,&DAT_10041f480);
  FUN_1000087e4(&local_190,auStack_238,&DAT_10054a788,&DAT_100425370);
  FUN_10002a29c(&local_130,&DAT_10054a788,&DAT_100425370);
  CVar4.unknown = (undefined *)&local_d8;
  FUN_10002a29c(CVar4.unknown,&DAT_10054a798,&DAT_10041f480);
  if (cVar2 == '\x01') {
    CVar6 = SwiftUI::Color::get_white(CVar4);
    CVar4 = SwiftUI::Color::opacity(0.35,CVar6);
    _swift_release(CVar6.unknown);
  }
  else {
    CVar4 = SwiftUI::Color::get_clear(CVar4);
  }
  puVar3 = &DAT_10054e538;
  FUN_100002f94(&DAT_10054e538,&DAT_10041f488);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  *puVar1 = CVar4.unknown;
  puVar1[1] = 0x4028000000000000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

