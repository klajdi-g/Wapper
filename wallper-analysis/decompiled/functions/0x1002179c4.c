// rea decompile_all
// name: FUN_1002179c4
// address: 0x1002179c4
// body: available
// range: 0x1002179c4-0x100217d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100217c20 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002179c4(void)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID IVar6;
  SchedulerOptions SVar7;
  TimerPublisher *pTVar8;
  TimerPublisher *pTVar9;
  long extraout_x8;
  undefined8 uVar10;
  long unaff_x20;
  AnyCancellable *pAVar11;
  undefined1 *puVar12;
  undefined1 auStack_70 [8];
  TimerPublisher *local_68;
  
  puVar3 = &DAT_1005610e0;
  FUN_100002f94(&DAT_1005610e0,&DAT_10042b5d0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::timerCancellable;
  puVar12 = auStack_70 + -extraout_x8;
  pAVar11 = *(AnyCancellable **)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::timerCancellable);
  if (pAVar11 == (AnyCancellable *)0x0) {
    uVar4 = 0;
  }
  else {
    _swift_retain(pAVar11);
    Combine::AnyCancellable::cancel(pAVar11);
    _swift_release(pAVar11);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar4);
  puVar3 = &DAT_10042b4b0;
  _swift_getKeyPath(&DAT_10042b4b0);
  puVar5 = &DAT_10042b4d8;
  _swift_getKeyPath(&DAT_10042b4d8);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar3);
  _swift_release(puVar5);
  if ((byte)local_68 == 1) {
    puVar3 = &DAT_10042b540;
    _swift_getKeyPath(&DAT_10042b540);
    puVar5 = &DAT_10042b568;
    _swift_getKeyPath(&DAT_10042b568);
    Combine::Published::_get_subscript(&local_68);
    _swift_release(puVar3);
    _swift_release(puVar5);
    if ((byte)local_68 != 0) {
      puVar3 = &DAT_10042b540;
      _swift_getKeyPath(&DAT_10042b540);
      puVar5 = &DAT_10042b568;
      _swift_getKeyPath(&DAT_10042b568);
      Combine::Published::_get_subscript(&local_68);
      _swift_release(puVar3);
      _swift_release(puVar5);
      if ((byte)local_68 < 3) {
        if ((byte)local_68 == 0) {
          return;
        }
        uVar4 = 0x4072c00000000000;
        bVar2 = (byte)local_68 == 1;
        uVar10 = 0x4082c00000000000;
      }
      else {
        uVar4 = 0x408c200000000000;
        uVar10 = 0x409c200000000000;
        if ((byte)local_68 != 4) {
          uVar10 = 0x40ac200000000000;
        }
        bVar2 = (byte)local_68 == 3;
      }
      if (!bVar2) {
        uVar4 = uVar10;
      }
      FUN_100044230(0,&DAT_100557548,&PTR__OBJC_CLASS___NSTimer_10053fbb0);
      IVar6 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
      uVar10 = *(undefined8 *)PTR__NSRunLoopCommonModes_100521578;
      SVar7 = SchedulerOptions::_typeMetadataAccessor();
      (**(code **)(*(long *)(SVar7.unknown + -8) + 0x38))(puVar12,1,1,SVar7.unknown);
      pTVar8 = (extension_Foundation)::__C::NSTimer::_publish
                         (uVar4,SVar7.unknown,1,IVar6,uVar10,puVar12);
      FUN_10002a29c(puVar12,&DAT_1005610e0,&DAT_10042b5d0);
      local_68 = pTVar8;
      pTVar9 = TimerPublisher::_typeMetadataAccessor();
      FUN_1000036d0(&DAT_100557550,PTR__typeMetadataAccessor_100520f10,
                    PTR__Foundation__TimerPublisher_>Combine__ConnectablePublisher_100520f08);
      (extension_Combine)::Combine::ConnectablePublisher::_autoconnect();
      _swift_release(pTVar8);
      puVar3 = &DAT_1005333a8;
      local_68 = pTVar9;
      _swift_allocObject(&DAT_1005333a8,0x18,7);
      _swift_weakInit(puVar3 + 0x10);
      FUN_100002f94(&DAT_100557558,&DAT_10042b5d8);
      FUN_1000087a0(&DAT_100557560,&DAT_100557558,&DAT_10042b5d8,
                    PTR__Combine__protocol_conformance_descriptor_for_Combine_Publishers_Autoconnect<A>___Combine_Publisher_in_Combine_>Combine__Publisher_100521390
                   );
      pAVar11 = (extension_Combine)::Combine::Publisher::_sink();
      _swift_release(pTVar9);
      _swift_release(puVar3);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(AnyCancellable **)(unaff_x20 + lVar1) = pAVar11;
      _swift_release(uVar4);
    }
  }
  return;
}

