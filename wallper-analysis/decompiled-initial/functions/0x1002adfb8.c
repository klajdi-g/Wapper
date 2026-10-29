// rea decompile_all
// name: FUN_1002adfb8
// address: 0x1002adfb8
// body: available
// range: 0x1002adfb8-0x1002ae127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ae0b0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002ae124 to 0x10003b840 FUN_10003b840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002adfb8(_StringGuts param_1,_StringGuts param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  URL UVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  
  Foundation::URL::_get_scheme((URL)param_1.unknown);
  if (param_2.unknown != (undefined *)0x0) {
    if (param_1.unknown == (undefined *)0x7463617265746e69 &&
        param_2.unknown == (undefined *)0xeb00000000657669) {
      _swift_bridgeObjectRelease(param_2.unknown);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease(param_2.unknown);
      if (!bVar2) goto LAB_1002ae040;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    FUN_10004306c();
    if (((uint)uVar3 & 0xff) != 7) {
      UVar7 = Foundation::URL::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 200) = UVar7.unknown;
      lVar10 = *(long *)(UVar7.unknown + -8);
      *(long *)(unaff_x22 + 0xd0) = lVar10;
      lVar10 = *(long *)(lVar10 + 0x40);
      *(long *)(unaff_x22 + 0xd8) = lVar10;
      uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0xe0) = uVar8;
      plVar9 = (long *)0x1f0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1002ae2b4;
      FUN_10003b840(plVar9,uVar8,uVar3);
      return;
    }
  }
LAB_1002ae040:
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x100) = pMVar4;
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1002ae668,UVar6.unknown,puVar5);
  return;
}

