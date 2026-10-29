// rea decompile_all
// name: FUN_10011d090
// address: 0x10011d090
// body: available
// range: 0x10011d090-0x10011d153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011d090(String *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  URL UVar5;
  void *pvVar6;
  String SVar7;
  
  lVar4 = 0;
  FUN_10011c000();
  if (*(long *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c)) != 0) {
    UVar5.unknown = (undefined *)0x0;
    FUN_10040211c();
    SVar7 = Foundation::URL::get_lastPathComponent(UVar5);
    uVar1 = (ulong)SVar7.str & 0xffffffffffff;
    if (((ulong)SVar7.bridgeObject & 0x2000000000000000) != 0) {
      uVar1 = (ulong)SVar7.bridgeObject >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease();
      pcVar2 = (char *)*param_2;
      pvVar6 = (void *)param_2[1];
      _swift_bridgeObjectRetain();
      SVar7.bridgeObject = pvVar6;
      SVar7.str = pcVar2;
    }
    *param_1 = SVar7;
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10011d154);
  (*pcVar3)();
}

