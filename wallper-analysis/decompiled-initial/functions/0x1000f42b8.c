// rea decompile_all
// name: FUN_1000f42b8
// address: 0x1000f42b8
// body: available
// range: 0x1000f42b8-0x1000f47fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f42b8(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  URL UVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  Dictionary<undefined,undefined> DVar9;
  NSString *pNVar10;
  undefined8 uVar11;
  ID *pIVar12;
  UUID UVar13;
  URL UVar14;
  _StringGuts _Var15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  void *pvVar21;
  String SVar22;
  String SVar23;
  undefined *local_100;
  long local_f8;
  void *local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  _ArrayBuffer local_c0;
  ulong local_b8;
  ulong local_b0;
  ID local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88 [5];
  
  local_f0 = param_2;
  local_e8 = param_1;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553d90;
  local_f8 = lVar18;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined *)(lVar18 - extraout_x8_00);
  puStack_d0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  local_e0 = (long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100424628;
  _swift_getKeyPath(&DAT_100424628);
  puVar7 = &DAT_100424650;
  _swift_getKeyPath(&DAT_100424650);
  Combine::Published::_get_subscript(local_88,param_4,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if ((ulong)local_88[0] >> 0x3e == 0) {
    lVar18 = *(long *)(((ulong)local_88[0] & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)local_88[0] & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < local_88[0]) {
      _Var1.unknown = local_88[0];
    }
    lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar18 != 0) {
    uVar16 = 0;
    local_b0 = (ulong)local_88[0] & 0xc000000000000001;
    local_b8 = (ulong)local_88[0] & 0xffffffffffffff8;
    local_c0.unknown = local_88[0];
    local_100 = UVar5.unknown;
    local_c8 = lVar18;
    do {
      if (local_b0 == 0) {
        if (*(ulong *)(local_b8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000f47b8);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(local_c0.unknown + uVar16 * 8 + 0x20);
      }
      else {
        uVar8 = uVar16;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar16,local_c0);
      }
      lVar18 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000f47b4);
        (*pcVar3)();
      }
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      lVar17 = DAT_100577d38;
      objc_stub::deviceDescription(uVar8);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar9 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar8 = 0;
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar9.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar10), (uVar8 & 1) == 0)
         ) {
        _swift_bridgeObjectRelease(DVar9.unknown);
LAB_1000f45d8:
        lVar2 = local_e0;
        UVar13 = Foundation::UUID::init();
        SVar22 = Foundation::UUID::get_uuidString(UVar13);
        (**(code **)(local_d8 + 8))(lVar2,puStack_d0);
      }
      else {
        FUN_1000280d4(*(long *)(DVar9.unknown + 0x38) + (long)pNVar10 * 0x20,local_88);
        _swift_bridgeObjectRelease(DVar9.unknown);
        uVar11 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar12 = &local_a8;
        _swift_dynamicCast(pIVar12,local_88,PTR___type_metadata_for_Any_100524178 + 8,uVar11,6);
        if (((ulong)pIVar12 & 1) == 0) goto LAB_1000f45d8;
        objc_stub::stringValue(local_a8);
        SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        UVar5.unknown = local_100;
      }
      lVar2 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
      pvVar21 = SVar22.bridgeObject;
      _swift_beginAccess(lVar17 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                         auStack_a0,0,0);
      lVar17 = *(long *)(lVar17 + lVar2);
      if (*(long *)(lVar17 + 0x10) == 0) {
        bVar4 = true;
      }
      else {
        _swift_bridgeObjectRetain(lVar17);
        FUN_10000464c(SVar22.str);
        bVar4 = ((ulong)SVar22.bridgeObject & 1) == 0;
        if (!bVar4) {
          (**(code **)(lVar19 + 0x10))
                    (puVar20,*(long *)(lVar17 + 0x38) + *(long *)(lVar19 + 0x48) * (long)SVar22.str,
                     UVar5.unknown);
        }
        _swift_bridgeObjectRelease(lVar17);
      }
      _swift_bridgeObjectRelease(pvVar21);
      (**(code **)(lVar19 + 0x38))(puVar20,bVar4,1,UVar5.unknown);
      puVar6 = puVar20;
      (**(code **)(lVar19 + 0x30))(puVar20,1,UVar5.unknown);
      lVar17 = local_f8;
      if ((int)puVar6 == 0) {
        (**(code **)(lVar19 + 0x10))(local_f8,puVar20,UVar5.unknown);
        UVar14.unknown = puVar20;
        FUN_10002a29c(puVar20,&DAT_100553d90,&DAT_10041bf10);
        SVar23 = Foundation::URL::get_lastPathComponent(UVar14);
        _Var15.unknown = SVar23.bridgeObject;
        (**(code **)(lVar19 + 8))(lVar17,UVar5.unknown);
        SVar22.bridgeObject = local_f0;
        SVar22.str = local_e8;
        if (SVar23 == SVar22) {
          _swift_bridgeObjectRelease(local_c0.unknown);
          _swift_bridgeObjectRelease(_Var15.unknown);
          return 1;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar23.str,_Var15,(_StringComparisonResult)(__int8)local_e8)
        ;
        _swift_bridgeObjectRelease(_Var15.unknown);
        if (bVar4) {
          _swift_bridgeObjectRelease(local_c0.unknown);
          return 1;
        }
      }
      else {
        FUN_10002a29c(puVar20,&DAT_100553d90,&DAT_10041bf10);
      }
      uVar16 = uVar16 + 1;
      local_88[0] = local_c0.unknown;
    } while (lVar18 != local_c8);
  }
  _swift_bridgeObjectRelease(local_88[0]);
  return 0;
}

