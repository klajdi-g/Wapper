// rea decompile_all
// name: FUN_10035f1f0
// address: 0x10035f1f0
// body: available
// range: 0x10035f1f0-0x10035f2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035f1f0(long param_1)

{
  code *pcVar1;
  long lVar2;
  State SVar3;
  long lVar4;
  undefined8 local_58;
  long lStack_50;
  
  lVar2 = 0;
  FUN_100386f18();
  lVar2 = *(long *)(param_1 + *(int *)(lVar2 + 0x14));
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    SVar3.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar3);
    lVar4 = lStack_50;
    FUN_1001d3a38(local_58);
    if (lVar4 != 0) {
      FUN_1001d3b8c(param_1,lVar2,local_58,lVar4);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_release(lVar2);
    _swift_bridgeObjectRelease(lStack_50);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035f2f8);
  (*pcVar1)();
}

