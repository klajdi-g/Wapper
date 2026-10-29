// rea decompile_all
// name: FUN_1001524f4
// address: 0x1001524f4
// body: available
// range: 0x1001524f4-0x1001528cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001524f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  NSString *pNVar4;
  ID IVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x20;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x10) = IVar3;
  *(undefined2 *)(unaff_x20 + 0x18) = 0;
  IVar3 = NSDistributedNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar2 = &DAT_10052eed8;
  puVar6 = puVar2;
  _swift_allocObject(&DAT_10052eed8,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_100521110;
  local_80 = FUN_1001558bc;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_10052eef0;
  local_78 = puVar6;
  pvVar7 = __Block_copy(&local_a0);
  puVar6 = local_78;
  _swift_retain();
  _swift_release(puVar6);
  IVar5 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar3,pNVar4,0,IVar5,pvVar7);
  _swift_unknownObjectRelease(IVar5);
  __Block_release(pvVar7);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar6 = puVar2;
  _swift_allocObject(&DAT_10052eed8,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  local_80 = FUN_1001558d8;
  local_a0 = puVar1;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_10052ef18;
  local_78 = puVar6;
  pvVar7 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar5 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar3,pNVar4,0,IVar5,pvVar7);
  _swift_unknownObjectRelease(IVar5);
  __Block_release(pvVar7);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar6 = puVar2;
  _swift_allocObject(&DAT_10052eed8,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  local_80 = FUN_1001558f4;
  local_a0 = puVar1;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_10052ef40;
  local_78 = puVar6;
  pvVar7 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar5 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar3,pNVar4,0,IVar5,pvVar7);
  _swift_unknownObjectRelease(IVar5);
  __Block_release(pvVar7);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  _swift_allocObject(&DAT_10052eed8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  _swift_release();
  local_80 = FUN_100155910;
  local_a0 = puVar1;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_10052ef68;
  local_78 = puVar2;
  pvVar7 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar3 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar3,pNVar4,0,IVar5,pvVar7);
  _swift_unknownObjectRelease(IVar3);
  __Block_release(pvVar7);
  return;
}

