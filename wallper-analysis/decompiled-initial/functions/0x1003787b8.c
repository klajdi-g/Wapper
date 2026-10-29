// rea decompile_all
// name: FUN_1003787b8
// address: 0x1003787b8
// body: available
// range: 0x1003787b8-0x100379847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1003787b8(undefined8 param_1,undefined *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  Locale LVar7;
  LocalizationValue LVar8;
  StringInterpolation SVar9;
  Date DVar10;
  LocalizationValue LVar11;
  undefined8 uVar12;
  UUID UVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar15;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar16;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
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
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long lVar21;
  undefined *puVar22;
  code *pcVar23;
  char *pcVar24;
  long unaff_x20;
  UUID UVar25;
  code *pcVar26;
  ulong uVar27;
  undefined *puVar28;
  ulong uVar29;
  long lVar30;
  undefined *puVar31;
  ulong uVar32;
  long lVar33;
  String stringLiteral;
  String SVar34;
  String stringLiteral_00;
  String SVar35;
  String SVar36;
  String SVar37;
  long alStack_190 [4];
  StringInterpolation local_170;
  ulong local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  LocalizationValue local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  void *pvVar13;
  
  puVar15 = &DAT_10054a9d0;
  local_88 = param_2;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar18 = (long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  local_128 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_00;
  local_130 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_01;
  local_138 = lVar18;
  LVar7 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  lVar18 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar18;
  LVar8 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  puVar15 = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_100.unknown = puVar15;
  SVar9 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar9.unknown + -8) + 0x40));
  puVar15 = puVar15 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0;
  local_170.unknown = puVar15;
  FUN_1001d537c();
  local_a8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0;
  local_98 = lVar16;
  FUN_1001d59ac();
  local_90 = *(long *)(lVar18 + -8);
  local_b0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  uVar19 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_168 = uVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = uVar19 - extraout_x12_02;
  local_b8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_03;
  local_c0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_04;
  local_118 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_05;
  local_120 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_06;
  alStack_190[1] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_07;
  alStack_190[2] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_08;
  alStack_190[3] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_09;
  local_160 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_10;
  local_110 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar19 = lVar18 - extraout_x12_11;
  local_a0 = uVar19;
  local_80 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_d0 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar18 = uVar19 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar18;
  puStack_e0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  puVar15 = (undefined *)(lVar18 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  lVar18 = 0;
  local_f0 = puVar15;
  FUN_100266c2c();
  lVar33 = *(long *)(lVar18 + -8);
  local_108 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar18 = (long)puVar15 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_12;
  local_150 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar25.unknown = (undefined *)(lVar18 - extraout_x12_13);
  lVar18 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar16 = (long)UVar25.unknown - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_1,lVar16);
  local_c8 = lVar16;
  local_158 = (long)*(int *)(lVar18 + 0x34);
  lVar18 = *(long *)(lVar16 + *(int *)(lVar18 + 0x34));
  uVar19 = *(ulong *)(lVar18 + 0x10);
  if (uVar19 != 0) {
    uVar32 = 0;
    do {
      if (*(ulong *)(lVar18 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797d0);
        (*pcVar23)();
      }
      uVar27 = (ulong)*(byte *)(lVar33 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar33 + 0x50) ^ 0xffffffffffffffff);
      lVar30 = *(long *)(lVar33 + 0x48);
      lVar21 = lVar18 + uVar27 + lVar30 * uVar32;
      UVar14.unknown = FUN_100266c2c;
      FUN_100029504(lVar21,UVar25.unknown);
      lVar16 = 0;
      FUN_10034c390();
      bVar6 = Foundation::UUID::___infix
                        (UVar25,(undefined *)(unaff_x20 + *(int *)(lVar16 + 0x14)),UVar14);
      FUN_100029548(UVar25.unknown,FUN_100266c2c);
      lVar20 = local_c8;
      lVar17 = local_150;
      lVar16 = local_158;
      if (bVar6) {
        if (*(ulong *)(lVar18 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797f0);
          (*pcVar23)();
        }
        if (*(undefined **)(lVar21 + *(int *)(local_108 + 0x18)) != local_88) {
          FUN_1001b5698(local_150,uVar32);
          lVar18 = local_148;
          *(undefined **)(lVar17 + *(int *)(local_108 + 0x18)) = local_88;
          FUN_100029504(lVar17,local_148,FUN_100266c2c);
          uVar29 = *(ulong *)(lVar20 + lVar16);
          uVar19 = uVar29;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar32 = uVar29;
          if ((uVar19 & 1) == 0) {
            uVar32 = 0;
            FUN_1001c4b44(0,*(long *)(uVar29 + 0x10) + 1,1,uVar29);
          }
          uVar19 = *(ulong *)(uVar32 + 0x10);
          uVar29 = uVar32;
          if (*(ulong *)(uVar32 + 0x18) >> 1 <= uVar19) {
            uVar29 = (ulong)(1 < *(ulong *)(uVar32 + 0x18));
            FUN_1001c4b44(uVar29,uVar19 + 1,1,uVar32);
          }
          *(ulong *)(uVar29 + 0x10) = uVar19 + 1;
          FUN_100007e64(lVar18,uVar29 + uVar27 + uVar19 * lVar30,FUN_100266c2c);
          FUN_100029548(lVar17,FUN_100266c2c);
          *(ulong *)(local_c8 + lVar16) = uVar29;
        }
        break;
      }
      uVar32 = uVar32 + 1;
    } while (uVar19 != uVar32);
  }
  puVar28 = local_f0;
  DVar10 = Foundation::Date::init();
  lVar18 = local_d8;
  Foundation::Calendar::get_current((Calendar)DVar10.unknown);
  puVar15 = puVar28;
  FUN_1001d6f78(puVar28,lVar18);
  (**(code **)(local_d0 + 8))(lVar18,local_80);
  (**(code **)(local_e8 + 8))(puVar28,puStack_e0);
  local_80 = *(undefined **)(puVar15 + 0x10);
  if (local_80 < 2) {
LAB_100378efc:
    _swift_bridgeObjectRelease(puVar15);
    LVar8.unknown = local_100.unknown;
    stringLiteral.bridgeObject = (void *)0xed0000796164206c;
    stringLiteral.str = (char *)0x6c61207379616c50;
    LVar11 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar11.unknown);
    SVar34 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
