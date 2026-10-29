// rea decompile_all
// name: FUN_10002c4ec
// address: 0x10002c4ec
// body: available
// range: 0x10002c4ec-0x10002cbb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002c4ec(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  Published *pPVar6;
  _StringComparisonResult expecting;
  long extraout_x8;
  undefined1 *puVar7;
  long extraout_x8_00;
  undefined8 *puVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar9;
  ulong uVar10;
  Published *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *local_e8 [2];
  long local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  undefined8 *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ulong local_98 [3];
  ulong local_80;
  undefined *local_78 [3];
  
  puVar4 = &DAT_100558c60;
  local_a8 = param_2;
  FUN_100002f94(&DAT_100558c60,&DAT_10042d450);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffff10 + -extraout_x8;
  lVar5 = 0;
  local_e8[0] = (undefined8 *)puVar7;
  FUN_10040211c();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  local_e8[1] = (undefined8 *)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = (undefined8 *)
           ((long)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12);
  local_b8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = (undefined8 *)((long)puVar8 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)puVar8 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d8 = lVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = _TtC7Wallper21HeroCarouselViewModel::sourceVideos;
  local_d0 = (lVar17 - extraout_x12_02) - extraout_x12_03;
  uVar11 = *(undefined8 *)
            ((long)&unaff_x20->unknown + _TtC7Wallper21HeroCarouselViewModel::sourceVideos);
  *(long *)((long)&unaff_x20->unknown + _TtC7Wallper21HeroCarouselViewModel::sourceVideos) = param_1
  ;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRelease(uVar11);
  lVar5 = _TtC7Wallper21HeroCarouselViewModel::pagesCache;
  puVar4 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (*(long *)(param_1 + 0x10) == 0) {
    _swift_getKeyPath(&DAT_10041cdd8);
    _swift_getKeyPath(&DAT_10041ce00);
    local_78[0] = (undefined *)0x0;
    _swift_retain();
    Combine::Published::_set_subscript(unaff_x20,local_78);
    _swift_getKeyPath(&DAT_10041cd90);
    _swift_getKeyPath(&DAT_10041cdb8);
    local_78[0] = (undefined *)0x0;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript();
    _swift_getKeyPath(&DAT_10041ce20);
    _swift_getKeyPath(&DAT_10041ce48);
    puVar1 = PTR___swiftEmptyArrayStorage_100524190;
    local_78[0] = PTR___swiftEmptyArrayStorage_100524190;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript();
    lVar5 = _TtC7Wallper21HeroCarouselViewModel::pagesCache;
    _swift_beginAccess((long)&unaff_x20->unknown + _TtC7Wallper21HeroCarouselViewModel::pagesCache,
                       local_78,1,0);
    uVar11 = *(undefined8 *)((long)&unaff_x20->unknown + lVar5);
    *(undefined **)((long)&unaff_x20->unknown + lVar5) = puVar4;
    _swift_bridgeObjectRelease(uVar11);
    lVar5 = _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs;
    _swift_beginAccess((long)&unaff_x20->unknown +
                       _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs,local_98,1,0);
    uVar14 = *(ulong *)((long)&unaff_x20->unknown + lVar5);
    *(undefined **)((long)&unaff_x20->unknown + lVar5) = puVar1;
    goto LAB_10002cb88;
  }
  _swift_beginAccess((long)&unaff_x20->unknown + _TtC7Wallper21HeroCarouselViewModel::pagesCache,
                     local_78,1,0);
  uVar11 = *(undefined8 *)((long)&unaff_x20->unknown + lVar5);
  local_c8 = lVar5;
  *(undefined **)((long)&unaff_x20->unknown + lVar5) = puVar4;
  _swift_bridgeObjectRelease(uVar11);
  uVar13 = *(ulong *)((long)&unaff_x20->unknown + lVar12);
  uVar14 = uVar13;
  _swift_bridgeObjectRetain();
  FUN_10002cbb8();
  local_c0 = uVar14;
  _swift_bridgeObjectRelease(uVar13);
  local_b0 = param_3;
  if (param_3 != (undefined *)0x0) {
    lVar5 = *(long *)((long)&unaff_x20->unknown + lVar12);
    uVar14 = *(ulong *)(lVar5 + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    puVar4 = local_a8;
    if (uVar14 != 0) {
      uVar13 = 0;
      do {
        if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10002cbb0);
          (*pcVar2)();
        }
        uVar16 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
        lVar12 = *(long *)(lVar9 + 0x48);
        FUN_10002f154(lVar5 + uVar16 + lVar12 * uVar13,lVar17);
        FUN_10002f198(lVar17,puVar8);
        puVar1 = local_b0;
        expecting.value = (__int8)puVar4;
        if (((undefined *)*puVar8 == puVar4 && local_b0 == (undefined *)puVar8[1]) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar8,(undefined *)puVar8[1],expecting), bVar3)) {
          _swift_bridgeObjectRelease(lVar5);
          lVar5 = local_d8;
          FUN_10002f198(puVar8,local_d8);
          lVar9 = local_d0;
          FUN_10002f198(lVar5,local_d0);
          uVar14 = local_c0;
          lVar17 = *(long *)(local_c0 + 0x10);
          lVar5 = local_c0 + uVar16;
          uVar13 = 0xffffffffffffffff;
          goto LAB_10002c8e4;
        }
        uVar13 = uVar13 + 1;
        FUN_10002f1dc(puVar8);
      } while (uVar14 != uVar13);
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_getKeyPath(&DAT_10041cd90);
  _swift_getKeyPath(&DAT_10041cdb8);
  local_98[0] = 0;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  uVar14 = local_c0;
  goto LAB_10002ca98;
  while( true ) {
    uVar13 = uVar13 + 1;
    if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10002cbb4);
      (*pcVar2)();
    }
    FUN_10002f154(lVar5,local_b8);
    if ((undefined *)*puVar15 == puVar4 && puVar1 == (undefined *)puVar15[1]) goto LAB_10002c9c8;
    lVar5 = lVar5 + lVar12;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar15,(undefined *)puVar15[1],expecting);
    FUN_10002f1dc(puVar15);
    if (bVar3) break;
