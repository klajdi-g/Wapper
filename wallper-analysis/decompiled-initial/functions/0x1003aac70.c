// rea decompile_all
// name: FUN_1003aac70
// address: 0x1003aac70
// body: available
// range: 0x1003aac70-0x1003aad0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003aac70(undefined8 *param_1)

{
  undefined *puVar1;
  EnvironmentObject<undefined> EVar2;
  undefined *puVar3;
  EnvironmentObject<undefined> EVar4;
  
  FUN_10014e37c(0);
  puVar1 = &DAT_100553148;
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  EVar2 = SwiftUI::EnvironmentObject::init();
  FUN_10013b98c(0);
  puVar3 = &DAT_100553150;
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  EVar4 = SwiftUI::EnvironmentObject::init();
  *param_1 = EVar2.unknown;
  param_1[1] = puVar1;
  param_1[2] = EVar4.unknown;
  param_1[3] = puVar3;
  return;
}