LAB_100378f64:
    FUN_100029548(local_c8,FUN_10025ee04);
    return SVar34;
  }
  uVar19 = 0;
  local_88 = puVar15;
LAB_100378e3c:
  puVar28 = local_88;
  uVar32 = local_a0;
  if (*(ulong *)(local_88 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797d4);
    (*pcVar23)();
  }
  uVar29 = (ulong)*(byte *)(local_90 + 0x50) + 0x20 &
           ((ulong)*(byte *)(local_90 + 0x50) ^ 0xffffffffffffffff);
  lVar16 = *(long *)(local_90 + 0x48);
  puVar31 = local_88 + lVar16 * uVar19 + uVar29;
  FUN_100029504(puVar31,local_a0,FUN_1001d59ac);
  lVar18 = 0;
  FUN_10034c390();
  iVar5 = *(int *)(lVar18 + 0x14);
  UVar25 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = local_98;
  (**(code **)(*(long *)(UVar25.unknown + -8) + 0x10))(local_98,unaff_x20 + iVar5,UVar25.unknown);
  _swift_storeEnumTagMultiPayload(lVar18,local_a8,1);
  uVar27 = uVar32;
  FUN_1001da410(uVar32,lVar18);
  FUN_100029548(lVar18,FUN_1001d537c);
  FUN_100029548(uVar32,FUN_1001d59ac);
  puVar15 = PTR___swiftEmptyArrayStorage_100524190;
  if ((uVar27 & 1) == 0) goto code_r0x000100378eec;
  local_a8 = (long)local_80 - 1;
  if (local_a8 != 0) {
    FUN_1001c5cf8(0,local_a8,0);
    lVar18 = local_160;
    uVar32 = 1;
    do {
      if (SCARRY8(uVar19,uVar32)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797d8);
        (*pcVar23)();
      }
      lVar33 = 0;
      if (local_80 != (undefined *)0x0) {
        lVar33 = (long)(uVar19 + uVar32) / (long)local_80;
      }
      uVar27 = (uVar19 + uVar32) - lVar33 * (long)local_80;
      if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797dc);
        (*pcVar23)();
      }
      if (*(ulong *)(local_88 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797e0);
        (*pcVar23)();
      }
      FUN_100029504(puVar28 + uVar27 * lVar16 + uVar29,lVar18,FUN_1001d59ac);
      uVar27 = *(ulong *)(puVar15 + 0x10);
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar27) {
        FUN_1001c5cf8(1 < *(ulong *)(puVar15 + 0x18),uVar27 + 1,1);
      }
      *(ulong *)(puVar15 + 0x10) = uVar27 + 1;
      FUN_100007e64(lVar18,puVar15 + uVar27 * lVar16 + uVar29,FUN_1001d59ac);
      uVar32 = uVar32 + 1;
    } while (local_80 != (undefined *)uVar32);
  }
  lVar18 = local_110;
  FUN_100029504(puVar31,local_110,FUN_1001d59ac);
  plVar1 = (long *)(lVar18 + *(int *)(local_b0 + 0x1c));
  if (((char)plVar1[1] == '\x01') ||
     (plVar2 = (long *)(lVar18 + *(int *)(local_b0 + 0x20)), (char)plVar2[1] == '\x01')) {
    FUN_100029548(lVar18,FUN_1001d59ac);
LAB_1003790d4:
    uVar19 = *(ulong *)(puVar15 + 0x10);
    if (uVar19 == 0) {
LAB_1003791dc:
      _swift_bridgeObjectRelease(puVar15);
      uVar12 = 1;
      lVar18 = local_130;
    }
    else {
      uVar32 = 0;
      puVar22 = puVar15 + uVar29;
      while( true ) {
        lVar18 = local_c0;
        if (*(ulong *)(puVar15 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797e4);
          (*pcVar23)();
        }
        FUN_100029504(puVar22,local_c0,FUN_1001d59ac);
        lVar33 = local_b8;
        FUN_100007e64(lVar18,local_b8,FUN_1001d59ac);
        plVar1 = (long *)(lVar33 + *(int *)(local_b0 + 0x1c));
        if (((char)plVar1[1] != '\x01') &&
           (plVar2 = (long *)(lVar33 + *(int *)(local_b0 + 0x20)), (char)plVar2[1] != '\x01'))
        break;
LAB_1003790f0:
        uVar32 = uVar32 + 1;
        FUN_100029548(lVar33,FUN_1001d59ac);
        puVar22 = puVar22 + lVar16;
        if (uVar19 == uVar32) goto LAB_1003791dc;
      }
      lVar17 = *plVar1;
      lVar20 = *plVar2;
      lVar18 = lVar20 - lVar17;
      if (SBORROW8(lVar20,lVar17)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797e8);
        (*pcVar23)();
      }
      if (SCARRY8(lVar18,0x5a0)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797ec);
        (*pcVar23)();
      }
      if ((lVar18 + 0x5a0) % 0x5a0 < 1) goto LAB_1003790f0;
      _swift_bridgeObjectRelease(puVar15);
      lVar18 = local_130;
      FUN_100007e64(lVar33,local_130,FUN_1001d59ac);
      uVar12 = 0;
    }
    lVar20 = local_90;
    lVar17 = local_b0;
    pcVar26 = *(code **)(local_90 + 0x38);
    (*pcVar26)(lVar18,uVar12,1,local_b0);
    lVar33 = local_128;
    FUN_100007e1c(lVar18,local_128,&DAT_10054a9d0,&DAT_10041bc60);
    pcVar23 = *(code **)(lVar20 + 0x30);
    lVar20 = lVar33;
    (*pcVar23)(lVar33,1,lVar17);
    lVar18 = local_138;
    if ((int)lVar20 == 1) {
      if (*(ulong *)(local_88 + 0x10) < local_80) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100379838);
        (*pcVar23)();
      }
      FUN_100029504(puVar28 + lVar16 * local_a8 + uVar29,local_138,FUN_1001d59ac);
      lVar17 = local_b0;
      (*pcVar26)(lVar18,0,1,local_b0);
      lVar20 = lVar33;
      (*pcVar23)(lVar33,1,lVar17);
      lVar16 = local_140;
      if ((int)lVar20 != 1) {
        FUN_10002a29c(lVar33,&DAT_10054a9d0,&DAT_10041bc60);
      }
    }
    else {
      FUN_100007e64(lVar33,local_138,FUN_1001d59ac);
      (*pcVar26)(lVar18,0,1,lVar17);
      lVar16 = local_140;
    }
    FUN_1000087e4(lVar18,lVar16,&DAT_10054a9d0,&DAT_10041bc60);
    lVar33 = lVar16;
    (*pcVar23)(lVar16,1,lVar17);
    uVar19 = local_168;
    if ((int)lVar33 == 1) {
      _swift_bridgeObjectRelease(local_88);
      FUN_10002a29c(lVar16,&DAT_10054a9d0,&DAT_10041bc60);
    }
    else {
      FUN_100007e64(lVar16,local_168,FUN_1001d59ac);
      uVar32 = local_a0;
      FUN_100029504(puVar31,local_a0,FUN_1001d59ac);
      _swift_bridgeObjectRelease(local_88);
      lVar16 = local_98;
      pcVar23 = FUN_1001d537c;
      FUN_100029504(uVar32,local_98);
      FUN_100029548(uVar32,FUN_1001d59ac);
      uVar32 = uVar19;
      FUN_1001da410(uVar19,lVar16);
      FUN_100029548(lVar16,FUN_1001d537c);
      SVar9.unknown = local_170.unknown;
      if ((uVar32 & 1) == 0) {
        LocalizationValue::StringInterpolation::_init(0x2a,1);
        LocalizationValue::StringInterpolation::_appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar23);
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (*(String *)(uVar19 + (long)*(int *)(local_b0 + 0x14)),
                   (StringInterpolation)pcVar23);
        SVar34.bridgeObject = (void *)0x80000001004e6930;
        SVar34.str = (char *)0xd00000000000002a;
        LocalizationValue::StringInterpolation::_appendLiteral(SVar34,(StringInterpolation)pcVar23);
        LVar8.unknown = local_100.unknown;
        LVar11 = LocalizationValue::_init(SVar9);
        Foundation::Locale::get_current((Locale)LVar11.unknown);
        SVar34 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
        FUN_10002a29c(lVar18,&DAT_10054a9d0,&DAT_10041bc60);
        FUN_100029548(uVar19,FUN_1001d59ac);
        goto LAB_100378f64;
      }
      FUN_100029548(uVar19,FUN_1001d59ac);
    }
    LVar8.unknown = local_100.unknown;
    stringLiteral_00.bridgeObject = (void *)0xed0000796164206c;
    stringLiteral_00.str = (char *)0x6c61207379616c50;
    LVar11 = LocalizationValue::_init(stringLiteral_00);
    Foundation::Locale::get_current((Locale)LVar11.unknown);
    SVar34 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
    FUN_10002a29c(lVar18,&DAT_10054a9d0,&DAT_10041bc60);
    goto LAB_100378f64;
  }
  lVar33 = *plVar1;
  lVar17 = *plVar2;
  lVar18 = lVar17 - lVar33;
  if (SBORROW8(lVar17,lVar33)) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x100379844);
    (*pcVar23)();
  }
  if (SCARRY8(lVar18,0x5a0)) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x100379848);
    (*pcVar23)();
  }
  FUN_100029548(local_110,FUN_1001d59ac);
  lVar33 = alStack_190[3];
  if ((lVar18 + 0x5a0) % 0x5a0 < 1) goto LAB_1003790d4;
  FUN_100029504(puVar31,alStack_190[3],FUN_1001d59ac);
  _swift_bridgeObjectRelease(local_88);
  puVar3 = (undefined8 *)(lVar33 + *(int *)(local_b0 + 0x20));
  pcVar24 = (char *)*puVar3;
  cVar4 = *(char *)(puVar3 + 1);
  FUN_100029548(lVar33,FUN_1001d59ac);
  if ((cVar4 != '\x01') && (uVar19 = *(ulong *)(puVar15 + 0x10), uVar19 != 0)) {
    uVar32 = 0;
    puVar28 = puVar15 + uVar29;
    do {
      lVar18 = local_120;
      if (*(ulong *)(puVar15 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1003797f4);
        (*pcVar23)();
      }
      FUN_100029504(puVar28,local_120,FUN_1001d59ac);
      lVar33 = local_118;
      FUN_100007e64(lVar18,local_118,FUN_1001d59ac);
      lVar18 = local_b0;
      plVar1 = (long *)(lVar33 + *(int *)(local_b0 + 0x1c));
      if (((char)plVar1[1] != '\x01') &&
         (plVar2 = (long *)(lVar33 + *(int *)(local_b0 + 0x20)), (char)plVar2[1] != '\x01')) {
        lVar20 = *plVar1;
        lVar21 = *plVar2;
        lVar17 = lVar21 - lVar20;
        if (SBORROW8(lVar21,lVar20)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x10037983c);
          (*pcVar23)();
        }
        if (SCARRY8(lVar17,0x5a0)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100379840);
          (*pcVar23)();
        }
        if (0 < (lVar17 + 0x5a0) % 0x5a0) {
          _swift_bridgeObjectRelease(puVar15);
          lVar16 = alStack_190[1];
          pcVar23 = FUN_1001d59ac;
          FUN_100007e64(lVar33,alStack_190[1],FUN_1001d59ac);
          lVar33 = alStack_190[2];
          FUN_100007e64(lVar16,alStack_190[2]);
          SVar9.unknown = local_170.unknown;
          LocalizationValue::StringInterpolation::_init(0xd,2);
          SVar35.bridgeObject = (void *)0xe600000000000000;
          SVar35.str = (char *)0x206c69746e55;
          pvVar13 = (void *)0xe600000000000000;
          LocalizationValue::StringInterpolation::_appendLiteral
                    (SVar35,(StringInterpolation)pcVar23);
          FUN_10025f020();
          SVar36.bridgeObject = pvVar13;
          SVar36.str = pcVar24;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (SVar36,(StringInterpolation)pcVar23);
          _swift_bridgeObjectRelease(pvVar13);
          SVar37.bridgeObject = (void *)0xe700000000000000;
          SVar37.str = (char *)0x206e656874202c;
          LocalizationValue::StringInterpolation::_appendLiteral
                    (SVar37,(StringInterpolation)pcVar23);
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (*(String *)(lVar33 + *(int *)(lVar18 + 0x14)),(StringInterpolation)pcVar23);
          LocalizationValue::StringInterpolation::_appendLiteral
                    ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar23);
          LVar8.unknown = local_100.unknown;
          LVar11 = LocalizationValue::_init(SVar9);
          Foundation::Locale::get_current((Locale)LVar11.unknown);
          SVar34 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
          FUN_100029548(lVar33,FUN_1001d59ac);
          goto LAB_100378f64;
        }
      }
      uVar32 = uVar32 + 1;
      FUN_100029548(lVar33,FUN_1001d59ac);
      puVar28 = puVar28 + lVar16;
    } while (uVar19 != uVar32);
  }
  goto LAB_100378efc;
code_r0x000100378eec:
  uVar19 = uVar19 + 1;
  puVar15 = local_88;
  if (local_80 == (undefined *)uVar19) goto LAB_100378efc;
  goto LAB_100378e3c;
}

