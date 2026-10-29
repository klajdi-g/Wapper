// rea decompile_all
// name: FUN_1003f751c
// address: 0x1003f751c
// body: available
// range: 0x1003f751c-0x1003f769f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f751c(void)

{
  long lVar1;
  undefined8 uVar2;
  ID self;
  ID IVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *local_58;
  code *local_50;
  undefined *local_48;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100559a20 != -1) {
    _swift_once(&DAT_100559a20,FUN_100295af4);
  }
  uVar2 = DAT_100577de0;
  IVar3 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar4 = &DAT_10053e700;
  _swift_allocObject(&DAT_10053e700,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  local_50 = FUN_1003fce04;
  local_70 = PTR___NSConcreteStackBlock_100521110;
  local_68 = 0x42000000;
  local_60 = FUN_100177b88;
  local_58 = &DAT_10053e858;
  local_48 = puVar4;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  puVar5 = (undefined *)
           NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                     (self,uVar2,0,IVar3,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar5;
  _swift_getObjectType();
  lVar1 = _TtC7Wallper11AppDelegate::networkObserver;
  local_70 = puVar5;
  local_58 = puVar4;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper11AppDelegate::networkObserver,auStack_88,0x21,0);
  FUN_1000d4f50(&local_70,unaff_x20 + lVar1);
  _swift_endAccess(auStack_88);
  return;
}

