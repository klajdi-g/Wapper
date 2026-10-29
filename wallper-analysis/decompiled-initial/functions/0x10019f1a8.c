// rea decompile_all
// name: FUN_10019f1a8
// address: 0x10019f1a8
// body: available
// range: 0x10019f1a8-0x10019fa17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019f2a8 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019f9e0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019fa14 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010019f2c0) */
/* WARNING: Removing unreachable block (ram,0x00010019f47c) */
/* WARNING: Removing unreachable block (ram,0x00010019f9e4) */
/* WARNING: Removing unreachable block (ram,0x00010019f648) */
/* WARNING: Removing unreachable block (ram,0x00010019f9fc) */
/* WARNING: Removing unreachable block (ram,0x00010019f808) */
/* WARNING: Removing unreachable block (ram,0x00010019f914) */
/* WARNING: Removing unreachable block (ram,0x00010019f874) */
/* WARNING: Removing unreachable block (ram,0x00010019f920) */
/* WARNING: Removing unreachable block (ram,0x00010019f9a8) */
/* WARNING: Removing unreachable block (ram,0x00010019f330) */
/* WARNING: Removing unreachable block (ram,0x00010019f398) */

void FUN_10019f1a8(void)

{
  _StringGuts _Var1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  double dVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  lVar10 = *(long *)(unaff_x22 + 0x1d0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b0));
  if (lVar10 == 0) {
    dVar11 = *(double *)(unaff_x22 + 0x1a8);
joined_r0x00010019f240:
    if (dVar11 < 3.0) {
      plVar3 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1d8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10019fa18;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
        (extension_Swift)::Swift::Task::_sleep(250000000);
        return;
      }
      goto LAB_10019fa14;
    }
  }
  else {
    _Var1.unknown = *(undefined **)(unaff_x22 + 0x1d0);
    if (*(undefined **)(unaff_x22 + 0x1c8) == *(undefined **)(unaff_x22 + 0x150) &&
        _Var1.unknown == *(undefined **)(unaff_x22 + 0x158)) {
      _swift_bridgeObjectRelease(_Var1.unknown);
    }
    else {
      dVar11 = *(double *)(unaff_x22 + 0x1a8);
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(unaff_x22 + 0x1c8),_Var1,
                         (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0x150));
      _swift_bridgeObjectRelease(_Var1.unknown);
      if (!bVar2) goto joined_r0x00010019f240;
    }
  }
  (extension_Swift)::Swift::Task::_checkCancellation();
  puVar4 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar5;
  lVar10 = 0;
  FUN_10009e280();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar5,1,1,lVar10);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_1005246d8;
  *(MainActor **)(unaff_x22 + 0x1f0) = pMVar6;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x1f8) = pMVar6;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  *(undefined8 **)(unaff_x22 + 0x200) = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
    _swift_task_switch(FUN_1001a0364,UVar8.unknown,puVar7);
    return;
  }
LAB_10019fa14:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

