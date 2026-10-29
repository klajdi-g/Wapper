// rea decompile_all
// name: FUN_100261a3c
// address: 0x100261a3c
// body: available
// range: 0x100261a3c-0x100261a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100261a3c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  puVar1 = (undefined1 *)0x656d616e;
  if (cVar5 != '\x01') {
    puVar1 = (undefined1 *)0x7472617473;
  }
  uVar2 = 0xe400000000000000;
  if (cVar5 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  puVar3 = &DAT_00006469;
  if (cVar5 != '\0') {
    puVar3 = puVar1;
  }
  uVar4 = 0xe200000000000000;
  if (cVar5 != '\0') {
    uVar4 = uVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = puVar3;
  return auVar6;
}

