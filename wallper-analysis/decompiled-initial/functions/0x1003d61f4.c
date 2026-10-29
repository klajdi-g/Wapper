// rea decompile_all
// name: FUN_1003d61f4
// address: 0x1003d61f4
// body: available
// range: 0x1003d61f4-0x1003d633b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d62dc to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d61f4(String *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  URL UVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined *puVar8;
  String SVar9;
  
  if (DAT_100555940 != -1) {
    _swift_once(&DAT_100555940,FUN_10016e078);
  }
  uVar2 = DAT_100577cb0;
  lVar4 = 0;
  FUN_1003e4bc8();
  puVar8 = *(undefined **)((long)&param_1->str + (long)*(int *)(lVar4 + 0x30));
  if (puVar8 == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d633c);
    (*pcVar3)();
  }
  FUN_10040211c();
  UVar5.unknown = puVar8;
  _swift_retain();
  SVar9 = Foundation::URL::get_lastPathComponent(UVar5);
  pvVar7 = SVar9.bridgeObject;
  uVar1 = (ulong)SVar9.str & 0xffffffffffff;
  if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar7);
    SVar9 = *param_1;
    _swift_bridgeObjectRetain(param_1->bridgeObject);
  }
  uVar6 = 0;
  FUN_1001292fc(0);
  _swift_initStaticObject();
  FUN_100128290(param_1,uVar2,puVar8,SVar9.str,SVar9.bridgeObject,uVar6);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  return;
}

