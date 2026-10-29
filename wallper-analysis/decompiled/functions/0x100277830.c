// rea decompile_all
// name: FUN_100277830
// address: 0x100277830
// body: available
// range: 0x100277830-0x1002779f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002779c8 to 0x1001e4dc0 FUN_1001e4dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100277830(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  double dVar5;
  double dVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  char *local_48;
  void *pvStack_40;
  
  dVar5 = *(double *)(unaff_x22 + 0x2d0);
  dVar6 = *(double *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x310);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x328);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 800);
  _CGSizeApplyAffineTransform(unaff_x22 + 0x150);
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002779d0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002779d4);
    (*pcVar1)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002779d8);
    (*pcVar1)();
  }
  if (ABS(dVar6) < 9.223372036854776e+18) {
    *(long *)(unaff_x22 + 0x1f8) = (long)ABS(dVar5);
    SVar7 = Swift::CustomStringConvertible::get_description();
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x78;
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar8,SVar9);
    *(long *)(unaff_x22 + 0x200) = (long)ABS(dVar6);
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar8,SVar10);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    local_48 = SVar7.str;
    pvStack_40 = SVar7.bridgeObject;
    *(void **)(unaff_x22 + 0x340) = pvStack_40;
    *(char **)(unaff_x22 + 0x338) = local_48;
    puVar2 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x348) = uVar3;
    if (DAT_100556f80 != -1) {
      _swift_once(&DAT_100556f80,FUN_1001dd604);
    }
    plVar4 = (long *)0x440;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x350) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100277fc8;
    FUN_1001e4dc0(plVar4,uVar3,*(undefined8 *)(unaff_x22 + 0x220),*(undefined8 *)(unaff_x22 + 0x208)
                  ,*(undefined8 *)(unaff_x22 + 0x210));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002779dc);
  (*pcVar1)();
}

