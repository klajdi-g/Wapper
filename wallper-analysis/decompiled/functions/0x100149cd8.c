// rea decompile_all
// name: FUN_100149cd8
// address: 0x100149cd8
// body: available
// range: 0x100149cd8-0x100149d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100149cd8(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  pcVar5 = "Request failed (HTTP ";
  uVar1 = 0xd000000000000010;
  if (bVar3 != 3) {
    pcVar5 = "activationsCount";
    uVar1 = 0xd000000000000011;
  }
  uVar2 = 0xea00000000007365;
  uVar6 = 0x636976654478616d;
  if (bVar3 != 2) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar6 = uVar1;
  }
  uVar4 = 0x79656b;
  if (bVar3 != 0) {
    uVar4 = 0x65707974;
  }
  uVar1 = 0xe300000000000000;
  if (bVar3 != 0) {
    uVar1 = 0xe400000000000000;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar6 = (ulong)uVar4;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