LAB_10002c8e4:
    puVar15 = local_b8;
    puVar8 = local_e8[0];
    if (uVar13 - lVar17 == -1) {
      FUN_10002f154(lVar9,local_e8[0]);
      uVar10 = *(ulong *)(uVar14 + 0x10);
      uVar13 = uVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      local_80 = uVar14;
      if (((int)uVar13 == 0) || (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar10)) {
        FUN_1001c4344();
        uVar14 = uVar13;
      }
      local_80 = uVar14;
      FUN_1002874cc(0,0,1,puVar8);
      if (10 < *(ulong *)(uVar14 + 0x10)) {
        lVar5 = *(ulong *)(uVar14 + 0x10) - 1;
        puVar15 = (undefined8 *)(uVar14 + uVar16 + lVar5 * lVar12);
        *(long *)(uVar14 + 0x10) = lVar5;
LAB_10002c9c8:
        FUN_10002f1dc(puVar15);
      }
      break;
    }
  }
  puVar8 = local_e8[1];
  uVar13 = *(ulong *)(uVar14 + 0x10);
  if (uVar13 != 0) {
    uVar10 = 0;
    lVar5 = uVar14 + uVar16;
    do {
      if (*(ulong *)(uVar14 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10002cbb8);
        (*pcVar2)();
      }
      FUN_10002f154(lVar5,puVar8);
      if ((undefined *)*puVar8 == puVar4 && puVar1 == (undefined *)puVar8[1]) {
        FUN_10002f1dc(puVar8);
        goto LAB_10002ca4c;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*puVar8,(undefined *)puVar8[1],expecting);
      FUN_10002f1dc(puVar8);
      if (bVar3) goto LAB_10002ca4c;
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + lVar12;
    } while (uVar13 != uVar10);
  }
  uVar10 = 0;
LAB_10002ca4c:
  pPVar6 = (Published *)&DAT_10041cd90;
  _swift_getKeyPath(&DAT_10041cd90);
  puVar4 = &DAT_10041cdb8;
  _swift_getKeyPath(&DAT_10041cdb8);
  local_98[0] = uVar10;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar6,local_98,unaff_x20,pPVar6,puVar4);
  FUN_10002f1dc(lVar9);
LAB_10002ca98:
  lVar5 = local_c8;
  pPVar6 = (Published *)&DAT_10041cdd8;
  _swift_getKeyPath(&DAT_10041cdd8);
  puVar4 = &DAT_10041ce00;
  _swift_getKeyPath(&DAT_10041ce00);
  local_98[0] = 0;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar6,local_98,unaff_x20,pPVar6,puVar4);
  _swift_beginAccess((long)&unaff_x20->unknown + lVar5,local_98,0x21,0);
  _swift_bridgeObjectRetain_n(uVar14,2);
  uVar11 = *(undefined8 *)((long)&unaff_x20->unknown + lVar5);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  local_a0 = *(undefined8 *)((long)&unaff_x20->unknown + lVar5);
  *(undefined8 *)((long)&unaff_x20->unknown + lVar5) = 0x8000000000000000;
  FUN_100340bc4(uVar14,0,uVar11);
  *(undefined8 *)((long)&unaff_x20->unknown + lVar5) = local_a0;
  _swift_endAccess(local_98);
  pPVar6 = (Published *)&DAT_10041ce20;
  _swift_getKeyPath(&DAT_10041ce20);
  puVar4 = &DAT_10041ce48;
  _swift_getKeyPath(&DAT_10041ce48);
  local_98[0] = uVar14;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar6,local_98,unaff_x20,pPVar6,puVar4);
  FUN_10002df28(0);
LAB_10002cb88:
  _swift_bridgeObjectRelease(uVar14);
  return;
}

