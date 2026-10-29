// rea decompile_all
// name: FUN_1001a235c
// address: 0x1001a235c
// body: available
// range: 0x1001a235c-0x1001a26d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a26b4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a26d4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a235c(void)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  byte bVar4;
  Task TVar5;
  undefined *puVar6;
  ulong uVar7;
  TaskPriority TVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100521138;
  lVar14 = *(long *)(unaff_x22 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x280));
  _swift_beginAccess(lVar14 + 0x10,unaff_x22 + 0xa8,0,0);
  TVar5.unknown = (undefined *)(lVar14 + 0x10);
  _swift_weakLoadStrong();
  if (TVar5.unknown != (undefined *)0x0) {
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    if ((!bVar3) &&
       (*(long *)(TVar5.unknown + _TtC7Wallper17NowPlayingManager::lockscreenGeneration) ==
        *(long *)(unaff_x22 + 0x180))) {
      if (DAT_100557360 != -1) {
        _swift_once(&DAT_100557360,FUN_1001f067c);
      }
      lVar14 = DAT_100577d18;
      bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      if ((bVar4 & 1) != 0) {
        objc_stub::lock(*(ID *)(lVar14 + 0x28));
        lVar1 = *(long *)(lVar14 + 0x38) + 1;
        if (SCARRY8(*(long *)(lVar14 + 0x38),1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1001a26d4);
          (*pcVar20)();
        }
        pcVar20 = *(code **)(unaff_x22 + 0x268);
        lVar22 = *(long *)(unaff_x22 + 0x218);
        lVar19 = *(long *)(unaff_x22 + 0x210);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
        uVar16 = *(undefined8 *)(unaff_x22 + 400);
        *(long *)(lVar14 + 0x38) = lVar1;
        puVar15 = *(undefined **)(lVar14 + 0x30);
        puVar6 = &DAT_100561090;
        FUN_100002f94(&DAT_100561090,&DAT_10041c870);
        uVar7 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        TVar8.unknown = puVar15;
        _swift_retain();
        Swift::TaskPriority::get_utility(TVar8);
        TVar8 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(uVar7,0,1,TVar8.unknown);
        puVar6 = &DAT_100530570;
        _swift_allocObject(&DAT_100530570,0x18,7);
        _swift_weakInit(puVar6 + 0x10,lVar14);
        uVar9 = lVar22 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar9);
        (*pcVar20)();
        uVar13 = (ulong)*(byte *)(lVar19 + 0x50);
        uVar21 = uVar13 + 0x30 & (uVar13 ^ 0xffffffffffffffff);
        uVar18 = lVar22 + uVar21 + 7 & 0xfffffffffffffff8;
        puVar10 = &DAT_100530598;
        _swift_allocObject(&DAT_100530598,uVar18 + 0x28,uVar13 | 7);
        *(undefined8 *)(puVar10 + 0x10) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0;
        *(undefined **)(puVar10 + 0x20) = puVar15;
        *(undefined **)(puVar10 + 0x28) = puVar6;
        (**(code **)(lVar19 + 0x20))(puVar10 + uVar21,uVar9,uVar17);
        *(undefined8 *)(puVar10 + uVar18) = uVar11;
        *(undefined8 *)((long)(puVar10 + uVar18) + 8) = uVar16;
        *(long *)(puVar10 + uVar18 + 0x10) = lVar1;
        *(undefined8 *)(puVar10 + uVar18 + 0x18) = 0;
        *(undefined8 *)((long)(puVar10 + uVar18 + 0x18) + 8) = 0;
        _swift_task_dealloc(uVar9);
        _swift_retain(puVar15);
        _swift_bridgeObjectRetain(uVar16);
        uVar11 = 0;
        FUN_100176d50(0,0,uVar7,&DAT_100429e80,puVar10);
        FUN_10002a29c(uVar7,&DAT_100561090,&DAT_10041c870);
        _swift_task_dealloc(uVar7);
        uVar16 = *(undefined8 *)(lVar14 + 0x30);
        *(undefined8 *)(lVar14 + 0x30) = uVar11;
        _swift_retain(uVar11);
        _swift_release(uVar16);
        objc_stub::unlock(*(ID *)(lVar14 + 0x28));
        _swift_release(uVar11);
        _swift_release(puVar15);
      }
      _swift_release(TVar5.unknown);
      goto LAB_1001a2670;
    }
    _swift_release(TVar5.unknown);
  }
  lVar14 = *(long *)(unaff_x22 + 0x148);
  _swift_beginAccess(lVar14 + 0x10,unaff_x22 + 0xc0,0,0);
  lVar14 = lVar14 + 0x10;
  _swift_weakLoadStrong();
  if (lVar14 != 0) {
    puVar2 = (undefined8 *)(lVar14 + _TtC7Wallper17NowPlayingManager::lockscreenKey);
    uVar11 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    _swift_bridgeObjectRelease(uVar11);
    _swift_release(lVar14);
  }
  FUN_1001246b8(1,*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x170));
LAB_1001a2670:
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar12) {
    _swift_task_switch(FUN_1001a26d8,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

