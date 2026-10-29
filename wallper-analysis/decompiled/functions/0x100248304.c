// rea decompile_all
// name: FUN_100248304
// address: 0x100248304
// body: available
// range: 0x100248304-0x100248cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100248304(long param_1)

{
  ulong uVar1;
  String *pSVar2;
  _CocoaArrayWrapper _Var3;
  _ArrayBuffer _Var4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  URL UVar8;
  UUID UVar9;
  undefined *puVar10;
  ulong uVar11;
  Dictionary<undefined,undefined> DVar12;
  NSString *pNVar13;
  undefined8 uVar14;
  ID *pIVar15;
  URL UVar16;
  UUID UVar17;
  Hasher into;
  _StringGuts _Var18;
  long lVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  undefined *puVar21;
  long extraout_x8_01;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long extraout_x12;
  ulong uVar26;
  ulong *puVar27;
  long unaff_x20;
  long lVar28;
  void *pvVar29;
  ulong uVar30;
  String SVar31;
  _ArrayBuffer local_160;
  undefined *local_158;
  long local_150;
  ID local_d0;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  puVar10 = (undefined *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_158 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)puVar10 - extraout_x12;
  puVar10 = &DAT_100553d90;
  local_150 = lVar20;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined *)(lVar20 - extraout_x8_00);
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar20 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar22 = (long)puVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  local_160.unknown = puVar10;
  if ((ulong)puVar10 >> 0x3e == 0) {
    uVar26 = *(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var3.unknown = puVar10;
    }
    uVar26 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  lVar5 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_80
                     ,0,0);
  _Var4.unknown = local_160.unknown;
  if (uVar26 != 0) {
    uVar24 = (ulong)local_160.unknown & 0xc000000000000001;
    uVar25 = (ulong)local_160.unknown & 0xffffffffffffff8;
    uVar30 = 0;
    do {
      if (uVar24 == 0) {
        if (*(ulong *)(uVar25 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100248ca0);
          (*pcVar6)();
        }
        uVar11 = *(ulong *)(_Var4.unknown + uVar30 * 8 + 0x20);
      }
      else {
        uVar11 = uVar30;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar30,local_160);
      }
      uVar1 = uVar30 + 1;
      if (SCARRY8(uVar30,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100248c9c);
        (*pcVar6)();
      }
      objc_stub::deviceDescription(uVar11);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar12 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar23 = 0;
      pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar12.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar13), (uVar23 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar12.unknown);
LAB_1002486d0:
        UVar17 = Foundation::UUID::init();
        SVar31 = Foundation::UUID::get_uuidString(UVar17);
        (**(code **)(lVar20 + 8))(lVar22,UVar9.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar13 * 0x20,auStack_c8);
        _swift_bridgeObjectRelease(DVar12.unknown);
        uVar14 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar15 = &local_d0;
        _swift_dynamicCast(pIVar15,auStack_c8,PTR___type_metadata_for_Any_100524178 + 8,uVar14,6);
        if (((ulong)pIVar15 & 1) == 0) goto LAB_1002486d0;
        objc_stub::stringValue(local_d0);
        SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar29 = SVar31.bridgeObject;
      lVar28 = *(long *)(unaff_x20 + lVar5);
      if (*(long *)(lVar28 + 0x10) == 0) {
        bVar7 = true;
      }
      else {
        _swift_bridgeObjectRetain(lVar28);
        FUN_10000464c(SVar31.str);
        bVar7 = ((ulong)SVar31.bridgeObject & 1) == 0;
        if (!bVar7) {
          (**(code **)(lVar19 + 0x10))
                    (puVar21,*(long *)(lVar28 + 0x38) + *(long *)(lVar19 + 0x48) * (long)SVar31.str,
                     UVar8.unknown);
        }
        _swift_bridgeObjectRelease(lVar28);
      }
      _swift_bridgeObjectRelease(pvVar29);
      (**(code **)(lVar19 + 0x38))(puVar21,bVar7,1,UVar8.unknown);
      puVar10 = puVar21;
      (**(code **)(lVar19 + 0x30))(puVar21,1,UVar8.unknown);
      lVar28 = local_150;
      if ((int)puVar10 == 0) {
        (**(code **)(lVar19 + 0x10))(local_150,puVar21,UVar8.unknown);
        UVar16.unknown = puVar21;
        FUN_10002a29c(puVar21,&DAT_100553d90,&DAT_10041bf10);
        SVar31 = Foundation::URL::get_absoluteString(UVar16);
        _Var18.unknown = SVar31.bridgeObject;
        (**(code **)(lVar19 + 8))(lVar28,UVar8.unknown);
        if ((SVar31.str == (undefined *)0xd00000000000001c) &&
           (_Var18.unknown == (undefined *)0x80000001004dc890)) {
          _swift_bridgeObjectRelease(0x80000001004dc890);
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar31.str,_Var18,(_StringComparisonResult)0x1c);
          _swift_bridgeObjectRelease(_Var18.unknown);
          if (!bVar7) goto LAB_100248534;
        }
        objc_stub::deviceDescription(uVar11);
        DVar12 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar11 = 0;
        pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar12.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar13), (uVar11 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar12.unknown);
