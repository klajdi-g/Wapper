// rea decompile_all
// name: FUN_1000756c8
// address: 0x1000756c8
// body: available
// range: 0x1000756c8-0x100075cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100075cb0 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_1000756c8(ID param_1)

{
  long lVar1;
  long lVar2;
  DispatchTime DVar3;
  DispatchWorkItemFlags DVar4;
  ID IVar5;
  undefined *puVar6;
  NSKeyValueObservingOptions NVar7;
  undefined *puVar8;
  undefined *puVar9;
  NSKeyValueObservation *pNVar10;
  undefined8 *puVar11;
  DispatchWorkItem *pDVar12;
  OS_dispatch_queue *pOVar13;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar14;
  ID unaff_x20;
  undefined8 uVar15;
  DispatchTime deadline;
  DispatchTime DVar16;
  uint uVar17;
  undefined *local_b0;
  ID local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  local_a0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  DVar16.unknown = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar16.unknown + -extraout_x12;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar4.unknown + -8) + 0x40));
  lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer;
  IVar5 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer);
  if (IVar5 == 0) {
    IVar5 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer);
  }
  IVar5 = objc_stub::player(IVar5);
  if (IVar5 == 0) {
    if (param_1 == 0) {
      return (undefined *)0x0;
    }
  }
  else {
    if (param_1 == 0) {
      FUN_100075ce0(0);
      lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::playerLayer;
      IVar5 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer);
      if (IVar5 != 0) {
        CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
        CATransaction::setAnimationDuration_((ID)&_OBJC_CLASS___CATransaction,0x3fe6666666666666);
        puVar6 = &DAT_100527b78;
        _swift_allocObject(&DAT_100527b78,0x18,7);
        *(ID *)(puVar6 + 0x10) = IVar5;
        local_70 = FUN_100077a38;
        local_90 = PTR___NSConcreteStackBlock_100521110;
        local_88 = 0x42000000;
        local_80 = FUN_1000c7e7c;
        puStack_78 = &DAT_100527b90;
        local_68 = puVar6;
        aBlock = __Block_copy(&local_90);
        _swift_release(local_68);
        CATransaction::setCompletionBlock_((ID)&_OBJC_CLASS___CATransaction,aBlock);
        __Block_release(aBlock);
        objc_stub::setOpacity_(IVar5,0);
        CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
      }
      *(undefined8 *)(unaff_x20 + lVar2) = 0;
      return (undefined *)0x0;
    }
    if (IVar5 == param_1) {
      return (undefined *)0x0;
    }
  }
  local_b0 = DVar3.unknown;
  FUN_100075ce0(0);
  local_a8 = param_1;
  puVar6 = (undefined *)AVPlayerLayer::playerLayerWithPlayer_((ID)&_OBJC_CLASS___AVPlayerLayer);
  objc_stub::setVideoGravity_
            ((ID)puVar6,*(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_1005212a8);
  objc_stub::bounds(unaff_x20);
  objc_stub::setFrame_((ID)puVar6);
  lVar1 = _TtC7Wallper29WallpaperPreviewContainerView::playerLayer;
  uVar17 = 0x3f800000;
  if (*(long *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer) != 0) {
    uVar17 = 0;
  }
  objc_stub::setOpacity_((ID)puVar6,(ulong)uVar17);
  IVar5 = objc_stub::layer(unaff_x20);
  if (IVar5 != 0) {
    objc_stub::insertSublayer_below_
              (IVar5,puVar6,
               *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::imageLayer))
    ;
  }
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    NVar7.unknown = &DAT_10041fe28;
    local_90 = puVar6;
    _swift_getKeyPath();
    puVar8 = &DAT_100527bc8;
    _swift_allocObject(&DAT_100527bc8,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10);
    puVar9 = &DAT_100527bf0;
    _swift_allocObject(&DAT_100527bf0,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined **)(puVar9 + 0x18) = puVar6;
    pNVar10 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar7);
    _swift_release(NVar7.unknown);
    _swift_release(puVar9);
    *(NSKeyValueObservation **)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::readiness)
         = pNVar10;
    puVar8 = &DAT_100527bc8;
    _swift_allocObject(&DAT_100527bc8,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10);
    puVar9 = &DAT_100527c18;
    _swift_allocObject(&DAT_100527c18,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined **)(puVar9 + 0x18) = puVar6;
    local_70 = thunk_FUN_100077b4c;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_100527c30;
    local_68 = puVar9;
    __Block_copy(&local_90);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar11 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    _swift_retain(puVar8);
    puVar6 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = puVar6;
    FUN_100077ac0();
    Swift::SetAlgebra::_init
              (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_98,puVar6,
               puVar9,DVar4.unknown,puVar11);
    pDVar12 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
    _swift_allocObject(pDVar12,*(undefined4 *)(pDVar12 + 0x30),*(undefined2 *)(pDVar12 + 0x34));
    pDVar12 = Dispatch::DispatchWorkItem::_init
                        (pDVar12,(DispatchWorkItemFlags)
                                 (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)))
    ;
    puVar6 = local_68;
    _swift_release(puVar8);
    _swift_release(puVar6);
    uVar15 = *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::fadeFallback);
    *(DispatchWorkItem **)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::fadeFallback) =
         pDVar12;
    _swift_retain(pDVar12);
    _swift_release(uVar15);
    pOVar13 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    DVar3.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar13);
    Dispatch::DispatchTime::now(DVar3);
    Dispatch::__infix(DVar16,1.5);
    puVar6 = local_b0;
    pcVar14 = *(code **)(local_a0 + 8);
    (*pcVar14)(DVar16.unknown,local_b0);
    (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar12);
    _swift_release(pDVar12);
    (*pcVar14)(deadline.unknown,puVar6);
    return deadline.unknown;
  }
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  return (undefined *)0x0;
}

