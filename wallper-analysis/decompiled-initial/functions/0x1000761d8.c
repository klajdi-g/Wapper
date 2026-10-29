// rea decompile_all
// name: FUN_1000761d8
// address: 0x1000761d8
// body: available
// range: 0x1000761d8-0x1000764eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000761d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  URL UVar3;
  long lVar4;
  undefined *puVar5;
  ID self;
  NSString *pNVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar7;
  long unaff_x20;
  ID self_00;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  local_98 = param_1;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar9 - extraout_x8_00;
  puVar5 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper29WallpaperPreviewContainerView::currentImageURL;
  lVar8 = lVar10 - extraout_x8_01;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::currentImageURL,
                     auStack_78,0,0);
  lVar11 = (long)*(int *)(puVar5 + 0x30);
  FUN_100077938(unaff_x20 + lVar1,lVar8);
  FUN_100077938(param_2,lVar8 + lVar11);
  pcVar7 = *(code **)(lVar12 + 0x30);
  lVar4 = lVar8;
  (*pcVar7)(lVar8,1,UVar3.unknown);
  if ((int)lVar4 == 1) {
    lVar11 = lVar8 + lVar11;
    (*pcVar7)(lVar11,1,UVar3.unknown);
    if ((int)lVar11 == 1) {
      FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
      return;
    }
  }
  else {
    FUN_100077938(lVar8,lVar10);
    lVar4 = lVar8 + lVar11;
    (*pcVar7)(lVar4,1,UVar3.unknown);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,UVar3.unknown);
      puVar5 = &DAT_100553da0;
      FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar2 = Swift::Equatable::___infix(lVar10,puVar9,UVar3.unknown,puVar5);
      pcVar7 = *(code **)(lVar12 + 8);
      (*pcVar7)(puVar9,UVar3.unknown);
      (*pcVar7)(lVar10,UVar3.unknown);
      FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
      if (bVar2) {
        return;
      }
      goto LAB_100076388;
    }
    (**(code **)(lVar12 + 8))(lVar10,UVar3.unknown);
  }
  FUN_10002a29c(lVar8,&DAT_10054ea38,&DAT_100426270);
LAB_100076388:
  _swift_beginAccess(unaff_x20 + lVar1,auStack_90,0x21,0);
  FUN_1000779c4(param_2,unaff_x20 + lVar1);
  _swift_endAccess(auStack_90);
  puVar5 = &_OBJC_CLASS___CATransition;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar5);
  objc_stub::setType_(self,*(undefined8 *)PTR__kCATransitionFade_100521ab8);
  objc_stub::setDuration_(self,0x3fe6666666666666);
  self_00 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::imageLayer);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::addAnimation_forKey_(self_00,self,pNVar6);
  objc_stub::setContents_(self_00,local_98);
  return;
}

