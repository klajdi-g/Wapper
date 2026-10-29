// rea decompile_all
// name: FUN_100075fa0
// address: 0x100075fa0
// body: available
// range: 0x100075fa0-0x10007617b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100075fa0(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchWorkItem *this;
  long unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  lVar1 = _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer;
  if (*(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer) != 0 &&
      param_1 == *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer)) {
    *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::readiness) = 0;
    lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::fadeFallback;
    this = *(DispatchWorkItem **)
            (unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::fadeFallback);
    if (this == (DispatchWorkItem *)0x0) {
      uVar3 = 0;
    }
    else {
      _swift_retain(this);
      Dispatch::DispatchWorkItem::cancel(this);
      _swift_release(this);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer);
    *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer) = param_1;
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
    CATransaction::setAnimationDuration_((ID)&_OBJC_CLASS___CATransaction,0x3fe6666666666666);
    IVar4 = CAMediaTimingFunction::functionWithName_
                      ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                       *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_100521aa0);
    CATransaction::setAnimationTimingFunction_((ID)&_OBJC_CLASS___CATransaction,IVar4);
    puVar5 = &DAT_100527c68;
    _swift_allocObject(&DAT_100527c68,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar3;
    local_50 = FUN_100077b10;
    local_70 = PTR___NSConcreteStackBlock_100521110;
    local_68 = 0x42000000;
    local_60 = FUN_1000c7e7c;
    puStack_58 = &DAT_100527c80;
    local_48 = puVar5;
    aBlock = __Block_copy(&local_70);
    _swift_release(local_48);
    CATransaction::setCompletionBlock_((ID)&_OBJC_CLASS___CATransaction,aBlock);
    __Block_release(aBlock);
    objc_stub::setOpacity_(param_1,0x3f800000);
    CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
    param_1 = 0;
  }
  return param_1;
}

