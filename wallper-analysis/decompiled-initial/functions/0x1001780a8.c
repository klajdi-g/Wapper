// rea decompile_all
// name: FUN_1001780a8
// address: 0x1001780a8
// body: available
// range: 0x1001780a8-0x100178593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001780a8(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  NSString *pNVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  TaskPriority TVar7;
  Task TVar8;
  undefined8 uVar9;
  Published *pPVar10;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong local_80 [6];
  
  puVar11 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)local_80 - extraout_x8;
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  puVar11 = &DAT_100429b50;
  puVar2 = puVar11;
  _swift_getKeyPath(&DAT_100429b50);
  puVar5 = &DAT_100429b78;
  puVar3 = puVar5;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(local_80);
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar13 = local_80[0] & 0xff;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(self,uVar13,pNVar4);
  _swift_getKeyPath(&DAT_100429b50);
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(local_80);
  _swift_release(puVar11);
  _swift_release(puVar5);
  if ((char)local_80[0] == '\x01') {
    if (DAT_100561128 != -1) {
      _swift_once(&DAT_100561128,FUN_1003f3f80);
    }
    puVar11 = &DAT_100577e38;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar11 != (undefined *)0x0) {
      FUN_1003f42cc();
      FUN_100216c54(0);
      _swift_release(puVar11);
    }
    pPVar10 = (Published *)&DAT_100429b98;
    _swift_getKeyPath(&DAT_100429b98);
    _swift_getKeyPath(&DAT_100429bc0);
    local_80[0] = CONCAT71(local_80[0]._1_7_,1);
    _swift_retain();
    Combine::Published::_set_subscript(pPVar10,local_80);
    FUN_100178594();
    FUN_100178f10();
    uVar13 = 0x73754d656c707061;
    FUN_10017e6a4(0x73754d656c707061,0xea00000000006369);
    TVar6.unknown = (undefined *)0x796669746f7073;
    FUN_10017e6a4(0x796669746f7073,0xe700000000000000);
    if (((uVar13 & 1) != 0) || (((ulong)TVar6.unknown & 1) != 0)) {
      Swift::TaskPriority::get_userInitiated(TVar6);
      TVar7 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar12,0,1,TVar7.unknown);
      puVar11 = &DAT_100530430;
      _swift_allocObject(&DAT_100530430,0x30,7);
      *(undefined8 *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      puVar11[0x20] = (byte)uVar13 & 1;
      puVar11[0x21] = (byte)TVar6.unknown & 1;
      *(long *)(puVar11 + 0x28) = unaff_x20;
      _swift_retain();
      FUN_100176d50(0,0,lVar12,&DAT_100429c30,puVar11);
      _swift_release();
      FUN_10002a29c(lVar12,&DAT_100561090,&DAT_10041c870);
    }
    if (*(long *)(*(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) + 0x10
                 ) == 0x10) {
      FUN_1001790d4(1);
      *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrShowingMusic) = 1;
    }
  }
  else {
    if (DAT_100555688 != -1) {
      _swift_once(&DAT_100555688,FUN_1001646dc);
    }
    FUN_100168078();
    lVar12 = _TtC7Wallper17NowPlayingManager::clockCheckTask;
    puVar11 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::clockCheckTask);
    if (puVar11 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      TVar8.unknown = puVar11;
      _swift_retain();
      Swift::Task::cancel(TVar8);
      _swift_release(puVar11);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar12);
    }
    *(undefined8 *)(unaff_x20 + lVar12) = 0;
    _swift_release(uVar9);
    *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mediaRemoteActive) = 0;
    pPVar10 = (Published *)&DAT_100429b98;
    _swift_getKeyPath(&DAT_100429b98);
    _swift_getKeyPath(&DAT_100429bc0);
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar10,local_80);
    pPVar10 = (Published *)&DAT_100429be0;
    _swift_getKeyPath(&DAT_100429be0);
    _swift_getKeyPath(&DAT_100429c08);
    local_80[0] = CONCAT71(local_80[0]._1_7_,4);
    _swift_retain();
    Combine::Published::_set_subscript(pPVar10,local_80);
    pPVar10 = (Published *)&DAT_100429b00;
    _swift_getKeyPath(&DAT_100429b00);
    _swift_getKeyPath(&DAT_100429b28);
    local_80[3] = 0;
    local_80[2] = 0;
    local_80[5] = 0;
    local_80[4] = 0;
    local_80[1] = 0;
    local_80[0] = 0;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar10,local_80);
    *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrShowingMusic) = 0;
    lVar1 = _TtC7Wallper17NowPlayingManager::standDownRestoresLockScreen;
    lVar12 = _TtC7Wallper17NowPlayingManager::standDownScreens;
    uVar9 = *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownScreens);
    _swift_bridgeObjectRetain(uVar9);
    FUN_10017ac3c();
    _swift_bridgeObjectRelease(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar12);
    *(undefined **)(unaff_x20 + lVar12) = PTR___swiftEmptySetSingleton_1005241a0;
    _swift_bridgeObjectRelease(uVar9);
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
  }
  return;
}

