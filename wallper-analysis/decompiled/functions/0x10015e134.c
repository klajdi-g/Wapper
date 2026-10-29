// rea decompile_all
// name: FUN_10015e134
// address: 0x10015e134
// body: available
// range: 0x10015e134-0x10015e267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015e22c to 0x1001635b4 FUN_1001635b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10015e264 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015e134(void)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  long *plVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x3f8);
  if (lVar9 == 0) {
    puVar8 = *(undefined **)(unaff_x22 + 0x2d8);
    puVar10 = *(undefined **)(unaff_x22 + 0x2d0);
    _Var2.unknown = puVar10;
    _Var5.unknown = puVar8;
    FUN_100163a04();
    if (_Var2.unknown == puVar10 && _Var5.unknown == puVar8) {
      _swift_bridgeObjectRelease(_Var5.unknown);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var5,
                         (_StringComparisonResult)(__int8)*(undefined8 *)(unaff_x22 + 0x2d0));
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (!bVar1) {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x2d0);
        FUN_100163a04(uVar3);
        *(undefined8 *)(unaff_x22 + 0x400) = uVar6;
        plVar4 = (long *)0x60;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x408) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_10015e268;
        FUN_1001635b4(uVar3,uVar6,*(undefined8 *)(unaff_x22 + 0x2e0),
                      *(undefined8 *)(unaff_x22 + 0x2e8),*(undefined8 *)(unaff_x22 + 0x3d0),
                      *(undefined1 *)(unaff_x22 + 0x205));
        return;
      }
    }
  }
  else if (*(char *)(unaff_x22 + 0x205) != '\x01') {
    FUN_100162f58(lVar9,*(undefined8 *)(unaff_x22 + 0x2d0),*(undefined8 *)(unaff_x22 + 0x2d8),
                  *(undefined8 *)(unaff_x22 + 0x2e0),*(undefined8 *)(unaff_x22 + 0x2e8),
                  *(undefined8 *)(unaff_x22 + 0x2f0),*(undefined8 *)(unaff_x22 + 0x2f8));
    uVar7 = 1;
    goto LAB_10015e23c;
  }
  uVar7 = 0;
LAB_10015e23c:
  *(undefined1 *)(unaff_x22 + 0x206) = uVar7;
  *(long *)(unaff_x22 + 1000) = lVar9;
  _swift_task_switch(FUN_10015d2c8,*(undefined8 *)(unaff_x22 + 0x3a0),
                     *(undefined8 *)(unaff_x22 + 0x3a8));
  return;
}

