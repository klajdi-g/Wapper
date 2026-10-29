// rea decompile_all
// name: FUN_100181c10
// address: 0x100181c10
// body: available
// range: 0x100181c10-0x100181e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100181c10(void)

{
  undefined *puVar1;
  ID IVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  IVar2 = NSDistributedNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar7 = &DAT_100530458;
  puVar5 = puVar7;
  _swift_allocObject(&DAT_100530458,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_100521110;
  local_80 = FUN_1001b00e8;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_1005305d8;
  local_78 = puVar5;
  pvVar6 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar4 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar2,pNVar3,0,IVar4,pvVar6);
  _swift_unknownObjectRelease(IVar4);
  __Block_release(pvVar6);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  _swift_allocObject(&DAT_100530458,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  local_80 = FUN_1001b0110;
  local_a0 = puVar1;
  local_98 = 0x42000000;
  local_90 = FUN_100177b88;
  puStack_88 = &DAT_100530600;
  local_78 = puVar7;
  pvVar6 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar2 = NSDistributedNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar2,pNVar3,0,IVar4,pvVar6);
  _swift_unknownObjectRelease(IVar2);
  __Block_release(pvVar6);
  return 0;
}

