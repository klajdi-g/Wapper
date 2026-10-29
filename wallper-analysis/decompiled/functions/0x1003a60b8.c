// rea decompile_all
// name: FUN_1003a60b8
// address: 0x1003a60b8
// body: available
// range: 0x1003a60b8-0x1003a61db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a60b8(undefined8 *param_1,HorizontalAlignment param_2)

{
  int iVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2.unknown + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x4024000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10055f588;
  FUN_100002f94(&DAT_10055f588,&DAT_100434d88);
  FUN_1003a43cc((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  puVar3 = &DAT_10055f590;
  FUN_100002f94(&DAT_10055f590,&DAT_100434d90);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = 0;
  FUN_100029504();
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_10053ce88;
  _swift_allocObject(&DAT_10053ce88,uVar7 + lVar6,uVar5 | 7);
  FUN_100007e64(&stack0xffffffffffffffc0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar3 + uVar7,
                FUN_1003a67f8);
  puVar4 = &DAT_10055f598;
  FUN_100002f94(&DAT_10055f598,&DAT_100434d98);
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar1) = FUN_1003a7764;
  ((undefined8 *)((long)param_1 + (long)iVar1))[1] = puVar3;
  return;
}

