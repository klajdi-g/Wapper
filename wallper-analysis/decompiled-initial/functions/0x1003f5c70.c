// rea decompile_all
// name: FUN_1003f5c70
// address: 0x1003f5c70
// body: available
// range: 0x1003f5c70-0x1003f6497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f5c70(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ID IVar6;
  NSString *pNVar7;
  undefined8 uVar8;
  ID IVar9;
  NSString *pNVar10;
  void *aBlock;
  undefined *puVar11;
  TaskPriority TVar12;
  MainActor *pMVar13;
  undefined8 *puVar14;
  long extraout_x8;
  MainActor *unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined *local_68;
  
  puVar5 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = auStack_a8 + (-8 - extraout_x8);
  if (((byte)unaff_x20[_TtC7Wallper11AppDelegate::didSetUpUI] & 1) == 0) {
    unaff_x20[_TtC7Wallper11AppDelegate::didSetUpUI] = (MainActor)0x1;
    FUN_1003f42cc();
    uVar17 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::playlistManager);
    FUN_10021a4c8(uVar17);
    _swift_release(puVar5);
    FUN_1003f9e88();
    IVar6 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar6 = NSUserDefaults::boolForKey_(IVar6,pNVar7);
    if ((int)IVar6 != 0) {
      IVar6 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar6 = NSUserDefaults::boolForKey_(IVar6,pNVar7);
      if (((int)IVar6 != 0) && (DAT_1005564c0 != -1)) {
        _swift_once(&DAT_1005564c0,FUN_10017806c);
      }
    }
    FUN_1003f8958();
    if (DAT_100553ec8 != -1) {
      _swift_once(&DAT_100553ec8,FUN_100129ff8);
    }
    lVar3 = DAT_100577c30;
    uVar20 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::videoLibrary);
    uVar16 = *(undefined8 *)
              (unaff_x20 + _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager);
    uVar19 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::previewManager);
    uVar15 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::applicationManager);
    uVar18 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::updateManager);
    puVar14 = (undefined8 *)(DAT_100577c30 + _TtC7Wallper17MenuBarController::onOpenMain);
    uVar8 = *puVar14;
    uVar1 = puVar14[1];
    *puVar14 = FUN_1003f6498;
    puVar14[1] = 0;
    _swift_retain(uVar16);
    FUN_10002f6dc(uVar8,uVar1);
    puVar14 = (undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::onQuit);
    uVar8 = *puVar14;
    uVar1 = puVar14[1];
    *puVar14 = FUN_1003f64e4;
    puVar14[1] = 0;
    FUN_10002f6dc(uVar8,uVar1);
    uVar8 = *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::videoLibrary);
    *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::videoLibrary) = uVar20;
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::shuffleManager);
    *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::shuffleManager) = uVar16;
    _swift_retain(uVar20);
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::previewManager);
    *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::previewManager) = uVar19;
    _swift_retain(uVar16);
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::applicationManager);
    *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::applicationManager) = uVar15;
    _swift_retain(uVar19);
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::updateManager);
    *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::updateManager) = uVar18;
    _swift_retain(uVar15);
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::playlistManager);
    *(undefined8 *)(lVar3 + _TtC7Wallper17MenuBarController::playlistManager) = uVar17;
    _swift_retain(uVar18);
    _swift_release(uVar8);
    _swift_retain(uVar17);
    IVar6 = NSStatusBar::systemStatusBar((ID)&_OBJC_CLASS___NSStatusBar);
    IVar6 = NSStatusBar::statusItemWithLength_(IVar6,0xbff0000000000000);
    *(ID *)(lVar3 + _TtC7Wallper17MenuBarController::statusItem) = IVar6;
    IVar6 = NSStatusBar::button(IVar6);
    if (IVar6 != 0) {
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar9 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar7);
      if (IVar9 == 0) {
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar9 = NSImage::imageWithSystemSymbolName_accessibilityDescription_
                          ((ID)&_OBJC_CLASS___NSImage,pNVar7,pNVar10);
        NSStatusBar::setImage_(IVar6,IVar9);
        IVar9 = NSStatusBar::image(IVar6);
        NSStatusBar::setTemplate_(IVar9,1);
      }
      else {
        NSImage::setSize_(IVar9,0x4034000000000000,0x4034000000000000);
        NSImage::setTemplate_(IVar9,1);
        NSStatusBar::setImage_(IVar6,IVar9);
      }
      NSStatusBar::setTarget_(IVar6,lVar3);
      NSStatusBar::setAction_(IVar6,"togglePanel:");
    }
    lVar2 = _TtC7Wallper17MenuBarController::popover;
    objc_stub::setBehavior_(*(ID *)(lVar3 + _TtC7Wallper17MenuBarController::popover),1);
    objc_stub::setAnimates_(*(ID *)(lVar3 + lVar2),1);
    objc_stub::setContentSize_(*(ID *)(lVar3 + lVar2),0x4073800000000000,0x4082200000000000);
    IVar9 = *(ID *)(lVar3 + lVar2);
    IVar6 = NSAppearance::appearanceNamed_
                      ((ID)&_OBJC_CLASS___NSAppearance,
                       *(undefined8 *)PTR__NSAppearanceNameDarkAqua_1005212d8);
    objc_stub::setAppearance_(IVar9,IVar6);
    objc_stub::setDelegate_(*(ID *)(lVar3 + lVar2),lVar3);
    IVar6 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100557aa8 != -1) {
      _swift_once(&DAT_100557aa8,FUN_100255f78);
    }
    uVar17 = DAT_100577d40;
    IVar9 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
    puVar5 = &DAT_10053e9d0;
    _swift_allocObject(&DAT_10053e9d0,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10,lVar3);
    local_70 = FUN_1003fcf6c;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_100177b88;
    local_78 = &DAT_10053e9e8;
    local_68 = puVar5;
    aBlock = __Block_copy(&local_90);
    _swift_release(local_68);
    puVar11 = (undefined *)
              NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                        (IVar6,uVar17,0,IVar9,aBlock);
    __Block_release(aBlock);
    puVar5 = puVar11;
    _swift_getObjectType();
    lVar2 = _TtC7Wallper17MenuBarController::wallpaperObserver;
    local_90 = puVar11;
    local_78 = puVar5;
    _swift_beginAccess(lVar3 + _TtC7Wallper17MenuBarController::wallpaperObserver,auStack_a8,0x21,0)
    ;
    FUN_1000d4f50(&local_90,lVar3 + lVar2);
    _swift_endAccess(auStack_a8);
    _swift_release(uVar16);
    puVar5 = &DAT_100436d98;
    _swift_getKeyPath(&DAT_100436d98);
    puVar11 = &DAT_100436dc0;
    _swift_getKeyPath(&DAT_100436dc0);
    Combine::Published::_get_subscript(&local_90,uVar15,puVar5,puVar11);
    _swift_release(puVar5);
    _swift_release(puVar11);
    if ((char)local_90 == '\x01') {
      FUN_10012b91c(1);
      FUN_1003f6ee0();
    }
    FUN_1003f8108();
    FUN_1001363e4();
    TVar12 = Swift::TaskPriority::typeMetadataAccessor();
    puVar4 = local_b0;
    (**(code **)(*(long *)(TVar12.unknown + -8) + 0x38))(local_b0,1,1,TVar12.unknown);
    pMVar13 = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_1005246d8;
    pMVar13 = Swift::MainActor::get_shared(pMVar13,unaff_x20);
    puVar14 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar5 = &DAT_10053ea20;
    _swift_allocObject(&DAT_10053ea20,0x28,7);
    *(MainActor **)(puVar5 + 0x10) = pMVar13;
    *(undefined8 **)(puVar5 + 0x18) = puVar14;
    *(MainActor **)(puVar5 + 0x20) = unaff_x20;
    FUN_1001b1e74(0,0,puVar4,&DAT_100436de8,puVar5);
    _swift_release();
  }
  return;
}

