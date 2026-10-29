// rea decompile_all
// name: FUN_1003fc228
// address: 0x1003fc228
// body: available
// range: 0x1003fc228-0x1003fc677 inclusive
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

undefined *
FUN_1003fc228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  undefined *puVar5;
  _ArrayBuffer _Var6;
  long lVar7;
  ulong self;
  Dictionary<undefined,undefined> DVar8;
  NSString *pNVar9;
  undefined8 uVar10;
  ID *pIVar11;
  UUID UVar12;
  undefined *puVar13;
  char *pcVar14;
  long extraout_x8;
  ulong uVar15;
  long lVar16;
  undefined8 extraout_d0;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  ulong local_e0;
  long local_d8;
  long local_d0;
  undefined *puStack_c8;
  long local_c0;
  _ArrayBuffer local_b8;
  ulong local_b0;
  ID local_a8;
  undefined *local_a0 [4];
  
  puStack_c8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d0 = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  local_d8 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100007a0c();
  _Var6.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var3.unknown = _Var6.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (lVar7 != 0) {
    local_b0 = (ulong)_Var6.unknown & 0xc000000000000001;
    local_e0 = (ulong)_Var6.unknown & 0xffffffffffffff8;
    lVar16 = 4;
    local_c0 = lVar7;
    local_b8.unknown = _Var6.unknown;
    do {
      uVar15 = lVar16 - 4;
      if (local_b0 == 0) {
        if (*(ulong *)(local_e0 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fc618);
          (*pcVar4)();
        }
        self = *(ulong *)(local_b8.unknown + lVar16 * 8);
        uVar17 = param_2;
        uVar18 = param_3;
        uVar19 = param_4;
      }
      else {
        self = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,local_b8);
        uVar17 = param_2;
        uVar18 = param_3;
        uVar19 = param_4;
      }
      lVar7 = lVar16 + -3;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fc60c);
        (*pcVar4)();
      }
      objc_stub::deviceDescription(self);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar15 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar8.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar9), (uVar15 & 1) == 0)
         ) {
        _swift_bridgeObjectRelease(DVar8.unknown);
LAB_1003fc4d0:
        lVar1 = local_d8;
        UVar12 = Foundation::UUID::init();
        SVar20 = Foundation::UUID::get_uuidString(UVar12);
        (**(code **)(local_d0 + 8))(lVar1,puStack_c8);
      }
      else {
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,local_a0);
        _swift_bridgeObjectRelease(DVar8.unknown);
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar11 = &local_a8;
        _swift_dynamicCast(pIVar11,local_a0,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)pIVar11 & 1) == 0) goto LAB_1003fc4d0;
        objc_stub::stringValue(local_a8);
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      objc_stub::frame(self);
      puVar13 = puVar5;
      param_2 = uVar17;
      param_3 = uVar18;
      param_4 = uVar19;
      _swift_isUniquelyReferenced_nonNull_native();
      SVar21 = SVar20;
      local_a0[0] = puVar5;
      FUN_10000464c();
      pcVar14 = SVar21.str;
      uVar15 = (ulong)~(uint)SVar21.bridgeObject & 1;
      lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
      if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fc610);
        (*pcVar4)();
      }
      if (*(long *)(puVar5 + 0x18) < lVar1) {
        FUN_1001d1970(lVar1,puVar13);
        SVar22 = SVar20;
        FUN_10000464c();
        pcVar14 = SVar22.str;
        if (((uint)SVar21.bridgeObject & 1) != ((uint)SVar22.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fc678);
          (*pcVar4)();
        }
joined_r0x0001003fc600:
        if (((ulong)SVar21.bridgeObject & 1) != 0) goto LAB_1003fc31c;
LAB_1003fc5a0:
        *(ulong *)(local_a0[0] + ((ulong)pcVar14 >> 6) * 8 + 0x40) =
             *(ulong *)(local_a0[0] + ((ulong)pcVar14 >> 6) * 8 + 0x40) |
             1L << ((ulong)pcVar14 & 0x3f);
        *(String *)(*(long *)(local_a0[0] + 0x30) + (long)pcVar14 * 0x10) = SVar20;
        puVar2 = (undefined8 *)(*(long *)(local_a0[0] + 0x38) + (long)pcVar14 * 0x20);
        *puVar2 = extraout_d0;
        puVar2[1] = uVar17;
        puVar2[2] = uVar18;
        puVar2[3] = uVar19;
        if (SCARRY8(*(long *)(local_a0[0] + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fc614);
          (*pcVar4)();
        }
        *(long *)(local_a0[0] + 0x10) = *(long *)(local_a0[0] + 0x10) + 1;
        puVar5 = local_a0[0];
      }
      else {
        if (((ulong)puVar13 & 1) == 0) {
          FUN_1001cd4e8();
          goto joined_r0x0001003fc600;
        }
        if (((ulong)SVar21.bridgeObject & 1) == 0) goto LAB_1003fc5a0;
LAB_1003fc31c:
        puVar5 = local_a0[0];
        puVar2 = (undefined8 *)(*(long *)(local_a0[0] + 0x38) + (long)pcVar14 * 0x20);
        *puVar2 = extraout_d0;
        puVar2[1] = uVar17;
        puVar2[2] = uVar18;
        puVar2[3] = uVar19;
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
      }
      lVar16 = lVar16 + 1;
      _Var6.unknown = local_b8.unknown;
    } while (lVar7 != local_c0);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
  return puVar5;
}

