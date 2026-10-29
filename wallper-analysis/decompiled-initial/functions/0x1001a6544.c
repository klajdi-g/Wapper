// rea decompile_all
// name: FUN_1001a6544
// address: 0x1001a6544
// body: available
// range: 0x1001a6544-0x1001a6807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a67d0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a6544(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  byte bVar7;
  undefined *puVar8;
  ulong uVar9;
  TaskPriority TVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
  if (DAT_100557360 != -1) {
    _swift_once(&DAT_100557360,FUN_1001f067c);
  }
  lVar5 = DAT_100577d18;
  bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar7 & 1) != 0) {
    objc_stub::lock(*(ID *)(lVar5 + 0x28));
    lVar1 = *(long *)(lVar5 + 0x38) + 1;
    if (SCARRY8(*(long *)(lVar5 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a6808);
      (*pcVar6)();
    }
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar3 = *(long *)(unaff_x22 + 0xa8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    *(long *)(lVar5 + 0x38) = lVar1;
    puVar15 = *(undefined **)(lVar5 + 0x30);
    puVar8 = &DAT_100561090;
    FUN_100002f94(&DAT_100561090,&DAT_10041c870);
    uVar9 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    TVar10.unknown = puVar15;
    _swift_retain();
    Swift::TaskPriority::get_utility(TVar10);
    TVar10 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar10.unknown + -8) + 0x38))(uVar9,0,1,TVar10.unknown);
    puVar8 = &DAT_100530570;
    _swift_allocObject(&DAT_100530570,0x18,7);
    _swift_weakInit(puVar8 + 0x10,lVar5);
    uVar11 = lVar2 + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar11);
    (**(code **)(lVar3 + 0x10))();
    uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
    uVar16 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
    uVar18 = lVar2 + uVar16 + 7 & 0xfffffffffffffff8;
    puVar12 = &DAT_100530f20;
    _swift_allocObject(&DAT_100530f20,uVar18 + 0x28,uVar14 | 7);
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(undefined8 *)(puVar12 + 0x18) = 0;
    *(undefined **)(puVar12 + 0x20) = puVar15;
    *(undefined **)(puVar12 + 0x28) = puVar8;
    (**(code **)(lVar3 + 0x20))(puVar12 + uVar16,uVar11,uVar13);
    *(undefined8 *)(puVar12 + uVar18) = uVar17;
    *(undefined8 *)((long)(puVar12 + uVar18) + 8) = uVar4;
    *(long *)(puVar12 + uVar18 + 0x10) = lVar1;
    *(undefined8 *)(puVar12 + uVar18 + 0x18) = 0;
    *(undefined8 *)((long)(puVar12 + uVar18 + 0x18) + 8) = 0;
    _swift_task_dealloc(uVar11);
    _swift_retain(puVar15);
    _swift_bridgeObjectRetain(uVar4);
    uVar13 = 0;
    FUN_100176d50(0,0,uVar9,&DAT_10042a358,puVar12);
    FUN_10002a29c(uVar9,&DAT_100561090,&DAT_10041c870);
    _swift_task_dealloc(uVar9);
    uVar17 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar5 + 0x30) = uVar13;
    _swift_retain(uVar13);
    _swift_release(uVar17);
    objc_stub::unlock(*(ID *)(lVar5 + 0x28));
    _swift_release(uVar13);
    _swift_release(puVar15);
  }
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  *(undefined1 *)(DAT_100577cc0 + _TtC7Wallper17NowPlayingManager::lockScreenRestorePending) = 0;
  _swift_task_switch(FUN_1001a6808,0,0);
  return;
}

