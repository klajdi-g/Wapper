// rea decompile_all
// name: FUN_1000df8cc
// address: 0x1000df8cc
// body: available
// range: 0x1000df8cc-0x1000df9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000df96c to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000df8cc(String *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  URL UVar4;
  void *pvVar5;
  String SVar6;
  
  lVar3 = 0;
  FUN_1000e12c4();
  if (*(long *)((long)&param_1->str + (long)*(int *)(lVar3 + 0x1c)) != 0) {
    pcVar2 = *(code **)((long)&param_1->str + (long)*(int *)(lVar3 + 0x18));
    UVar4.unknown = (undefined *)0x0;
    FUN_10040211c();
    SVar6 = Foundation::URL::get_lastPathComponent(UVar4);
    pvVar5 = SVar6.bridgeObject;
    uVar1 = (ulong)SVar6.str & 0xffffffffffff;
    if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar5);
      SVar6 = *param_1;
      _swift_bridgeObjectRetain(param_1->bridgeObject);
    }
    (*pcVar2)(SVar6.str,SVar6.bridgeObject);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000df9b4);
  (*pcVar2)();
}

