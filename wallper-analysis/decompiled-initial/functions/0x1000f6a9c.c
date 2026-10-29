// rea decompile_all
// name: FUN_1000f6a9c
// address: 0x1000f6a9c
// body: available
// range: 0x1000f6a9c-0x1000f6c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6a9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  int iVar2;
  undefined *puVar3;
  UnitPoint UVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_78;
  
  puVar5 = &DAT_100423c50;
  puVar3 = puVar5;
  _swift_getKeyPath(&DAT_100423c50);
  puVar6 = &DAT_100423c78;
  UVar4.unknown = puVar6;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_78,param_4,puVar3,UVar4.unknown);
  _swift_release(puVar3);
  _swift_release();
  dVar8 = (double)NEON_fminnm(local_78 / 560.0,0x3ff0000000000000);
  dVar8 = dVar8 * -0.15 + 1.25;
  if (local_78 / 560.0 < 0.0) {
    dVar8 = 1.25;
  }
  dVar7 = 1.1;
  dVar9 = dVar8;
  if (dVar8 <= 1.1) {
    dVar9 = dVar7;
  }
  SwiftUI::UnitPoint::get_center(UVar4);
  puVar3 = &DAT_100552370;
  FUN_100002f94(&DAT_100552370,&DAT_100424758);
  pdVar1 = (double *)(param_1 + *(int *)(puVar3 + 0x24));
  *pdVar1 = dVar9;
  pdVar1[1] = dVar9;
  pdVar1[2] = dVar8;
  pdVar1[3] = dVar7;
  puVar3 = &DAT_100552378;
  FUN_100002f94(&DAT_100552378,&DAT_100424760);
  (**(code **)(*(long *)(puVar3 + -8) + 0x10))(param_1,param_2,puVar3);
  _swift_getKeyPath(&DAT_100423c50);
  _swift_getKeyPath(&DAT_100423c78);
  Combine::Published::_get_subscript(&local_78,param_4,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  puVar5 = &DAT_100552380;
  FUN_100002f94(&DAT_100552380,&DAT_100424768);
  iVar2 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = 0;
  ((undefined8 *)(param_1 + iVar2))[1] = local_78 * -0.06;
  return;
}

