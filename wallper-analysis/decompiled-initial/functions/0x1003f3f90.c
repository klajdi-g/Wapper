// rea decompile_all
// name: FUN_1003f3f90
// address: 0x1003f3f90
// body: available
// range: 0x1003f3f90-0x1003f42ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003f40fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_1003f3f90(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  long unaff_x20;
  
  lVar2 = _TtC7Wallper11AppDelegate::licenseManager;
  uVar4 = 0;
  FUN_10014e37c();
  _swift_allocObject();
  FUN_10014a6a0();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _TtC7Wallper11AppDelegate::videoLibrary;
  uVar4 = 0;
  FUN_100279594();
  _swift_allocObject();
  FUN_100279744();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _TtC7Wallper11AppDelegate::deviceManager;
  uVar4 = 0;
  FUN_10013b98c();
  _swift_allocObject();
  FUN_10013baec();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _TtC7Wallper11AppDelegate::previewManager;
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
  }
  uVar4 = DAT_100577cf0;
  *(undefined8 *)(unaff_x20 + lVar2) = DAT_100577cf0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager) = 0;
  lVar2 = _TtC7Wallper11AppDelegate::playlistManager;
  FUN_1001b7378();
  _swift_allocObject();
  _swift_retain();
  FUN_1001b7bec();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _TtC7Wallper11AppDelegate::applicationManager;
  uVar4 = 0;
  FUN_1001373cc();
  _swift_allocObject();
  FUN_1001374fc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar3 = _TtC7Wallper11AppDelegate::updateManager;
  lVar5 = 0;
  FUN_100231228();
  _swift_allocObject();
  lVar2 = _TtC7Wallper13UpdateManager::_updateInfo;
  puVar6 = &DAT_100557788;
  FUN_100002f94(&DAT_100557788,&DAT_10042ba40);
  Combine::Published::init(lVar5 + lVar2,puVar6,puVar6);
  lVar2 = _TtC7Wallper13UpdateManager::_failure;
  puVar6 = &DAT_100561120;
  FUN_100002f94(&DAT_100561120,&DAT_100436ef0);
  Combine::Published::init(lVar5 + lVar2,puVar6,puVar6);
  *(undefined1 *)(lVar5 + _TtC7Wallper13UpdateManager::isUpdating) = 0;
  *(long *)(unaff_x20 + lVar3) = lVar5;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper11AppDelegate::launchedFromLoginItem) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper11AppDelegate::didSetUpUI) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::screenChangeObserver);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined **)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenIDs) =
       PTR___swiftEmptySetSingleton_1005241a0;
  lVar2 = _TtC7Wallper11AppDelegate::knownScreenFrames;
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100007a0c();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::kAskedStartOnLogin);
  *puVar1 = 0xd000000000000011;
  puVar1[1] = 0x80000001004e73f0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::kHasCompletedOnboarding);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x80000001004e41e0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::updateObserver);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::networkObserver);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper11AppDelegate::didReplyToTerminate) = 0;
  FUN_1003fa344();
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  if (DAT_100561128 != -1) {
    _swift_once(&DAT_100561128,FUN_1003f3f80);
  }
  _swift_unknownObjectWeakAssign(&DAT_100577e38,IVar7);
  return IVar7;
}

