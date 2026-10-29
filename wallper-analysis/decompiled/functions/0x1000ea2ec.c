// rea decompile_all
// name: FUN_1000ea2ec
// address: 0x1000ea2ec
// body: available
// range: 0x1000ea2ec-0x1000ea3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000ea368 to 0x10026b218 FUN_10026b218 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000ea3b8 to 0x100411e1c /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EnvironmentObject::error (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ea2ec(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1000e3868();
    *(undefined8 *)(unaff_x22 + 0x48) = param_2;
    plVar1 = (long *)0x300;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1000ea3bc;
    FUN_10026b218(lVar2,param_2);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
  return;
}

