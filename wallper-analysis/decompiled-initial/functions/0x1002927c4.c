// rea decompile_all
// name: FUN_1002927c4
// address: 0x1002927c4
// body: available
// range: 0x1002927c4-0x10029280f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002927f8 to 0x1004132bc /usr/lib/swift/libswiftCore.dylib::Swift::String::_fromUTF8Repairing (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100292804 to 0x1004132bc /usr/lib/swift/libswiftCore.dylib::Swift::String::_fromUTF8Repairing (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1002927c4(long param_1,undefined8 param_2,void *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  char *pcVar4;
  String SVar5;
  tuple2_conflict tVar6;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100292810);
    (*pcVar3)();
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar4 = (char *)0x0;
    do {
      if ((char *)(*(long *)(param_1 + 0x10) + -1) == pcVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10029280c);
        (*pcVar3)();
      }
      pcVar1 = pcVar4 + param_1 + 0x21;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    SVar5.bridgeObject = param_3;
    SVar5.str = pcVar4;
    tVar6 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar5);
    return tVar6.result.str;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  tVar6 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),(String)(auVar2 << 0x40));
  return tVar6.result.str;
}

