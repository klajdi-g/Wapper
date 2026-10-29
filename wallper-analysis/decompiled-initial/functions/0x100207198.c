// rea decompile_all
// name: FUN_100207198
// address: 0x100207198
// body: available
// range: 0x100207198-0x10020836f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100207c24 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10020836c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100207198(ulong *param_1,undefined8 param_2,NSURL *param_3,URL param_4)

{
  String *pSVar1;
  ulong uVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  DispatchWorkItemFlags qos;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong **ppuVar12;
  ulong **ppuVar13;
  ulong **ppuVar14;
  ID IVar15;
  URL UVar16;
  ID self;
  Hasher HVar17;
  undefined8 uVar18;
  void *pvVar19;
  DispatchQoS DVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  Logger LVar23;
  OS_os_log *pOVar24;
  OS_os_log *pOVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  NSURL *pNVar28;
  URL UVar29;
  URL UVar30;
  long extraout_x8;
  long extraout_x8_00;
  long lVar31;
  long extraout_x8_01;
  undefined *puVar32;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar33;
  NSURL *pNVar34;
  undefined *puVar35;
  ulong **unaff_x20;
  long lVar36;
  _StringGuts _Var37;
  ulong *puVar38;
  NSURL *pNVar39;
  long lVar40;
  NSURL *pNVar41;
  code *pcVar42;
  undefined8 uVar43;
  ulong uVar44;
  ulong *puVar45;
  char *pcVar46;
  char *pcVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
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
  DispatchWorkItemFlags local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  undefined *local_180;
  char *local_178;
  ulong local_170;
  ulong **local_168;
  ulong *local_160;
  long local_158;
  ID local_150;
  void *local_148;
  ulong *local_140;
  ulong *local_138;
  long local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  ulong local_f8;
  ulong *local_f0;
  NSURL *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong *local_d0;
  void *pvStack_c8;
  ulong *local_b8;
  NSURL *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  pNVar28 = param_3;
  local_180 = (undefined *)os::Logger::typeMetadataAccessor();
  local_108 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar31 = (long)&local_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar31;
  local_188 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_190 = *(long *)(local_188 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190 + 0x40));
  lVar31 = lVar31 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_198 = lVar31;
  local_1a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1a8 = *(long *)(local_1a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  puVar32 = (undefined *)(lVar31 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_1b0.unknown = puVar32;
  local_110 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_158 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_158 + 0x40));
  lVar31 = (long)puVar32 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar31;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar31 - extraout_x12;
  local_120 = lVar31;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar32 = (undefined *)(lVar31 - extraout_x12_00);
  local_128 = puVar32;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_130 = (long)puVar32 - extraout_x12_01;
  local_f8 = *param_1;
  local_f0 = (ulong *)(local_f8 + 0x10);
  uVar33 = *local_f0;
  puVar45 = (ulong *)PTR___swiftEmptyArrayStorage_100524190;
  local_160 = param_1;
  if (uVar33 != 0) {
    uVar44 = 0;
    lVar31 = local_f8 + 0x20;
    local_e8 = param_3;
    do {
      if (*local_f0 <= uVar44) {
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x10020831c);
        (*pcVar42)();
      }
      puVar38 = *(ulong **)(lVar31 + uVar44 * 8);
      local_d0 = puVar38;
      _swift_bridgeObjectRetain(puVar38);
      ppuVar14 = &local_d0;
      pNVar28 = param_3;
      param_4.unknown = (undefined *)unaff_x20;
      FUN_10020b924(ppuVar14,param_2);
      if (((ulong)ppuVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar38);
      }
      else {
        puVar10 = puVar45;
        _swift_isUniquelyReferenced_nonNull_native();
        local_b8 = puVar45;
        if (((ulong)puVar10 & 1) == 0) {
          pNVar28 = (NSURL *)0x1;
          FUN_1001c5ba0(0,puVar45[2] + 1);
        }
        uVar2 = local_b8[2];
        if (local_b8[3] >> 1 <= uVar2) {
          pNVar28 = (NSURL *)0x1;
          FUN_1001c5ba0(1 < local_b8[3],uVar2 + 1);
        }
        local_b8[2] = uVar2 + 1;
        local_b8[uVar2 + 4] = (ulong)puVar38;
        param_3 = local_e8;
        puVar45 = local_b8;
      }
      uVar44 = uVar44 + 1;
    } while (uVar33 != uVar44);
  }
  puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
  pNVar34 = (NSURL *)puVar45[2];
  if (pNVar34 == (NSURL *)0x0) {
    if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
      _swift_release(puVar45);
      return;
    }
    goto LAB_10020836c;
  }
  ppuVar14 = (ulong **)PTR___swiftEmptyArrayStorage_100524190;
  pNVar39 = (NSURL *)0x0;
  pNVar41 = pNVar34 + -1;
  do {
    while( true ) {
      if ((NSURL *)puVar45[2] <= pNVar39) {
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x100208320);
        (*pcVar42)();
      }
      uVar33 = puVar45[(long)(pNVar39 + 4)];
      if (*(long *)(uVar33 + 0x10) != 0) break;
LAB_1002074a0:
      pNVar39 = pNVar39 + 1;
      if (pNVar34 == pNVar39) goto LAB_1002075c8;
    }
    _swift_bridgeObjectRetain(uVar33);
    puVar11 = &DAT_00006469;
    uVar44 = 0;
    FUN_10000464c(&DAT_00006469);
    if ((uVar44 & 1) == 0) {
LAB_100207498:
      _swift_bridgeObjectRelease(uVar33);
      goto LAB_1002074a0;
    }
    FUN_1000280d4(*(long *)(uVar33 + 0x38) + (long)puVar11 * 0x20,&local_b8);
    ppuVar12 = &local_d0;
    pNVar28 = (NSURL *)(PTR___type_metadata_for_Any_100524178 + 8);
    param_4.unknown = puVar32;
    _swift_dynamicCast(ppuVar12,&local_b8,pNVar28,puVar32,6);
    pvVar19 = pvStack_c8;
    if (((ulong)ppuVar12 & 1) == 0) goto LAB_100207498;
    SVar48.bridgeObject = pvStack_c8;
    SVar48.str = (char *)local_d0;
    local_e8 = pNVar41;
    SVar48 = Swift::String::uppercased(SVar48);
    local_138 = SVar48.bridgeObject;
    _swift_bridgeObjectRelease(pvVar19);
    _swift_bridgeObjectRelease(uVar33);
    ppuVar12 = ppuVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    ppuVar13 = ppuVar14;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar13 = (ulong **)0x0;
      pNVar28 = (NSURL *)0x1;
      FUN_1001c432c(0,(long)ppuVar14[2] + 1);
      param_4.unknown = (undefined *)ppuVar14;
    }
    puVar38 = ppuVar13[2];
    ppuVar14 = ppuVar13;
    if ((ulong *)((ulong)ppuVar13[3] >> 1) <= puVar38) {
      ppuVar14 = (ulong **)(ulong)((ulong *)0x1 < ppuVar13[3]);
      pNVar28 = (NSURL *)0x1;
      FUN_1001c432c(ppuVar14,(ulong *)((long)puVar38 + 1U));
      param_4.unknown = (undefined *)ppuVar13;
    }
    ppuVar14[2] = (ulong *)((long)puVar38 + 1U);
    ppuVar14[(long)puVar38 * 2 + 4] = (ulong *)SVar48.str;
    ppuVar14[(long)puVar38 * 2 + 5] = local_138;
    bVar8 = local_e8 != pNVar39;
    pNVar39 = pNVar39 + 1;
    pNVar41 = local_e8;
  } while (bVar8);
