// rea decompile_all
// name: FUN_10036df20
// address: 0x10036df20
// body: available
// range: 0x10036df20-0x10036dfcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036df88 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036df20(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  FUN_10034c884();
  lVar5 = *(long *)(param_4 + *(int *)(lVar4 + 0x1c));
  if (lVar5 != 0) {
    uVar2 = *(undefined1 *)(param_4 + *(int *)(lVar4 + 0x14));
    uVar1 = *param_1;
    _swift_retain(lVar5);
    FUN_1001b9928(param_4,lVar5,uVar2,uVar1);
    _swift_release(lVar5);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10036dfd0);
  (*pcVar3)();
}

