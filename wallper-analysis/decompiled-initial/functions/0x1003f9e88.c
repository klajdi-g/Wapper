// rea decompile_all
// name: FUN_1003f9e88
// address: 0x1003f9e88
// body: available
// range: 0x1003f9e88-0x1003fa0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f9e88(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined *local_68;
  
  IVar2 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar2 = NSWorkspace::notificationCenter(IVar2);
  uVar7 = *(undefined8 *)PTR__NSWorkspaceActiveSpaceDidChangeNotification_100521330;
  IVar3 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar6 = PTR___NSConcreteStackBlock_100521110;
  local_70 = FUN_1003fa0b8;
  local_68 = (undefined *)0x0;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_100177b88;
  local_78 = &DAT_10053e6c8;
  pvVar4 = __Block_copy(&local_90);
  IVar2 = NSWorkspace::addObserverForName_object_queue_usingBlock_(IVar2,uVar7,0,IVar3,pvVar4);
  _swift_unknownObjectRelease(IVar2);
  __Block_release(pvVar4);
  IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar7 = *(undefined8 *)PTR__NSApplicationDidChangeScreenParametersNotification_1005212e8;
  IVar3 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar5 = &DAT_10053e700;
  _swift_allocObject(&DAT_10053e700,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  local_70 = FUN_1003fa3a4;
  local_90 = puVar6;
  local_88 = 0x42000000;
  local_80 = FUN_100177b88;
  local_78 = &DAT_10053e718;
  local_68 = puVar5;
  pvVar4 = __Block_copy(&local_90);
  _swift_release(local_68);
  puVar6 = (undefined *)
           NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                     (IVar2,uVar7,0,IVar3,pvVar4);
  __Block_release(pvVar4);
  puVar5 = puVar6;
  _swift_getObjectType();
  lVar1 = _TtC7Wallper11AppDelegate::screenChangeObserver;
  local_90 = puVar6;
  local_78 = puVar5;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper11AppDelegate::screenChangeObserver,auStack_a8,0x21,0);
  FUN_1000d4f50(&local_90,unaff_x20 + lVar1);
  _swift_endAccess(auStack_a8);
  return;
}

