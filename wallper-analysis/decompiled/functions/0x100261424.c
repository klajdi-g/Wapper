// rea decompile_all
// name: FUN_100261424
// address: 0x100261424
// body: available
// range: 0x100261424-0x100261487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100261424(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  puVar1 = (undefined1 *)0x746f6c73;
  if (bVar5 != 2) {
    puVar1 = (undefined1 *)0x6e61726165707061;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = 0xea00000000006563;
  }
  puVar2 = &DAT_00006469;
  if (bVar5 != 0) {
    puVar2 = (undefined1 *)0x74726170;
  }
  uVar3 = 0xe200000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    puVar1 = puVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = puVar1;
  return auVar6;
}

