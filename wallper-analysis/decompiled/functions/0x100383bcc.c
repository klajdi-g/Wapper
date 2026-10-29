// rea decompile_all
// name: FUN_100383bcc
// address: 0x100383bcc
// body: available
// range: 0x100383bcc-0x100383cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100383c74 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100383bcc(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (DAT_100555940 != -1) {
    _swift_once(&DAT_100555940,FUN_10016e078);
  }
  lVar3 = 0;
  FUN_1003881b4();
  uVar1 = DAT_100577cb0;
  lVar3 = *(long *)(param_1 + *(int *)(lVar3 + 0x24));
  if (lVar3 != 0) {
    FUN_1001292fc(0);
    puVar5 = &DAT_100557da0;
    _swift_initStaticObject();
    lVar4 = lVar3;
    _swift_retain(lVar3);
    FUN_10026ac6c();
    FUN_100128290(param_1,uVar1,lVar3,lVar4,puVar5);
    _swift_release(lVar3);
    _swift_bridgeObjectRelease(puVar5);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100383cd4);
  (*pcVar2)();
}

