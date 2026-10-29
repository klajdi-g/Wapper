// rea decompile_all
// name: FUN_10007a030
// address: 0x10007a030
// body: available
// range: 0x10007a030-0x10007a297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10007a030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  ID IVar5;
  _ArrayBuffer _Var6;
  ID IVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  _swift_getObjectType();
  lVar1 = _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::disc;
  puVar4 = &_OBJC_CLASS___CALayer;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  lVar1 = _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::label;
  puVar4 = &_OBJC_CLASS___CALayer;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::labelFraction) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::speed) = 0;
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  objc_stub::setWantsLayer_(IVar5,1);
  _Var6.unknown = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  _swift_initStackObject();
  *(undefined8 *)(_Var6.unknown + 0x18) = 5;
  *(undefined8 *)(_Var6.unknown + 0x10) = 2;
  lVar1 = _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::disc;
  IVar7 = *(ID *)(IVar5 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::disc);
  *(ID *)(_Var6.unknown + 0x20) = IVar7;
  lVar2 = _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::label;
  *(undefined8 *)(_Var6.unknown + 0x28) =
       *(undefined8 *)
        (IVar5 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::label);
  uVar8 = *(undefined8 *)PTR__kCAGravityResizeAspect_100521a88;
  if (((ulong)_Var6.unknown & 0xc000000000000001) != 0) {
    IVar7 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
  }
  objc_stub::setContentsGravity_(IVar7,uVar8);
  objc_stub::setAnchorPoint_(IVar7,0x3fe0000000000000,0x3fe0000000000000);
  if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
    if (*(ulong *)(_Var6.unknown + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10007a298);
      (*pcVar3)();
    }
    IVar7 = *(ID *)(_Var6.unknown + 0x28);
  }
  else {
    IVar7 = 1;
    Swift::_ArrayBuffer::__getElementSlowPath(1,_Var6);
  }
  objc_stub::setContentsGravity_(IVar7,uVar8);
  objc_stub::setAnchorPoint_(IVar7,0x3fe0000000000000,0x3fe0000000000000);
  _swift_setDeallocating(_Var6.unknown);
  _swift_arrayDestroy(_Var6.unknown + 0x20,*(undefined8 *)(_Var6.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100524170 + 8);
  objc_stub::setOpacity_(*(ID *)(IVar5 + lVar1),0);
  objc_stub::addSublayer_(*(ID *)(IVar5 + lVar1),*(undefined8 *)(IVar5 + lVar2));
  IVar7 = objc_stub::layer(IVar5);
  if (IVar7 != 0) {
    objc_stub::addSublayer_(IVar7,*(undefined8 *)(IVar5 + lVar1));
  }
  return IVar5;
}

