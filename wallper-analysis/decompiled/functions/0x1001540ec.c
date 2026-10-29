// rea decompile_all
// name: FUN_1001540ec
// address: 0x1001540ec
// body: available
// range: 0x1001540ec-0x10015584f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100155838 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001551c4) */

void FUN_1001540ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  DispatchWorkItemFlags DVar3;
  URL UVar4;
  undefined *puVar5;
  NSDictionary *pNVar6;
  Data DVar7;
  NSString *pNVar8;
  long lVar9;
  char **ppcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ID self;
  ID IVar15;
  DispatchQoS DVar16;
  undefined *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined8 extraout_x1;
  undefined8 uVar24;
  char *pcVar25;
  char *extraout_x1_00;
  undefined *extraout_x1_01;
  _StringGuts _Var26;
  void *pvVar27;
  char *pcVar28;
  void *pvVar29;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar30;
  long extraout_x8_02;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong *puVar35;
  char *pcVar36;
  long lVar37;
  long lVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
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
  undefined *local_230;
  long local_228;
  long local_220;
  undefined *local_218;
  char *local_210;
  undefined8 local_208;
  char *local_200;
  URL local_1f8;
  long local_1f0;
  undefined *local_1e8;
  DispatchWorkItemFlags local_1e0;
  long local_1d8;
  undefined *local_1d0;
  long local_1c8;
  long local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  char *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  long local_190;
  void *local_188;
  undefined *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char local_158 [24];
  undefined1 auStack_140 [8];
  char *local_138;
  char *local_130;
  char *local_120 [2];
  char *apcStack_110 [8];
  code *local_d0;
  char *pcStack_c8;
  code *local_c0;
  undefined *puStack_b8;
  char *local_b0;
  char *pcStack_a8;
  code *local_a0;
  char *pcStack_98;
  code *local_90;
  undefined *puStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100521138;
  uVar22 = param_2;
  local_1b8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_1c0 = *(long *)(local_1b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c0 + 0x40));
  lVar38 = (long)&local_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar38;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar37 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  lVar38 = lVar38 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1d8 = *(long *)(local_1d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1d8 + 0x40));
  puVar30 = (undefined *)(lVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_1e0.unknown = puVar30;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  local_1f0 = *(long *)(UVar4.unknown + -8);
  local_1e8 = UVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1f0 + 0x40));
  local_1f8.unknown = puVar30 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1001529e8();
  puVar30 = &DAT_100554f88;
  FUN_100002f94(&DAT_100554f88,&DAT_100428a98);
  _swift_allocObject();
  *(undefined8 *)(puVar30 + 0x18) = 2;
  *(undefined8 *)(puVar30 + 0x10) = 1;
  *(undefined8 *)(puVar30 + 0x20) = 0x44497465737361;
  *(undefined8 *)(puVar30 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(puVar30 + 0x30) = param_1;
  *(undefined8 *)(puVar30 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar5 = puVar30;
  FUN_100005574(puVar30);
  _swift_setDeallocating(puVar30);
  FUN_10002a29c(puVar30 + 0x20,&DAT_100554f90,&DAT_100428aa0);
  _swift_deallocClassInstance(puVar30,0x20,7);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  local_b0 = (char *)0x0;
  local_1b0 = &_OBJC_CLASS___NSPropertyListSerialization;
  DVar7.unknown =
       (undefined *)
       NSPropertyListSerialization::dataWithPropertyList_format_options_error_
                 (&_OBJC_CLASS___NSPropertyListSerialization,pNVar6,200,0,&local_b0);
  if (DVar7.unknown == (undefined *)0x0) {
    pcVar11 = local_b0;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_bridgeObjectRelease(uVar22);
    _swift_errorRelease(pcVar11);
  }
  else {
    uVar24 = extraout_x1;
    local_1a0 = (undefined *)Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
    puVar30 = &_OBJC_CLASS___NSDictionary;
    local_198 = uVar24;
    _objc_allocWithZone();
    local_208 = uVar22;
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar6 = (NSDictionary *)objc_stub::initWithContentsOfFile_((ID)puVar30,pNVar8);
    local_230 = UVar4.unknown;
    if (pNVar6 == (NSDictionary *)0x0) {
LAB_100154408:
      pcVar11 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_100005b10();
    }
    else {
      local_b0 = (char *)0x0;
      (extension_Foundation)::Swift::Dictionary::__conditionallyBridgeFromObjectiveC(pNVar6);
      pcVar11 = local_b0;
      if (local_b0 == (char *)0x0) goto LAB_100154408;
    }
    local_130 = pcVar11;
    if (*(long *)(pcVar11 + 0x10) == 0) {
LAB_1001544e0:
      pcVar28 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_100005b10();
      apcStack_110[6] = pcVar28;
    }
    else {
      _swift_bridgeObjectRetain(pcVar11);
      uVar32 = 0;
      lVar9 = -0x2fffffffffffffec;
      FUN_10000464c(0xd000000000000014);
      if ((uVar32 & 1) == 0) {
        _swift_bridgeObjectRelease(pcVar11);
        goto LAB_1001544e0;
      }
      FUN_1000280d4(*(long *)(pcVar11 + 0x38) + lVar9 * 0x20,&local_b0);
      _swift_bridgeObjectRelease(pcVar11);
      puVar30 = &DAT_10054f980;
      FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
      ppcVar10 = apcStack_110 + 6;
      _swift_dynamicCast(ppcVar10,&local_b0,PTR___type_metadata_for_Any_100524178 + 8,puVar30,6);
      if (((ulong)ppcVar10 & 1) == 0) goto LAB_1001544e0;
    }
    local_138 = apcStack_110[6];
    FUN_100153ac8(&local_138,local_1a0,local_198);
    pcVar12 = local_138;
    pcVar28 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    apcStack_110[6] = pcVar12;
    local_210 = pcVar12;
    pcStack_c8 = pcVar28;
    if (pcVar28 == (char *)0x0) {
      _swift_bridgeObjectRetain(pcVar12);
      FUN_10002a29c(apcStack_110 + 6,&DAT_10054d428,&DAT_100420300);
      FUN_10027eb2c(&local_b0,0xd000000000000014,0x80000001004dea90);
      FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
    }
    else {
      FUN_100007d88(apcStack_110 + 6,&local_b0);
      _swift_bridgeObjectRetain(pcVar12);
      pcVar12 = pcVar11;
      _swift_isUniquelyReferenced_nonNull_native(pcVar11);
      apcStack_110[6] = pcVar11;
      FUN_100340514(&local_b0,0xd000000000000014,0x80000001004dea90,pcVar12);
      local_130 = apcStack_110[6];
    }
    pcVar11 = local_130;
    local_228 = lVar38;
    local_220 = lVar37;
    local_218 = DVar3.unknown;
    if (*(long *)(local_130 + 0x10) != 0) {
      uVar32 = 0;
      lVar38 = 0x65446d6574737953;
      _swift_bridgeObjectRetain(local_130);
      FUN_10000464c(0x65446d6574737953);
      if ((uVar32 & 1) == 0) {
LAB_1001546fc:
        _swift_bridgeObjectRelease(pcVar11);
      }
      else {
        FUN_1000280d4(*(long *)(pcVar11 + 0x38) + lVar38 * 0x20,&local_b0);
        _swift_bridgeObjectRelease(pcVar11);
        ppcVar10 = apcStack_110 + 6;
        _swift_dynamicCast(ppcVar10,&local_b0,PTR___type_metadata_for_Any_100524178 + 8,pcVar28,6);
        if (((ulong)ppcVar10 & 1) != 0) {
          apcStack_110[2] = apcStack_110[6];
          FUN_100153ac8(apcStack_110 + 2,local_1a0,local_198);
          pcVar12 = apcStack_110[2];
          apcStack_110[6] = apcStack_110[2];
          if (pcVar28 == (char *)0x0) {
            pcStack_c8 = pcVar28;
            _swift_bridgeObjectRetain(apcStack_110[2]);
            FUN_10002a29c(apcStack_110 + 6,&DAT_10054d428,&DAT_100420300);
            FUN_10027eb2c(&local_b0,0x65446d6574737953,0xed0000746c756166);
            FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
            pcVar11 = pcVar12;
            goto LAB_1001546fc;
          }
          pcStack_c8 = pcVar28;
          FUN_100007d88(apcStack_110 + 6,&local_b0);
          _swift_bridgeObjectRetain(pcVar12);
          pcVar36 = pcVar11;
          _swift_isUniquelyReferenced_nonNull_native(pcVar11);
          apcStack_110[6] = pcVar11;
          FUN_100340514(&local_b0,0x65446d6574737953,0xed0000746c756166,pcVar36);
          _swift_bridgeObjectRelease(pcVar12);
          local_130 = apcStack_110[6];
        }
      }
    }
    uVar32 = 0;
    lVar38 = 0;
    local_170 = pcVar28;
    do {
      pcVar11 = local_130;
      uVar33 = uVar32;
      if (*(long *)(local_130 + 0x10) != 0) {
        lVar37 = *(long *)(s_Spaces_100554fc0 + lVar38 * 0x10);
        pvVar29 = (void *)(&DAT_100554fc8)[lVar38 * 2];
        _swift_bridgeObjectRetain(pvVar29);
        _swift_bridgeObjectRetain(pcVar11);
        lVar38 = lVar37;
        pvVar27 = pvVar29;
        FUN_10000464c(lVar37);
        if (((ulong)pvVar27 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar11);
        }
        else {
          FUN_1000280d4(*(long *)(pcVar11 + 0x38) + lVar38 * 0x20,&local_b0);
          _swift_bridgeObjectRelease(pcVar11);
          puVar30 = PTR___type_metadata_for_Any_100524178;
          ppcVar10 = apcStack_110 + 6;
          _swift_dynamicCast(ppcVar10,&local_b0,PTR___type_metadata_for_Any_100524178 + 8,pcVar28,6)
          ;
          pcVar11 = apcStack_110[6];
          if (((ulong)ppcVar10 & 1) != 0) {
            local_180 = (undefined *)CONCAT44(local_180._4_4_,(int)uVar32);
            puVar35 = (ulong *)(apcStack_110[6] + 0x40);
            uVar33 = 1L << ((ulong)(byte)apcStack_110[6][0x20] & 0x3f);
            uVar32 = 0xffffffffffffffff;
            if ((apcStack_110[6][0x20] & 0x3fU) < 6) {
              uVar32 = ~(-1L << (uVar33 & 0x3f));
            }
            uVar32 = uVar32 & *puVar35;
            uVar33 = uVar33 + 0x3f >> 6;
            local_190 = lVar37;
            local_188 = pvVar29;
            _swift_bridgeObjectRetain(apcStack_110[6]);
            local_178 = pcVar11;
            lVar38 = 0;
LAB_100154818:
            lVar37 = lVar38;
            if (uVar32 == 0) {
              uVar32 = uVar33;
              if ((long)uVar33 <= lVar38 + 1) {
                uVar32 = lVar38 + 1;
              }
              lVar9 = uVar32 - 1;
              do {
                lVar37 = lVar38 + 1;
                if (SCARRY8(lVar38,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001551fc);
                  (*pcVar2)();
                }
                if ((long)uVar33 <= lVar37) {
                  uVar32 = 0;
                  pcStack_c8 = (char *)0x0;
                  local_d0 = (code *)0x0;
                  puStack_b8 = (undefined *)0x0;
                  local_c0 = (code *)0x0;
                  apcStack_110[7] = (char *)0x0;
                  apcStack_110[6] = (char *)0x0;
                  goto LAB_10015489c;
                }
                uVar32 = puVar35[lVar37];
                lVar38 = lVar38 + 1;
              } while (uVar32 == 0);
            }
            uVar31 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar32 = uVar32 - 1 & uVar32;
            uVar31 = LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) | lVar37 << 6;
            puVar1 = (undefined8 *)(*(long *)(pcVar11 + 0x30) + uVar31 * 0x10);
            apcStack_110[6] = (char *)*puVar1;
            pcVar28 = (char *)puVar1[1];
            apcStack_110[7] = pcVar28;
            FUN_1000280d4(*(long *)(pcVar11 + 0x38) + uVar31 * 0x20,apcStack_110 + 8);
            _swift_bridgeObjectRetain(pcVar28);
            puVar30 = PTR___type_metadata_for_Any_100524178;
            lVar9 = lVar37;
LAB_10015489c:
            pcVar12 = apcStack_110[7];
            pcVar28 = apcStack_110[6];
            pcStack_a8 = apcStack_110[7];
            local_b0 = apcStack_110[6];
            pcStack_98 = pcStack_c8;
            local_a0 = local_d0;
            puStack_88 = puStack_b8;
            local_90 = local_c0;
            if (apcStack_110[7] != (char *)0x0) {
              FUN_100007d88(&local_a0,apcStack_110 + 6);
              FUN_1000280d4(apcStack_110 + 6,apcStack_110 + 2);
              ppcVar10 = local_120;
              _swift_dynamicCast(ppcVar10,apcStack_110 + 2,puVar30 + 8,local_170,6);
              pcVar36 = local_120[0];
              lVar38 = lVar9;
              if ((int)ppcVar10 == 0) {
                FUN_100043f24(apcStack_110 + 6);
                _swift_bridgeObjectRelease(pcVar12);
              }
              else {
                local_160 = local_120[0];
                if (*(long *)(local_120[0] + 0x10) == 0) {
LAB_100154aac:
                  FUN_100153ac8(&local_160,local_1a0,local_198);
                  pcVar14 = local_178;
                  pcVar36 = local_160;
                }
                else {
                  _swift_bridgeObjectRetain(local_120[0]);
                  lVar37 = 0x746c7561666544;
                  uVar31 = 0;
                  FUN_10000464c(0x746c7561666544);
                  if ((uVar31 & 1) == 0) {
                    _swift_bridgeObjectRelease(pcVar36);
                    goto LAB_100154aac;
                  }
                  FUN_1000280d4(*(long *)(pcVar36 + 0x38) + lVar37 * 0x20,apcStack_110 + 2);
                  _swift_bridgeObjectRelease(pcVar36);
                  pcVar14 = local_170;
                  ppcVar10 = local_120;
                  _swift_dynamicCast(ppcVar10,apcStack_110 + 2,
                                     PTR___type_metadata_for_Any_100524178 + 8,local_170,6);
                  if (((ulong)ppcVar10 & 1) == 0) goto LAB_100154aac;
                  local_168 = local_120[0];
                  FUN_100153ac8(&local_168,local_1a0,local_198);
                  pcVar13 = local_168;
                  local_120[0] = local_168;
                  apcStack_110[1] = pcVar14;
                  local_1a8 = local_168;
                  if (pcVar14 == (char *)0x0) {
                    _swift_bridgeObjectRetain();
                    FUN_10002a29c(local_120,&DAT_10054d428,&DAT_100420300);
                    _swift_bridgeObjectRetain(pcVar36);
                    pcVar14 = (char *)0x746c7561666544;
                    uVar31 = 0;
                    FUN_10000464c();
                    local_200 = pcVar14;
                    _swift_bridgeObjectRelease(pcVar36);
                    if ((uVar31 & 1) == 0) {
                      apcStack_110[3] = (char *)0x0;
                      apcStack_110[2] = (char *)0x0;
                      apcStack_110[5] = (char *)0x0;
                      apcStack_110[4] = (char *)0x0;
                    }
                    else {
                      pcVar14 = pcVar36;
                      _swift_isUniquelyReferenced_nonNull_native();
                      local_120[0] = pcVar36;
                      if (((ulong)pcVar14 & 1) == 0) {
                        FUN_1001cb1fc();
                      }
                      pcVar36 = local_120[0];
                      pcVar14 = local_200;
                      _swift_bridgeObjectRelease
                                (*(undefined8 *)
                                  (*(long *)(local_120[0] + 0x30) + (long)local_200 * 0x10 + 8));
                      FUN_100007d88(*(long *)(pcVar36 + 0x38) + (long)pcVar14 * 0x20,
                                    apcStack_110 + 2);
                      FUN_1001d1f74(pcVar14,pcVar36);
                      local_160 = pcVar36;
                    }
                    pcVar14 = local_178;
                    FUN_10002a29c(apcStack_110 + 2,&DAT_10054d428,&DAT_100420300);
                    _swift_bridgeObjectRelease(local_1a8);
                  }
                  else {
                    FUN_100007d88(local_120,apcStack_110 + 2);
                    _swift_bridgeObjectRetain(pcVar13);
                    pcVar14 = pcVar36;
                    _swift_isUniquelyReferenced_nonNull_native();
                    pcVar13 = (char *)0x746c7561666544;
                    uVar31 = 0;
                    local_120[0] = pcVar36;
                    FUN_10000464c();
                    uVar34 = (ulong)~(uint)uVar31 & 1;
                    lVar37 = *(long *)(pcVar36 + 0x10) + uVar34;
                    if (SCARRY8(*(long *)(pcVar36 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100155838);
                      (*pcVar2)();
                    }
                    if (*(long *)(pcVar36 + 0x18) < lVar37) {
                      local_200 = (char *)CONCAT44(local_200._4_4_,(uint)uVar31);
                      FUN_1001cdec8(lVar37,pcVar14);
                      pcVar13 = (char *)0x746c7561666544;
                      uVar23 = 0;
                      FUN_10000464c(0x746c7561666544);
                      uVar31 = (ulong)local_200 & 0xffffffff;
                      if (((uint)local_200 & 1) != (uVar23 & 1)) goto LAB_100155840;
                    }
                    else if ((int)pcVar14 == 0) {
                      local_200 = pcVar13;
                      FUN_1001cb1fc();
                      pcVar13 = local_200;
                    }
                    pcVar36 = local_120[0];
                    if ((uVar31 & 1) == 0) {
                      FUN_1002a7a44();
                    }
                    else {
                      lVar37 = *(long *)(local_120[0] + 0x38) + (long)pcVar13 * 0x20;
                      FUN_100043f24(lVar37);
                      FUN_100007d88(apcStack_110 + 2,lVar37);
                    }
                    pcVar14 = local_178;
                    _swift_bridgeObjectRelease(local_1a8);
                    local_160 = pcVar36;
                  }
                }
                apcStack_110[1] = local_170;
                local_120[0] = pcVar36;
                if (local_170 == (char *)0x0) {
                  _swift_bridgeObjectRetain(pcVar36);
                  FUN_10002a29c(local_120,&DAT_10054d428,&DAT_100420300);
                  _swift_bridgeObjectRetain(pcVar14);
                  pcVar13 = pcVar12;
                  FUN_10000464c();
                  local_200 = pcVar28;
                  _swift_bridgeObjectRelease(pcVar14);
                  if (((ulong)pcVar13 & 1) == 0) {
                    _swift_bridgeObjectRelease(pcVar36);
                    _swift_bridgeObjectRelease(pcVar12);
                    FUN_100043f24(apcStack_110 + 6);
                    apcStack_110[3] = (char *)0x0;
                    apcStack_110[2] = (char *)0x0;
                    apcStack_110[5] = (char *)0x0;
                    apcStack_110[4] = (char *)0x0;
                  }
                  else {
                    pcVar28 = pcVar14;
                    local_1a8 = pcVar36;
                    _swift_isUniquelyReferenced_nonNull_native();
                    local_120[0] = pcVar14;
                    if ((int)pcVar28 == 0) {
                      FUN_1001cb1fc();
                    }
                    pcVar36 = local_120[0];
                    pcVar28 = local_200;
                    _swift_bridgeObjectRelease
                              (*(undefined8 *)
                                (*(long *)(local_120[0] + 0x30) + (long)local_200 * 0x10 + 8));
                    FUN_100007d88(*(long *)(pcVar36 + 0x38) + (long)pcVar28 * 0x20,apcStack_110 + 2)
                    ;
                    local_178 = pcVar36;
                    FUN_1001d1f74(pcVar28,pcVar36);
                    _swift_bridgeObjectRelease(local_1a8);
                    _swift_bridgeObjectRelease(pcVar12);
                    FUN_100043f24(apcStack_110 + 6);
                  }
                  FUN_10002a29c(apcStack_110 + 2,&DAT_10054d428,&DAT_100420300);
                  puVar30 = PTR___type_metadata_for_Any_100524178;
                }
                else {
                  FUN_100007d88(local_120,apcStack_110 + 2);
                  local_1a8 = pcVar36;
                  _swift_bridgeObjectRetain(pcVar36);
                  pcVar36 = pcVar14;
                  _swift_isUniquelyReferenced_nonNull_native();
                  pcVar13 = pcVar28;
                  pcVar25 = pcVar12;
                  local_120[0] = pcVar14;
                  FUN_10000464c(pcVar28);
                  uVar23 = (uint)pcVar25;
                  lVar37 = *(long *)(local_178 + 0x10) + ((ulong)~uVar23 & 1);
                  if (SCARRY8(*(long *)(local_178 + 0x10),(ulong)~uVar23 & 1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100155804);
                    (*pcVar2)();
                  }
                  if (*(long *)(local_178 + 0x18) < lVar37) {
                    local_178 = (char *)CONCAT44(local_178._4_4_,uVar23);
                    FUN_1001cdec8(lVar37,pcVar36);
                    pcVar13 = pcVar28;
                    pcVar36 = pcVar12;
                    FUN_10000464c(pcVar28);
                    pcVar25 = (char *)((ulong)local_178 & 0xffffffff);
                    if (((uint)local_178 & 1) != ((uint)pcVar36 & 1)) {
LAB_100155840:
                      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100155850);
                      (*pcVar2)();
                    }
                  }
                  else if ((int)pcVar36 == 0) {
                    local_178 = (char *)CONCAT44(local_178._4_4_,uVar23);
                    FUN_1001cb1fc();
                    pcVar25 = (char *)((ulong)local_178 & 0xffffffff);
                  }
                  pcVar36 = local_1a8;
                  local_178 = local_120[0];
                  if (((ulong)pcVar25 & 1) == 0) {
                    FUN_1002a7a44(pcVar13,pcVar28,pcVar12,apcStack_110 + 2);
                  }
                  else {
                    lVar37 = *(long *)(local_120[0] + 0x38) + (long)pcVar13 * 0x20;
                    FUN_100043f24(lVar37);
                    FUN_100007d88(apcStack_110 + 2,lVar37);
                    _swift_bridgeObjectRelease(pcVar36);
                    pcVar36 = pcVar12;
                  }
                  puVar30 = PTR___type_metadata_for_Any_100524178;
                  _swift_bridgeObjectRelease(pcVar36);
                  FUN_100043f24(apcStack_110 + 6);
                }
              }
              goto LAB_100154818;
            }
            _swift_release(pcVar11);
            pcVar28 = local_170;
            pcVar11 = local_178;
            apcStack_110[6] = local_178;
            pcStack_c8 = local_170;
            if (local_170 == (char *)0x0) {
              _swift_bridgeObjectRetain(local_178);
              FUN_10002a29c(apcStack_110 + 6,&DAT_10054d428,&DAT_100420300);
              pvVar29 = local_188;
              FUN_10027eb2c(&local_b0,local_190,local_188);
              _swift_bridgeObjectRelease(pvVar29);
              FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
              _swift_bridgeObjectRelease(pcVar11);
            }
            else {
              FUN_100007d88(apcStack_110 + 6,&local_b0);
              _swift_bridgeObjectRetain(pcVar11);
              pcVar12 = local_130;
              pcVar36 = local_130;
              _swift_isUniquelyReferenced_nonNull_native(local_130);
              pvVar29 = local_188;
              apcStack_110[6] = pcVar12;
              FUN_100340514(&local_b0,local_190,local_188,pcVar36);
              _swift_bridgeObjectRelease(pcVar11);
              _swift_bridgeObjectRelease(pvVar29);
              local_130 = apcStack_110[6];
            }
            uVar33 = (ulong)local_180 & 0xffffffff;
            goto LAB_100154730;
          }
        }
        _swift_bridgeObjectRelease(pvVar29);
      }
LAB_100154730:
      uVar32 = 1;
      lVar38 = 1;
    } while ((uVar33 & 1) == 0);
    _swift_arrayDestroy(s_Spaces_100554fc0,2,PTR___type_metadata_for_Swift_String_100523a98);
    pcVar11 = local_130;
    pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    local_b0 = (char *)0x0;
    DVar7.unknown =
         (undefined *)
         objc_stub::dataWithPropertyList_format_options_error_(local_1b0,pNVar6,200,0,&local_b0);
    if (DVar7.unknown == (undefined *)0x0) {
      pcVar28 = local_b0;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_bridgeObjectRelease(local_208);
      FUN_100093624(local_1a0,local_198);
      _swift_errorRelease(pcVar28);
      _swift_bridgeObjectRelease(pcVar11);
      lVar38 = -0x100;
    }
    else {
      pcVar28 = extraout_x1_00;
      DVar7 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
      self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      IVar15 = self;
      _NSHomeDirectory();
      uVar22 = local_208;
      if (IVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100155840);
        (*pcVar2)();
      }
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar8 = (NSString *)objc_stub::stringByAppendingPathComponent_(IVar15,pNVar8);
      if (pNVar8 == (NSString *)0x0) {
        SVar39 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar39.bridgeObject);
      }
      local_b0 = (char *)0x0;
      pvVar29 = (void *)0x1;
      IVar15 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                         (self,pNVar8,1,0,&local_b0);
      pcVar12 = local_b0;
      UVar4.unknown = local_1f8.unknown;
      if ((int)IVar15 != 0) {
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar22);
        Foundation::Data::_write(UVar4,(NSDataWritingOptions)0x1,DVar7);
        FUN_100093624(DVar7.unknown,pcVar28);
        FUN_100093624(local_1a0,local_198);
        (**(code **)(local_1f0 + 8))(UVar4.unknown,local_1e8);
        _swift_bridgeObjectRelease(pcVar11);
        _swift_bridgeObjectRelease(local_210);
        uVar22 = 1;
        goto LAB_100155720;
      }
      local_170 = pcVar11;
      _Var26.unknown = extraout_x1_01;
      local_180 = DVar7.unknown;
      _swift_bridgeObjectRelease(uVar22);
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_b0 = (char *)0x0;
      pcStack_a8 = (void *)0xe000000000000000;
      local_178 = pcVar28;
      Swift::_StringGuts::grow(0x34,_Var26);
      SVar40.bridgeObject = (void *)0x80000001004deab0;
      SVar40.str = (char *)0xd000000000000032;
      SVar47.bridgeObject = pvVar29;
      SVar47.str = (char *)pNVar8;
      Swift::String::append(SVar40,SVar47);
      pcVar11 = local_158;
      _swift_getErrorValue(pcVar12,auStack_140);
      SVar39 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      pvVar27 = SVar39.bridgeObject;
      SVar48.bridgeObject = pvVar29;
      SVar48.str = pcVar11;
      Swift::String::append(SVar39,SVar48);
      _swift_bridgeObjectRelease(pvVar27);
      pcVar11 = pcStack_a8;
      SVar39.bridgeObject = pcStack_a8;
      SVar39.str = local_b0;
      local_b0 = (char *)0x5b;
      pcStack_a8 = (undefined *)0xe100000000000000;
      apcStack_110[6] = (char *)0x4e524157;
      apcStack_110[7] = (char *)0xe400000000000000;
      apcStack_110[2] = (char *)0x20;
      apcStack_110[3] = (char *)0xe100000000000000;
      FUN_100026df4();
      pcVar28 = (char *)0x0;
      puVar30 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,apcStack_110 + 2,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar27,pvVar27);
      SVar49.bridgeObject = puVar30;
      SVar49.str = pcVar28;
      Swift::String::append(SVar40,SVar49);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar41.bridgeObject = (void *)0xe300000000000000;
      SVar41.str = (char *)0x5b205d;
      SVar50.bridgeObject = puVar30;
      SVar50.str = pcVar28;
      Swift::String::append(SVar41,SVar50);
      SVar42.bridgeObject = (void *)0xea00000000006e65;
      SVar42.str = (char *)0x657263736b636f6c;
      SVar51.bridgeObject = puVar30;
      SVar51.str = pcVar28;
      Swift::String::append(SVar42,SVar51);
      SVar43.bridgeObject = (void *)0xe200000000000000;
      SVar43.str = (char *)0x205d;
      SVar52.bridgeObject = puVar30;
      SVar52.str = pcVar28;
      Swift::String::append(SVar43,SVar52);
      local_188 = pcVar11;
      SVar53.bridgeObject = puVar30;
      SVar53.str = pcVar28;
      Swift::String::append(SVar39,SVar53);
      pcVar36 = pcStack_a8;
      pcVar11 = local_b0;
      local_b0 = (char *)0x282020;
      pcStack_a8 = (char *)0xe300000000000000;
      SVar44.bridgeObject = (void *)0x80000001004deaf0;
      SVar44.str = (char *)0xd000000000000010;
      SVar54.bridgeObject = puVar30;
      SVar54.str = pcVar28;
      Swift::String::append(SVar44,SVar54);
      SVar45.bridgeObject = (void *)0xe100000000000000;
      SVar45.str = (char *)0x3a;
      SVar55.bridgeObject = puVar30;
      SVar55.str = pcVar28;
      Swift::String::append(SVar45,SVar55);
      apcStack_110[6] = (char *)0x6f;
      SVar39 = Swift::CustomStringConvertible::get_description();
      SVar56.bridgeObject = puVar30;
      SVar56.str = pcVar28;
      Swift::String::append(SVar39,SVar56);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      SVar46.bridgeObject = (void *)0xe100000000000000;
      SVar46.str = (char *)0x29;
      SVar57.bridgeObject = puVar30;
      SVar57.str = pcVar28;
      Swift::String::append(SVar46,SVar57);
      pcVar14 = pcStack_a8;
      pcVar28 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar30 = &DAT_10052ee88;
      _swift_allocObject(&DAT_10052ee88,0x30,7);
      *(char **)(puVar30 + 0x10) = pcVar11;
      *(char **)(puVar30 + 0x18) = pcVar36;
      *(char **)(puVar30 + 0x20) = pcVar28;
      *(char **)(puVar30 + 0x28) = pcVar14;
      local_90 = FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      pcStack_a8 = (char *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      pcStack_98 = "";
      puStack_88 = puVar30;
      pvVar29 = __Block_copy(&local_b0);
      DVar16.unknown = pcVar36;
      _swift_bridgeObjectRetain();
      DVar3.unknown = local_1e0.unknown;
      DVar16 = Dispatch::DispatchQoS::get_unspecified(DVar16);
      apcStack_110[6] = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1000fedc8();
      puVar30 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar17 = puVar30;
      FUN_100077ac0();
      puVar5 = local_218;
      lVar38 = local_228;
      Swift::SetAlgebra::_init(local_228,apcStack_110 + 6,puVar30,puVar17,local_218,DVar16.unknown);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar3);
      __Block_release(pvVar29);
      (**(code **)(local_220 + 8))(lVar38,puVar5);
      (**(code **)(local_1d8 + 8))(DVar3.unknown,local_1d0);
      _swift_release(puStack_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar30 = local_1b8;
      puVar5 = local_1b8;
      FUN_100099338(local_1b8,&DAT_100558f50);
      lVar37 = local_1c0;
      lVar38 = local_1c8;
      lVar9 = local_1c8;
      (**(code **)(local_1c0 + 0x10))(local_1c8,puVar5,puVar30);
      uVar23 = (uint)lVar9;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar18.unknown = pcVar36;
      _swift_bridgeObjectRetain();
      pOVar19 = os::Logger::get_logObject(LVar18);
      pOVar20 = pOVar19;
      _os_log_type_enabled(pOVar19,uVar23 & 0xff);
      if ((int)pOVar20 == 0) {
        _swift_bridgeObjectRelease_n(pcVar36,2);
      }
      else {
        puVar21 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar28 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar21 = 0x8220102;
        local_b0 = pcVar28;
        FUN_10012dbb0(pcVar11,pcVar36,&local_b0);
        *(char **)(puVar21 + 1) = pcVar11;
        _swift_bridgeObjectRelease_n(pcVar36,2);
        __os_log_impl(0x100000000,pOVar19,uVar23 & 0xff,"%{public}s",puVar21,0xc);
        FUN_100043f24(pcVar28);
        _swift_slowDealloc(pcVar28,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar37 + 8))(lVar38,puVar30);
      FUN_100093624(local_180,local_178);
      FUN_100093624(local_1a0,local_198);
      _swift_bridgeObjectRelease(local_188);
      _swift_errorRelease(pcVar12);
      _swift_bridgeObjectRelease(local_210);
      lVar38 = -0x60;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)((long)apcStack_110 + lVar38));
  }
  uVar22 = 0;
LAB_100155720:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar22);
}

