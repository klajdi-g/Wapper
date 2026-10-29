// rea decompile_all
// name: FUN_1001ba2f8
// address: 0x1001ba2f8
// body: available
// range: 0x1001ba2f8-0x1001bb483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ba2f8(undefined8 param_1,undefined *param_2)

{
  String *pSVar1;
  UUID UVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  StringInterpolation SVar8;
  Date DVar9;
  UUID UVar10;
  long lVar11;
  LocalizationValue LVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  uint uVar18;
  ulong uVar20;
  undefined8 uVar21;
  UUID UVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long lVar24;
  long lVar25;
  long extraout_x8_02;
  long lVar26;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar27;
  long extraout_x8_06;
  long lVar28;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  code *pcVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined *puVar40;
  ulong uVar41;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long lVar42;
  ulong *unaff_x20;
  long lVar43;
  ulong uVar44;
  long lVar45;
  char *pcVar46;
  long lVar47;
  code *pcVar48;
  code *pcVar49;
  long lVar50;
  String SVar51;
  String local_1a0;
  long local_190;
  long local_188;
  UUID local_180;
  UUID local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  undefined *local_c8;
  undefined *local_88 [5];
  void *pvVar19;
  
  puVar40 = &DAT_100556930;
  local_168 = param_1;
  FUN_100002f94(&DAT_100556930,&DAT_10042a8c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar40 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_1a0.bridgeObject = (void *)((long)&local_1a0 - extraout_x8);
  FUN_100266c40();
  local_190 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190 + 0x40));
  lVar31 = ((long)&local_1a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar31 - extraout_x12;
  puVar40 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar40 + -8) + 0x40));
  uVar32 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = uVar32 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar33 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar35 = lVar34 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = uVar35 - extraout_x12_03;
  lVar5 = 0;
  FUN_100266c2c();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar36 = lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar36 - extraout_x12_04;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar7.unknown =
       (undefined *)
       ((lVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  SVar8 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar8.unknown + -8) + 0x40));
  SVar8.unknown = LVar7.unknown + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar27 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  lVar28 = (long)SVar8.unknown - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  lVar50 = *(long *)(UVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar50 + 0x40));
  lVar37 = lVar28 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar37 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar39 = lVar38 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar45 = uVar39 - extraout_x12_07;
  puVar40 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar40 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar42 = lVar45 - extraout_x8_08;
  lVar11 = 0;
  FUN_10025ee04();
  pcVar46 = *(char **)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(pcVar46 + 0x40));
  lVar5 = lVar42 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  local_170 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar40 = (undefined *)(lVar5 - extraout_x12_08);
  local_180.unknown = puVar40;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar47 = (long)puVar40 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar43 = lVar47 - extraout_x12_10;
  local_178.unknown = param_2;
  FUN_1001b6e74(lVar42,param_2);
  lVar5 = lVar42;
  (**(code **)(pcVar46 + 0x30))(lVar42,1,lVar11);
  if ((int)lVar5 == 1) {
    FUN_10002a29c(lVar42,&DAT_10054ac38,&DAT_10041e8e0);
    (**(code **)(pcVar46 + 0x38))(local_168,1,1,lVar11);
  }
  else {
    local_1a0.str = pcVar46;
    FUN_100007e64(lVar42,lVar43,FUN_10025ee04);
    FUN_100029504(lVar43,lVar47,FUN_10025ee04);
    Foundation::UUID::init();
    pcVar29 = *(code **)(lVar50 + 0x28);
    (*pcVar29)(lVar47,lVar45,UVar10.unknown);
    Foundation::Date::init();
    (**(code **)(lVar27 + 0x28))(lVar47 + *(int *)(lVar11 + 0x18),lVar28);
    LocalizationValue::StringInterpolation::_init(5,1);
    LocalizationValue::StringInterpolation::_appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)DVar9.unknown);
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar43 + *(int *)(lVar11 + 0x14)),(StringInterpolation)DVar9.unknown);
    SVar51.bridgeObject = (void *)0xe500000000000000;
    SVar51.str = (char *)0x79706f4320;
    LocalizationValue::StringInterpolation::_appendLiteral
              (SVar51,(StringInterpolation)DVar9.unknown);
    LVar12 = LocalizationValue::_init(SVar8);
    Foundation::Locale::get_current((Locale)LVar12.unknown);
    SVar51 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
    pvVar19 = SVar51.bridgeObject;
    FUN_1001bb484();
    _swift_bridgeObjectRelease(pvVar19);
    local_160 = lVar47;
    pSVar1 = (String *)(lVar47 + *(int *)(lVar11 + 0x14));
    _swift_bridgeObjectRelease(pSVar1->bridgeObject);
    local_c8 = PTR___swiftEmptyArrayStorage_100524190;
    *pSVar1 = SVar51;
    puVar40 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100006c3c();
    local_188 = lVar11;
    lVar5 = (long)*(int *)(lVar11 + 0x34);
    lVar11 = *(long *)(lVar43 + lVar5);
    uVar20 = *(ulong *)(lVar11 + 0x10);
    if (uVar20 == 0) {
    }
    else {
      local_88[0] = local_c8;
      FUN_1001c5cbc(0,uVar20,0);
      uVar44 = 0;
      local_c8 = local_88[0];
      uVar30 = (ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff);
      do {
        if (*(ulong *)(lVar11 + 0x10) <= uVar44) {
                    /* WARNING: Does not return */
          pcVar29 = (code *)SoftwareBreakpoint(1,0x1001bb3e0);
          (*pcVar29)();
        }
        lVar5 = *(long *)(lVar25 + 0x48);
        FUN_100029504(lVar11 + uVar30 + lVar5 * uVar44,lVar36,FUN_100266c2c);
        FUN_100029504(lVar36,lVar26,FUN_100266c2c);
        Foundation::UUID::init();
        (*pcVar29)(lVar26,lVar45,UVar10.unknown);
        pcVar49 = *(code **)(lVar50 + 0x10);
        (*pcVar49)(uVar39,lVar36,UVar10.unknown);
        (*pcVar49)(lVar24,lVar26,UVar10.unknown);
        pcVar48 = *(code **)(lVar50 + 0x38);
        (*pcVar48)(lVar24,0,1,UVar10.unknown);
        uVar15 = 0;
        FUN_100007e1c(lVar24,uVar35,&DAT_10054a9c8,&DAT_10041bbe0);
        uVar13 = uVar35;
        (**(code **)(lVar50 + 0x30))(uVar35,1,UVar10.unknown);
        if ((int)uVar13 == 1) {
          FUN_10002a29c(uVar35,&DAT_10054a9c8,&DAT_10041bbe0);
          _swift_bridgeObjectRetain(puVar40);
          uVar13 = uVar39;
          FUN_10000476c(uVar39);
          _swift_bridgeObjectRelease(puVar40);
          if ((uVar15 & 1) == 0) {
            (**(code **)(lVar50 + 8))(uVar39,UVar10.unknown);
            FUN_100029548(lVar36,FUN_100266c2c);
            uVar21 = 1;
          }
          else {
            puVar14 = puVar40;
            _swift_isUniquelyReferenced_nonNull_native();
            if ((int)puVar14 == 0) {
              FUN_1001cc9b4();
            }
            lVar27 = *(long *)(lVar50 + 0x48) * uVar13;
            pcVar49 = *(code **)(lVar50 + 8);
            (*pcVar49)(*(long *)(puVar40 + 0x30) + lVar27,UVar10.unknown);
            (**(code **)(lVar50 + 0x20))(lVar34,*(long *)(puVar40 + 0x38) + lVar27,UVar10.unknown);
            FUN_1001d2afc(uVar13,puVar40);
            (*pcVar49)(uVar39,UVar10.unknown);
            FUN_100029548(lVar36,FUN_100266c2c);
            uVar21 = 0;
          }
          (*pcVar48)(lVar34,uVar21,1,UVar10.unknown);
          FUN_10002a29c(lVar34,&DAT_10054a9c8,&DAT_10041bbe0);
        }
        else {
          pcVar48 = *(code **)(lVar50 + 0x20);
          uVar13 = uVar35;
          (*pcVar48)(lVar38,uVar35,UVar10.unknown);
          puVar14 = puVar40;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar18 = (uint)puVar14;
          uVar15 = uVar39;
          FUN_10000476c();
          uVar41 = (ulong)~(uint)uVar13 & 1;
          if (SCARRY8(*(long *)(puVar40 + 0x10),uVar41)) {
                    /* WARNING: Does not return */
            pcVar29 = (code *)SoftwareBreakpoint(1,0x1001bb3e8);
            (*pcVar29)();
          }
          if (*(long *)(puVar40 + 0x18) < (long)(*(long *)(puVar40 + 0x10) + uVar41)) {
            FUN_1001d0578();
            uVar15 = uVar39;
            FUN_10000476c();
            if (((uint)uVar13 & 1) != (uVar18 & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x1001bb484);
              (*pcVar29)();
            }
          }
          else if (((ulong)puVar14 & 1) == 0) {
            FUN_1001cc9b4();
          }
          if ((uVar13 & 1) == 0) {
            *(ulong *)(puVar40 + (uVar15 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar40 + (uVar15 >> 6) * 8 + 0x40) | 1L << (uVar15 & 0x3f);
            lVar27 = *(long *)(lVar50 + 0x48) * uVar15;
            (*pcVar49)(*(long *)(puVar40 + 0x30) + lVar27,uVar39,UVar10.unknown);
            (*pcVar48)(*(long *)(puVar40 + 0x38) + lVar27,lVar38,UVar10.unknown);
            (**(code **)(lVar50 + 8))(uVar39,UVar10.unknown);
            FUN_100029548(lVar36,FUN_100266c2c);
            if (SCARRY8(*(long *)(puVar40 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x1001bb3ec);
              (*pcVar29)();
            }
            *(long *)(puVar40 + 0x10) = *(long *)(puVar40 + 0x10) + 1;
          }
          else {
            (*pcVar29)(*(long *)(puVar40 + 0x38) + *(long *)(lVar50 + 0x48) * uVar15,lVar38,
                       UVar10.unknown);
            (**(code **)(lVar50 + 8))(uVar39,UVar10.unknown);
            FUN_100029548(lVar36,FUN_100266c2c);
          }
        }
        local_88[0] = local_c8;
        uVar15 = *(ulong *)(local_c8 + 0x10);
        if (*(ulong *)(local_c8 + 0x18) >> 1 <= uVar15) {
          FUN_1001c5cbc(1 < *(ulong *)(local_c8 + 0x18),uVar15 + 1,1);
        }
        local_c8 = local_88[0];
        uVar44 = uVar44 + 1;
        *(ulong *)(local_88[0] + 0x10) = uVar15 + 1;
        FUN_100007e64(lVar26,local_88[0] + uVar15 * lVar5 + uVar30,FUN_100266c2c);
      } while (uVar20 != uVar44);
      lVar5 = (long)*(int *)(local_188 + 0x34);
    }
    lVar24 = local_160;
    lVar11 = local_188;
    _swift_bridgeObjectRelease(*(undefined8 *)(local_160 + lVar5));
    *(undefined **)(lVar24 + lVar5) = local_c8;
    lVar24 = (long)*(int *)(lVar11 + 0x20);
    lVar5 = *(long *)(lVar43 + lVar24);
    lVar11 = *(long *)(lVar5 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar11 != 0) {
      local_88[0] = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5d34(0,lVar11,0);
      uVar35 = (ulong)*(byte *)(local_190 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_190 + 0x50) ^ 0xffffffffffffffff);
      lVar5 = lVar5 + uVar35;
      lVar24 = *(long *)(local_190 + 0x48);
      puVar14 = local_88[0];
      do {
        FUN_100029504(lVar5,lVar31,FUN_100266c40);
        FUN_100029504(lVar31,lVar23,FUN_100266c40);
        FUN_1000087e4(lVar31 + *(int *)(lVar4 + 0x18),uVar32,&DAT_10054a9c8,&DAT_10041bbe0);
        uVar39 = uVar32;
        (**(code **)(lVar50 + 0x30))(uVar32,1,UVar10.unknown);
        if ((int)uVar39 == 1) {
          FUN_100029548(lVar31,FUN_100266c40);
LAB_1001bb000:
          bVar3 = true;
        }
        else {
          uVar39 = uVar32;
          (**(code **)(lVar50 + 0x20))(lVar37,uVar32,UVar10.unknown);
          if (*(long *)(puVar40 + 0x10) == 0) {
            (**(code **)(lVar50 + 8))(lVar37,UVar10.unknown);
            FUN_100029548(lVar31,FUN_100266c40);
            goto LAB_1001bb000;
          }
          _swift_bridgeObjectRetain();
          lVar25 = lVar37;
          FUN_10000476c(lVar37);
          bVar3 = (uVar39 & 1) == 0;
          if (bVar3) {
            _swift_bridgeObjectRelease(puVar40);
            (**(code **)(lVar50 + 8))(lVar37,UVar10.unknown);
            FUN_100029548(lVar31,FUN_100266c40);
          }
          else {
            (**(code **)(lVar50 + 0x10))
                      (lVar33,*(long *)(puVar40 + 0x38) + *(long *)(lVar50 + 0x48) * lVar25,
                       UVar10.unknown);
            (**(code **)(lVar50 + 8))(lVar37,UVar10.unknown);
            FUN_100029548(lVar31,FUN_100266c40);
            _swift_bridgeObjectRelease(puVar40);
          }
        }
        (**(code **)(lVar50 + 0x38))(lVar33,bVar3,1,UVar10.unknown);
        FUN_1001d4cf4(lVar33,lVar23 + *(int *)(lVar4 + 0x18));
        uVar39 = *(ulong *)(puVar14 + 0x10);
        local_88[0] = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar39) {
          FUN_1001c5d34(1 < *(ulong *)(puVar14 + 0x18),uVar39 + 1,1);
        }
        puVar14 = local_88[0];
        *(ulong *)(local_88[0] + 0x10) = uVar39 + 1;
        FUN_100007e64(lVar23,local_88[0] + uVar39 * lVar24 + uVar35,FUN_100266c40);
        lVar5 = lVar5 + lVar24;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      lVar24 = (long)*(int *)(local_188 + 0x20);
    }
    lVar4 = local_160;
    lVar5 = local_188;
    _swift_bridgeObjectRelease(*(undefined8 *)(local_160 + lVar24));
    *(undefined **)(lVar4 + lVar24) = puVar14;
    puVar14 = &DAT_10042a610;
    _swift_getKeyPath(&DAT_10042a610);
    puVar16 = &DAT_10042a638;
    _swift_getKeyPath(&DAT_10042a638);
    Combine::Published::_get_subscript(local_88,unaff_x20,puVar14,puVar16);
    _swift_release(puVar14);
    _swift_release(puVar16);
    puVar14 = local_88[0];
    UVar2.unknown = local_178.unknown;
    UVar10.unknown = local_180.unknown;
    pcVar46 = local_1a0.str;
    uVar32 = *(ulong *)(local_88[0] + 0x10);
    if (uVar32 != 0) {
      uVar35 = 0;
      do {
        if (*(ulong *)(puVar14 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
          pcVar29 = (code *)SoftwareBreakpoint(1,0x1001bb3e4);
          (*pcVar29)();
        }
        UVar22.unknown = FUN_10025ee04;
        FUN_100029504(puVar14 + *(long *)(pcVar46 + 0x48) * uVar35 +
                                ((ulong)(byte)pcVar46[0x50] + 0x20 &
                                ((ulong)(byte)pcVar46[0x50] ^ 0xffffffffffffffff)),UVar10.unknown);
        bVar3 = Foundation::UUID::___infix(UVar10,UVar2,UVar22);
        FUN_100029548(UVar10.unknown,FUN_10025ee04);
        if (bVar3) {
          _swift_bridgeObjectRelease(puVar14);
          puVar14 = &DAT_10042a610;
          _swift_getKeyPath(&DAT_10042a610);
          puVar16 = &DAT_10042a638;
          _swift_getKeyPath(&DAT_10042a638);
          ppuVar17 = local_88;
          Combine::Published::_modify_subscript();
          pvVar19 = local_1a0.bridgeObject;
          if (*(ulong *)(*unaff_x20 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
            pcVar29 = (code *)SoftwareBreakpoint(1,0x1001bb478);
            (*pcVar29)();
          }
          FUN_100029504(local_160,local_1a0.bridgeObject,FUN_10025ee04);
          FUN_100287388(uVar35 + 1,uVar35 + 1,pvVar19);
          (*(code *)ppuVar17)(local_88,0);
          uVar21 = local_168;
          goto LAB_1001bb348;
        }
        uVar35 = uVar35 + 1;
      } while (uVar32 != uVar35);
    }
    _swift_bridgeObjectRelease(puVar14);
    FUN_100029504(local_160,local_170,FUN_10025ee04);
    puVar14 = &DAT_10042a610;
    _swift_getKeyPath(&DAT_10042a610);
    puVar16 = &DAT_10042a638;
    _swift_getKeyPath(&DAT_10042a638);
    ppuVar17 = local_88;
    Combine::Published::_modify_subscript();
    uVar39 = *unaff_x20;
    uVar32 = uVar39;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = uVar39;
    uVar35 = uVar39;
    if ((uVar32 & 1) == 0) {
      uVar35 = 0;
      FUN_1001c8094(0,*(long *)(uVar39 + 0x10) + 1,1,uVar39,&DAT_10054e220,&DAT_10041f120,
                    FUN_10025ee04,PTR__swift_bridgeObjectRelease_100524200);
      *unaff_x20 = uVar35;
    }
    uVar32 = *(ulong *)(uVar35 + 0x10);
    uVar39 = uVar35;
    if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar32) {
      uVar39 = (ulong)(1 < *(ulong *)(uVar35 + 0x18));
      FUN_1001c8094(uVar39,uVar32 + 1,1,uVar35,&DAT_10054e220,&DAT_10041f120,FUN_10025ee04,
                    PTR__swift_bridgeObjectRelease_100524200);
      *unaff_x20 = uVar39;
    }
    uVar21 = local_168;
    *(ulong *)(uVar39 + 0x10) = uVar32 + 1;
    FUN_100007e64(local_170,
                  uVar39 + ((ulong)(byte)pcVar46[0x50] + 0x20 &
                           ((ulong)(byte)pcVar46[0x50] ^ 0xffffffffffffffff)) +
                  *(long *)(pcVar46 + 0x48) * uVar32,FUN_10025ee04);
    (*(code *)ppuVar17)(local_88,0);
LAB_1001bb348:
    _swift_release(puVar14);
    _swift_release(puVar16);
    lVar4 = local_160;
    FUN_1001b9518(local_160);
    FUN_100029548(lVar43,FUN_10025ee04);
    FUN_100029504(lVar4,uVar21,FUN_10025ee04);
    (**(code **)(pcVar46 + 0x38))(uVar21,0,1,lVar5);
    _swift_bridgeObjectRelease(puVar40);
    FUN_100029548(lVar4,FUN_10025ee04);
  }
  return;
}

