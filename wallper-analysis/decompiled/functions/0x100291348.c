// rea decompile_all
// name: FUN_100291348
// address: 0x100291348
// body: available
// range: 0x100291348-0x100291413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002913e0 to 0x100291998 FUN_100291998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100291408 to 0x100291414 FUN_100291414 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100291348(ulong param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  double dVar4;
  
  FUN_100291264();
  if ((param_2 & 0xff) != 1) {
    if ((*(char *)(unaff_x20 + 0x28) == '\x01') ||
       (uVar3 = *(ulong *)(unaff_x20 + 0x20), param_1 >> 0x20 == uVar3 >> 0x20)) {
      *(ulong *)(unaff_x20 + 0x20) = param_1;
      *(undefined1 *)(unaff_x20 + 0x28) = 0;
    }
    else {
      dVar4 = (double)(uint)((int)param_1 - (int)uVar3) /
              (double)(uint)((int)(param_1 >> 0x20) - (int)(uVar3 >> 0x20));
      *(ulong *)(unaff_x20 + 0x20) = param_1;
      *(undefined1 *)(unaff_x20 + 0x28) = 0;
      if (dVar4 <= 0.8) {
        lVar1 = *(long *)(unaff_x20 + 0x38) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x38),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100291414);
          (*pcVar2)();
        }
        *(undefined8 *)(unaff_x20 + 0x30) = 0;
        *(long *)(unaff_x20 + 0x38) = lVar1;
        if (1 < lVar1) {
          FUN_100291414(dVar4,0);
          return;
        }
      }
      else {
        lVar1 = *(long *)(unaff_x20 + 0x30) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x30),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100291410);
          (*pcVar2)();
        }
        *(long *)(unaff_x20 + 0x30) = lVar1;
        *(undefined8 *)(unaff_x20 + 0x38) = 0;
        if (2 < lVar1) {
          FUN_100291998();
          return;
        }
      }
    }
  }
  return;
}

