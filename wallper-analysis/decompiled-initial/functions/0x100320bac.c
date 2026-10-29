// rea decompile_all
// name: FUN_100320bac
// address: 0x100320bac
// body: available
// range: 0x100320bac-0x100320ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100320c08 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100320bac(undefined8 param_1,undefined8 param_2,ID param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar9;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar2 = _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
          scrollView;
  lVar3 = unaff_x20 +
          _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
          scrollView;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 == 0) {
    IVar4 = param_3;
    _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSScrollView);
    while (IVar4 == 0) {
      param_3 = objc_stub::superview(param_3);
      if (param_3 == 0) goto LAB_100320c80;
      IVar4 = param_3;
      _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSScrollView);
    }
    _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,IVar4);
    IVar4 = objc_stub::contentView(IVar4);
    _swift_unknownObjectWeakAssign
              (unaff_x20 +
               _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator
               ::contentView,IVar4);
LAB_100320c80:
    IVar4 = unaff_x20 +
            _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
            contentView;
    _swift_unknownObjectWeakLoadStrong();
    if (IVar4 != 0) {
      objc_stub::setPostsBoundsChangedNotifications_(IVar4,1);
      lVar3 = _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
              observer;
      if (*(long *)(unaff_x20 +
                   _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator
                   ::observer) == 0) {
        IVar5 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
        uVar9 = *(undefined8 *)PTR__NSViewBoundsDidChangeNotification_100521318;
        IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
        puVar7 = &DAT_10053ad38;
        _swift_allocObject(&DAT_10053ad38,0x18,7);
        _swift_unknownObjectWeakInit(puVar7 + 0x10);
        puVar8 = &DAT_10053ad60;
        _swift_allocObject(&DAT_10053ad60,0x20,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(ID *)(puVar8 + 0x18) = IVar4;
        local_80 = FUN_10032c9ac;
        local_a0 = PTR___NSConcreteStackBlock_100521110;
        local_98 = 0x42000000;
        local_90 = FUN_100177b88;
        puStack_88 = &DAT_10053ad78;
        local_78 = puVar8;
        aBlock = __Block_copy(&local_a0);
        _swift_release(local_78);
        IVar5 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                          (IVar5,uVar9,IVar4,IVar6,aBlock);
        __Block_release(aBlock);
        uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
        *(ID *)(unaff_x20 + lVar3) = IVar5;
        _swift_unknownObjectRelease(uVar9);
      }
      objc_stub::bounds(IVar4);
      *(undefined8 *)
       (unaff_x20 +
       _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
       lastReportedOffset) = param_2;
      pcVar1 = *(code **)(unaff_x20 +
                         _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator
                         ::onChange);
      uVar9 = ((undefined8 *)
              (unaff_x20 +
              _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
              onChange))[1];
      _swift_retain(uVar9);
      (*pcVar1)(param_2);
      _swift_release(uVar9);
      return 0;
    }
  }
  return 0;
}

