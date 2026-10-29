// rea decompile_all
// name: FUN_1000a05e8
// address: 0x1000a05e8
// body: available
// range: 0x1000a05e8-0x1000a0767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a06bc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000a0764 to 0x1001635b4 FUN_1001635b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a05e8(void)

{
  bool bVar1;
  _StringGuts _Var2;
  long *plVar3;
  _StringGuts _Var4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  puVar6 = (undefined *)0x6b63754c20746547;
  lVar5 = *(long *)(unaff_x22 + 0x70);
  if (lVar5 == 0) {
    _Var4.unknown = (undefined *)0xe900000000000079;
    _Var2.unknown = puVar6;
    FUN_100163a04();
    if ((_Var2.unknown != (undefined *)0x6b63754c20746547) ||
       (_Var4.unknown != (undefined *)0xe900000000000079)) {
      bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var4,(_StringComparisonResult)0x47);
      _swift_bridgeObjectRelease(_Var4.unknown);
      if (!bVar1) {
        uVar7 = 0xe900000000000079;
        FUN_100163a04(0x6b63754c20746547);
        *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
        plVar3 = (long *)0x60;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x80) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_1000a0768;
        FUN_1001635b4(puVar6,uVar7,0x6e75502074666144,0xe90000000000006b,0x4077100000000000,0);
        return;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
      goto LAB_1000a069c;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar5 = -0x16ffffffffffff87;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    FUN_100162f58(lVar5,0x6b63754c20746547,0xe900000000000079,0x6e75502074666144,0xe90000000000006b,
                  0xd000000000000016,0x80000001004dce60);
  }
  _swift_bridgeObjectRelease(lVar5);
LAB_1000a069c:
  *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
  _swift_task_switch(FUN_1000a0488,*(undefined8 *)(unaff_x22 + 0x30),
                     *(undefined8 *)(unaff_x22 + 0x38));
  return;
}

