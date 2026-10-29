// rea decompile_all
// name: FUN_1000d4868
// address: 0x1000d4868
// body: available
// range: 0x1000d4868-0x1000d4a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d4868(void)

{
  long lVar1;
  undefined **ppuVar2;
  ID IVar3;
  undefined *puVar4;
  void *aBlock;
  ID unaff_x20;
  undefined1 auStack_d8 [24];
  undefined *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"viewDidMoveToWindow");
  lVar1 = _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::monitor;
  _swift_beginAccess(unaff_x20 +
                     _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::
                     monitor,auStack_68,0,0);
  FUN_1000087e4(unaff_x20 + lVar1,&local_90,&DAT_10054d428,&DAT_100420300);
  if (local_78 == 0) {
    FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_90,&local_c0);
    ppuVar2 = &local_c0;
    FUN_100007bd0(ppuVar2,local_a8);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,ppuVar2);
    _swift_unknownObjectRelease(ppuVar2);
    FUN_100043f24(&local_c0);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_beginAccess(unaff_x20 + lVar1,auStack_d8,0x21,0);
    FUN_1000d4f50(&local_90,unaff_x20 + lVar1);
    _swift_endAccess(auStack_d8);
  }
  IVar3 = objc_stub::window(unaff_x20);
  if (IVar3 != 0) {
    puVar4 = &DAT_100529ad0;
    _swift_allocObject(&DAT_100529ad0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    local_a0 = FUN_1000d4f2c;
    local_c0 = PTR___NSConcreteStackBlock_100521110;
    uStack_b8 = 0x42000000;
    local_b0 = FUN_10025a364;
    local_a8 = &DAT_100529ae8;
    local_98 = puVar4;
    aBlock = __Block_copy(&local_c0);
    _swift_release(local_98);
    IVar3 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                      ((ID)&_OBJC_CLASS___NSEvent,0x400000,aBlock);
    __Block_release(aBlock);
    if (IVar3 == 0) {
      uStack_b8 = 0;
      local_c0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      local_b0 = (code *)0x0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar3);
    }
    _swift_beginAccess(unaff_x20 + lVar1,&local_90,0x21,0);
    FUN_1000d4f50(&local_c0,unaff_x20 + lVar1);
    _swift_endAccess(&local_90);
  }
  return;
}

