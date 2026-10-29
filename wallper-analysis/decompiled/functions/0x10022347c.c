// rea decompile_all
// name: FUN_10022347c
// address: 0x10022347c
// body: available
// range: 0x10022347c-0x100223a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10022347c(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  Date DVar4;
  UUID UVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined1 *puVar16;
  long extraout_x12;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong *puVar24;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  long local_90;
  long local_88;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar16 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar16 - extraout_x12;
  puStack_a0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_10054a9d0;
  local_b0 = lVar15;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  local_98 = lVar15;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  local_88 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  lVar15 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_10054a9c8;
  local_90 = lVar15;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_03;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar23 = lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar23 - extraout_x8_05;
  lVar6 = 0;
  FUN_10025ee04();
  lVar20 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar3 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager;
  _swift_weakLoadStrong();
  if (lVar3 != 0) {
    puVar19 = &DAT_10042b800;
    local_c0 = DVar4.unknown;
    local_b8 = lVar21 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
    _swift_getKeyPath(&DAT_10042b800);
    puVar11 = &DAT_10042b828;
    _swift_getKeyPath(&DAT_10042b828);
    Combine::Published::_get_subscript(lVar15,lVar3,puVar19,puVar11);
    _swift_release(puVar19);
    _swift_release(puVar11);
    lVar7 = lVar15;
    (**(code **)(lVar18 + 0x30))(lVar15,1,UVar5.unknown);
    if ((int)lVar7 == 1) {
      _swift_release(lVar3);
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar20 + 0x38))(lVar21,1,1,lVar6);
    }
    else {
      (**(code **)(lVar18 + 0x20))(lVar23,lVar15,UVar5.unknown);
      FUN_1001b6e74(lVar21,lVar23);
      (**(code **)(lVar18 + 8))(lVar23,UVar5.unknown);
      lVar15 = lVar21;
      (**(code **)(lVar20 + 0x30))(lVar21,1,lVar6);
      lVar6 = local_b8;
      if ((int)lVar15 != 1) {
        lVar18 = local_b8;
        FUN_100007e64(lVar21,local_b8,FUN_10025ee04);
        lVar15 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
        _swift_weakLoadStrong();
        if (lVar15 == 0) {
          FUN_100029548(lVar6,FUN_10025ee04);
          _swift_release(lVar3);
          return (undefined *)0x0;
        }
        local_c8 = lVar15;
        FUN_1002748c4();
        _swift_bridgeObjectRelease();
        lVar20 = local_90;
        DVar4 = Foundation::Date::init();
        lVar6 = local_b0;
        Foundation::Calendar::get_current((Calendar)DVar4.unknown);
        lVar15 = local_98;
        FUN_1001d62f0(local_98,lVar20,lVar6);
        (**(code **)(local_a8 + 8))(lVar6,puStack_a0);
        lVar21 = 0;
        FUN_1001d59ac();
        lVar6 = lVar15;
        (**(code **)(*(long *)(lVar21 + -8) + 0x30))(lVar15,1,lVar21);
        if ((int)lVar6 == 1) {
          FUN_10002a29c(lVar15,&DAT_10054a9d0,&DAT_10041bc60);
          puVar19 = PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          puVar19 = *(undefined **)(lVar15 + *(int *)(lVar21 + 0x24));
          _swift_bridgeObjectRetain(puVar19);
          FUN_100029548(lVar15,FUN_1001d59ac);
        }
        (**(code **)(local_88 + 8))(lVar20,local_c0);
        uVar17 = *(ulong *)(puVar19 + 0x10);
        puVar11 = PTR___swiftEmptyArrayStorage_100524190;
        if (uVar17 != 0) {
          uVar22 = 0;
          puVar24 = (ulong *)(puVar19 + 0x28);
          do {
            if (*(ulong *)(puVar19 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100223a98);
              (*pcVar2)();
            }
            if (*(long *)(lVar18 + 0x10) != 0) {
              uVar8 = puVar24[-1];
              uVar1 = *puVar24;
              _swift_bridgeObjectRetain(uVar1);
              _swift_bridgeObjectRetain(lVar18);
              uVar12 = uVar1;
              FUN_10000464c(uVar8);
              if ((uVar12 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar18);
                _swift_bridgeObjectRelease(uVar1);
              }
              else {
                lVar6 = *(long *)(lVar13 + 0x48);
                FUN_10002f154(*(long *)(lVar18 + 0x38) + lVar6 * uVar8,puVar16);
                _swift_bridgeObjectRelease(lVar18);
                _swift_bridgeObjectRelease(uVar1);
                FUN_100007e64(puVar16,lVar14,FUN_10040211c);
                puVar9 = puVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar10 = puVar11;
                if (((ulong)puVar9 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  FUN_1001c4344(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
                }
                uVar8 = *(ulong *)(puVar10 + 0x10);
                puVar11 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
                  puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  FUN_1001c4344(puVar11,uVar8 + 1,1,puVar10);
                }
                *(ulong *)(puVar11 + 0x10) = uVar8 + 1;
                FUN_100007e64(lVar14,puVar11 + uVar8 * lVar6 +
                                               ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                               ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff
                                               )),FUN_10040211c);
              }
            }
            uVar22 = uVar22 + 1;
            puVar24 = puVar24 + 2;
          } while (uVar17 != uVar22);
        }
        _swift_bridgeObjectRelease(puVar19);
        _swift_release(local_c8);
        _swift_bridgeObjectRelease(lVar18);
        _swift_release(lVar3);
        FUN_100029548(local_b8,FUN_10025ee04);
        return puVar11;
      }
      _swift_release(lVar3);
    }
    FUN_10002a29c(lVar21,&DAT_10054ac38,&DAT_10041e8e0);
  }
  return (undefined *)0x0;
}

