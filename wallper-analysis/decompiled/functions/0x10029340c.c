// rea decompile_all
// name: FUN_10029340c
// address: 0x10029340c
// body: available
// range: 0x10029340c-0x10029387f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10029340c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  void *pvVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    IVar3 = NSWorkspace::notificationCenter(IVar3);
    uVar8 = *(undefined8 *)PTR__NSWorkspaceDidActivateApplicationNotification_100521338;
    uVar9 = *(undefined8 *)PTR__NSWorkspaceActiveSpaceDidChangeNotification_100521330;
    local_80 = uVar8;
    uStack_78 = uVar9;
    IVar4 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar5 = &DAT_100537128;
    _swift_allocObject(&DAT_100537128,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    puVar2 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = FUN_100294f68;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    local_c8 = 0x42000000;
    local_c0 = FUN_100177b88;
    puStack_b8 = &DAT_100537140;
    local_a8 = puVar5;
    pvVar6 = __Block_copy(&local_d0);
    _swift_release(local_a8);
    IVar4 = NSWorkspace::addObserverForName_object_queue_usingBlock_(IVar3,uVar8,0,IVar4,pvVar6);
    __Block_release(pvVar6);
    _swift_beginAccess(unaff_x20 + 0x18,&local_d0,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar7 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar7 + 0x10);
    uVar7 = *(ulong *)(uVar7 + 0x18);
    if (uVar7 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar7,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar4);
    _swift_endAccess(&local_d0);
    IVar4 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar5 = &DAT_100537128;
    _swift_allocObject(&DAT_100537128,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    local_b0 = thunk_FUN_100294f68;
    local_d0 = puVar2;
    local_c8 = 0x42000000;
    local_c0 = FUN_100177b88;
    puStack_b8 = &DAT_100537168;
    local_a8 = puVar5;
    pvVar6 = __Block_copy(&local_d0);
    _swift_release(local_a8);
    IVar3 = NSWorkspace::addObserverForName_object_queue_usingBlock_(IVar3,uVar9,0,IVar4,pvVar6);
    __Block_release(pvVar6);
    _swift_beginAccess(unaff_x20 + 0x18,&local_d0,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar7 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar7 + 0x10);
    uVar7 = *(ulong *)(uVar7 + 0x18);
    if (uVar7 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar7,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar3);
    _swift_endAccess(&local_d0);
    uVar8 = 0;
    FUN_100008018(0);
    _swift_arrayDestroy(&local_80,2,uVar8);
    puVar5 = &DAT_100537128;
    _swift_allocObject(&DAT_100537128,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    local_b0 = FUN_100294f8c;
    local_d0 = puVar2;
    local_c8 = 0x42000000;
    local_c0 = FUN_10016802c;
    puStack_b8 = &DAT_100537190;
    local_a8 = puVar5;
    pvVar6 = __Block_copy(&local_d0);
    _swift_retain(puVar5);
    IVar3 = NSTimer::timerWithTimeInterval_repeats_block_
                      ((ID)&_OBJC_CLASS___NSTimer,0x4014000000000000,1,pvVar6);
    __Block_release(pvVar6);
    puVar2 = local_a8;
    _swift_release(puVar5);
    _swift_release(puVar2);
    NSTimer::setTolerance_(IVar3,0x3ff0000000000000);
    IVar4 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    NSRunLoop::addTimer_forMode_(IVar4,IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_100521578);
    *(ID *)(unaff_x20 + 0x10) = IVar3;
    FUN_100293e14(0);
    param_1 = 0;
  }
  return param_1;
}

