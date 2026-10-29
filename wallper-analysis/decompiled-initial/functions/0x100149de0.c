// rea decompile_all
// name: FUN_100149de0
// address: 0x100149de0
// body: available
// range: 0x100149de0-0x100149e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100149de0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_10014f0f0(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}

