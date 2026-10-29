// rea decompile_all
// name: FUN_1001c2e20
// address: 0x1001c2e20
// body: available
// range: 0x1001c2e20-0x1001c3417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001c2e20(undefined8 param_1)

{
  ulong uVar1;
  Calendar CVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  Calendar CVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  Date DVar10;
  undefined *puVar11;
  NSDate *pNVar12;
  void *aBlock;
  ID self;
  ID self_00;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  CVar2 = Foundation::Calendar::typeMetadataAccessor();
  lVar13 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar22 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = 0;
  local_f8 = (undefined *)(lVar15 - extraout_x12_00);
  FUN_10025ee04();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (lVar15 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar21 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_108 = _TtC7Wallper15PlaylistManager::transitionTimer;
  lVar4 = lVar16 - extraout_x12_02;
  if (*(ID *)(unaff_x20 + _TtC7Wallper15PlaylistManager::transitionTimer) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + _TtC7Wallper15PlaylistManager::transitionTimer));
  }
  *(undefined8 *)(unaff_x20 + local_108) = 0;
  puVar9 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar5 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  Combine::Published::_get_subscript(&local_98);
  _swift_release(puVar9);
  _swift_release(puVar5);
  lVar20 = *(long *)(local_98 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar20 != 0) {
    puVar5 = local_98 +
             ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
    lVar18 = *(long *)(lVar18 + 0x48);
    do {
      CVar6.unknown = puVar5;
      FUN_100029504(puVar5,lVar17,FUN_10025ee04);
      Foundation::Calendar::get_current(CVar6);
      FUN_1001d8ca0(lVar21,param_1,puVar22);
      (**(code **)(lVar13 + 8))(puVar22,CVar2.unknown);
      FUN_100029548(lVar17,FUN_10025ee04);
      lVar7 = lVar21;
      (**(code **)(lVar14 + 0x30))(lVar21,1,DVar3.unknown);
      if ((int)lVar7 == 1) {
        FUN_10002a29c(lVar21,&DAT_10054b950,&DAT_10041d870);
      }
      else {
        pcVar19 = *(code **)(lVar14 + 0x20);
        (*pcVar19)(lVar15,lVar21,DVar3.unknown);
        puVar11 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar11 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1001c8094(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,&DAT_100554250,&DAT_100426ea0,
                        PTR_typeMetadataAccessor_100520b80,PTR__swift_bridgeObjectRelease_100524200)
          ;
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1001c8094(puVar9,uVar1 + 1,1,puVar8,&DAT_100554250,&DAT_100426ea0,
                        PTR_typeMetadataAccessor_100520b80,PTR__swift_bridgeObjectRelease_100524200)
          ;
        }
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        (*pcVar19)(puVar9 + *(long *)(lVar14 + 0x48) * uVar1 +
                            ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)),lVar15,
                   DVar3.unknown);
      }
      puVar5 = puVar5 + lVar18;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  _swift_bridgeObjectRelease(local_98);
  FUN_1001c3418(lVar4,puVar9);
  _swift_bridgeObjectRelease(puVar9);
  FUN_1000087e4(lVar4,lVar16,&DAT_10054b950,&DAT_10041d870);
  lVar13 = lVar16;
  (**(code **)(lVar14 + 0x30))(lVar16,1,DVar3.unknown);
  puVar9 = local_f8;
  if ((int)lVar13 == 1) {
    FUN_10002a29c(lVar4,&DAT_10054b950,&DAT_10041d870);
    FUN_10002a29c(lVar16,&DAT_10054b950,&DAT_10041d870);
  }
  else {
    DVar10.unknown = local_f8;
    (**(code **)(lVar14 + 0x20))(local_f8,lVar16,DVar3.unknown);
    lVar13 = local_100;
    Foundation::Date::addingTimeInterval(1.0,DVar10);
    puVar5 = &DAT_100531580;
    _swift_allocObject(&DAT_100531580,0x18,7);
    _swift_weakInit(puVar5 + 0x10,unaff_x20);
    puVar11 = &_OBJC_CLASS___NSTimer;
    _objc_allocWithZone();
    DVar10.unknown = puVar5;
    _swift_retain();
    pNVar12 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    local_78 = FUN_1001d3f88;
    local_98 = PTR___NSConcreteStackBlock_100521110;
    local_90 = 0x42000000;
    local_88 = FUN_10016802c;
    puStack_80 = &DAT_100531598;
    local_70 = puVar5;
    aBlock = __Block_copy(&local_98);
    self = objc_stub::initWithFireDate_interval_repeats_block_((ID)puVar11,0,pNVar12,0,aBlock);
    __Block_release(aBlock);
    pcVar19 = *(code **)(lVar14 + 8);
    (*pcVar19)(lVar13,DVar3.unknown);
    puVar11 = local_70;
    _swift_release(puVar5);
    _swift_release(puVar11);
    objc_stub::setTolerance_(self,0x3ff0000000000000);
    self_00 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    NSRunLoop::addTimer_forMode_(self_00,self,*(undefined8 *)PTR__NSRunLoopCommonModes_100521578);
    (*pcVar19)(puVar9,DVar3.unknown);
    FUN_10002a29c(lVar4,&DAT_10054b950,&DAT_10041d870);
    *(ID *)(unaff_x20 + local_108) = self;
  }
  return;
}