LAB_100248978:
          UVar17 = Foundation::UUID::init();
          SVar31 = Foundation::UUID::get_uuidString(UVar17);
          (**(code **)(lVar20 + 8))(lVar22,UVar9.unknown);
        }
        else {
          FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar13 * 0x20,auStack_c8);
          _swift_bridgeObjectRelease(DVar12.unknown);
          uVar14 = 0;
          FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
          pIVar15 = &local_d0;
          _swift_dynamicCast(pIVar15,auStack_c8,PTR___type_metadata_for_Any_100524178 + 8,uVar14,6);
          if (((ulong)pIVar15 & 1) == 0) goto LAB_100248978;
          objc_stub::stringValue(local_d0);
          SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          Swift::Hasher::init(*(__int64 *)(param_1 + 0x28));
          into.unknown = auStack_c8;
          Swift::String::hash(into,SVar31);
          uVar11 = Swift::Hasher::_finalize(into);
          uVar23 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
          uVar11 = uVar11 & (uVar23 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_1 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
            do {
              pSVar2 = (String *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
              if ((SVar31 == *pSVar2) ||
                 (bVar7 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)pSVar2->str,(_StringGuts)pSVar2->bridgeObject,
                                     (_StringComparisonResult)(__int8)SVar31.str), bVar7)) {
                _swift_bridgeObjectRelease(SVar31.bridgeObject);
                goto LAB_100248534;
              }
              uVar11 = uVar11 + 1 & ~uVar23;
            } while ((*(ulong *)(param_1 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
          }
        }
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        FUN_10024ef58(uVar30,0,1);
      }
      else {
        FUN_10002a29c(puVar21,&DAT_100553d90,&DAT_10041bf10);
      }
LAB_100248534:
      uVar30 = uVar1;
    } while (uVar1 != uVar26);
  }
  _swift_bridgeObjectRelease(local_160.unknown);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_c8,0,0);
  lVar20 = *(long *)(unaff_x20 + lVar5);
  puVar27 = (ulong *)(lVar20 + 0x40);
  uVar30 = -1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar26 = 0xffffffffffffffff;
  if (-uVar30 < 0x40) {
    uVar26 = ~(-1L << (-uVar30 & 0x3f));
  }
  uVar26 = uVar26 & *puVar27;
  _swift_bridgeObjectRetain_n(lVar20,2);
  lVar22 = 0;
  uVar24 = uVar26;
  lVar5 = lVar22;
  while( true ) {
    while (lVar28 = lVar5, uVar25 = uVar24, uVar26 == 0) {
      bVar7 = SCARRY8(lVar22,1);
      lVar22 = lVar22 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100248c98);
        (*pcVar6)();
      }
      if ((long)(0x3f - uVar30 >> 6) <= lVar22) {
        _swift_bridgeObjectRelease(lVar20);
        FUN_10002f6ec(lVar20,puVar27,~uVar30,lVar28,0);
        uVar14 = *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder);
        *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder) = 0;
        _swift_release(uVar14);
        return;
      }
      uVar24 = uVar25;
      lVar5 = lVar28;
      uVar26 = puVar27[lVar22];
    }
    uVar24 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
    uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
    uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    UVar16.unknown = local_158;
    (**(code **)(lVar19 + 0x10))
              (local_158,
               *(long *)(lVar20 + 0x38) +
               *(long *)(lVar19 + 0x48) * (LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) | lVar22 << 6),
               UVar8.unknown);
    SVar31 = Foundation::URL::get_absoluteString(UVar16);
    _Var18.unknown = SVar31.bridgeObject;
    if ((SVar31.str == (undefined *)0xd00000000000001c) &&
       (_Var18.unknown == (undefined *)0x80000001004dc890)) break;
    uVar26 = uVar26 - 1 & uVar26;
    bVar7 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar31.str,_Var18,(_StringComparisonResult)0x1c);
    _swift_bridgeObjectRelease(_Var18.unknown);
    (**(code **)(lVar19 + 8))(local_158,UVar8.unknown);
    uVar24 = uVar26;
    lVar5 = lVar22;
    if (bVar7) {
LAB_100248c14:
      _swift_bridgeObjectRelease(lVar20);
      FUN_10002f6ec(lVar20,puVar27,~uVar30,lVar28,uVar25);
      return;
    }
  }
  _swift_bridgeObjectRelease(0x80000001004dc890);
  (**(code **)(lVar19 + 8))(local_158,UVar8.unknown);
  goto LAB_100248c14;
}

