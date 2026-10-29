// rea decompile_all
// name: FUN_1000fe76c
// address: 0x1000fe76c
// body: available
// range: 0x1000fe76c-0x1000fe8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000fe76c(void)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar1 = &_OBJC_CLASS___NSCache;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(ID *)(unaff_x20 + 0x10) = IVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  objc_stub::setCountLimit_(IVar2,300);
  objc_stub::setTotalCostLimit_(*(ID *)(unaff_x20 + 0x10),0x6000000);
  puVar1 = &_OBJC_CLASS___NSURLCache;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithMemoryCapacity_diskCapacity_diskPath_((ID)puVar1,0xa00000,0x1e00000,0);
  NSURLCache::setSharedURLCache_((ID)&_OBJC_CLASS___NSURLCache,IVar2);
  IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar4 = *(undefined8 *)PTR__NSApplicationDidChangeOcclusionStateNotification_1005212e0;
  IVar3 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar1 = &DAT_10052b7b8;
  _swift_allocObject(&DAT_10052b7b8,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  local_50 = FUN_1000fed9c;
  local_70 = PTR___NSConcreteStackBlock_100521110;
  local_68 = 0x42000000;
  local_60 = FUN_100177b88;
  puStack_58 = &DAT_10052b7d0;
  local_48 = puVar1;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  IVar2 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar2,uVar4,0,IVar3,aBlock);
  _swift_unknownObjectRelease(IVar2);
  __Block_release(aBlock);
  return;
}

