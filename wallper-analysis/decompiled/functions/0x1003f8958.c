// rea decompile_all
// name: FUN_1003f8958
// address: 0x1003f8958
// body: available
// range: 0x1003f8958-0x1003f8ce3 inclusive
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

void FUN_1003f8958(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  UUID UVar3;
  _ArrayBuffer _Var4;
  ulong uVar5;
  Dictionary<undefined,undefined> DVar6;
  NSString *pNVar7;
  undefined8 uVar8;
  ID *pIVar9;
  UUID UVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  String SVar17;
  ID local_90;
  undefined1 auStack_88 [32];
  undefined *local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  FUN_1002b7ad8();
  _Var4.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    uVar14 = *(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var1.unknown = _Var4.unknown;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(_Var4.unknown);
    puVar15 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f8ce4);
      (*pcVar2)();
    }
    uVar16 = 0;
    do {
      puVar15 = local_68;
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(_Var4.unknown + uVar16 * 8 + 0x20);
      }
      else {
        uVar5 = uVar16;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar16,_Var4);
      }
      objc_stub::deviceDescription(uVar5);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar5 = 0;
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar6.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar7), (uVar5 & 1) == 0))
      {
        _swift_bridgeObjectRelease(DVar6.unknown);
LAB_1003f8bc4:
        UVar10 = Foundation::UUID::init();
        SVar17 = Foundation::UUID::get_uuidString(UVar10);
        (**(code **)(lVar12 + 8))
                  (&stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                   UVar3.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar6.unknown + 0x38) + (long)pNVar7 * 0x20,auStack_88);
        _swift_bridgeObjectRelease(DVar6.unknown);
        uVar8 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar9 = &local_90;
        _swift_dynamicCast(pIVar9,auStack_88,PTR___type_metadata_for_Any_100524178 + 8,uVar8,6);
        if (((ulong)pIVar9 & 1) == 0) goto LAB_1003f8bc4;
        objc_stub::stringValue(local_90);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar5 = *(ulong *)(puVar15 + 0x10);
      local_68 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar15 + 0x18),uVar5 + 1,1);
      }
      puVar15 = local_68;
      uVar16 = uVar16 + 1;
      *(ulong *)(local_68 + 0x10) = uVar5 + 1;
      *(String *)(local_68 + uVar5 * 0x10 + 0x20) = SVar17;
    } while (uVar14 != uVar16);
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  puVar11 = puVar15;
  FUN_10020c98c();
  _swift_bridgeObjectRelease(puVar15);
  uVar8 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenIDs);
  *(undefined **)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenIDs) = puVar11;
  _swift_bridgeObjectRelease();
  FUN_1003fc228();
  uVar13 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenFrames);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenFrames) = uVar8;
  _swift_bridgeObjectRelease(uVar13);
  return;
}

