// rea decompile_all
// name: FUN_100032024
// address: 0x100032024
// body: available
// range: 0x100032024-0x1000320ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100032024(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  String SVar5;
  String SVar6;
  undefined1 auVar7 [16];
  String SVar8;
  char *local_30;
  void *pvStack_28;
  
  local_30 = (char *)0x412f4e;
  lVar3 = 0;
  FUN_10040211c();
  pdVar1 = (double *)(unaff_x20 + *(int *)(lVar3 + 0x38));
  if ((*(char *)(pdVar1 + 1) == '\x01') || (dVar4 = *pdVar1, dVar4 <= 0.0)) {
    pvStack_28 = (void *)0xe300000000000000;
  }
  else {
    dVar4 = (double)(long)dVar4;
    if (0x7fe < (ulong)dVar4 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000320f8);
      (*pcVar2)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000320fc);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100032100);
      (*pcVar2)();
    }
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = (void *)0xe300000000000000;
    SVar6.str = (char *)0x424d20;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar6,SVar8);
    local_30 = SVar5.str;
    pvStack_28 = SVar5.bridgeObject;
  }
  auVar7._8_8_ = pvStack_28;
  auVar7._0_8_ = local_30;
  return auVar7;
}

