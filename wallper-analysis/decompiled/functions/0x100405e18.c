// rea decompile_all
// name: FUN_100405e18
// address: 0x100405e18
// body: available
// range: 0x100405e18-0x100405f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100405e18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  uVar6 = 0xea00000000006f65;
  bVar3 = *unaff_x20;
  uVar4 = 0x4e6b6f6f4263614d;
  if (bVar3 != 6) {
    uVar6 = 0xe700000000000000;
    uVar4 = 0x6e776f6e6b6e55;
  }
  uVar7 = 0xe90000000000006f;
  uVar1 = 0x696475745363614d;
  if (bVar3 != 4) {
    uVar7 = 0xe600000000000000;
    uVar1 = 0x6f725063614d;
  }
  if (bVar3 < 6) {
    uVar6 = uVar7;
    uVar4 = uVar1;
  }
  uVar7 = 0x63614d69;
  if (bVar3 != 2) {
    uVar7 = 0x696e694d63614d;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3 != 2) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0xea00000000007269;
  uVar5 = 0x416b6f6f4263614d;
  if (bVar3 != 0) {
    uVar2 = 0xea00000000006f72;
    uVar5 = 0x506b6f6f4263614d;
  }
  if (bVar3 < 2) {
    uVar1 = uVar2;
    uVar7 = uVar5;
  }
  if (bVar3 < 4) {
    uVar6 = uVar1;
    uVar4 = uVar7;
  }
  *param_1 = uVar4;
  param_1[1] = uVar6;
  return;
}

