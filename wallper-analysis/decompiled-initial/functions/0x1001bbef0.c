// rea decompile_all
// name: FUN_1001bbef0
// address: 0x1001bbef0
// body: available
// range: 0x1001bbef0-0x1001bd267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001bbef0(void)

{
  byte bVar1;
  DispatchWorkItemFlags qos;
  bool bVar2;
  undefined *puVar3;
  Calendar CVar4;
  UUID UVar5;
  char *pcVar6;
  Calendar CVar7;
  long lVar8;
  long lVar9;
  char **ppcVar10;
  _StringGuts _Var11;
  ID IVar12;
  NSString *pNVar13;
  char *pcVar14;
  DispatchQoS DVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *plVar25;
  _StringGuts _Var26;
  char *pcVar28;
  undefined *in_x3;
  Range<__int64> RVar29;
  Range<__int64> RVar30;
  long extraout_x8;
  long extraout_x8_00;
  long lVar31;
  long extraout_x8_01;
  undefined *puVar32;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar33;
  long lVar34;
  long extraout_x8_04;
  ulong uVar35;
  long lVar36;
  long extraout_x8_05;
  long lVar37;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar38;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar39;
  long extraout_x8_10;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  void *pvVar45;
  long *unaff_x20;
  code *pcVar46;
  code *pcVar47;
  char *pcVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined *puVar52;
  undefined *puVar53;
  ulong uVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  undefined1 auStack_200 [16];
  char acStack_1f0 [8];
  long local_1e8;
  DispatchWorkItemFlags local_1e0;
  long local_1d8;
  undefined *local_1d0;
  long local_1c8;
  long local_1c0;
  undefined *local_1b8;
  char *local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  undefined *local_170;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  _StringGuts _Var27;
  
  local_1a0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_1a8 = *(long *)(local_1a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  local_1b0 = acStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1c0 = *(long *)(local_1b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c0 + 0x40));
  lVar31 = (long)(acStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar31;
  local_1d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1d8 = *(long *)(local_1d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1d8 + 0x40));
  puVar32 = (undefined *)(lVar31 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar33 = &DAT_10054a9c8;
  local_1e0.unknown = puVar32;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar33 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = (long)puVar32 - extraout_x8_02;
  puVar33 = &DAT_10054ac38;
  local_188 = lVar31;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar33 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar33 = (undefined *)(lVar31 - extraout_x8_03);
  puVar3 = (undefined *)0x0;
  local_180 = puVar33;
  FUN_1001d537c();
  lVar34 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar34 + 0x40));
  uVar35 = (long)puVar33 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  CVar4 = Foundation::Calendar::typeMetadataAccessor();
  lVar36 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar36 + 0x40));
  lVar37 = uVar35 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar33 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar33 + -8) + 0x40));
  lVar41 = lVar37 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_1e8 = lVar41;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar41 - extraout_x12;
  puVar33 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar33 + -8) + 0x40));
  lVar42 = lVar41 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar49 = lVar42 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar49 - extraout_x12_01;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar51 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar51 + 0x40));
  lVar31 = lVar38 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_198 = lVar31;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar52 = (undefined *)(lVar31 - extraout_x12_02);
  lVar31 = 0;
  FUN_10025ee04();
  lVar50 = *(long *)(lVar31 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar50 + 0x40));
  lVar43 = (long)puVar52 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar43;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar43 = lVar43 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar43 - extraout_x12_04;
  local_170 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_178 = *(long *)(local_170 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  puVar53 = (undefined *)(lVar39 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0));
  Foundation::Date::init();
  pcVar6 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100006314();
  puVar33 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar32 = &DAT_10042a638;
  _swift_getKeyPath(&DAT_10042a638);
  Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar33,puVar32);
  _swift_release(puVar33);
  _swift_release(puVar32);
  pcVar28 = local_b8;
  uVar40 = *(ulong *)(local_b8 + 0x10);
  if (uVar40 != 0) {
    uVar54 = 0;
    bVar1 = *(byte *)(lVar50 + 0x50);
    do {
      if (*(ulong *)(pcVar28 + 0x10) <= uVar54) {
                    /* WARNING: Does not return */
        pcVar47 = (code *)SoftwareBreakpoint(1,0x1001bcd90);
        (*pcVar47)();
      }
      FUN_100029504(pcVar28 + *(long *)(lVar50 + 0x48) * uVar54 +
                              ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),lVar39,
                    FUN_10025ee04);
      FUN_100007e64(lVar39,lVar43,FUN_10025ee04);
      if (*(char *)(lVar43 + *(int *)(lVar31 + 0x1c)) == '\0') {
        FUN_100029548(lVar43,FUN_10025ee04);
      }
      else {
        pcVar47 = *(code **)(lVar51 + 0x10);
        CVar7.unknown = puVar52;
        (*pcVar47)(puVar52,lVar43,UVar5.unknown);
        Foundation::Calendar::get_current(CVar7);
        FUN_1001d682c(lVar41,puVar53,lVar37);
        (**(code **)(lVar36 + 8))(lVar37,CVar4.unknown);
        lVar8 = 0;
        FUN_1001d59ac();
        lVar9 = lVar41;
        (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar41,1,lVar8);
        bVar2 = (int)lVar9 != 1;
        if (bVar2) {
          FUN_100029504(lVar41,lVar38,FUN_1001d537c);
          FUN_100029548(lVar41,FUN_1001d59ac);
        }
        else {
          FUN_10002a29c(lVar41,&DAT_10054a9d0,&DAT_10041bc60);
        }
        pcVar46 = *(code **)(lVar34 + 0x38);
        (*pcVar46)(lVar38,!bVar2,1,puVar3);
        uVar24 = 0;
        in_x3 = &DAT_100422eb0;
        FUN_100007e1c(lVar38,lVar49,&DAT_100550ec0);
        lVar9 = lVar49;
        (**(code **)(lVar34 + 0x30))(lVar49,1,puVar3);
        if ((int)lVar9 == 1) {
          FUN_10002a29c(lVar49,&DAT_100550ec0,&DAT_100422eb0);
          _swift_bridgeObjectRetain(pcVar6);
          puVar33 = puVar52;
          FUN_10000476c(puVar52);
          _swift_bridgeObjectRelease(pcVar6);
          if ((uVar24 & 1) == 0) {
            (**(code **)(lVar51 + 8))(puVar52,UVar5.unknown);
            FUN_100029548(lVar43,FUN_10025ee04);
            uVar23 = 1;
          }
          else {
            pcVar14 = pcVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            local_b8 = pcVar6;
            if ((int)pcVar14 == 0) {
              FUN_1001cc2d0();
            }
            pcVar6 = local_b8;
            pcVar47 = *(code **)(lVar51 + 8);
            (*pcVar47)(*(long *)(local_b8 + 0x30) + *(long *)(lVar51 + 0x48) * (long)puVar33,
                       UVar5.unknown);
            FUN_100007e64(*(long *)(pcVar6 + 0x38) + *(long *)(lVar34 + 0x48) * (long)puVar33,lVar42
                          ,FUN_1001d537c);
            FUN_1001d2874(puVar33,pcVar6);
            (*pcVar47)(puVar52,UVar5.unknown);
            FUN_100029548(lVar43,FUN_10025ee04);
            uVar23 = 0;
          }
          in_x3 = puVar3;
          (*pcVar46)(lVar42,uVar23,1);
          FUN_10002a29c(lVar42,&DAT_100550ec0,&DAT_100422eb0);
        }
        else {
          uVar24 = uVar35;
          FUN_100007e64(lVar49,uVar35,FUN_1001d537c);
          pcVar14 = pcVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar22 = (uint)pcVar14;
          puVar33 = puVar52;
          local_b8 = pcVar6;
          FUN_10000476c();
          uVar44 = (ulong)~(uint)uVar24 & 1;
          if (SCARRY8(*(long *)(pcVar6 + 0x10),uVar44)) {
                    /* WARNING: Does not return */
            pcVar47 = (code *)SoftwareBreakpoint(1,0x1001bd228);
            (*pcVar47)();
          }
          if (*(long *)(pcVar6 + 0x18) < (long)(*(long *)(pcVar6 + 0x10) + uVar44)) {
            FUN_1001cf9d8();
            puVar33 = puVar52;
            FUN_10000476c();
            if (((uint)uVar24 & 1) != (uVar22 & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar47 = (code *)SoftwareBreakpoint(1,0x1001bd268);
              (*pcVar47)();
            }
          }
          else if (((ulong)pcVar14 & 1) == 0) {
            FUN_1001cc2d0();
          }
          pcVar6 = local_b8;
          if ((uVar24 & 1) == 0) {
            *(ulong *)(local_b8 + ((ulong)puVar33 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_b8 + ((ulong)puVar33 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar33 & 0x3f);
            (*pcVar47)(*(long *)(local_b8 + 0x30) + *(long *)(lVar51 + 0x48) * (long)puVar33,puVar52
                       ,UVar5.unknown);
            FUN_100007e64(uVar35,*(long *)(pcVar6 + 0x38) + *(long *)(lVar34 + 0x48) * (long)puVar33
                          ,FUN_1001d537c);
            (**(code **)(lVar51 + 8))(puVar52,UVar5.unknown);
            FUN_100029548(lVar43,FUN_10025ee04);
            if (SCARRY8(*(long *)(pcVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar47 = (code *)SoftwareBreakpoint(1,0x1001bd22c);
              (*pcVar47)();
            }
            *(long *)(pcVar6 + 0x10) = *(long *)(pcVar6 + 0x10) + 1;
          }
          else {
            FUN_1001d4cb0(uVar35,*(long *)(local_b8 + 0x38) +
                                 *(long *)(lVar34 + 0x48) * (long)puVar33,FUN_1001d537c);
            (**(code **)(lVar51 + 8))(puVar52,UVar5.unknown);
            FUN_100029548(lVar43,FUN_10025ee04);
          }
        }
      }
      uVar54 = uVar54 + 1;
    } while (uVar40 != uVar54);
  }
  _swift_bridgeObjectRelease();
  lVar34 = _TtC7Wallper15PlaylistManager::lastActiveSections;
  puVar33 = *(undefined **)((long)unaff_x20 + _TtC7Wallper15PlaylistManager::lastActiveSections);
  _swift_bridgeObjectRetain(puVar33);
  pcVar28 = pcVar6;
  _Var26.unknown = puVar33;
  FUN_1001c3c20();
  _swift_bridgeObjectRelease(puVar33);
  if (((ulong)pcVar28 & 1) == 0) {
    uVar23 = *(undefined8 *)((long)unaff_x20 + lVar34);
    *(char **)((long)unaff_x20 + lVar34) = pcVar6;
    _swift_bridgeObjectRetain(pcVar6);
    _swift_bridgeObjectRelease(uVar23);
    puVar33 = &DAT_10042a6c0;
    _swift_getKeyPath(&DAT_10042a6c0);
    in_x3 = &DAT_10042a6e8;
    _swift_getKeyPath();
    ppcVar10 = &local_b8;
    plVar25 = unaff_x20;
    puVar32 = in_x3;
    Combine::Published::_modify_subscript();
    *plVar25 = *plVar25 + 1;
    _Var26.unknown = (undefined *)0x0;
    (*(code *)ppcVar10)(&local_b8);
    _swift_release(puVar33);
    _swift_release(puVar32);
  }
  if (*(char *)((long)unaff_x20 + _TtC7Wallper15PlaylistManager::isSchedulingActive) != '\x01')
  goto LAB_1001bca84;
  _Var11.unknown = puVar53;
  FUN_1001c28ac();
  SVar62.bridgeObject = _Var26.unknown;
  SVar62.str = _Var11.unknown;
  IVar12 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar12 = NSUserDefaults::stringForKey_(IVar12);
  SVar58.bridgeObject = in_x3;
  SVar58.str = (char *)pNVar13;
  if (IVar12 == 0) {
    if (_Var26.unknown == (undefined *)0x0) goto LAB_1001bca84;
    bVar2 = false;
    SVar55 = (String)ZEXT816(0);
LAB_1001bca58:
    puVar33 = SVar55.bridgeObject;
    _swift_bridgeObjectRetain(_Var26.unknown);
    FUN_1001c0830(_Var11.unknown,_Var26.unknown);
    _swift_bridgeObjectRelease(_Var26.unknown);
    _Var27.unknown = puVar33;
    if ((!bVar2) && (_Var27.unknown = _Var26.unknown, puVar33 != (undefined *)0x0)) {
      FUN_1001d38dc();
      RVar29.unknown = SVar58.bridgeObject;
      SVar62 = SVar58;
      _swift_bridgeObjectRelease(_Var26.unknown);
      FUN_1001d38dc();
      _swift_bridgeObjectRelease(puVar33);
      RVar30.unknown = _Var27.unknown >> 0x10;
      if ((SVar58 == SVar62) &&
         ((_Var11.unknown >> 0x10 == (undefined *)((ulong)SVar55.str >> 0x10) &&
          (RVar30.unknown == (undefined *)((ulong)SVar55.bridgeObject >> 0x10))))) {
        _swift_bridgeObjectRelease(RVar29.unknown);
        _swift_bridgeObjectRelease(SVar62.bridgeObject);
      }
      else {
        puVar53[-0x10] = 0;
        bVar2 = Swift::_stringCompareInternal
                          ((_StringGuts)SVar58.str,RVar29,(_StringGuts)(_Var11.unknown >> 0x10),
                           RVar30,(_StringComparisonResult)(__int8)SVar62.str);
        _swift_bridgeObjectRelease(RVar29.unknown);
        _swift_bridgeObjectRelease(SVar62.bridgeObject);
        if (!bVar2) goto LAB_1001bca84;
      }
      puVar33 = &DAT_10042a670;
      _swift_getKeyPath(&DAT_10042a670);
      puVar32 = &DAT_10042a698;
      _swift_getKeyPath(&DAT_10042a698);
      lVar38 = local_188;
      Combine::Published::_get_subscript(local_188,unaff_x20,puVar33,puVar32);
      _swift_release(puVar33);
      _swift_release(puVar32);
      lVar39 = lVar38;
      (**(code **)(lVar51 + 0x30))(lVar38,1,UVar5.unknown);
      lVar34 = local_198;
      if ((int)lVar39 == 1) {
        FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
        CVar7.unknown = local_180;
        (**(code **)(lVar50 + 0x38))(local_180,1,1,lVar31);
LAB_1001bccc4:
        FUN_10002a29c(CVar7.unknown,&DAT_10054ac38,&DAT_10041e8e0);
      }
      else {
        (**(code **)(lVar51 + 0x20))(local_198,lVar38,UVar5.unknown);
        CVar7.unknown = local_180;
        FUN_1001b6e74(local_180,lVar34);
        (**(code **)(lVar51 + 8))(lVar34,UVar5.unknown);
        puVar33 = CVar7.unknown;
        (**(code **)(lVar50 + 0x30))(CVar7.unknown,1,lVar31);
        if ((int)puVar33 == 1) goto LAB_1001bccc4;
        FUN_100007e64(CVar7.unknown,local_190,FUN_10025ee04);
        Foundation::Calendar::get_current(CVar7);
        lVar34 = local_1e8;
        FUN_1001d62f0(local_1e8,puVar53,lVar37);
        (**(code **)(lVar36 + 8))(lVar37,CVar4.unknown);
        pcVar14 = (char *)0x0;
        FUN_1001d59ac();
        lVar36 = lVar34;
        pcVar28 = pcVar14;
        (**(code **)(*(long *)(pcVar14 + -8) + 0x30))(lVar34,1);
        if ((int)lVar36 == 1) {
          pcVar47 = (code *)&DAT_10054a9d0;
          pcVar28 = "D^\x02";
          FUN_10002a29c(lVar34);
          pvVar45 = (void *)0xe100000000000000;
          pcVar48 = (char *)0x2d;
        }
        else {
          pcVar48 = *(char **)(lVar34 + *(int *)(pcVar14 + 0x14));
          pvVar45 = (void *)((undefined8 *)(lVar34 + *(int *)(pcVar14 + 0x14)))[1];
          _swift_bridgeObjectRetain(pvVar45);
          pcVar47 = FUN_1001d59ac;
          FUN_100029548(lVar34);
        }
        local_b8 = (char *)0x0;
        local_b0 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x22,(_StringGuts)pcVar47);
        _swift_bridgeObjectRelease(local_b0);
        local_b8 = (char *)0x7473696c79616c50;
        local_b0 = (void *)0xae009c80e2203a73;
        SVar63.bridgeObject = RVar30.unknown;
        SVar63.str = pcVar28;
        Swift::String::append(*(String *)(local_190 + *(int *)(lVar31 + 0x14)),SVar63);
        SVar56.bridgeObject = (void *)0x80000001004e0a80;
        SVar56.str = (char *)0x1000000000000010;
        SVar64.bridgeObject = RVar30.unknown;
        SVar64.str = pcVar28;
        Swift::String::append(SVar56,SVar64);
        SVar57.bridgeObject = pvVar45;
        SVar57.str = pcVar48;
        SVar65.bridgeObject = RVar30.unknown;
        SVar65.str = pcVar28;
        Swift::String::append(SVar57,SVar65);
        _swift_bridgeObjectRelease(pvVar45);
        puVar33 = local_b0;
        SVar55.bridgeObject = local_b0;
        SVar55.str = local_b8;
        local_b8 = (char *)0x5b;
        local_b0 = (undefined *)0xe100000000000000;
        local_78 = (undefined *)0x4f464e49;
        uStack_70 = 0xe400000000000000;
        local_88 = 0x20;
        uStack_80 = 0xe100000000000000;
        FUN_100026df4();
        pcVar28 = (char *)0x0;
        puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar58 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,pvVar45,pvVar45);
        SVar66.bridgeObject = puVar32;
        SVar66.str = pcVar28;
        Swift::String::append(SVar58,SVar66);
        _swift_bridgeObjectRelease(SVar58.bridgeObject);
        SVar59.bridgeObject = (void *)0xe300000000000000;
        SVar59.str = (char *)0x5b205d;
        SVar67.bridgeObject = puVar32;
        SVar67.str = pcVar28;
        Swift::String::append(SVar59,SVar67);
        SVar60.bridgeObject = (void *)0xe300000000000000;
        SVar60.str = (char *)0x707061;
        SVar68.bridgeObject = puVar32;
        SVar68.str = pcVar28;
        Swift::String::append(SVar60,SVar68);
        SVar61.bridgeObject = (void *)0xe200000000000000;
        SVar61.str = (char *)0x205d;
        SVar69.bridgeObject = puVar32;
        SVar69.str = pcVar28;
        Swift::String::append(SVar61,SVar69);
        SVar70.bridgeObject = puVar32;
        SVar70.str = pcVar28;
        Swift::String::append(SVar55,SVar70);
        puVar32 = local_b0;
        pcVar28 = local_b8;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar3 = &DAT_100531530;
        _swift_allocObject(&DAT_100531530,0x30,7);
        *(char **)(puVar3 + 0x10) = pcVar28;
        *(undefined **)(puVar3 + 0x18) = puVar32;
        *(undefined8 *)(puVar3 + 0x20) = 0;
        *(undefined8 *)(puVar3 + 0x28) = 0xe000000000000000;
        local_98 = thunk_FUN_100099310;
        local_b8 = PTR___NSConcreteStackBlock_100521110;
        local_b0 = (undefined *)0x42000000;
        local_a8 = FUN_1000c7e7c;
        puStack_a0 = &DAT_100531548;
        local_90 = puVar3;
        pvVar45 = __Block_copy(&local_b8);
        DVar15.unknown = puVar32;
        _swift_bridgeObjectRetain();
        qos.unknown = local_1e0.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar15);
        local_78 = PTR___swiftEmptyArrayStorage_100524190;
        puVar16 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar3 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar17 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        puVar52 = local_1b8;
        lVar31 = local_1c8;
        Swift::SetAlgebra::_init(local_1c8,&local_78,puVar3,puVar17,local_1b8,puVar16);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar45);
        (**(code **)(local_1c0 + 8))(lVar31,puVar52);
        (**(code **)(local_1d8 + 8))(qos.unknown,local_1d0);
        _swift_release(local_90);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar3 = local_1a0;
        puVar52 = local_1a0;
        FUN_100099338(local_1a0,&DAT_100558f50);
        lVar31 = local_1a8;
        pcVar14 = local_1b0;
        pcVar48 = local_1b0;
        (**(code **)(local_1a8 + 0x10))(local_1b0,puVar52,puVar3);
        uVar22 = (uint)pcVar48;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar18.unknown = puVar32;
        _swift_bridgeObjectRetain();
        pOVar19 = os::Logger::get_logObject(LVar18);
        pOVar20 = pOVar19;
        _os_log_type_enabled(pOVar19,uVar22 & 0xff);
        if ((int)pOVar20 == 0) {
          _swift_bridgeObjectRelease_n(puVar32,2);
        }
        else {
          puVar21 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar48 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar21 = 0x8220102;
          local_b8 = pcVar48;
          FUN_10012dbb0(pcVar28,puVar32,&local_b8);
          *(char **)(puVar21 + 1) = pcVar28;
          _swift_bridgeObjectRelease_n(puVar32,2);
          __os_log_impl(0x100000000,pOVar19,uVar22 & 0xff,"%{public}s",puVar21,0xc);
          FUN_100043f24(pcVar48);
          _swift_slowDealloc(pcVar48,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar31 + 8))(pcVar14,puVar3);
        _swift_bridgeObjectRelease(puVar33);
        FUN_100029548(local_190,FUN_10025ee04);
      }
      FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
      FUN_1000087a0(&DAT_100556858,&DAT_10054ac18,&DAT_10041beb0,
                    PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Subject_in_Combine_>Combine__Subject_100521460
                   );
      (extension_Combine)::Combine::Subject::_send();
      goto LAB_1001bca84;
    }
  }
  else {
    SVar55 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar58.bridgeObject = in_x3;
    SVar58.str = (char *)pNVar13;
    _Var27.unknown = SVar55.bridgeObject;
    if (_Var26.unknown == (undefined *)0x0) {
      if (_Var27.unknown == (undefined *)0x0) goto LAB_1001bca84;
      bVar2 = true;
      goto LAB_1001bca58;
    }
    if ((_Var27.unknown == (undefined *)0x0) ||
       ((SVar55 != SVar62 &&
        (SVar58 = SVar55,
        bVar2 = Swift::_stringCompareWithSmolCheck
                          (_Var11,_Var26,(_StringComparisonResult)(__int8)SVar55.str), !bVar2)))) {
      bVar2 = false;
      goto LAB_1001bca58;
    }
    _swift_bridgeObjectRelease(_Var26.unknown);
  }
  _swift_bridgeObjectRelease(_Var27.unknown);
LAB_1001bca84:
  FUN_1001c2e20(puVar53);
  (**(code **)(local_178 + 8))(puVar53,local_170);
  _swift_bridgeObjectRelease(pcVar6);
  return;
}

