// rea decompile_all
// name: FUN_100132dd8
// address: 0x100132dd8
// body: available
// range: 0x100132dd8-0x100132e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100132dd8(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar3 = 0xd000000000000013;
  pcVar4 = "applicationUpdateURL";
  if (*unaff_x20 == '\x01') {
    uVar3 = 0xd000000000000014;
    pcVar4 = "applicationLatestVersion";
  }
  pcVar1 = "round check found update v";
  uVar2 = 0xd000000000000018;
  if (*unaff_x20 != '\0') {
    pcVar1 = pcVar4;
    uVar2 = uVar3;
  }
  auVar5._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

