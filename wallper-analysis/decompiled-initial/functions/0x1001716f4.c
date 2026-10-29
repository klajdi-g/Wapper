// rea decompile_all
// name: FUN_1001716f4
// address: 0x1001716f4
// body: available
// range: 0x1001716f4-0x1001720db inclusive
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

undefined8
FUN_1001716f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  _ArrayBuffer _Var7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  NSObject *pNVar11;
  NSObject *self;
  UUID UVar12;
  void *pvVar13;
  URL UVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  Published *pPVar18;
  char *in_x3;
  byte bVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  long extraout_x8_02;
  code *pcVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  void *pvVar23;
  NSObject *pNVar24;
  String *pSVar25;
  long lVar26;
  long lVar27;
  double extraout_d0;
  double dVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String local_180;
  long local_170;
  undefined *local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  NSObject *local_148;
  _ArrayBuffer local_140;
  long local_138;
  ulong local_130;
  long local_128;
  NSObject *local_118;
  undefined1 auStack_d8 [24];
  undefined *local_c0 [3];
  long local_a8;
  String local_a0;
  char *local_90;
  
  pcVar4 = (char *)0x0;
  FUN_100170d98();
  local_128 = *(long *)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar22 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054b0b0;
  local_158 = lVar22;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar22 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar25 = (String *)(lVar22 - extraout_x12_00);
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)pSVar25 - extraout_x8_01;
  local_168 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_170 = *(long *)(local_168 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_170 + 0x40));
  local_180.bridgeObject = (void *)(lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pcVar6 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_10000515c();
  local_90 = pcVar6;
  _Var7.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  uVar8 = 0;
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  local_150 = uVar8;
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var7.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var1.unknown = _Var7.unknown;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(_Var7.unknown);
    local_118 = (NSObject *)0x0;
  }
  else {
    if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1001720dc);
        (*pcVar21)();
      }
      local_118 = *(NSObject **)(_Var7.unknown + 0x20);
    }
    else {
      local_118 = (NSObject *)0x0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var7);
    }
    _swift_bridgeObjectRelease(_Var7.unknown);
  }
  puVar5 = &DAT_100429630;
  _swift_getKeyPath(&DAT_100429630);
  pcVar10 = &DAT_100429658;
  _swift_getKeyPath();
  pcVar15 = pcVar10;
  Combine::Published::_get_subscript(local_c0);
  _swift_release(puVar5);
  _swift_release(pcVar10);
  if ((ulong)local_c0[0] >> 0x3e == 0) {
    pNVar11 = *(NSObject **)(((ulong)local_c0[0] & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)local_c0[0] & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < local_c0[0]) {
      _Var1.unknown = local_c0[0];
    }
    pNVar11 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pNVar11 == (NSObject *)0x0) {
    _swift_bridgeObjectRelease(local_c0[0]);
  }
  else {
    if ((long)pNVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1001720d8);
      (*pcVar21)();
    }
    pNVar24 = (NSObject *)0x0;
    local_130 = (ulong)local_c0[0] & 0xc000000000000001;
    local_140.unknown = local_c0[0];
    local_180.str = (char *)pSVar25;
    local_148 = pNVar11;
    local_138 = lVar22;
    do {
      if (local_130 == 0) {
        pNVar11 = *(NSObject **)(local_140.unknown + (long)pNVar24 * 8 + 0x20);
      }
      else {
        pNVar11 = pNVar24;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar24,local_140);
      }
      self = pNVar11;
      FUN_100174ed8();
      pvVar23 = local_180.bridgeObject;
      if (self == (NSObject *)0x0) {
        UVar12 = Foundation::UUID::init();
        SVar29 = Foundation::UUID::get_uuidString(UVar12);
        (**(code **)(local_170 + 8))(pvVar23,local_168);
      }
      else {
        objc_stub::stringValue((ID)self);
        SVar29 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar23 = SVar29.bridgeObject;
      pcVar6 = SVar29.str;
      objc_stub::frame((ID)pNVar11);
      dVar28 = extraout_d0;
      _CGRectGetWidth();
      if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100171fac);
        (*pcVar21)();
      }
      if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100171fb0);
        (*pcVar21)();
      }
      if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100171fb4);
        (*pcVar21)();
      }
      local_a8 = (long)dVar28;
      local_a0 = Swift::CustomStringConvertible::get_description();
      SVar30.bridgeObject = (void *)0xa200000000000000;
      SVar30.str = (char *)0x97c3;
      SVar31.bridgeObject = in_x3;
      SVar31.str = pcVar15;
      Swift::String::append(SVar30,SVar31);
      dVar28 = extraout_d0;
      _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
      if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100171fb8);
        (*pcVar21)();
      }
      if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100171fbc);
        (*pcVar21)();
      }
      param_2 = 0x43e0000000000000;
      if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100171fc0);
        (*pcVar21)();
      }
      local_a8 = (long)dVar28;
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar32.bridgeObject = in_x3;
      SVar32.str = pcVar15;
      Swift::String::append(SVar30,SVar32);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      pcVar10 = local_a0.str;
      pvVar2 = local_a0.bridgeObject;
      pvVar13 = (void *)objc_stub::maximumFramesPerSecond((ID)pNVar11);
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      lVar9 = DAT_100577d38;
      lVar22 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
      _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                         local_c0,0,0);
      lVar22 = *(long *)(lVar9 + lVar22);
      if (*(long *)(lVar22 + 0x10) == 0) {
        UVar14 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar14.unknown + -8) + 0x38))(lVar20,1,1,UVar14.unknown);
      }
      else {
        _swift_bridgeObjectRetain(lVar22);
        SVar30 = SVar29;
        FUN_10000464c(pcVar6);
        bVar3 = ((ulong)SVar30.bridgeObject & 1) == 0;
        if (bVar3) {
          UVar14 = Foundation::URL::typeMetadataAccessor();
          pcVar21 = *(code **)(*(long *)(UVar14.unknown + -8) + 0x38);
        }
        else {
          lVar26 = *(long *)(lVar22 + 0x38);
          UVar14 = Foundation::URL::typeMetadataAccessor();
          lVar27 = *(long *)(UVar14.unknown + -8);
          (**(code **)(lVar27 + 0x10))
                    (lVar20,lVar26 + *(long *)(lVar27 + 0x48) * (long)SVar30.str,UVar14.unknown);
          pcVar21 = *(code **)(lVar27 + 0x38);
          pSVar25 = (String *)local_180.str;
        }
        (*pcVar21)(lVar20,bVar3,1,UVar14.unknown);
        _swift_bridgeObjectRelease(lVar22);
      }
      pcVar15 = pcVar6;
      FUN_100173bec(pcVar6,pvVar23);
      if (local_118 == (NSObject *)0x0) {
        bVar3 = false;
      }
      else {
        bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar11,local_118);
      }
      objc_stub::localizedName((ID)pNVar11);
      SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_100077938(lVar20,(undefined1 *)((long)&pSVar25->str + (long)*(int *)(pcVar4 + 0x24)));
      pcVar16 = pcVar6;
      FUN_10023ae7c(pcVar6,pvVar23);
      lVar22 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
      _swift_beginAccess(lVar9 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,auStack_d8,0,0);
      lVar22 = *(long *)(lVar9 + lVar22);
      bVar19 = 0;
      if (*(long *)(lVar22 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar22);
        SVar31 = SVar29;
        FUN_10000464c();
        if (((ulong)SVar31.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(lVar22);
          bVar19 = 0;
        }
        else {
          bVar19 = SVar31.str[*(long *)(lVar22 + 0x38)];
          _swift_bridgeObjectRelease(lVar22);
          bVar19 = bVar19 ^ 1;
        }
      }
      lVar9 = local_138;
      *pSVar25 = SVar29;
      *(bool *)&pSVar25[1].str = bVar3;
      *(String *)&pSVar25[1].bridgeObject = SVar30;
      pSVar25[2].bridgeObject = pcVar10;
      pSVar25[3].str = pvVar2;
      pSVar25[3].bridgeObject = pvVar13;
      *(char *)((long)&pSVar25->str + (long)*(int *)(pcVar4 + 0x28)) = (char)pcVar15;
      *(char *)((long)&pSVar25->str + (long)*(int *)(pcVar4 + 0x2c)) = (char)pcVar16;
      *(byte *)((long)&pSVar25->str + (long)*(int *)(pcVar4 + 0x30)) = bVar19 & 1;
      lVar22 = local_128;
      in_x3 = pcVar4;
      (**(code **)(local_128 + 0x38))(pSVar25,0,1);
      FUN_100175d28(pSVar25,lVar9);
      lVar26 = lVar9;
      (**(code **)(lVar22 + 0x30))(lVar9,1,pcVar4);
      lVar22 = local_158;
      if ((int)lVar26 == 1) {
        _swift_bridgeObjectRetain(pvVar23);
        FUN_10002a29c(lVar9,&DAT_10054b0b0,&DAT_10041c2b0);
        lVar22 = local_160;
        FUN_10027ea4c(local_160,pcVar6,pvVar23);
        _swift_bridgeObjectRelease(pvVar23);
        FUN_10002a29c(lVar22,&DAT_10054b0b0,&DAT_10041c2b0);
      }
      else {
        FUN_100175dc0(lVar9,local_158);
        _swift_bridgeObjectRetain(pvVar23);
        pcVar10 = local_90;
        in_x3 = local_90;
        _swift_isUniquelyReferenced_nonNull_native();
        local_a0.str = pcVar10;
        FUN_1003402d0(lVar22,pcVar6,pvVar23);
        _swift_bridgeObjectRelease(pvVar23);
        local_90 = local_a0.str;
      }
      pNVar24 = pNVar24 + 1;
      pcVar15 = &DAT_10041bf10;
      FUN_10002a29c(lVar20,&DAT_100553d90);
    } while (local_148 != pNVar24);
    _swift_bridgeObjectRelease(local_140.unknown);
    pcVar6 = local_90;
  }
  puVar5 = &DAT_100429678;
  _swift_getKeyPath(&DAT_100429678);
  puVar17 = &DAT_1004296a0;
  _swift_getKeyPath(&DAT_1004296a0);
  Combine::Published::_get_subscript(&local_a0,unaff_x20,puVar5,puVar17);
  _swift_release(puVar5);
  _swift_release(puVar17);
  pcVar4 = local_a0.str;
  pcVar10 = pcVar6;
  FUN_1001c3828(pcVar6,local_a0.str);
  _swift_bridgeObjectRelease(pcVar4);
  if (((ulong)pcVar10 & 1) == 0) {
    pPVar18 = (Published *)&DAT_100429678;
    _swift_getKeyPath(&DAT_100429678);
    puVar5 = &DAT_1004296a0;
    _swift_getKeyPath(&DAT_1004296a0);
    local_a0.str = pcVar6;
    _swift_bridgeObjectRetain(pcVar6);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar18,&local_a0,unaff_x20,pPVar18,puVar5);
  }
  _swift_bridgeObjectRelease(pcVar6);
  return 0;
}

