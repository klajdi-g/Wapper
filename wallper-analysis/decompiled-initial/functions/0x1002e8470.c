// rea decompile_all
// name: FUN_1002e8470
// address: 0x1002e8470
// body: available
// range: 0x1002e8470-0x1002e8567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002e8470(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  AppStorage AVar2;
  long unaff_x20;
  double dVar3;
  String SVar4;
  String SVar5;
  undefined1 auVar6 [16];
  String SVar7;
  char *local_30;
  void *pvStack_28;
  
  AVar2.unknown = *(undefined **)(unaff_x20 + 0x50);
  SwiftUI::AppStorage::get_wrappedValue(AVar2);
  if ((double)local_30 == 0.0) {
    pvStack_28 = (void *)0xe500000000000000;
    local_30 = (char *)0x646574754d;
  }
  else {
    SwiftUI::AppStorage::get_wrappedValue(AVar2);
    dVar3 = (double)local_30 * 100.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e8560);
      (*pcVar1)();
    }
    if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e8564);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e8568);
      (*pcVar1)();
    }
    SVar4 = Swift::CustomStringConvertible::get_description();
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x25;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    local_30 = SVar4.str;
    pvStack_28 = SVar4.bridgeObject;
  }
  auVar6._8_8_ = pvStack_28;
  auVar6._0_8_ = local_30;
  return auVar6;
}

