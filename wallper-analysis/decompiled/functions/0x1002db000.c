// rea decompile_all
// name: FUN_1002db000
// address: 0x1002db000
// body: available
// range: 0x1002db000-0x1002db103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002db06c to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002db000(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002db0b4);
    (*pcVar1)();
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    FUN_100129f84(0);
    _swift_initStaticObject();
    _swift_retain(lVar2);
    _swift_retain(lVar3);
    FUN_10012940c(lVar2,lVar3);
    _swift_release(lVar2);
    _swift_release(lVar3);
    return;
  }
  FUN_10013b98c(0);
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  _swift_retain(lVar2);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002db104);
  (*pcVar1)();
}

