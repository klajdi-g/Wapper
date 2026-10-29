// rea decompile_all
// name: FUN_100298b84
// address: 0x100298b84
// body: available
// range: 0x100298b84-0x100298f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100298b84(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  void *pvVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    pcVar3 = FUN_10029a0cc;
    _IOPSNotificationCreateRunLoopSource(FUN_10029a0cc,0);
    if (pcVar3 == (code *)0x0) {
      return;
    }
    pcVar4 = pcVar3;
    _CFRunLoopGetMain();
    _CFRunLoopAddSource(pcVar4,pcVar3,*(undefined8 *)PTR__kCFRunLoopCommonModes_1005215c8);
    *(code **)(unaff_x20 + 0x10) = pcVar3;
    IVar5 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    IVar5 = NSWorkspace::notificationCenter(IVar5);
    uVar10 = *(undefined8 *)PTR__NSWorkspaceDidWakeNotification_100521340;
    uVar11 = *(undefined8 *)PTR__NSWorkspaceSessionDidBecomeActiveNotification_100521358;
    local_80 = uVar10;
    uStack_78 = uVar11;
    IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar7 = &DAT_1005374e8;
    _swift_allocObject(&DAT_1005374e8,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar2 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = FUN_10029a45c;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    local_c8 = 0x42000000;
    local_c0 = FUN_100177b88;
    puStack_b8 = &DAT_100537500;
    local_a8 = puVar7;
    pvVar8 = __Block_copy(&local_d0);
    _swift_release(local_a8);
    IVar6 = NSWorkspace::addObserverForName_object_queue_usingBlock_(IVar5,uVar10,0,IVar6,pvVar8);
    __Block_release(pvVar8);
    _swift_beginAccess(unaff_x20 + 0x18,&local_d0,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar9 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar9 + 0x10);
    uVar9 = *(ulong *)(uVar9 + 0x18);
    if (uVar9 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar9,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar6);
    _swift_endAccess(&local_d0);
    IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar7 = &DAT_1005374e8;
    _swift_allocObject(&DAT_1005374e8,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    local_b0 = thunk_FUN_10029a45c;
    local_d0 = puVar2;
    local_c8 = 0x42000000;
    local_c0 = FUN_100177b88;
    puStack_b8 = &DAT_100537528;
    local_a8 = puVar7;
    pvVar8 = __Block_copy(&local_d0);
    _swift_release(local_a8);
    IVar5 = NSWorkspace::addObserverForName_object_queue_usingBlock_(IVar5,uVar11,0,IVar6,pvVar8);
    __Block_release(pvVar8);
    _swift_beginAccess(unaff_x20 + 0x18,&local_d0,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar9 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar9 + 0x10);
    uVar9 = *(ulong *)(uVar9 + 0x18);
    if (uVar9 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar9,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar5);
    _swift_endAccess(&local_d0);
    uVar10 = 0;
    FUN_100008018(0);
    _swift_arrayDestroy(&local_80,2,uVar10);
  }
  FUN_100299640();
  return;
}

