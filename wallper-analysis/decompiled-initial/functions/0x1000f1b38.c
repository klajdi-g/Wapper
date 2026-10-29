// rea decompile_all
// name: FUN_1000f1b38
// address: 0x1000f1b38
// body: available
// range: 0x1000f1b38-0x1000f1cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f1b38(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Alignment AVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_2.unknown + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar3 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar3.unknown;
  param_1[1] = param_3;
  puVar4 = &DAT_100552538;
  FUN_100002f94(&DAT_100552538,&DAT_1004249c8);
  FUN_1000f0038((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  puVar4 = &DAT_100552540;
  FUN_100002f94(&DAT_100552540,&DAT_1004249d0);
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = 0;
  FUN_100029504();
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10052b248;
  _swift_allocObject(&DAT_10052b248,uVar9 + lVar6,uVar8 | 7);
  FUN_100007e64(&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar4 + uVar9,
                FUN_1000fa84c);
  puVar5 = &DAT_100552548;
  FUN_100002f94(&DAT_100552548,&DAT_1004249d8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  *puVar1 = FUN_1000fc29c;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_100029504();
  puVar4 = &DAT_10052b270;
  _swift_allocObject(&DAT_10052b270,uVar9 + lVar6,uVar8 | 7);
  FUN_100007e64(&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar4 + uVar9,
                FUN_1000fa84c);
  puVar5 = &DAT_100552550;
  FUN_100002f94(&DAT_100552550,&DAT_1004249e0);
  iVar2 = *(int *)(puVar5 + 0x24);
  FUN_1000087e4();
  puVar5 = &DAT_100552558;
  FUN_100002f94(&DAT_100552558,&DAT_1004306a0);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24) + (long)iVar2);
  *param_1 = FUN_1000fc3c8;
  param_1[1] = puVar4;
  return;
}

