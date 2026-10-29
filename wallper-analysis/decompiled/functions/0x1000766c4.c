// rea decompile_all
// name: FUN_1000766c4
// address: 0x1000766c4
// body: available
// range: 0x1000766c4-0x1000774df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000766c4(ID param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  NSHostingView *pNVar13;
  undefined **self;
  char *pcVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  URL UVar18;
  NSURL *pNVar19;
  ID IVar20;
  undefined7 extraout_var;
  _StringGuts _Var21;
  char *pcVar22;
  void *pvVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar24;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  undefined *puVar28;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long *unaff_x20;
  long lVar29;
  char *pcVar30;
  void *pvVar31;
  long lVar32;
  long lVar33;
  code *pcVar34;
  code *pcVar35;
  String SVar36;
  String SVar37;
  undefined1 auStack_2c0 [8];
  code *local_2b8;
  code *local_2b0;
  long local_2a8;
  long local_2a0;
  undefined *local_298;
  long local_290;
  undefined1 *local_288;
  long local_280;
  ulong local_278;
  undefined *local_270;
  code *local_268;
  long local_260;
  undefined8 uStack_258;
  ID local_250;
  char *local_248;
  undefined1 auStack_240 [128];
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_14f;
  undefined1 auStack_138 [24];
  undefined *local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_af;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  puVar28 = &DAT_10054ea38;
  local_250 = param_1;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  local_298 = puVar28;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar28 = &DAT_100553d90;
  local_288 = auStack_2c0 + -extraout_x8;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar28 + -8) + 0x40));
  lVar24 = (long)(auStack_2c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_2a0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12;
  local_290 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar25 = lVar24 - extraout_x12_00;
  local_278 = uVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar26 = (code *)(uVar25 - extraout_x12_01);
  local_268 = pcVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = (long)pcVar26 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar33 - extraout_x12_03;
  local_248 = (char *)Foundation::URL::typeMetadataAccessor();
  lVar24 = *(long *)(local_248 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar27 = lVar32 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_2a8 = lVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar27 - extraout_x12_04;
  local_280 = lVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar28 = (undefined *)(lVar27 - extraout_x12_05);
  local_270 = puVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar4 = DAT_100577d38;
  lVar27 = *unaff_x20;
  uVar25 = unaff_x20[1];
  local_260 = lVar27;
  FUN_100253e84(lVar27,uVar25);
  lVar29 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (uVar25 != 0) {
    _swift_beginAccess(lVar4 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_138,
                       0,0);
    lVar29 = *(long *)(lVar4 + lVar29);
    if (*(long *)(lVar29 + 0x10) == 0) {
      (**(code **)(lVar24 + 0x38))(lVar32,1,1,local_248);
    }
    else {
      local_2b0 = (code *)(puVar28 + -extraout_x12_06);
      _swift_bridgeObjectRetain(lVar29);
      lVar9 = local_260;
      uVar16 = uVar25;
      FUN_10000464c(local_260);
      pcVar14 = local_248;
      bVar8 = (uVar16 & 1) == 0;
      if (!bVar8) {
        (**(code **)(lVar24 + 0x10))
                  (lVar32,*(long *)(lVar29 + 0x38) + *(long *)(lVar24 + 0x48) * lVar9,local_248);
      }
      local_2b8 = *(code **)(lVar24 + 0x38);
      (*local_2b8)(lVar32,bVar8,1,pcVar14);
      _swift_bridgeObjectRelease(lVar29);
      lVar29 = lVar32;
      (**(code **)(lVar24 + 0x30))(lVar32,1,pcVar14);
      pcVar26 = local_2b0;
      if ((int)lVar29 != 1) {
        UVar18.unknown = local_2b0;
        (**(code **)(lVar24 + 0x20))(local_2b0,lVar32,local_248);
        SVar36 = Foundation::URL::get_absoluteString(UVar18);
        _Var21.unknown = SVar36.bridgeObject;
        if ((SVar36.str == (undefined *)0xd00000000000001c) &&
           (_Var21.unknown == (undefined *)0x80000001004dc890)) {
          _swift_bridgeObjectRelease(0x80000001004dc890);
LAB_100076b5c:
          lVar32 = unaff_x20[4];
          puVar28 = &DAT_10041fdc8;
          _swift_getKeyPath(&DAT_10041fdc8);
          puVar11 = &DAT_10041fdf0;
          _swift_getKeyPath(&DAT_10041fdf0);
          Combine::Published::_get_subscript(&local_120,lVar32,puVar28,puVar11);
          _swift_release(puVar28);
          _swift_release(puVar11);
          uVar7 = uStack_f8;
          uVar10 = uStack_100;
          puVar11 = puStack_118;
          puVar28 = local_120;
          IVar20 = local_250;
          if (puStack_118 != (undefined *)0x0) {
            local_a0 = local_120;
            puStack_98 = puStack_118;
            uStack_258 = uStack_100;
            local_260 = local_108;
            uStack_80 = uStack_100;
            local_88 = local_108;
            local_90 = local_110;
            local_78 = uStack_f8;
            FUN_1000756c8(0);
            (*local_2b8)(lVar33,1,1,local_248);
            FUN_1000761d8(0,lVar33);
            FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
            puVar1 = (undefined8 *)
                     (IVar20 + _TtC7Wallper29WallpaperPreviewContainerView::currentMusicThemeID);
            _Var21.unknown = (undefined *)puVar1[1];
            if ((_Var21.unknown != (undefined *)0x0) &&
               ((((undefined *)*puVar1 == puVar28 && (_Var21.unknown == puVar11)) ||
                (bVar8 = Swift::_stringCompareWithSmolCheck
                                   ((undefined *)*puVar1,_Var21,
                                    (_StringComparisonResult)(__int8)puVar28), bVar8)))) {
              _swift_bridgeObjectRelease(puVar11);
              _swift_bridgeObjectRelease(uVar7);
              _swift_bridgeObjectRelease(uVar10);
              _swift_bridgeObjectRelease(local_260);
              (**(code **)(lVar24 + 8))(local_2b0,local_248);
              return;
            }
            _swift_bridgeObjectRetain(puVar11);
            local_268 = (code *)local_260;
            _swift_bridgeObjectRetain();
            local_260 = uVar10;
            _swift_bridgeObjectRetain(uVar10);
            _swift_bridgeObjectRetain(uVar7);
            FUN_100046bb8(&local_120,&local_a0,0,0);
            lVar27 = _TtC7Wallper29WallpaperPreviewContainerView::hostingView;
            IVar20 = *(ID *)(IVar20 + _TtC7Wallper29WallpaperPreviewContainerView::hostingView);
            if (IVar20 != 0) {
              objc_stub::removeFromSuperview(IVar20);
            }
            uStack_178 = uStack_d8;
            local_180 = local_e0;
            uStack_168 = uStack_c8;
            uStack_170 = uStack_d0;
            local_160 = local_c0;
            uStack_14f = uStack_af;
            puStack_1b8 = puStack_118;
            local_1c0 = local_120;
            uStack_1a8 = local_108;
            uStack_1b0 = local_110;
            uStack_198 = uStack_f8;
            local_1a0 = uStack_100;
            uStack_188 = uStack_e8;
            uStack_190 = uStack_f0;
            pNVar13 = (NSHostingView *)&DAT_10054ea40;
            FUN_100002f94(&DAT_10054ea40,&DAT_10041fe10);
            _objc_allocWithZone();
            FUN_100047eec(&local_120,auStack_240);
            self = &local_1c0;
            SwiftUI::NSHostingView::_init(pNVar13);
            IVar20 = local_250;
            objc_stub::bounds(local_250);
            objc_stub::setFrame_((ID)self);
            objc_stub::setAutoresizingMask_((ID)self,0x12);
            objc_stub::addSubview_(IVar20,self);
            FUN_100077990(&local_120);
            (**(code **)(lVar24 + 8))(local_2b0,local_248);
            *(undefined ***)(IVar20 + lVar27) = self;
            _swift_bridgeObjectRelease(uVar7);
            _swift_bridgeObjectRelease(local_260);
            _swift_bridgeObjectRelease(local_268);
            uVar10 = puVar1[1];
            *puVar1 = puVar28;
            puVar1[1] = puVar11;
            _swift_bridgeObjectRelease(uVar10);
            return;
          }
        }
        else {
          bVar8 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar36.str,_Var21,(_StringComparisonResult)0x1c);
          _swift_bridgeObjectRelease(_Var21.unknown);
          if (bVar8) goto LAB_100076b5c;
        }
        (**(code **)(lVar24 + 8))(pcVar26,local_248);
        goto LAB_1000769dc;
      }
    }
    FUN_10002a29c(lVar32,&DAT_100553d90,&DAT_10041bf10);
  }
LAB_1000769dc:
  IVar20 = local_250;
  lVar32 = _TtC7Wallper29WallpaperPreviewContainerView::hostingView;
  puVar1 = (undefined8 *)
           (local_250 + _TtC7Wallper29WallpaperPreviewContainerView::currentMusicThemeID);
  if (puVar1[1] != 0) {
    if (*(ID *)(local_250 + _TtC7Wallper29WallpaperPreviewContainerView::hostingView) != 0) {
      objc_stub::removeFromSuperview
                (*(ID *)(local_250 + _TtC7Wallper29WallpaperPreviewContainerView::hostingView));
    }
    *(undefined8 *)(IVar20 + lVar32) = 0;
    uVar10 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_bridgeObjectRelease(uVar10);
  }
  pcVar14 = local_248;
  lVar32 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (lVar27 != 0) {
    FUN_1000756c8(lVar27);
    (**(code **)(lVar24 + 0x38))(lVar33,1,1,local_248);
    FUN_1000761d8(0,lVar33);
    goto LAB_100076f40;
  }
  if (uVar25 != 0) {
    _swift_beginAccess(lVar4 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,&local_120,0
                       ,0);
    _Var21.unknown = local_268;
    lVar27 = *(long *)(lVar4 + lVar32);
    if (*(long *)(lVar27 + 0x10) == 0) {
      (**(code **)(lVar24 + 0x38))(local_268,1,1,pcVar14);
    }
    else {
      _swift_bridgeObjectRetain(lVar27);
      lVar32 = local_260;
      FUN_10000464c(local_260);
      _Var21.unknown = local_268;
      bVar8 = (uVar25 & 1) == 0;
      if (!bVar8) {
        (**(code **)(lVar24 + 0x10))
                  (local_268,*(long *)(lVar27 + 0x38) + *(long *)(lVar24 + 0x48) * lVar32,pcVar14);
      }
      puVar28 = local_270;
      pcVar34 = *(code **)(lVar24 + 0x38);
      (*pcVar34)(_Var21.unknown,bVar8,1,pcVar14);
      _swift_bridgeObjectRelease(lVar27);
      pcVar35 = *(code **)(lVar24 + 0x30);
      pcVar26 = (code *)_Var21.unknown;
      (*pcVar35)(_Var21.unknown,1,pcVar14);
      if ((int)pcVar26 != 1) {
        pcVar26 = *(code **)(lVar24 + 0x20);
        _Var12.unknown = puVar28;
        pcVar22 = pcVar14;
        local_260 = lVar24;
        (*pcVar26)();
        Foundation::URL::_get_scheme((URL)_Var12.unknown);
        if (_Var21.unknown != (undefined *)0x0) {
          pvVar23 = (void *)0xeb00000000657669;
          pcVar30 = (char *)0x7463617265746e69;
          if ((_Var12.unknown == (undefined *)0x7463617265746e69) &&
             (_Var21.unknown == (undefined *)0xeb00000000657669)) {
            _swift_bridgeObjectRelease(0xeb00000000657669);
            pcVar30 = pcVar22;
          }
          else {
            bVar8 = Swift::_stringCompareWithSmolCheck(_Var12,_Var21,(_StringComparisonResult)0x69);
            puVar28 = local_270;
            _swift_bridgeObjectRelease(_Var21.unknown);
            if (!bVar8) goto LAB_100076efc;
          }
          puVar11 = puVar28;
          FUN_10004306c();
          if (((uint)puVar11 & 0xff) != 7) {
            if (DAT_100556f80 != -1) {
              _swift_once(&DAT_100556f80,FUN_1001dd604);
            }
            uVar10 = DAT_100577cf0;
            pcVar14 = (char *)0x746e656964617267;
            local_1c0 = (undefined *)0x7463617265746e69;
            puStack_1b8 = (undefined *)0xec0000002d657669;
            uVar2 = (uint)puVar11 & 0xff;
            if (uVar2 < 3) {
              if (((ulong)puVar11 & 0xff) == 0) {
                pvVar31 = (void *)0xef61726f7275612d;
              }
              else if (uVar2 == 1) {
                pvVar31 = (void *)0xef7465736e75732d;
              }
              else {
                pvVar31 = (void *)0xee006e6165636f2d;
              }
            }
            else if (uVar2 < 5) {
              if (uVar2 == 3) {
                pvVar31 = (void *)0xed00006e6f656e2d;
              }
              else {
                pvVar31 = (void *)0xee007265626d652d;
              }
            }
            else if (uVar2 == 5) {
              pvVar31 = (void *)0xef747365726f662d;
            }
            else {
              pvVar31 = (void *)0x80000001004dbf90;
              pcVar14 = (char *)0xd000000000000011;
            }
            SVar36.bridgeObject = pvVar31;
            SVar36.str = pcVar14;
            SVar37.bridgeObject = pvVar23;
            SVar37.str = pcVar30;
            Swift::String::append(SVar36,SVar37);
            _swift_bridgeObjectRelease(pvVar31);
            puVar6 = puStack_1b8;
            puVar15 = local_1c0;
            puVar28 = &DAT_10041fd80;
            _swift_getKeyPath(&DAT_10041fd80);
            puVar11 = &DAT_10041fda8;
            _swift_getKeyPath(&DAT_10041fda8);
            Combine::Published::_get_subscript(&local_1c0,uVar10,puVar28,puVar11);
            _swift_release(puVar28);
            _swift_release(puVar11);
            puVar28 = local_1c0;
            local_2b0 = pcVar26;
            if (*(long *)(local_1c0 + 0x10) == 0) {
              bVar8 = true;
              IVar20 = local_250;
              pcVar14 = local_248;
            }
            else {
              _swift_bridgeObjectRetain(local_1c0);
              puVar11 = puVar6;
              FUN_10000464c(puVar15);
              pcVar14 = local_248;
              bVar8 = ((ulong)puVar11 & 1) == 0;
              if (!bVar8) {
                (**(code **)(local_260 + 0x10))
                          (local_278,
                           *(long *)(puVar28 + 0x38) + *(long *)(local_260 + 0x48) * (long)puVar15,
                           local_248);
              }
              IVar20 = local_250;
              _swift_bridgeObjectRelease(puVar28);
            }
            uVar25 = local_278;
            (*pcVar34)(local_278,bVar8,1,pcVar14);
            _swift_bridgeObjectRelease(puVar6);
            _swift_bridgeObjectRelease(puVar28);
            uVar16 = uVar25;
            (*pcVar35)(uVar25,1,pcVar14);
            lVar24 = local_260;
            lVar27 = local_280;
            if ((int)uVar16 != 1) {
              (*local_2b0)(local_280,uVar25,pcVar14);
              FUN_1000756c8(0);
              lVar24 = _TtC7Wallper29WallpaperPreviewContainerView::currentImageURL;
              _swift_beginAccess(IVar20 + _TtC7Wallper29WallpaperPreviewContainerView::
                                          currentImageURL,&local_1c0,0,0);
              lVar32 = local_290;
              pcVar26 = *(code **)(local_260 + 0x10);
              (*pcVar26)(local_290,lVar27,pcVar14);
              (*pcVar34)(lVar32,0,1,pcVar14);
              puVar5 = local_288;
              iVar3 = *(int *)(local_298 + 0x30);
              FUN_100077938(IVar20 + lVar24,local_288);
              FUN_100077938(lVar32,puVar5 + iVar3);
              puVar17 = puVar5;
              (*pcVar35)(puVar5,1,pcVar14);
              lVar24 = local_2a0;
              if ((int)puVar17 == 1) {
                FUN_10002a29c(lVar32,&DAT_100553d90,&DAT_10041bf10);
                puVar17 = puVar5 + iVar3;
                (*pcVar35)(puVar17,1,pcVar14);
                lVar24 = local_260;
                lVar29 = local_260;
                if ((int)puVar17 == 1) {
                  FUN_10002a29c(puVar5,&DAT_100553d90,&DAT_10041bf10);
                  pcVar35 = *(code **)(lVar24 + 8);
LAB_100077490:
                  pcVar14 = local_248;
                  (*pcVar35)(local_280,local_248);
                  (*pcVar35)(local_270,pcVar14);
                  return;
                }
              }
              else {
                FUN_100077938(puVar5,local_2a0);
                puVar17 = puVar5 + iVar3;
                (*pcVar35)(puVar17,1,pcVar14);
                lVar27 = local_2a8;
                if ((int)puVar17 != 1) {
                  local_268 = pcVar26;
                  (*local_2b0)(local_2a8,puVar5 + iVar3,pcVar14);
                  puVar28 = &DAT_100553da0;
                  FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                                PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
                  bVar8 = Swift::Equatable::___infix(lVar24,lVar27,pcVar14,puVar28);
                  lVar29 = local_260;
                  pcVar26 = local_268;
                  local_278 = CONCAT44(local_278._4_4_,(int)CONCAT71(extraout_var,bVar8));
                  pcVar35 = *(code **)(local_260 + 8);
                  (*pcVar35)(lVar27,pcVar14);
                  FUN_10002a29c(lVar32,&DAT_100553d90,&DAT_10041bf10);
                  (*pcVar35)(lVar24,pcVar14);
                  FUN_10002a29c(puVar5,&DAT_100553d90,&DAT_10041bf10);
                  if ((local_278 & 1) != 0) goto LAB_100077490;
                  goto LAB_100077328;
                }
                FUN_10002a29c(lVar32,&DAT_100553d90,&DAT_10041bf10);
                lVar29 = local_260;
                (**(code **)(local_260 + 8))(lVar24,pcVar14);
              }
              FUN_10002a29c(puVar5,&DAT_10054ea38,&DAT_100426270);
LAB_100077328:
              UVar18.unknown = &_OBJC_CLASS___NSImage;
              _objc_allocWithZone();
              lVar24 = local_280;
              pNVar19 = Foundation::URL::_bridgeToObjectiveC(UVar18);
              IVar20 = objc_stub::initWithContentsOfURL_((ID)UVar18.unknown,pNVar19);
              pcVar14 = local_248;
              (*pcVar26)(lVar33,lVar24,local_248);
              (*pcVar34)(lVar33,0,1,pcVar14);
              FUN_1000761d8(IVar20,lVar33);
              FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
              pcVar26 = *(code **)(lVar29 + 8);
              (*pcVar26)(lVar24,pcVar14);
              (*pcVar26)(local_270,pcVar14);
              return;
            }
            (**(code **)(local_260 + 8))(local_270,pcVar14);
            FUN_10002a29c(uVar25,&DAT_100553d90,&DAT_10041bf10);
            goto LAB_100076f10;
          }
        }
LAB_100076efc:
        lVar24 = local_260;
        (**(code **)(local_260 + 8))(puVar28,pcVar14);
        goto LAB_100076f10;
      }
    }
    FUN_10002a29c(_Var21.unknown,&DAT_100553d90,&DAT_10041bf10);
  }
LAB_100076f10:
  FUN_1000756c8(0);
  (**(code **)(lVar24 + 0x38))(lVar33,1,1,pcVar14);
  FUN_1000761d8(0,lVar33);
LAB_100076f40:
  FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
  return;
}

