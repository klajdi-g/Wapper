// rea decompile_all
// name: FUN_100101e60
// address: 0x100101e60
// body: available
// range: 0x100101e60-0x10010210f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100101e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  ID IVar9;
  ulong uVar10;
  long unaff_x20;
  _ArrayBuffer _Var11;
  __int64 _Var12;
  ulong uVar13;
  
  _swift_getObjectType();
  lVar4 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::strip;
  puVar6 = &_OBJC_CLASS___CALayer;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar6);
  *(ID *)(unaff_x20 + lVar4) = IVar7;
  lVar4 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::copies;
  puVar6 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 5;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  puVar8 = &_OBJC_CLASS___CATextLayer;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar8);
  *(ID *)(puVar6 + 0x20) = IVar7;
  puVar8 = &_OBJC_CLASS___CATextLayer;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)puVar8);
  *(ID *)(puVar6 + 0x28) = IVar7;
  *(undefined **)(unaff_x20 + lVar4) = puVar6;
  puVar2 = (undefined8 *)
           (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::key);
  *puVar2 = 0;
  puVar2[1] = 0xe000000000000000;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::pause) =
       0x3ff0000000000000;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::speed) =
       0x4044000000000000;
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  objc_stub::setWantsLayer_(IVar7,1);
  IVar9 = objc_stub::layer(IVar7);
  objc_stub::setMasksToBounds_(IVar9,1);
  lVar4 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::strip;
  _Var11.unknown =
       *(undefined **)
        (IVar7 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::copies);
  IVar9 = *(ID *)(IVar7 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::
                          strip);
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    _Var12 = *(long *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var3.unknown = _Var11.unknown;
    }
    _Var12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  _swift_bridgeObjectRetain(_Var11.unknown);
  if (_Var12 != 0) {
    uVar13 = 0;
    do {
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001020ec);
          (*pcVar5)();
        }
        uVar10 = *(ulong *)(_Var11.unknown + uVar13 * 8 + 0x20);
      }
      else {
        uVar10 = uVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar13,_Var11);
      }
      lVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001020e8);
        (*pcVar5)();
      }
      objc_stub::addSublayer_(IVar9,uVar10);
      uVar13 = uVar13 + 1;
    } while (lVar1 != _Var12);
  }
  _swift_bridgeObjectRelease(_Var11.unknown);
  IVar9 = objc_stub::layer(IVar7);
  if (IVar9 != 0) {
    objc_stub::addSublayer_(IVar9,*(undefined8 *)(IVar7 + lVar4));
  }
  return IVar7;
}

