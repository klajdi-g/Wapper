// rea decompile_all
// name: FUN_10002e0a0
// address: 0x10002e0a0
// body: available
// range: 0x10002e0a0-0x10002e807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002e0a0(Published *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Published *pPVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_60 [4];
  
  puVar2 = &DAT_10041ce20;
  _swift_getKeyPath(&DAT_10041ce20);
  puVar3 = &DAT_10041ce48;
  _swift_getKeyPath(&DAT_10041ce48);
  Combine::Published::_get_subscript(local_60);
  _swift_release(puVar2);
  _swift_release(puVar3);
  lVar10 = *(long *)(local_60[0] + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar10 == 0) {
    return;
  }
  _swift_getKeyPath(&DAT_10041ce78);
  _swift_getKeyPath(&DAT_10041cea0);
  local_60[0] = (long)param_1 >> 0x3f | 1;
  _swift_retain();
  Combine::Published::_set_subscript(param_1,local_60);
  if ((long)param_1 < 1) {
    if (-1 < (long)param_1) {
      return;
    }
    puVar2 = &DAT_10041cd90;
    _swift_getKeyPath(&DAT_10041cd90);
    puVar3 = &DAT_10041cdb8;
    _swift_getKeyPath(&DAT_10041cdb8);
    Combine::Published::_get_subscript(local_60);
    _swift_release(puVar2);
    _swift_release(puVar3);
    if ((long)local_60[0] < 1) {
      puVar2 = &DAT_10041cdd8;
      _swift_getKeyPath(&DAT_10041cdd8);
      puVar3 = &DAT_10041ce00;
      _swift_getKeyPath(&DAT_10041ce00);
      Combine::Published::_get_subscript(local_60);
      _swift_release(puVar2);
      _swift_release(puVar3);
      if ((long)local_60[0] < 1) {
        return;
      }
      puVar2 = &DAT_10041cdd8;
      _swift_getKeyPath(&DAT_10041cdd8);
      puVar3 = &DAT_10041ce00;
      _swift_getKeyPath(&DAT_10041ce00);
      pcVar1 = (code *)local_60;
      plVar6 = unaff_x20;
      Combine::Published::_modify_subscript();
      if (SBORROW8(*plVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e808);
        (*pcVar1)();
      }
      *plVar6 = *plVar6 + -1;
      (*pcVar1)(local_60,0);
      _swift_release(puVar2);
      _swift_release(puVar3);
      puVar2 = &DAT_10041cdd8;
      _swift_getKeyPath(&DAT_10041cdd8);
      puVar3 = &DAT_10041ce00;
      _swift_getKeyPath(&DAT_10041ce00);
      Combine::Published::_get_subscript(local_60);
      _swift_release(puVar2);
      _swift_release(puVar3);
      uVar11 = local_60[0];
      lVar10 = _TtC7Wallper21HeroCarouselViewModel::pagesCache;
      puVar7 = local_60;
      _swift_beginAccess((long)unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::pagesCache,puVar7,
                         0x20,0);
      lVar9 = *(long *)((long)unaff_x20 + lVar10);
      if ((*(long *)(lVar9 + 0x10) == 0) ||
         (uVar12 = uVar11, FUN_1000046b0(), ((ulong)puVar7 & 1) == 0)) {
        _swift_endAccess(local_60);
        uVar13 = *(ulong *)((long)unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::sourceVideos);
        uVar12 = uVar13;
        _swift_bridgeObjectRetain();
        FUN_10002cbb8();
        _swift_bridgeObjectRelease(uVar13);
        _swift_beginAccess((long)unaff_x20 + lVar10,local_60,0x21,0);
        _swift_bridgeObjectRetain(uVar12);
        uVar4 = *(undefined8 *)((long)unaff_x20 + lVar10);
        _swift_isUniquelyReferenced_nonNull_native(uVar4);
        uVar8 = *(undefined8 *)((long)unaff_x20 + lVar10);
        *(undefined8 *)((long)unaff_x20 + lVar10) = 0x8000000000000000;
        FUN_100340bc4(uVar12,uVar11,uVar4);
        *(undefined8 *)((long)unaff_x20 + lVar10) = uVar8;
        _swift_endAccess(local_60);
      }
      else {
        uVar12 = *(ulong *)(*(long *)(lVar9 + 0x38) + uVar12 * 8);
        _swift_endAccess(local_60);
        _swift_bridgeObjectRetain(uVar12);
      }
      puVar2 = &DAT_10041ce20;
      _swift_getKeyPath(&DAT_10041ce20);
      puVar3 = &DAT_10041ce48;
      _swift_getKeyPath(&DAT_10041ce48);
      local_60[0] = uVar12;
      _swift_retain();
      Combine::Published::_set_subscript((Published *)&DAT_10041ce20,local_60);
      _swift_getKeyPath(puVar2);
      _swift_getKeyPath(&DAT_10041ce48);
      Combine::Published::_get_subscript(local_60);
      _swift_release(puVar2);
      _swift_release(puVar3);
      lVar10 = *(long *)(local_60[0] + 0x10);
      _swift_bridgeObjectRelease();
      uVar11 = 0;
      if (lVar10 != 0) {
        uVar11 = lVar10 - 1;
      }
      pPVar5 = (Published *)&DAT_10041cd90;
      _swift_getKeyPath(&DAT_10041cd90);
      puVar2 = &DAT_10041cdb8;
      goto LAB_10002e4e4;
    }
    puVar2 = &DAT_10041cd90;
    _swift_getKeyPath(&DAT_10041cd90);
    puVar3 = &DAT_10041cdb8;
    _swift_getKeyPath(&DAT_10041cdb8);
    pcVar1 = (code *)local_60;
    Combine::Published::_modify_subscript();
    lVar10 = *unaff_x20 + -1;
    if (SBORROW8(*unaff_x20,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e804);
      (*pcVar1)();
    }
  }
  else {
    puVar2 = &DAT_10041cd90;
    _swift_getKeyPath(&DAT_10041cd90);
    puVar3 = &DAT_10041cdb8;
    _swift_getKeyPath(&DAT_10041cdb8);
    Combine::Published::_get_subscript(local_60);
    _swift_release(puVar2);
    _swift_release(puVar3);
    uVar11 = local_60[0];
    puVar2 = &DAT_10041ce20;
    _swift_getKeyPath(&DAT_10041ce20);
    puVar3 = &DAT_10041ce48;
    _swift_getKeyPath(&DAT_10041ce48);
    Combine::Published::_get_subscript(local_60);
    _swift_release(puVar2);
    _swift_release(puVar3);
    lVar10 = *(long *)(local_60[0] + 0x10);
    _swift_bridgeObjectRelease();
    if (lVar10 + -1 <= (long)uVar11) {
      puVar2 = &DAT_10041cdd8;
      _swift_getKeyPath(&DAT_10041cdd8);
      puVar3 = &DAT_10041ce00;
      _swift_getKeyPath(&DAT_10041ce00);
      pcVar1 = (code *)local_60;
      plVar6 = unaff_x20;
      Combine::Published::_modify_subscript();
      if (SCARRY8(*plVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e800);
        (*pcVar1)();
      }
      *plVar6 = *plVar6 + 1;
      (*pcVar1)(local_60,0);
      _swift_release(puVar2);
      _swift_release(puVar3);
      pPVar5 = (Published *)&DAT_10041cd90;
      _swift_getKeyPath(&DAT_10041cd90);
      _swift_getKeyPath(&DAT_10041cdb8);
      local_60[0] = 0;
      _swift_retain();
      Combine::Published::_set_subscript(pPVar5,local_60);
      puVar2 = &DAT_10041cdd8;
      _swift_getKeyPath(&DAT_10041cdd8);
      puVar3 = &DAT_10041ce00;
      _swift_getKeyPath(&DAT_10041ce00);
      Combine::Published::_get_subscript(local_60);
      _swift_release(puVar2);
      _swift_release(puVar3);
      uVar12 = local_60[0];
      lVar10 = _TtC7Wallper21HeroCarouselViewModel::pagesCache;
      puVar7 = local_60;
      _swift_beginAccess((long)unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::pagesCache,puVar7,
                         0x20,0);
      lVar9 = *(long *)((long)unaff_x20 + lVar10);
      if ((*(long *)(lVar9 + 0x10) == 0) ||
         (uVar11 = uVar12, FUN_1000046b0(), ((ulong)puVar7 & 1) == 0)) {
        _swift_endAccess(local_60);
        uVar13 = *(ulong *)((long)unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::sourceVideos);
        uVar11 = uVar13;
        _swift_bridgeObjectRetain();
        FUN_10002cbb8();
        _swift_bridgeObjectRelease(uVar13);
        _swift_beginAccess((long)unaff_x20 + lVar10,local_60,0x21,0);
        _swift_bridgeObjectRetain(uVar11);
        uVar4 = *(undefined8 *)((long)unaff_x20 + lVar10);
        _swift_isUniquelyReferenced_nonNull_native(uVar4);
        uVar8 = *(undefined8 *)((long)unaff_x20 + lVar10);
        *(undefined8 *)((long)unaff_x20 + lVar10) = 0x8000000000000000;
        FUN_100340bc4(uVar11,uVar12,uVar4);
        *(undefined8 *)((long)unaff_x20 + lVar10) = uVar8;
        _swift_endAccess(local_60);
      }
      else {
        uVar11 = *(ulong *)(*(long *)(lVar9 + 0x38) + uVar11 * 8);
        _swift_endAccess(local_60);
        _swift_bridgeObjectRetain(uVar11);
      }
      pPVar5 = (Published *)&DAT_10041ce20;
      _swift_getKeyPath(&DAT_10041ce20);
      puVar2 = &DAT_10041ce48;
LAB_10002e4e4:
      _swift_getKeyPath(puVar2);
      local_60[0] = uVar11;
      _swift_retain();
      Combine::Published::_set_subscript(pPVar5,local_60);
      puVar2 = &DAT_10041cdd8;
      _swift_getKeyPath(&DAT_10041cdd8);
      puVar3 = &DAT_10041ce00;
      _swift_getKeyPath(&DAT_10041ce00);
      Combine::Published::_get_subscript(local_60);
      _swift_release(puVar2);
      _swift_release(puVar3);
      FUN_10002df28(local_60[0]);
      return;
    }
    puVar2 = &DAT_10041cd90;
    _swift_getKeyPath(&DAT_10041cd90);
    puVar3 = &DAT_10041cdb8;
    _swift_getKeyPath(&DAT_10041cdb8);
    pcVar1 = (code *)local_60;
    Combine::Published::_modify_subscript();
    lVar10 = *unaff_x20 + 1;
    if (SCARRY8(*unaff_x20,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e24c);
      (*pcVar1)();
    }
  }
  *unaff_x20 = lVar10;
  (*pcVar1)(local_60,0);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}