LAB_1002075c8:
  _swift_release(puVar45);
  ppuVar12 = ppuVar14;
  FUN_10020c98c();
  _swift_bridgeObjectRelease(ppuVar14);
  local_168 = ppuVar12 + 7;
  uVar44 = 1L << ((ulong)*(byte *)(ppuVar12 + 4) & 0x3f);
  uVar33 = 0xffffffffffffffff;
  if ((*(byte *)(ppuVar12 + 4) & 0x3f) < 6) {
    uVar33 = ~(-1L << (uVar44 & 0x3f));
  }
  puVar45 = (ulong *)(uVar33 & (ulong)*local_168);
  pcVar47 = "en.slot.installed";
  _swift_bridgeObjectRetain(ppuVar12);
  lVar31 = 0;
  local_178 = "en.slot.installed";
  local_e8 = (NSURL *)ppuVar12;
  local_170 = uVar44 + 0x3f >> 6;
  puVar38 = (ulong *)0x0;
  while( true ) {
    while (pNVar34 = local_e8, ppuVar14 = local_168, puVar45 != (ulong *)0x0) {
      uVar33 = ((ulong)puVar45 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)puVar45 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      puVar10 = (ulong *)(*(ulong **)((long)local_e8 + 0x30))
                         [LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) * 2 + lVar31 * 0x80];
      pvVar19 = (void *)(*(ulong **)((long)local_e8 + 0x30) +
                        LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) * 2 + lVar31 * 0x80)[1];
      local_138 = puVar38;
      _swift_bridgeObjectRetain(pvVar19);
      local_150 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      IVar15 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      UVar16.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar15);
      lVar40 = local_118;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar16);
      lVar36 = local_120;
      SVar49.bridgeObject = (void *)((ulong)pcVar47 | 0x8000000000000000);
      SVar49.str = (char *)0xd000000000000037;
      Foundation::URL::appendingPathComponent(SVar49,true,param_4);
      puVar32 = local_110;
      pcVar42 = *(code **)(local_158 + 8);
      (*pcVar42)(lVar40,local_110);
      UVar16.unknown = local_128;
      UVar29.unknown = (char *)0x1;
      SVar50.bridgeObject = (void *)0xe600000000000000;
      SVar50.str = (char *)0x736f65646976;
      Foundation::URL::appendingPathComponent(SVar50,true,param_4);
      (*pcVar42)(lVar36,puVar32);
      local_148 = pvVar19;
      local_140 = puVar10;
      local_b8 = puVar10;
      local_b0 = pvVar19;
      _swift_bridgeObjectRetain(pvVar19);
      SVar51.bridgeObject = (void *)0xe400000000000000;
      SVar51.str = (char *)0x766f6d2e;
      SVar60.bridgeObject = param_4.unknown;
      SVar60.str = UVar29.unknown;
      Swift::String::append(SVar51,SVar60);
      pNVar28 = local_b0;
      lVar36 = local_130;
      SVar5.bridgeObject = local_b0;
      SVar5.str = (char *)local_b8;
      Foundation::URL::appendingPathComponent(SVar5,UVar29);
      _swift_bridgeObjectRelease(pNVar28);
      (*pcVar42)(UVar16.unknown,puVar32);
      pNVar28 = Foundation::URL::_bridgeToObjectiveC(UVar16);
      (*pcVar42)(lVar36,puVar32);
      local_b8 = (ulong *)0x0;
      UVar16.unknown = (undefined *)&local_b8;
      IVar15 = objc_stub::removeItemAtURL_error_(local_150,pNVar28);
      if ((int)IVar15 == 0) {
        puVar38 = local_b8;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(puVar38);
        local_138 = (ulong *)0x0;
      }
      puVar45 = (ulong *)((long)puVar45 - 1U & (ulong)puVar45);
      IVar15 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      UVar29.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(self);
      lVar40 = local_118;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar29);
      lVar36 = local_120;
      pcVar47 = local_178;
      SVar52.bridgeObject = (void *)((ulong)local_178 | 0x8000000000000000);
      SVar52.str = (char *)0xd000000000000037;
      Foundation::URL::appendingPathComponent(SVar52,true,UVar16);
      puVar32 = local_110;
      (*pcVar42)(lVar40,local_110);
      UVar29.unknown = local_128;
      UVar30.unknown = (char *)0x1;
      SVar53.bridgeObject = (void *)0xea0000000000736c;
      SVar53.str = (char *)0x69616e626d756874;
      Foundation::URL::appendingPathComponent(SVar53,true,UVar16);
      (*pcVar42)(lVar36,puVar32);
      local_b8 = local_140;
      local_b0 = local_148;
      SVar54.bridgeObject = (void *)0xe400000000000000;
      SVar54.str = (char *)0x676e702e;
      SVar61.bridgeObject = UVar16.unknown;
      SVar61.str = UVar30.unknown;
      Swift::String::append(SVar54,SVar61);
      pNVar28 = local_b0;
      lVar36 = local_130;
      SVar6.bridgeObject = local_b0;
      SVar6.str = (char *)local_b8;
      Foundation::URL::appendingPathComponent(SVar6,UVar30);
      _swift_bridgeObjectRelease(pNVar28);
      (*pcVar42)(UVar29.unknown,puVar32);
      pNVar28 = Foundation::URL::_bridgeToObjectiveC(UVar29);
      (*pcVar42)(lVar36,puVar32);
      local_b8 = (ulong *)0x0;
      param_4.unknown = (undefined *)&local_b8;
      IVar15 = NSFileManager::removeItemAtURL_error_(IVar15);
      puVar38 = local_138;
      if ((int)IVar15 == 0) {
        puVar38 = local_b8;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(puVar38);
        puVar38 = (ulong *)0x0;
      }
    }
    bVar8 = SCARRY8(lVar31,1);
    lVar31 = lVar31 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar42 = (code *)SoftwareBreakpoint(1,0x100208324);
      (*pcVar42)();
    }
    if ((long)local_170 <= lVar31) break;
    puVar45 = local_168[lVar31];
  }
  _swift_release(local_e8);
  SVar62.bridgeObject = param_4.unknown;
  SVar62.str = (char *)pNVar28;
  puVar32 = (undefined *)*local_f0;
  if (puVar32 == (undefined *)0x0) {
    puVar35 = (undefined *)0x0;
    _Var37.unknown = (undefined *)0x0;
    lVar36 = local_100;
    lVar31 = local_108;
  }
  else {
    puVar35 = (undefined *)0x0;
    lVar31 = local_f8 + 0x20;
    do {
      lVar40 = *(long *)(lVar31 + (long)puVar35 * 8);
      lVar36 = *(long *)(lVar40 + 0x10);
      _swift_bridgeObjectRetain(lVar40);
      if (lVar36 == 0) {
LAB_100207b44:
        SVar48 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      else {
        _swift_bridgeObjectRetain(lVar40);
        puVar11 = &DAT_00006469;
        uVar33 = 0;
        FUN_10000464c(&DAT_00006469);
        if ((uVar33 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar40);
          goto LAB_100207b44;
        }
        FUN_1000280d4(*(long *)(lVar40 + 0x38) + (long)puVar11 * 0x20,&local_b8);
        _swift_bridgeObjectRelease(lVar40);
        ppuVar12 = &local_d0;
        pcVar47 = PTR___type_metadata_for_Any_100524178 + 8;
        puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
        _swift_dynamicCast(ppuVar12,&local_b8,pcVar47,PTR___type_metadata_for_Swift_String_100523a98
                           ,6);
        pvVar19 = pvStack_c8;
        SVar62.bridgeObject = puVar22;
        SVar62.str = pcVar47;
        if (((ulong)ppuVar12 & 1) == 0) goto LAB_100207b44;
        SVar3.bridgeObject = pvStack_c8;
        SVar3.str = (char *)local_d0;
        SVar48 = Swift::String::uppercased(SVar3);
        _swift_bridgeObjectRelease(pvVar19);
        SVar62.bridgeObject = puVar22;
        SVar62.str = pcVar47;
      }
      pNVar28 = local_e8;
      pvVar19 = SVar62.bridgeObject;
      pcVar47 = SVar48.bridgeObject;
      if (*(ulong **)((long)local_e8 + 0x10) != (ulong *)0x0) {
        Swift::Hasher::init((__int64)*(ulong **)((long)local_e8 + 0x28));
        HVar17.unknown = (undefined *)&local_b8;
        pcVar46 = pcVar47;
        Swift::String::hash(HVar17,SVar48);
        uVar33 = Swift::Hasher::_finalize(HVar17);
        SVar62.bridgeObject = pvVar19;
        SVar62.str = pcVar46;
        uVar44 = -1L << ((ulong)*(byte *)((long)pNVar28 + 0x20) & 0x3f);
        uVar33 = uVar33 & (uVar44 ^ 0xffffffffffffffff);
        if (((ulong)ppuVar14[uVar33 >> 6] >> (uVar33 & 0x3f) & 1) != 0) {
          do {
            pSVar1 = (String *)(*(ulong **)((long)local_e8 + 0x30) + uVar33 * 2);
            if ((SVar48 == *pSVar1) ||
               (SVar62 = SVar48,
               bVar8 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                  (_StringComparisonResult)(__int8)SVar48.str), bVar8)) {
              _swift_bridgeObjectRelease(lVar40);
              _swift_bridgeObjectRelease(pcVar47);
              _Var37.unknown = puVar35 + 1;
              puVar32 = (undefined *)*local_f0;
              lVar36 = local_100;
              lVar31 = local_108;
              pNVar34 = local_e8;
              if (_Var37.unknown != puVar32) goto LAB_1002080d4;
              goto LAB_100207c58;
            }
            uVar33 = uVar33 + 1 & ~uVar44;
          } while (((ulong)ppuVar14[uVar33 >> 6] >> (uVar33 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(lVar40);
      _swift_bridgeObjectRelease(pcVar47);
      puVar35 = puVar35 + 1;
    } while (puVar35 != puVar32);
    puVar35 = (undefined *)*local_f0;
    _Var37.unknown = puVar35;
    lVar36 = local_100;
    lVar31 = local_108;
    pNVar34 = local_e8;
  }
  goto LAB_100207c70;
LAB_1002080d4:
  do {
    if (puVar32 <= _Var37.unknown) {
                    /* WARNING: Does not return */
      pcVar42 = (code *)SoftwareBreakpoint(1,0x100208328);
      (*pcVar42)();
    }
    lVar40 = local_f8 + 0x20;
    lVar36 = *(long *)(lVar40 + (long)_Var37.unknown * 8);
    lVar31 = *(long *)(lVar36 + 0x10);
    _swift_bridgeObjectRetain(lVar36);
    if (lVar31 == 0) {
LAB_10020816c:
      puVar32 = SVar62.bridgeObject;
      pcVar46 = (char *)0xe000000000000000;
      SVar48 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      puVar45 = *(ulong **)((long)pNVar34 + 0x10);
    }
    else {
      puVar11 = &DAT_00006469;
      uVar33 = 0;
      FUN_10000464c(&DAT_00006469);
      if ((uVar33 & 1) == 0) goto LAB_10020816c;
      FUN_1000280d4(*(long *)(lVar36 + 0x38) + (long)puVar11 * 0x20,&local_b8);
      ppuVar12 = &local_d0;
      pcVar47 = PTR___type_metadata_for_Any_100524178 + 8;
      puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
      _swift_dynamicCast(ppuVar12,&local_b8,pcVar47,PTR___type_metadata_for_Swift_String_100523a98,6
                        );
      pvVar19 = pvStack_c8;
      SVar62.bridgeObject = puVar32;
      SVar62.str = pcVar47;
      if ((int)ppuVar12 == 0) goto LAB_10020816c;
      SVar4.bridgeObject = pvStack_c8;
      SVar4.str = (char *)local_d0;
      SVar48 = Swift::String::uppercased(SVar4);
      pcVar46 = SVar48.bridgeObject;
      _swift_bridgeObjectRelease(pvVar19);
      SVar62.bridgeObject = puVar32;
      SVar62.str = pcVar47;
      puVar45 = *(ulong **)((long)pNVar34 + 0x10);
    }
    if (puVar45 != (ulong *)0x0) {
      pcVar46 = SVar48.bridgeObject;
      Swift::Hasher::init((__int64)*(ulong **)((long)pNVar34 + 0x28));
      HVar17.unknown = (undefined *)&local_b8;
      pcVar47 = pcVar46;
      Swift::String::hash(HVar17,SVar48);
      uVar33 = Swift::Hasher::_finalize(HVar17);
      SVar62.bridgeObject = puVar32;
      SVar62.str = pcVar47;
      uVar44 = -1L << ((ulong)*(byte *)((long)pNVar34 + 0x20) & 0x3f);
      uVar33 = uVar33 & (uVar44 ^ 0xffffffffffffffff);
      if (((ulong)ppuVar14[uVar33 >> 6] >> (uVar33 & 0x3f) & 1) != 0) {
        do {
          pSVar1 = (String *)(*(ulong **)((long)local_e8 + 0x30) + uVar33 * 2);
          if ((SVar48 == *pSVar1) ||
             (SVar62 = SVar48,
             bVar8 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                (_StringComparisonResult)(__int8)SVar48.str), bVar8)) {
            _swift_bridgeObjectRelease(lVar36);
            _swift_bridgeObjectRelease(pcVar46);
            lVar36 = local_100;
            lVar31 = local_108;
            pNVar34 = local_e8;
            goto LAB_1002082d4;
          }
          uVar33 = uVar33 + 1 & ~uVar44;
        } while (((ulong)ppuVar14[uVar33 >> 6] >> (uVar33 & 0x3f) & 1) != 0);
      }
    }
    _swift_bridgeObjectRelease(lVar36);
    _swift_bridgeObjectRelease(pcVar46);
    pNVar34 = local_e8;
    lVar36 = local_100;
    lVar31 = local_108;
    uVar44 = local_f8;
    uVar33 = local_f8;
    if (puVar35 != _Var37.unknown) {
      if ((long)puVar35 < 0) {
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x100208330);
        (*pcVar42)();
      }
      if ((undefined *)*local_f0 <= puVar35) {
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x100208334);
        (*pcVar42)();
      }
      if ((long)*local_f0 <= (long)_Var37.unknown) {
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x100208338);
        (*pcVar42)();
      }
      uVar18 = *(undefined8 *)(lVar40 + (long)puVar35 * 8);
      uVar43 = *(undefined8 *)(lVar40 + (long)_Var37.unknown * 8);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar43);
      uVar33 = local_f8;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar44 = local_f8;
      if ((uVar33 & 1) == 0) {
        FUN_100287224();
      }
      lVar40 = uVar44 + 0x20;
      uVar27 = *(undefined8 *)(lVar40 + (long)puVar35 * 8);
      *(undefined8 *)(lVar40 + (long)puVar35 * 8) = uVar43;
      _swift_bridgeObjectRelease(uVar27);
      if (*(long *)(uVar44 + 0x10) <= (long)_Var37.unknown) {
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x10020833c);
        (*pcVar42)();
      }
      uVar43 = *(undefined8 *)(lVar40 + (long)_Var37.unknown * 8);
      *(undefined8 *)(lVar40 + (long)_Var37.unknown * 8) = uVar18;
      _swift_bridgeObjectRelease(uVar43);
      *local_160 = uVar44;
      uVar33 = local_f8;
    }
    local_f8 = uVar44;
    bVar8 = SCARRY8((long)puVar35,1);
    puVar35 = puVar35 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar42 = (code *)SoftwareBreakpoint(1,0x10020832c);
      local_f8 = uVar33;
      (*pcVar42)();
    }
