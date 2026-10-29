// rea decompile_all
// name: FUN_1001b7020
// address: 0x1001b7020
// body: available
// range: 0x1001b7020-0x1001b734b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b7020(void)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  ID self;
  ID self_00;
  undefined *puVar5;
  long unaff_x20;
  _ArrayBuffer _Var6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  if (*(ID *)(unaff_x20 + _TtC7Wallper15PlaylistManager::clockTimer) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + _TtC7Wallper15PlaylistManager::clockTimer));
  }
  IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar4 = NSWorkspace::notificationCenter(IVar4);
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  self_00 = NSDistributedNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter);
  lVar2 = _TtC7Wallper15PlaylistManager::observers;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper15PlaylistManager::observers,auStack_78,0,0);
  _Var6.unknown = *(undefined **)(unaff_x20 + lVar2);
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var1.unknown = _Var6.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar7 != 0) {
    if (lVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b734c);
      (*pcVar3)();
    }
    _swift_bridgeObjectRetain(_Var6.unknown);
    lVar8 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        lVar9 = *(long *)(_Var6.unknown + lVar8 * 8 + 0x20);
        _swift_unknownObjectRetain(lVar9);
      }
      else {
        lVar9 = lVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(lVar8,_Var6);
      }
      lVar8 = lVar8 + 1;
      NSWorkspace::removeObserver_(IVar4,lVar9);
      NSNotificationCenter::removeObserver_(self,lVar9);
      NSDistributedNotificationCenter::removeObserver_(self_00,lVar9);
      _swift_unknownObjectRelease(lVar9);
    } while (lVar7 != lVar8);
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  lVar7 = _TtC7Wallper15PlaylistManager::_playlists;
  puVar5 = &DAT_1005569e0;
  FUN_100002f94(&DAT_1005569e0,&DAT_10042aae0);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar7,puVar5);
  lVar7 = _TtC7Wallper15PlaylistManager::_activePlaylistID;
  puVar5 = &DAT_1005569d8;
  FUN_100002f94(&DAT_1005569d8,&DAT_10042aad8);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar7,puVar5);
  lVar7 = _TtC7Wallper15PlaylistManager::_isQueueOff;
  puVar5 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar7,puVar5);
  lVar7 = _TtC7Wallper15PlaylistManager::_scheduleTick;
  puVar5 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar7,puVar5);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::queueSourceChanged));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::activationChanged));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::playingSectionChanged));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar2));
  _swift_unknownObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::appearanceObserver));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::appearanceSettle));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper15PlaylistManager::lastActiveSections));
  return;
}

