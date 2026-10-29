// rea decompile_all
// name: FUN_10028b02c
// address: 0x10028b02c
// body: available
// range: 0x10028b02c-0x10028b09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028b02c(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8(uVar2 >> 0x18);
  if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10028b094);
    (*pcVar1)();
  }
  __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
            (uVar2 >> 0x10,param_2 + 1);
  if (!SCARRY8(param_2,2)) {
    __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
              (uVar2 >> 8,param_2 + 2);
    if (!SCARRY8(param_2,3)) {
      __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                (param_3,param_2 + 3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10028b09c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10028b098);
  (*pcVar1)();
}

