// rea decompile_all
// name: FUN_10011ffec
// address: 0x10011ffec
// body: available
// range: 0x10011ffec-0x10012011f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001200ac to 0x100411e1c /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EnvironmentObject::error (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10012011c to 0x10027f8bc FUN_10027f8bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011ffec(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  URL UVar6;
  String *pSVar7;
  long unaff_x22;
  String SVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar2 = 0;
  FUN_10011c000();
  UVar6.unknown = *(undefined **)(lVar5 + *(int *)(lVar2 + 0x1c));
  *(undefined **)(unaff_x22 + 0x30) = UVar6.unknown;
  if (UVar6.unknown == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
    return;
  }
  FUN_10040211c();
  _swift_retain();
  SVar8 = Foundation::URL::get_lastPathComponent(UVar6);
  pvVar4 = SVar8.bridgeObject;
  uVar1 = (ulong)SVar8.str & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    pSVar7 = *(String **)(unaff_x22 + 0x10);
    _swift_bridgeObjectRelease(pvVar4);
    SVar8 = *pSVar7;
    _swift_bridgeObjectRetain(pSVar7->bridgeObject);
  }
  *(void **)(unaff_x22 + 0x38) = SVar8.bridgeObject;
  plVar3 = (long *)0x200;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100036868;
  FUN_10027f8bc(SVar8.str,SVar8.bridgeObject,0xffffffffffffffff);
  return;
}

