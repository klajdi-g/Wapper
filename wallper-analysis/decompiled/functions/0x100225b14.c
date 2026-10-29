// rea decompile_all
// name: FUN_100225b14
// address: 0x100225b14
// body: available
// range: 0x100225b14-0x100225c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100225bf8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100225c6c to 0x10003b840 FUN_10003b840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100225b14(void)

{
  bool bVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  URL UVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  _StringGuts _Var9;
  long unaff_x22;
  
  _Var9.unknown = *(undefined **)(unaff_x22 + 0x130);
  if (_Var9.unknown != (undefined *)0x0) {
    if (*(undefined **)(unaff_x22 + 0x128) == *(undefined **)(unaff_x22 + 0xc0) &&
        _Var9.unknown == *(undefined **)(unaff_x22 + 200)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(unaff_x22 + 0x128),_Var9,
                         (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0xc0));
      _swift_bridgeObjectRelease();
      if (!bVar1) goto LAB_100225b64;
    }
    if (*(char *)(unaff_x22 + 0x178) == '\x01') {
      _Var9.unknown = *(undefined **)(unaff_x22 + 0xd0);
      FUN_10004306c();
      if (((uint)_Var9.unknown & 0xff) != 7) {
        UVar4 = Foundation::URL::typeMetadataAccessor();
        *(undefined **)(unaff_x22 + 0x138) = UVar4.unknown;
        lVar7 = *(long *)(UVar4.unknown + -8);
        *(long *)(unaff_x22 + 0x140) = lVar7;
        lVar7 = *(long *)(lVar7 + 0x40);
        *(long *)(unaff_x22 + 0x148) = lVar7;
        uVar5 = lVar7 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x150) = uVar5;
        plVar6 = (long *)0x1f0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x158) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_100225c70;
        FUN_10003b840(plVar6,uVar5,_Var9.unknown);
        return;
      }
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
    pMVar2 = Swift::MainActor::get_shared
                       (*(MainActor **)(unaff_x22 + 0x110),(MainActor *)_Var9.unknown);
    *(MainActor **)(unaff_x22 + 0x170) = pMVar2;
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_100226020,UVar3.unknown,uVar8);
    return;
  }
LAB_100225b64:
  _swift_release(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100225b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

