// rea decompile_all
// name: FUN_10024d63c
// address: 0x10024d63c
// body: available
// range: 0x10024d63c-0x10024ddbf inclusive
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

void FUN_10024d63c(long param_1,char *param_2,undefined *param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  _ArrayBuffer _Var9;
  ulong uVar10;
  Dictionary<undefined,undefined> DVar11;
  NSString *pNVar12;
  undefined8 uVar13;
  ID *pIVar14;
  UUID UVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  String SVar24;
  undefined *local_100;
  ulong local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  char *local_c8;
  ID local_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  local_e8 = param_4;
  local_c8 = param_2;
  puStack_d0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar18 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar18;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  uVar16 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ea38;
  local_f8 = uVar16;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = uVar16 - extraout_x8_01;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar17 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar19 - extraout_x12_00;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar18 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (param_1 == 0) {
    return;
  }
  _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_98,0
                     ,0);
  lVar18 = *(long *)(param_1 + lVar18);
  local_100 = param_3;
  local_f0 = param_1;
  if (*(long *)(lVar18 + 0x10) == 0) {
    pcVar22 = *(code **)(lVar21 + 0x38);
    (*pcVar22)(lVar20,1,1,UVar3.unknown);
  }
  else {
    _swift_bridgeObjectRetain(lVar18);
    pcVar6 = local_c8;
    FUN_10000464c(local_c8);
    bVar2 = ((ulong)param_3 & 1) == 0;
    if (bVar2) {
      pcVar22 = *(code **)(lVar21 + 0x38);
    }
    else {
      (**(code **)(lVar21 + 0x10))
                (lVar20,*(long *)(lVar18 + 0x38) + *(long *)(lVar21 + 0x48) * (long)pcVar6,
                 UVar3.unknown);
      pcVar22 = *(code **)(lVar21 + 0x38);
    }
    (*pcVar22)(lVar20,bVar2,1,UVar3.unknown);
    _swift_bridgeObjectRelease(lVar18);
  }
  (**(code **)(lVar21 + 0x10))(lVar19,local_e8,UVar3.unknown);
  (*pcVar22)(lVar19,0,1,UVar3.unknown);
  lVar18 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar20,lVar23,&DAT_100553d90,&DAT_10041bf10);
  FUN_1000087e4(lVar19,lVar23 + lVar18,&DAT_100553d90,&DAT_10041bf10);
  pcVar22 = *(code **)(lVar21 + 0x30);
  lVar7 = lVar23;
  (*pcVar22)(lVar23,1,UVar3.unknown);
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar20,&DAT_100553d90,&DAT_10041bf10);
    lVar18 = lVar23 + lVar18;
    (*pcVar22)(lVar18,1,UVar3.unknown);
    if ((int)lVar18 != 1) {
LAB_10024d9c0:
      FUN_10002a29c(lVar23,&DAT_10054ea38,&DAT_100426270);
      return;
    }
    FUN_10002a29c(lVar23,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    FUN_1000087e4(lVar23,lVar17,&DAT_100553d90,&DAT_10041bf10);
    lVar7 = lVar23 + lVar18;
    (*pcVar22)(lVar7,1,UVar3.unknown);
    uVar16 = local_f8;
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar20,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar21 + 8))(lVar17,UVar3.unknown);
      goto LAB_10024d9c0;
    }
    (**(code **)(lVar21 + 0x20))(local_f8,lVar23 + lVar18,UVar3.unknown);
    puVar4 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar2 = Swift::Equatable::___infix(lVar17,uVar16,UVar3.unknown,puVar4);
    pcVar22 = *(code **)(lVar21 + 8);
    (*pcVar22)(uVar16,UVar3.unknown);
    FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar20,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar22)(lVar17,UVar3.unknown);
    FUN_10002a29c(lVar23,&DAT_100553d90,&DAT_10041bf10);
    if (!bVar2) {
      return;
    }
  }
  pcVar6 = local_c8;
  puVar4 = local_100;
  pcVar8 = local_c8;
  FUN_10024af90(local_c8,local_100);
  if (((ulong)pcVar8 & 1) == 0) {
    _Var9.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var9.unknown >> 0x3e == 0) {
      lVar18 = *(long *)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var9.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
        _Var1.unknown = _Var9.unknown;
      }
      lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar18 != 0) {
      uVar16 = 0;
      local_f8 = (ulong)_Var9.unknown & 0xffffffffffffff8;
      do {
        if (((ulong)_Var9.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(local_f8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10024dda4);
            (*pcVar22)();
          }
          uVar10 = *(ulong *)(_Var9.unknown + uVar16 * 8 + 0x20);
        }
        else {
          uVar10 = uVar16;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar16,_Var9);
        }
        objc_stub::deviceDescription(uVar10);
        FUN_100008054(0);
        FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
        DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar10 = 0;
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar11.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar12), (uVar10 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar11.unknown);
LAB_10024dca0:
          lVar17 = local_e0;
          UVar15 = Foundation::UUID::init();
          SVar24 = Foundation::UUID::get_uuidString(UVar15);
          (**(code **)(local_d8 + 8))(lVar17,puStack_d0);
          if (SVar24.str == pcVar6) {
LAB_10024dcd0:
            if (SVar24.bridgeObject == puVar4) {
              _swift_bridgeObjectRelease(_Var9.unknown);
              _Var9.unknown = SVar24.bridgeObject;
              goto LAB_10024dd48;
            }
          }
        }
        else {
          FUN_1000280d4(*(long *)(DVar11.unknown + 0x38) + (long)pNVar12 * 0x20,auStack_b8);
          _swift_bridgeObjectRelease(DVar11.unknown);
          uVar13 = 0;
          FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
          pIVar14 = &local_c0;
          _swift_dynamicCast(pIVar14,auStack_b8,PTR___type_metadata_for_Any_100524178 + 8,uVar13,6);
          if (((ulong)pIVar14 & 1) == 0) goto LAB_10024dca0;
          objc_stub::stringValue(local_c0);
          SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pcVar6 = local_c8;
          if (SVar24.str == local_c8) goto LAB_10024dcd0;
        }
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar24.str,(_StringGuts)SVar24.bridgeObject,
                           (_StringComparisonResult)(__int8)pcVar6);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        if (bVar2) {
LAB_10024dd48:
          _swift_bridgeObjectRelease(_Var9.unknown);
          FUN_10023e14c(local_e8,uVar16,0,0,1,0,0,1);
          return;
        }
        lVar17 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10024dda0);
          (*pcVar22)();
        }
        uVar16 = uVar16 + 1;
      } while (lVar17 != lVar18);
    }
    _swift_bridgeObjectRelease(_Var9.unknown);
  }
  return;
}

