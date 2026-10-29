// rea decompile_all
// name: FUN_10013c078
// address: 0x10013c078
// body: available
// range: 0x10013c078-0x10013c11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10013c078(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0xec0000006e6f6973;
  uVar2 = 0x726556736f63616d;
  if (bVar4 != 3) {
    uVar1 = 0xea00000000006e6f;
    uVar2 = 0x6973726556707061;
  }
  uVar3 = 0xea00000000006570;
  uVar5 = 0x7954656369766564;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  uVar1 = 0x64697768;
  if (bVar4 != 0) {
    uVar1 = 0x614e656369766564;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xea0000000000656d;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}

