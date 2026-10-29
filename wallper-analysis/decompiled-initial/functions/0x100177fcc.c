// rea decompile_all
// name: FUN_100177fcc
// address: 0x100177fcc
// body: available
// range: 0x100177fcc-0x10017806b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100177fcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xea00000000006369;
  uVar1 = 0x726568746f;
  if (bVar4 != 3) {
    uVar1 = 0x656e6f6e;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar2 = 0xe400000000000000;
  }
  uVar3 = 0xec00000063697375;
  uVar5 = 0x4d65627574756f79;
  if (bVar4 != 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x73754d656c707061;
  if (bVar4 != 0) {
    uVar6 = 0xe700000000000000;
    uVar1 = 0x796669746f7073;
  }
  if (bVar4 < 2) {
    uVar3 = uVar6;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}

