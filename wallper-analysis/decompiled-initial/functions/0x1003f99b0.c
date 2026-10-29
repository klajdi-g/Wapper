// rea decompile_all
// name: FUN_1003f99b0
// address: 0x1003f99b0
// body: available
// range: 0x1003f99b0-0x1003f9e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f99b0(undefined *param_1)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  Dictionary<undefined,undefined> DVar9;
  NSString *pNVar10;
  undefined8 uVar11;
  ID *pIVar12;
  UUID UVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  String SVar19;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  long local_b0;
  undefined *puStack_a8;
  ulong local_a0;
  ID local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined *local_68;
  
  puStack_a8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  _Var7.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    uVar16 = *(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var7.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var2.unknown = _Var7.unknown;
    }
    uVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (uVar16 == 0) {
    _swift_bridgeObjectRelease(_Var7.unknown);
    puVar15 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003f9e88);
      (*pcVar5)();
    }
    uVar17 = 0;
    local_a0 = (ulong)_Var7.unknown & 0xc000000000000001;
    local_b8 = param_1;
    do {
      puVar15 = local_68;
      if (local_a0 == 0) {
        uVar8 = *(ulong *)(_Var7.unknown + uVar17 * 8 + 0x20);
      }
      else {
        uVar8 = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var7);
      }
      objc_stub::deviceDescription(uVar8);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar9 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar8 = 0;
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if (*(long *)(DVar9.unknown + 0x10) == 0) {
LAB_1003f9ba4:
        uStack_88 = 0;
        local_90 = (undefined *)0x0;
        local_78 = 0;
        uStack_80 = 0;
      }
      else {
        _swift_bridgeObjectRetain(DVar9.unknown);
        thunk_FUN_1000046e0(pNVar10);
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(DVar9.unknown);
          goto LAB_1003f9ba4;
        }
        FUN_1000280d4(*(long *)(DVar9.unknown + 0x38) + (long)pNVar10 * 0x20,&local_90);
        _swift_bridgeObjectRelease(DVar9.unknown);
      }
      _swift_bridgeObjectRelease(DVar9.unknown);
      if (local_78 == 0) {
        FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
LAB_1003f9c54:
        UVar13 = Foundation::UUID::init();
        SVar19 = Foundation::UUID::get_uuidString(UVar13);
        (**(code **)(local_b0 + 8))
                  (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_a8);
      }
      else {
        uVar11 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar12 = &local_98;
        _swift_dynamicCast(pIVar12,&local_90,PTR___type_metadata_for_Any_100524178 + 8,uVar11,6);
        if (((ulong)pIVar12 & 1) == 0) goto LAB_1003f9c54;
        objc_stub::stringValue(local_98);
        SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar8 = *(ulong *)(puVar15 + 0x10);
      local_68 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar8) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar15 + 0x18),uVar8 + 1,1);
      }
      puVar15 = local_68;
      uVar17 = uVar17 + 1;
      *(ulong *)(local_68 + 0x10) = uVar8 + 1;
      *(String *)(local_68 + uVar8 * 0x10 + 0x20) = SVar19;
    } while (uVar16 != uVar17);
    _swift_bridgeObjectRelease(_Var7.unknown);
    param_1 = local_b8;
  }
  puVar14 = puVar15;
  FUN_10020c98c();
  _swift_bridgeObjectRelease(puVar15);
  if (*(ulong *)(param_1 + 0x10) >> 3 < *(ulong *)(puVar14 + 0x10)) {
    _swift_bridgeObjectRetain(param_1);
    puVar15 = puVar14;
    FUN_1001a8804(puVar14,param_1);
    _swift_bridgeObjectRelease(puVar14);
  }
  else {
    local_90 = param_1;
    _swift_bridgeObjectRetain(param_1);
    FUN_1001a86c8(puVar14);
    _swift_bridgeObjectRelease(puVar14);
    puVar15 = local_90;
  }
  lVar18 = 0;
  uVar17 = 1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((puVar15[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(puVar15 + 0x38);
  lVar4 = DAT_100557bb0;
  while( true ) {
    for (; DAT_100557bb0 = lVar4, uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(puVar15 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 0x10 +
               lVar18 * 0x400);
      uVar11 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      if (lVar4 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      FUN_1002505dc(uVar11,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      lVar4 = DAT_100557bb0;
    }
    bVar6 = SCARRY8(lVar18,1);
    lVar18 = lVar18 + 1;
    if (bVar6) break;
    if ((long)(uVar17 + 0x3f >> 6) <= lVar18) {
      _swift_release(puVar15);
      return;
    }
    uVar16 = *(ulong *)((long)(puVar15 + 0x38) + lVar18 * 8);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1003f9e84);
  (*pcVar5)();
}

