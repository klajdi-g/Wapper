// rea decompile_all
// name: FUN_100159d88
// address: 0x100159d88
// body: available
// range: 0x100159d88-0x100159e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100159e5c to 0x100163cc0 FUN_100163cc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100159d88(undefined8 param_1,double *param_2,Date param_3)

{
  long lVar1;
  double *unaff_x20;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = 0;
  FUN_10015f8e8();
  dVar6 = *(double *)((long)param_2 + (long)*(int *)(lVar1 + 0x18));
  dVar5 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x18));
  pdVar2 = param_2;
  if (dVar6 == dVar5) {
    dVar7 = *param_2;
    dVar3 = Foundation::Date::timeIntervalSince
                      ((undefined *)((long)param_2 + (long)*(int *)(lVar1 + 0x14)),param_3);
    if (dVar3 < 0.0) {
      dVar3 = 0.0;
    }
    dVar8 = *unaff_x20;
    dVar4 = Foundation::Date::timeIntervalSince
                      ((undefined *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x14)),param_3);
    if (dVar4 < 0.0) {
      dVar4 = 0.0;
    }
    pdVar2 = unaff_x20;
    if (0.1 <= ABS((dVar7 + dVar6 * dVar3) - (dVar8 + dVar5 * dVar4))) {
      pdVar2 = param_2;
    }
  }
  FUN_100163cc0(pdVar2,param_1);
  return;
}

