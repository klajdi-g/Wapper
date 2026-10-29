// rea decompile_all
// name: FUN_1002e4cb0
// address: 0x1002e4cb0
// body: available
// range: 0x1002e4cb0-0x1002e54fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_1002e4cb0(void)

{
  undefined *puVar1;
  _CocoaArrayWrapper _Var2;
  _ArrayBuffer _Var3;
  code *pcVar4;
  StringInterpolation SVar5;
  State SVar6;
  undefined *puVar7;
  undefined *self;
  NSArray *pNVar8;
  UUID UVar9;
  char *pcVar10;
  ulong uVar11;
  LocalizedStringKey LVar12;
  _StringGuts _Var13;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  ContiguousArray CVar15;
  long unaff_x20;
  undefined8 uVar16;
  StringInterpolation stringInterpolation;
  undefined *puVar17;
  _ArrayBuffer _Var18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  String SVar22;
  String separator;
  String SVar23;
  String SVar24;
  undefined auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  _ArrayBuffer local_70;
  undefined8 uStack_68;
  
  SVar5 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  local_a8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_88 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  local_98 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
             (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  local_70.unknown = *(undefined **)(unaff_x20 + 0x70);
  SVar6.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar6);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  local_80 = DAT_100577d38;
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  uVar16 = *(undefined8 *)(unaff_x20 + 8);
  puVar17 = &DAT_10042f588;
  _swift_getKeyPath();
  puVar19 = &DAT_10042f5b0;
  _swift_getKeyPath(&DAT_10042f5b0);
  _Var13.unknown = puVar17;
  local_a0 = uVar16;
  Combine::Published::_get_subscript(&local_70,uVar16,puVar17,puVar19);
  _swift_release(puVar17);
  _swift_release(puVar19);
  _Var3.unknown = local_70.unknown;
  local_70.unknown = puVar7;
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var2.unknown = _Var3.unknown;
    }
    puVar17 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  _Var18.unknown = PTR___swiftEmptyArrayStorage_100524190;
  if (puVar17 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e515c);
          (*pcVar4)();
        }
        puVar7 = *(undefined **)(_Var3.unknown + (long)puVar19 * 8 + 0x20);
      }
      else {
        puVar7 = puVar19;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar19,_Var3);
      }
      puVar1 = puVar19 + 1;
      if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e5158);
        (*pcVar4)();
      }
      self = puVar7;
      FUN_100174ed8();
      lVar14 = local_98;
      if (self == (undefined *)0x0) {
        UVar9 = Foundation::UUID::init();
        SVar22 = Foundation::UUID::get_uuidString(UVar9);
        (**(code **)(local_90 + 8))(lVar14,puStack_88);
      }
      else {
        objc_stub::stringValue((ID)self);
        SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      CVar15.unknown = SVar22.bridgeObject;
      FUN_10023ae7c();
      _Var13.unknown = SVar22.bridgeObject;
      _swift_bridgeObjectRelease();
      if (((ulong)SVar22.str & 0xff) == 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar15);
                    /* WARNING: Load size is inaccurate */
        CVar15.unknown = local_70.unknown[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar15.unknown,(ContiguousArray)_Var13.unknown);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
        Swift::ContiguousArray::__endMutation(CVar15);
        _Var13.unknown = puVar7;
      }
      puVar19 = puVar19 + 1;
      _Var18.unknown = local_70.unknown;
    } while (puVar1 != puVar17);
  }
  puVar17 = PTR___swiftEmptyArrayStorage_100524190;
  _swift_bridgeObjectRelease(_Var3.unknown);
  if (((long)_Var18.unknown < 0) || (((ulong)_Var18.unknown >> 0x3e & 1) != 0)) {
    uVar20 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var18.unknown);
  }
  else {
    uVar20 = *(ulong *)(_Var18.unknown + 0x10);
  }
  if (uVar20 == 0) {
    _swift_release(_Var18.unknown);
    lVar14 = *(long *)(PTR___swiftEmptyArrayStorage_100524190 + 0x10);
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_70.unknown = puVar17;
    FUN_1001c5bc4(0,uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e54a0);
      (*pcVar4)();
    }
    uVar21 = 0;
    do {
      _Var3.unknown = local_70.unknown;
      if (((ulong)_Var18.unknown & 0xc000000000000001) == 0) {
        uVar11 = *(ulong *)(_Var18.unknown + uVar21 * 8 + 0x20);
      }
      else {
        uVar11 = uVar21;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar21,_Var18);
      }
      objc_stub::localizedName(uVar11);
      SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var13.unknown = SVar22.bridgeObject;
      uVar11 = *(ulong *)(_Var3.unknown + 0x10);
      puVar17 = (undefined *)(uVar11 + 1);
      local_70.unknown = _Var3.unknown;
      if (*(ulong *)(_Var3.unknown + 0x18) >> 1 <= uVar11) {
        _Var13.unknown = puVar17;
        FUN_1001c5bc4(1 < *(ulong *)(_Var3.unknown + 0x18),puVar17,1);
      }
      _Var3.unknown = local_70.unknown;
      uVar21 = uVar21 + 1;
      *(undefined **)(local_70.unknown + 0x10) = puVar17;
      *(String *)(local_70.unknown + uVar11 * 0x10 + 0x20) = SVar22;
    } while (uVar20 != uVar21);
    _swift_release(_Var18.unknown);
    lVar14 = *(long *)(_Var3.unknown + 0x10);
  }
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(_Var3.unknown);
    puVar17 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_70.unknown = (undefined *)0x0;
    uStack_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var13);
    _swift_bridgeObjectRelease(uStack_68);
    local_70.unknown = (undefined *)0x6f20646573756150;
    uStack_68 = 0xea0000000000206e;
    pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(_Var3.unknown);
    NSListFormatter::localizedStringByJoiningStrings_((ID)&_OBJC_CLASS___NSListFormatter);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar23.bridgeObject = in_x3;
    SVar23.str = (char *)pNVar8;
    Swift::String::append(SVar22,SVar23);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar22.bridgeObject = (void *)0x80000001004e5680;
    SVar22.str = (char *)0xd000000000000012;
    SVar24.bridgeObject = in_x3;
    SVar24.str = (char *)pNVar8;
    Swift::String::append(SVar22,SVar24);
    uVar16 = uStack_68;
    _Var3.unknown = local_70.unknown;
    puVar17 = (undefined *)0x0;
    FUN_1001c432c(0,1,1,PTR___swiftEmptyArrayStorage_100524190);
    uVar20 = *(ulong *)(puVar17 + 0x10);
    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar20) {
      puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
      FUN_1001c432c(puVar17,uVar20 + 1,1);
    }
    *(ulong *)(puVar17 + 0x10) = uVar20 + 1;
    *(undefined **)(puVar17 + uVar20 * 0x10 + 0x20) = _Var3.unknown;
    *(undefined8 *)(puVar17 + uVar20 * 0x10 + 0x28) = uVar16;
    local_78 = puVar17;
  }
  uVar16 = local_a0;
  puVar19 = &DAT_10042f588;
  _swift_getKeyPath(&DAT_10042f588);
  puVar7 = &DAT_10042f5b0;
  _swift_getKeyPath();
  SVar5.unknown = puVar7;
  Combine::Published::_get_subscript(&local_70,uVar16,puVar19);
  _swift_release(puVar19);
  _swift_release(puVar7);
  _Var3.unknown = local_70.unknown;
  puVar19 = local_70.unknown & 0xffffffffffffff8;
  if ((ulong)local_70.unknown >> 0x3e == 0) {
    uVar20 = *(ulong *)(puVar19 + 0x10);
  }
  else {
    _Var2.unknown = puVar19;
    if ((undefined *)0x7fffffffffffffff < local_70.unknown) {
      _Var2.unknown = local_70.unknown;
    }
    uVar20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  uVar21 = 0;
  do {
    if (uVar20 == uVar21) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      stringInterpolation.unknown = local_a8;
      if (*(long *)(puVar17 + 0x10) == 0) {
        _swift_bridgeObjectRelease(puVar17);
        return (undefined *)0x0;
      }
      goto LAB_1002e5380;
    }
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar19 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e5488);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(_Var3.unknown + uVar21 * 8 + 0x20);
    }
    else {
      uVar11 = uVar21;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar21,_Var3);
    }
    if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e5484);
      (*pcVar4)();
    }
    FUN_100174ed8();
    lVar14 = local_98;
    if (uVar11 == 0) {
      UVar9 = Foundation::UUID::init();
      SVar22 = Foundation::UUID::get_uuidString(UVar9);
      (**(code **)(local_90 + 8))(lVar14,puStack_88);
    }
    else {
      objc_stub::stringValue(uVar11);
      SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pcVar10 = SVar22.str;
    FUN_10023ae7c(pcVar10,SVar22.bridgeObject);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    uVar21 = uVar21 + 1;
  } while (((uint)pcVar10 & 0xff) != 1);
  _swift_bridgeObjectRelease(_Var3.unknown);
  puVar19 = puVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar17;
  if (((ulong)puVar19 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    SVar5.unknown = (undefined *)0x1;
    FUN_1001c432c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
  }
  stringInterpolation.unknown = local_a8;
  uVar20 = *(ulong *)(puVar7 + 0x10);
  puVar17 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar20) {
    puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    SVar5.unknown = (undefined *)0x1;
    FUN_1001c432c(puVar17,uVar20 + 1,1,puVar7);
  }
  *(ulong *)(puVar17 + 0x10) = uVar20 + 1;
  *(undefined8 *)(puVar17 + uVar20 * 0x10 + 0x20) = 0xd000000000000018;
  *(undefined8 *)(puVar17 + uVar20 * 0x10 + 0x28) = 0x80000001004e56a0;
  local_78 = puVar17;
LAB_1002e5380:
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0,1);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar5);
  SVar5.unknown = &DAT_100553858;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x20;
  SVar22 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar22,SVar5);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar5);
  LVar12 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  _swift_bridgeObjectRelease(puVar17);
  return LVar12.unknown;
}

