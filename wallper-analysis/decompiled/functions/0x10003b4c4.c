// rea decompile_all
// name: FUN_10003b4c4
// address: 0x10003b4c4
// body: available
// range: 0x10003b4c4-0x10003b5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003b4c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar5 = 0x746e656964617267;
  uVar3 = 0xef747365726f662d;
  if (bVar4 != 5) {
    uVar5 = 0xd000000000000011;
    uVar3 = 0x80000001004dbf90;
  }
  uVar1 = 0xed00006e6f656e2d;
  if (bVar4 != 3) {
    uVar1 = 0xee007265626d652d;
  }
  if (bVar4 < 5) {
    uVar3 = uVar1;
    uVar5 = 0x746e656964617267;
  }
  uVar1 = 0xef7465736e75732d;
  if (bVar4 != 1) {
    uVar1 = 0xee006e6165636f2d;
  }
  uVar2 = 0xef61726f7275612d;
  if (bVar4 != 0) {
    uVar2 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = 0x746e656964617267;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}

