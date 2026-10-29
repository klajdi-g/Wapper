// rea decompile_all
// name: FUN_100293e14
// address: 0x100293e14
// body: available
// range: 0x100293e14-0x100294223 inclusive
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
/* WARNING: Type propagation algorithm not settling */

void FUN_100293e14(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  UUID UVar3;
  ID IVar4;
  NSString *pNVar5;
  undefined *puVar6;
  undefined *puVar7;
  _ArrayBuffer _Var8;
  ID self;
  Dictionary<undefined,undefined> DVar9;
  undefined8 uVar10;
  ID *pIVar11;
  UUID UVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x8;
  ulong uVar15;
  String SVar16;
  undefined1 auStack_c0 [8];
  ID local_98 [6];
  undefined *local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar6 = (undefined *)NSUserDefaults::boolForKey_(IVar4,pNVar5);
  puVar7 = puVar6;
  FUN_100294f94();
  if ((((ulong)puVar6 & 1) != 0) || (*(long *)(puVar7 + 0x10) == 0)) goto LAB_1002941f0;
  _swift_bridgeObjectRelease();
  _Var8.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar15 = *(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
    if (uVar15 != 0) goto LAB_100293f40;
LAB_1002941c8:
    _swift_bridgeObjectRelease(_Var8.unknown);
    puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    _Var1.unknown = _Var8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var1.unknown = _Var8.unknown;
    }
    uVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (uVar15 == 0) goto LAB_1002941c8;
LAB_100293f40:
    local_68 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100294224);
      (*pcVar2)();
    }
    IVar4 = 0;
    do {
      puVar7 = local_68;
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        self = *(ID *)(_Var8.unknown + IVar4 * 8 + 0x20);
      }
      else {
        self = IVar4;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar4,_Var8);
      }
      objc_stub::deviceDescription(self);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar9 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar13 = 0;
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if (*(long *)(DVar9.unknown + 0x10) == 0) {
LAB_100294074:
        local_98[2] = 0;
        local_98[1] = 0;
        local_98[4] = 0;
        local_98[3] = 0;
      }
      else {
        _swift_bridgeObjectRetain(DVar9.unknown);
        thunk_FUN_1000046e0(pNVar5);
        if ((uVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(DVar9.unknown);
          goto LAB_100294074;
        }
        FUN_1000280d4(*(long *)(DVar9.unknown + 0x38) + (long)pNVar5 * 0x20,local_98 + 1);
        _swift_bridgeObjectRelease(DVar9.unknown);
      }
      _swift_bridgeObjectRelease(DVar9.unknown);
      if (local_98[4] == 0) {
        FUN_10028f264(local_98 + 1);
LAB_100294114:
        UVar12 = Foundation::UUID::init();
        SVar16 = Foundation::UUID::get_uuidString(UVar12);
        (**(code **)(lVar14 + 8))
                  (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
      }
      else {
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar11 = local_98;
        _swift_dynamicCast(pIVar11,local_98 + 1,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)pIVar11 & 1) == 0) goto LAB_100294114;
        objc_stub::stringValue(local_98[0]);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar13 = *(ulong *)(puVar7 + 0x10);
      local_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar7 + 0x18),uVar13 + 1,1);
      }
      puVar6 = local_68;
      IVar4 = IVar4 + 1;
      *(ulong *)(local_68 + 0x10) = uVar13 + 1;
      *(String *)(local_68 + uVar13 * 0x10 + 0x20) = SVar16;
    } while (uVar15 != IVar4);
    _swift_bridgeObjectRelease(_Var8.unknown);
  }
  puVar7 = puVar6;
  FUN_10020c98c(puVar6);
  _swift_bridgeObjectRelease(puVar6);
LAB_1002941f0:
  FUN_100294224();
  _swift_bridgeObjectRelease(puVar7);
  return;
}

