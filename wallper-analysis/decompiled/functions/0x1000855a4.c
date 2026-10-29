// rea decompile_all
// name: FUN_1000855a4
// address: 0x1000855a4
// body: available
// range: 0x1000855a4-0x100085737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000855a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  Alignment AVar2;
  Alignment width;
  Alignment AVar3;
  undefined1 auStack_198 [80];
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (DAT_10054f540 != -1) {
    _swift_once(&DAT_10054f540,FUN_10007c124);
  }
  dVar1 = DAT_10054f548;
  AVar2.unknown = (undefined *)0x0;
  FUN_100095ec0();
  width.unknown = (undefined *)(dVar1 * *(double *)(param_4 + *(int *)(AVar2.unknown + 0x14)));
  AVar3.unknown = width.unknown;
  SwiftUI::Alignment::get_center(AVar2);
  SwiftUI::_FrameLayout::_init(width);
  FUN_10007c624(param_2);
  uStack_110 = local_148;
  dStack_e0 = (double)AVar3.unknown * 0.017453292519943295;
  local_108 = local_140;
  uStack_100 = local_138;
  local_f8 = local_130;
  uStack_f0 = local_128;
  local_e8 = uStack_120;
  uStack_d0 = 0x3fd4b88c73f4915a;
  local_d8 = 0x3fe86bca1af286bd;
  uStack_c0 = local_148;
  local_b8 = local_140;
  local_b0 = local_138;
  local_a8 = local_130;
  local_a0 = local_128;
  uStack_98 = uStack_120;
  uStack_80 = 0x3fd4b88c73f4915a;
  local_88 = 0x3fe86bca1af286bd;
  local_118 = param_3;
  local_c8 = param_3;
  local_90 = dStack_e0;
  _swift_retain(param_3);
  FUN_1000087e4(&local_118,auStack_198,&DAT_10054f628,&DAT_100420b00);
  FUN_10002a29c(&local_c8,&DAT_10054f628,&DAT_100420b00);
  param_1[5] = uStack_f0;
  param_1[4] = CONCAT71(uStack_f7,local_f8);
  param_1[7] = dStack_e0;
  param_1[6] = local_e8;
  param_1[9] = uStack_d0;
  param_1[8] = local_d8;
  param_1[1] = uStack_110;
  *param_1 = local_118;
  param_1[3] = uStack_100;
  param_1[2] = CONCAT71(uStack_107,local_108);
  return;
}

