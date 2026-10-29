// rea decompile_all
// name: FUN_1003af924
// address: 0x1003af924
// body: available
// range: 0x1003af924-0x1003afb17 inclusive
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

undefined8 FUN_1003af924(void)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  ID self;
  ID IVar4;
  undefined *puVar5;
  void *aBlock;
  long lVar6;
  ID unaff_x20;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"viewDidMoveToWindow");
  lVar1 = _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::resizeObserver
  ;
  lVar6 = *(long *)(unaff_x20 +
                   _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::
                   resizeObserver);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    _swift_unknownObjectRetain(lVar6);
    IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::removeObserver_(IVar2,lVar6);
    _swift_unknownObjectRelease(lVar6);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_unknownObjectRelease(uVar3);
  IVar2 = objc_stub::window(unaff_x20);
  if (IVar2 != 0) {
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    uVar3 = *(undefined8 *)PTR__NSWindowDidResizeNotification_100521328;
    IVar4 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar5 = &DAT_10053cf48;
    _swift_allocObject(&DAT_10053cf48,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    local_70 = FUN_1003afd48;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_100177b88;
    puStack_78 = &DAT_10053cf60;
    local_68 = puVar5;
    aBlock = __Block_copy(&local_90);
    _swift_release(local_68);
    IVar2 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                      (self,uVar3,IVar2,IVar4,aBlock);
    __Block_release(aBlock);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
    _swift_unknownObjectRelease(uVar3);
    FUN_1003af4a4();
  }
  return 0;
}

