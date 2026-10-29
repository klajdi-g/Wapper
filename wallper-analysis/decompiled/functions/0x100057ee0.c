// rea decompile_all
// name: FUN_100057ee0
// address: 0x100057ee0
// body: available
// range: 0x100057ee0-0x10005817f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100057ee0(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  UUID UVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  UUID UVar9;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  void *pvVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_70 [8];
  _ArrayBuffer local_68 [3];
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  if (DAT_100555940 != -1) {
    _swift_once(&DAT_100555940,FUN_10016e078);
  }
  uVar2 = DAT_100577cb0;
  puVar6 = &DAT_10041deb0;
  _swift_getKeyPath(&DAT_10041deb0);
  puVar7 = &DAT_10041ded8;
  _swift_getKeyPath(&DAT_10041ded8);
  Combine::Published::_get_subscript(local_68,uVar2,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if ((ulong)local_68[0].unknown >> 0x3e == 0) {
    lVar8 = *(long *)(((ulong)local_68[0].unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_68[0].unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_68[0].unknown) {
      _Var1.unknown = local_68[0].unknown;
    }
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(local_68[0].unknown);
    uVar4 = 0;
  }
  else {
    if (((ulong)local_68[0].unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)local_68[0].unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100058180);
        (*pcVar3)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(0,local_68[0]);
    }
    _swift_bridgeObjectRelease();
    FUN_100174ed8();
    if (local_68[0].unknown == (undefined *)0x0) {
      UVar9 = Foundation::UUID::init();
      SVar14 = Foundation::UUID::get_uuidString(UVar9);
      (**(code **)(lVar13 + 8))
                (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar5.unknown);
    }
    else {
      objc_stub::stringValue((ID)local_68[0].unknown);
      SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pvVar12 = SVar14.bridgeObject;
    pcVar10 = SVar14.str;
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    lVar8 = DAT_100577d38;
    lVar13 = _TtC7Wallper21VideoWallpaperManager::windows;
    _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::windows,local_68,0,0);
    lVar13 = *(long *)(lVar8 + lVar13);
    if (*(long *)(lVar13 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar13);
      pvVar11 = pvVar12;
      FUN_10000464c(pcVar10);
      _swift_bridgeObjectRelease(lVar13);
      if (((ulong)pvVar11 & 1) != 0) {
        FUN_10023c0d0(pcVar10,pvVar12);
        uVar4 = (uint)pcVar10;
        _swift_bridgeObjectRelease(pvVar12);
        goto LAB_100058134;
      }
    }
    FUN_100253e84(pcVar10,pvVar12);
    _swift_bridgeObjectRelease(pvVar12);
    uVar4 = 0;
    if (pcVar10 != (char *)0x0) {
      uVar4 = 1;
    }
  }
LAB_100058134:
  return uVar4 & 1;
}

