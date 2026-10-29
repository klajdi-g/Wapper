// rea decompile_all
// name: FUN_1001b8c78
// address: 0x1001b8c78
// body: available
// range: 0x1001b8c78-0x1001b934b inclusive
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

void FUN_1001b8c78(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  ID IVar5;
  ID IVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 auStack_d8 [4];
  undefined8 local_b8 [3];
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  puVar3 = &DAT_100531580;
  _swift_allocObject(&DAT_100531580,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_80 = FUN_1001d4d64;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_10016802c;
  puStack_88 = &DAT_100531728;
  local_78 = puVar3;
  pvVar4 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar5 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x404e000000000000,1,pvVar4);
  __Block_release(pvVar4);
  lVar2 = _TtC7Wallper15PlaylistManager::clockTimer;
  *(ID *)(unaff_x20 + _TtC7Wallper15PlaylistManager::clockTimer) = IVar5;
  if (*(ID *)(unaff_x20 + lVar2) != 0) {
    objc_stub::setTolerance_(*(ID *)(unaff_x20 + lVar2),0x4014000000000000);
  }
  IVar5 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar5 = NSWorkspace::notificationCenter(IVar5);
  uVar9 = *(undefined8 *)PTR__NSWorkspaceDidWakeNotification_100521340;
  IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar3 = &DAT_100531580;
  _swift_allocObject(&DAT_100531580,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_80 = FUN_1001d4d8c;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_100531750;
  local_78 = puVar3;
  pvVar4 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar5 = NSWorkspace::addObserverForName_object_queue_usingBlock_
                    (IVar5,uVar9,0,IVar6,pvVar4,in_x6,in_x7,IVar5);
  __Block_release(pvVar4);
  lVar2 = _TtC7Wallper15PlaylistManager::observers;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper15PlaylistManager::observers,&local_a0,0x21,0);
  Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
  uVar7 = *(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar7 + 0x10);
  uVar7 = *(ulong *)(uVar7 + 0x18);
  if (uVar7 >> 1 <= uVar1) {
    Swift::Array<undefined>::__createNewBuffer(1 < uVar7,uVar1 + 1,1);
  }
  Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar5);
  _swift_endAccess(&local_a0);
  IVar5 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  local_b8[0] = *(undefined8 *)PTR__NSSystemClockDidChangeNotification_100521580;
  local_b8[1] = *(undefined8 *)PTR__NSSystemTimeZoneDidChangeNotification_100521588;
  local_b8[2] = *(undefined8 *)PTR__NSCalendarDayChangedNotification_100521570;
  lVar8 = 0x20;
  do {
    uVar9 = *(undefined8 *)((long)auStack_d8 + lVar8);
    IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar3 = &DAT_100531580;
    _swift_allocObject(&DAT_100531580,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    local_80 = FUN_1001d4dbc;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    local_98 = 0x42000000;
    local_90 = FUN_100177b88;
    puStack_88 = &DAT_100531778;
    local_78 = puVar3;
    pvVar4 = __Block_copy(&local_a0);
    _swift_release(local_78);
    IVar6 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                      (IVar5,uVar9,0,IVar6,pvVar4);
    __Block_release(pvVar4);
    _swift_beginAccess(unaff_x20 + lVar2,&local_a0,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar7 = *(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar7 + 0x10);
    uVar7 = *(ulong *)(uVar7 + 0x18);
    if (uVar7 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar7,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar6);
    _swift_endAccess(&local_a0);
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x38);
  uVar9 = 0;
  FUN_100008018(0);
  _swift_arrayDestroy(local_b8,3,uVar9);
  if (DAT_100554810 != -1) {
    _swift_once(&DAT_100554810,FUN_10013e56c);
  }
  uVar9 = DAT_100577c48;
  IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar3 = &DAT_100531580;
  _swift_allocObject(&DAT_100531580,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_80 = FUN_1001d4dec;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_1005317a0;
  local_78 = puVar3;
  pvVar4 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar5 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar5,uVar9,0,IVar6,pvVar4);
  __Block_release(pvVar4);
  _swift_beginAccess(unaff_x20 + lVar2,&local_a0,0x21,0);
  Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
  uVar7 = *(ulong *)(unaff_x20 + lVar2) & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar7 + 0x10);
  uVar7 = *(ulong *)(uVar7 + 0x18);
  if (uVar7 >> 1 <= uVar1) {
    Swift::Array<undefined>::__createNewBuffer(1 < uVar7,uVar1 + 1,1);
  }
  Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar5);
  _swift_endAccess(&local_a0);
  IVar5 = NSDistributedNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter);
  if (DAT_10055a060 != -1) {
    _swift_once(&DAT_10055a060,FUN_1002a9bc8);
  }
  uVar9 = DAT_100577e10;
  IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar3 = &DAT_100531580;
  _swift_allocObject(&DAT_100531580,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_80 = FUN_1001d4e1c;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_1005317c8;
  local_78 = puVar3;
  pvVar4 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar5 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar5,uVar9,0,IVar6,pvVar4);
  __Block_release(pvVar4);
  uVar9 = *(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::appearanceObserver);
  *(ID *)(unaff_x20 + _TtC7Wallper15PlaylistManager::appearanceObserver) = IVar5;
  _swift_unknownObjectRelease(uVar9);
  return;
}

