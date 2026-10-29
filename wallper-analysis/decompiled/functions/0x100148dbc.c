// rea decompile_all
// name: FUN_100148dbc
// address: 0x100148dbc
// body: available
// range: 0x100148dbc-0x100148e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100148dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xed00007379614474;
  uVar1 = 0x66654c6c61697274;
  if (bVar3 != 3) {
    uVar5 = 0xe700000000000000;
    uVar1 = 0x65736e6563696c;
  }
  uVar2 = 0xea00000000006573;
  uVar4 = 0x6e6563694c736168;
  if (bVar3 != 2) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  uVar5 = 0x64697768;
  if (bVar3 != 0) {
    uVar5 = 0x64656e6e61427369;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3 != 0) {
    uVar1 = 0xe800000000000000;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

