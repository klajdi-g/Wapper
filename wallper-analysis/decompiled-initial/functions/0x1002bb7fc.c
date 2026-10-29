// rea decompile_all
// name: FUN_1002bb7fc
// address: 0x1002bb7fc
// body: available
// range: 0x1002bb7fc-0x1002bb8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bb880 to 0x10013d7a0 FUN_10013d7a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002bb8cc to 0x100411e1c /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EnvironmentObject::error (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bb7fc(void)

{
  MainActor *pMVar1;
  long *plVar2;
  undefined8 uVar3;
  MainActor *this;
  undefined8 uVar4;
  long unaff_x22;
  
  pMVar1 = (MainActor *)**(long **)(unaff_x22 + 0x10);
  *(MainActor **)(unaff_x22 + 0x58) = pMVar1;
  if (pMVar1 != (MainActor *)0x0) {
    this = *(MainActor **)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
    uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x18);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
    _swift_retain();
    pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
    *(MainActor **)(unaff_x22 + 0x70) = pMVar1;
    plVar2 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1002bb8d0;
    FUN_10013d7a0(uVar3,uVar4);
    return;
  }
  FUN_10013b98c();
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
  return;
}