LAB_1002082d4:
    _Var37.unknown = _Var37.unknown + 1;
    local_f0 = (ulong *)(local_f8 + 0x10);
    puVar32 = (undefined *)*local_f0;
  } while (_Var37.unknown != puVar32);
LAB_100207c58:
  if ((long)_Var37.unknown < (long)puVar35) {
                    /* WARNING: Does not return */
    pcVar42 = (code *)SoftwareBreakpoint(1,0x100207c64);
    (*pcVar42)();
  }
LAB_100207c70:
  FUN_100287d74(puVar35);
  local_b8 = (ulong *)0x0;
  local_b0 = (NSURL *)0xe000000000000000;
  Swift::_StringGuts::grow(0x41,_Var37);
  SVar55.bridgeObject = (void *)0x80000001004e1730;
  SVar55.str = (char *)0xd000000000000015;
  Swift::String::append(SVar55,SVar62);
  puVar45 = *(ulong **)((long)pNVar34 + 0x10);
  _swift_bridgeObjectRelease(pNVar34);
  local_d0 = puVar45;
  SVar48 = Swift::CustomStringConvertible::get_description();
  Swift::String::append(SVar48,SVar62);
  _swift_bridgeObjectRelease(SVar48.bridgeObject);
  uVar18 = 0xd00000000000002a;
  SVar56.bridgeObject = (void *)0x80000001004e1750;
  SVar56.str = (char *)0xd00000000000002a;
  Swift::String::append(SVar56,SVar62);
  pNVar28 = local_b0;
  SVar7.bridgeObject = local_b0;
  SVar7.str = (char *)local_b8;
  local_b8 = (ulong *)0x5b;
  local_b0 = (NSURL *)0xe100000000000000;
  local_d0 = (ulong *)0x4f464e49;
  pvStack_c8 = (void *)0xe400000000000000;
  local_e0 = 0x20;
  uStack_d8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar47 = (char *)0x0;
  puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar48 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar18,uVar18);
  SVar63.bridgeObject = puVar32;
  SVar63.str = pcVar47;
  Swift::String::append(SVar48,SVar63);
  _swift_bridgeObjectRelease(SVar48.bridgeObject);
  SVar57.bridgeObject = (void *)0xe300000000000000;
  SVar57.str = (char *)0x5b205d;
  SVar64.bridgeObject = puVar32;
  SVar64.str = pcVar47;
  Swift::String::append(SVar57,SVar64);
  SVar58.bridgeObject = (void *)0xea00000000006e65;
  SVar58.str = (char *)0x657263736b636f6c;
  SVar65.bridgeObject = puVar32;
  SVar65.str = pcVar47;
  Swift::String::append(SVar58,SVar65);
  SVar59.bridgeObject = (void *)0xe200000000000000;
  SVar59.str = (char *)0x205d;
  SVar66.bridgeObject = puVar32;
  SVar66.str = pcVar47;
  Swift::String::append(SVar59,SVar66);
  local_e8 = pNVar28;
  SVar67.bridgeObject = puVar32;
  SVar67.str = pcVar47;
  Swift::String::append(SVar7,SVar67);
  pNVar28 = local_b0;
  puVar45 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar32 = &DAT_100532b38;
  _swift_allocObject(&DAT_100532b38,0x30,7);
  local_f0 = puVar45;
  *(ulong **)(puVar32 + 0x10) = puVar45;
  *(NSURL **)(puVar32 + 0x18) = pNVar28;
  *(undefined8 *)(puVar32 + 0x20) = 0;
  *(undefined8 *)(puVar32 + 0x28) = 0xe000000000000000;
  local_98 = thunk_FUN_100099310;
  local_b8 = (ulong *)PTR___NSConcreteStackBlock_100521110;
  local_b0 = (void *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100532b50;
  local_90 = puVar32;
  pvVar19 = __Block_copy(&local_b8);
  DVar20.unknown = pNVar28;
  _swift_bridgeObjectRetain();
  qos.unknown = local_1b0.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar20);
  local_d0 = (ulong *)PTR___swiftEmptyArrayStorage_100524190;
  puVar21 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar32 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar22 = puVar32;
  FUN_100077ac0();
  puVar35 = local_188;
  lVar40 = local_198;
  Swift::SetAlgebra::_init(local_198,&local_d0,puVar32,puVar22,local_188,puVar21);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar19);
  (**(code **)(local_190 + 8))(lVar40,puVar35);
  (**(code **)(local_1a8 + 8))(qos.unknown,local_1a0);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar32 = local_180;
  puVar35 = local_180;
  FUN_100099338(local_180,&DAT_100558f50);
  lVar40 = lVar36;
  (**(code **)(lVar31 + 0x10))(lVar36,puVar35,puVar32);
  uVar9 = (uint)lVar40;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar23.unknown = pNVar28;
  _swift_bridgeObjectRetain();
  pOVar24 = os::Logger::get_logObject(LVar23);
  pOVar25 = pOVar24;
  _os_log_type_enabled(pOVar24,uVar9 & 0xff);
  if ((int)pOVar25 == 0) {
    _swift_bridgeObjectRelease_n(pNVar28,2);
    pcVar42 = *(code **)(lVar31 + 8);
  }
  else {
    puVar26 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar38 = (ulong *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar26 = 0x8220102;
    puVar45 = local_f0;
    local_b8 = puVar38;
    FUN_10012dbb0(local_f0,pNVar28,&local_b8);
    *(ulong **)(puVar26 + 1) = puVar45;
    _swift_bridgeObjectRelease_n(pNVar28,2);
    __os_log_impl(0x100000000,pOVar24,uVar9 & 0xff,"%{public}s",puVar26,0xc);
    FUN_100043f24(puVar38);
    _swift_slowDealloc(puVar38,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar26,0xffffffffffffffff,0xffffffffffffffff);
    pcVar42 = *(code **)(lVar31 + 8);
  }
  (*pcVar42)(lVar36,puVar32);
  _swift_bridgeObjectRelease(local_e8);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
LAB_10020836c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

