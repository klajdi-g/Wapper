// rea decompile_all
// name: FUN_100239edc
// address: 0x100239edc
// body: available
// range: 0x100239edc-0x10023a4cf inclusive
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

void FUN_100239edc(char *param_1,void *param_2)

{
  _CocoaArrayWrapper _Var1;
  String SVar2;
  code *pcVar3;
  bool bVar4;
  UUID UVar5;
  URL UVar6;
  URL UVar7;
  NSString *pNVar8;
  ID IVar9;
  _ArrayBuffer _Var10;
  ulong uVar11;
  Dictionary<undefined,undefined> DVar12;
  undefined8 uVar13;
  ID *pIVar14;
  UUID UVar15;
  void *pvVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar17;
  _StringGuts _Var18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  String SVar23;
  undefined1 auStack_110 [8];
  ulong local_108;
  long local_100;
  _ArrayBuffer local_f8;
  ulong local_f0;
  void *local_e8;
  ID local_e0;
  char *local_d8;
  long local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  local_d0 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  puVar20 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  puVar20 = (undefined *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_80
                     ,0,0);
  lVar17 = *(long *)(unaff_x20 + lVar17);
  if (*(long *)(lVar17 + 0x10) == 0) {
    (**(code **)(lVar19 + 0x38))(lVar21,1,1,UVar6.unknown);
  }
  else {
    _swift_bridgeObjectRetain(lVar17);
    pvVar16 = param_2;
    local_d8 = param_1;
    FUN_10000464c(param_1);
    bVar4 = ((ulong)pvVar16 & 1) == 0;
    if (!bVar4) {
      (**(code **)(lVar19 + 0x10))
                (lVar21,*(long *)(lVar17 + 0x38) + *(long *)(lVar19 + 0x48) * (long)param_1,
                 UVar6.unknown);
    }
    (**(code **)(lVar19 + 0x38))(lVar21,bVar4,1,UVar6.unknown);
    _swift_bridgeObjectRelease(lVar17);
    lVar17 = lVar21;
    (**(code **)(lVar19 + 0x30))(lVar21,1,UVar6.unknown);
    if ((int)lVar17 != 1) {
      UVar7.unknown = puVar20;
      (**(code **)(lVar19 + 0x20))(puVar20,lVar21,UVar6.unknown);
      bVar4 = Foundation::URL::get_isFileURL(UVar7);
      lVar17 = _TtC7Wallper21VideoWallpaperManager::players;
      if (bVar4) {
        _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_98,0,0);
        lVar17 = *(long *)(unaff_x20 + lVar17);
        if (*(long *)(lVar17 + 0x10) != 0) {
          _swift_bridgeObjectRetain(lVar17);
          pvVar16 = param_2;
          FUN_10000464c(local_d8);
          _swift_bridgeObjectRelease(lVar17);
          if (((ulong)pvVar16 & 1) != 0) {
            local_e8 = param_2;
            UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager)
            ;
            SVar23 = Foundation::URL::get_path(UVar7);
            pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar23.bridgeObject);
            IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar7.unknown,pNVar8);
            if ((int)IVar9 != 0) {
              _Var10.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
              FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
              (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC
                        ();
              if ((ulong)_Var10.unknown >> 0x3e == 0) {
                lVar17 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
              }
              else {
                _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
                if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
                  _Var1.unknown = _Var10.unknown;
                }
                lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
              }
              if (lVar17 != 0) {
                uVar22 = 0;
                local_f0 = (ulong)_Var10.unknown & 0xc000000000000001;
                local_108 = (ulong)_Var10.unknown & 0xffffffffffffff8;
                local_100 = lVar17;
                local_f8.unknown = _Var10.unknown;
                do {
                  if (local_f0 == 0) {
                    if (*(ulong *)(local_108 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x10023a4b0);
                      (*pcVar3)();
                    }
                    uVar11 = *(ulong *)(local_f8.unknown + uVar22 * 8 + 0x20);
                  }
                  else {
                    uVar11 = uVar22;
                    Swift::_ArrayBuffer::__getElementSlowPath(uVar22,local_f8);
                  }
                  local_e0 = uVar11;
                  objc_stub::deviceDescription(uVar11);
                  FUN_100008054(0);
                  FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,
                                &TargetProtocolConformanceDescriptor_10041b40c);
                  DVar12 = (extension_Foundation)::Swift::Dictionary::
                           __unconditionallyBridgeFromObjectiveC();
                  uVar11 = 0;
                  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                  if ((*(long *)(DVar12.unknown + 0x10) == 0) ||
                     (thunk_FUN_1000046e0(pNVar8), (uVar11 & 1) == 0)) {
                    _swift_bridgeObjectRelease(DVar12.unknown);
LAB_10023a350:
                    UVar15 = Foundation::UUID::init();
                    SVar23 = Foundation::UUID::get_uuidString(UVar15);
                    (**(code **)(local_d0 + 8))
                              (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                               UVar5.unknown);
                  }
                  else {
                    FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar8 * 0x20,auStack_b8)
                    ;
                    _swift_bridgeObjectRelease(DVar12.unknown);
                    uVar13 = 0;
                    FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
                    pIVar14 = &local_c8;
                    _swift_dynamicCast(pIVar14,auStack_b8,PTR___type_metadata_for_Any_100524178 + 8,
                                       uVar13,6);
                    if (((ulong)pIVar14 & 1) == 0) goto LAB_10023a350;
                    objc_stub::stringValue(local_c8);
                    SVar23 = (extension_Foundation)::Swift::String::
                             __unconditionallyBridgeFromObjectiveC();
                  }
                  SVar2.bridgeObject = local_e8;
                  SVar2.str = local_d8;
                  _Var18.unknown = SVar23.bridgeObject;
                  if (SVar23 == SVar2) {
                    _swift_bridgeObjectRelease(local_f8.unknown);
LAB_10023a3fc:
                    _swift_bridgeObjectRelease(_Var18.unknown);
                    _swift_beginAccess(unaff_x20 +
                                       _TtC7Wallper21VideoWallpaperManager::forcedRebuildScreens,
                                       auStack_b8,0x21,0);
                    pvVar16 = local_e8;
                    _swift_bridgeObjectRetain(local_e8);
                    FUN_1001ca054(&local_c8,local_d8,pvVar16);
                    _swift_endAccess(auStack_b8);
                    _swift_bridgeObjectRelease(local_c0);
                    FUN_10023e14c(puVar20,uVar22,0,0,1,0,0x3fd0000000000000,0);
                    goto LAB_10023a478;
                  }
                  bVar4 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)SVar23.str,_Var18,
                                     (_StringComparisonResult)(__int8)local_d8);
                  _swift_bridgeObjectRelease(_Var18.unknown);
                  _Var18.unknown = local_f8.unknown;
                  if (bVar4) goto LAB_10023a3fc;
                  lVar17 = uVar22 + 1;
                  if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10023a4ac);
                    (*pcVar3)();
                  }
                  uVar22 = uVar22 + 1;
                  _Var10.unknown = local_f8.unknown;
                } while (lVar17 != local_100);
              }
              _swift_bridgeObjectRelease(_Var10.unknown);
            }
          }
        }
      }
LAB_10023a478:
      (**(code **)(lVar19 + 8))(puVar20,UVar6.unknown);
      return;
    }
  }
  FUN_10002a29c(lVar21,&DAT_100553d90,&DAT_10041bf10);
  return;
}

