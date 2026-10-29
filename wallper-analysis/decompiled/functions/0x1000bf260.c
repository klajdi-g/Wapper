// rea decompile_all
// name: FUN_1000bf260
// address: 0x1000bf260
// body: available
// range: 0x1000bf260-0x1000bf317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bf260(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100029504();
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100529508;
  _swift_allocObject(&DAT_100529508,uVar5 + lVar3,uVar2 | 7);
  FUN_100007e64(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1 + uVar5,
                FUN_1000c4fdc);
  *param_1 = FUN_1000c59a0;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

