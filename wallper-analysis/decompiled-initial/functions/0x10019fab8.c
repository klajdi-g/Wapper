// rea decompile_all
// name: FUN_10019fab8
// address: 0x10019fab8
// body: available
// range: 0x10019fab8-0x1001a0363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019fbb0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019fc24 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a0360 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010019fc34) */
/* WARNING: Removing unreachable block (ram,0x00010019fdf0) */
/* WARNING: Removing unreachable block (ram,0x0001001a0330) */
/* WARNING: Removing unreachable block (ram,0x00010019ffbc) */
/* WARNING: Removing unreachable block (ram,0x0001001a0348) */
/* WARNING: Removing unreachable block (ram,0x0001001a017c) */
/* WARNING: Removing unreachable block (ram,0x0001001a0288) */
/* WARNING: Removing unreachable block (ram,0x0001001a01e8) */
/* WARNING: Removing unreachable block (ram,0x0001001a0294) */
/* WARNING: Removing unreachable block (ram,0x0001001a031c) */
/* WARNING: Removing unreachable block (ram,0x00010019fca4) */
/* WARNING: Removing unreachable block (ram,0x00010019fd0c) */

void FUN_10019fab8(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  *(double *)(unaff_x22 + 0x1a8) = *(double *)(unaff_x22 + 0x1a8) + 0.25;
  lVar6 = *(long *)(unaff_x22 + 0x148) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x1b0) = lVar6;
  if (lVar6 == 0) {
    if (3.0 <= *(double *)(unaff_x22 + 0x1a8)) {
      (extension_Swift)::Swift::Task::_checkCancellation();
      puVar4 = &DAT_10054c040;
      FUN_100002f94(&DAT_10054c040,&DAT_100420500);
      uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x1e8) = uVar5;
      lVar6 = 0;
      FUN_10009e280();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar5,1,1,lVar6);
      pMVar1 = Swift::MainActor::typeMetadataAccessor();
      puVar4 = PTR_typeMetadataAccessor_1005246d8;
      *(MainActor **)(unaff_x22 + 0x1f0) = pMVar1;
      pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
      *(MainActor **)(unaff_x22 + 0x1f8) = pMVar1;
      puVar7 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      *(undefined8 **)(unaff_x22 + 0x200) = puVar7;
      UVar2 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
        pcVar8 = FUN_1001a0364;
        goto LAB_10019fb8c;
      }
    }
    else {
      plVar3 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1d8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10019fa18;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
        (extension_Swift)::Swift::Task::_sleep(250000000);
        return;
      }
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x1b8) = _TtC7Wallper17NowPlayingManager::artworkKey;
    pMVar1 = Swift::MainActor::typeMetadataAccessor();
    puVar4 = PTR_typeMetadataAccessor_1005246d8;
    pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
    *(MainActor **)(unaff_x22 + 0x1c0) = pMVar1;
    puVar7 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar2 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
      pcVar8 = FUN_10019f11c;
LAB_10019fb8c:
      _swift_task_switch(pcVar8,UVar2.unknown,puVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

