// rea decompile_all
// name: FUN_1001c09a4
// address: 0x1001c09a4
// body: available
// range: 0x1001c09a4-0x1001c15c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c09a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  String SVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  undefined *puVar7;
  char *pcVar8;
  URL UVar9;
  _StringGuts _Var10;
  void *pvVar11;
  undefined8 uVar12;
  _StringComparisonResult expecting;
  long extraout_x8;
  undefined8 *puVar13;
  long extraout_x8_00;
  undefined *puVar14;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar16;
  String *pSVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  ulong uVar23;
  undefined8 unaff_x20;
  _StringGuts _Var24;
  char *pcVar25;
  code *pcVar26;
  long lVar27;
  code *pcVar28;
  long lVar29;
  String SVar30;
  String local_140;
  undefined *local_130;
  undefined8 *local_128;
  long local_120;
  String *local_118;
  String *local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  char *local_78;
  char *pcStack_70;
  
  lVar4 = 0;
  local_100 = param_3;
  FUN_100266c40();
  local_120 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  puVar13 = (undefined8 *)((long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  local_128 = puVar13;
  FUN_10040211c();
  lVar27 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  pSVar17 = (String *)((long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_118 = pSVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined *)((long)pSVar17 - extraout_x12);
  local_c8 = puVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar17 = (String *)(puVar18 + -extraout_x12_00);
  local_110 = pSVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = (undefined *)((long)pSVar17 - extraout_x12_01);
  lVar5 = 0;
  FUN_10025ee04();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar19 = (long)puVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_02;
  puVar18 = &DAT_10054b728;
  local_108 = lVar19;
  FUN_100002f94(&DAT_10054b728,&DAT_10041cbf0);
  local_c0 = puVar18;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = lVar19 - extraout_x8_02;
  puVar18 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar18 + -8) + 0x40));
  lVar19 = uVar23 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_03;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  pcVar25 = *(char **)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(pcVar25 + 0x40));
  lVar20 = lVar19 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_04;
  puVar18 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar18 + -8) + 0x40));
  lVar21 = lVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar22 = lVar21 - extraout_x12_05;
  local_e0 = uVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = uVar22 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar29 - extraout_x12_07;
  puVar18 = &DAT_10042a9a0;
  _swift_getKeyPath(&DAT_10042a9a0);
  puVar7 = &DAT_10042a9c8;
  _swift_getKeyPath(&DAT_10042a9c8);
  Combine::Published::_get_subscript(&local_78,param_2,puVar18,puVar7);
  _swift_release(puVar18);
  _swift_release(puVar7);
  pcVar8 = local_78;
  _Var10.unknown = pcStack_70;
  FUN_10022a100();
  SVar2.bridgeObject = _Var10.unknown;
  SVar2.str = pcVar8;
  _swift_bridgeObjectRelease(pcStack_70);
  if (_Var10.unknown == (char *)0x0) {
    pcVar26 = *(code **)(lVar27 + 0x38);
    uVar12 = 1;
    goto LAB_1001c12bc;
  }
  puVar18 = &DAT_10042a670;
  local_e8 = lVar27;
  _swift_getKeyPath(&DAT_10042a670);
  puVar7 = &DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  Combine::Published::_get_subscript(lVar19,unaff_x20,puVar18,puVar7);
  _swift_release(puVar18);
  _swift_release(puVar7);
  local_140.bridgeObject = *(void **)(pcVar25 + 0x30);
  lVar27 = lVar19;
  (*local_140.bridgeObject)(lVar19,1,UVar6.unknown);
  local_140.str = pcVar25;
  local_130 = UVar6.unknown;
  if ((int)lVar27 == 1) {
    FUN_10002a29c(lVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar26 = *(code **)(lVar15 + 0x38);
    (*pcVar26)(lVar21,1,1,lVar5);
  }
  else {
    (**(code **)(pcVar25 + 0x20))(lVar20,lVar19,UVar6.unknown);
    FUN_1001b6e74(lVar21,lVar20);
    (**(code **)(pcVar25 + 8))(lVar20,UVar6.unknown);
    pcVar26 = *(code **)(lVar15 + 0x38);
  }
  (*pcVar26)(lVar29,1,1,lVar5);
  lVar19 = (long)*(int *)(local_c0 + 0x30);
  FUN_1000087e4(lVar21,uVar23,&DAT_10054ac38,&DAT_10041e8e0);
  FUN_1000087e4(lVar29,uVar23 + lVar19,&DAT_10054ac38,&DAT_10041e8e0);
  pcVar28 = *(code **)(lVar15 + 0x30);
  uVar16 = uVar23;
  (*pcVar28)(uVar23,1,lVar5);
  uVar22 = local_e0;
  expecting.value = (__int8)pcVar8;
  if ((int)uVar16 == 1) {
    FUN_10002a29c(lVar29,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar21,&DAT_10054ac38,&DAT_10041e8e0);
    lVar19 = uVar23 + lVar19;
    (*pcVar28)(lVar19,1,lVar5);
    if ((int)lVar19 != 1) {
LAB_1001c0f68:
      FUN_10002a29c(uVar23,&DAT_10054b728,&DAT_10041cbf0);
      goto LAB_1001c0f84;
    }
    FUN_10002a29c(uVar23,&DAT_10054ac38,&DAT_10041e8e0);
LAB_1001c1150:
    FUN_1001b460c();
    if ((uVar23 & 1) == 0) {
      _swift_bridgeObjectRelease(_Var10.unknown);
      pcVar26 = *(code **)(local_e8 + 0x38);
    }
    else {
      puVar18 = &DAT_10042a9e8;
      _swift_getKeyPath(&DAT_10042a9e8);
      puVar7 = &DAT_10042aa10;
      _swift_getKeyPath(&DAT_10042aa10);
      Combine::Published::_get_subscript(&local_78,local_100,puVar18,puVar7);
      _swift_release(puVar18);
      _swift_release(puVar7);
      lVar5 = local_e8;
      pSVar17 = local_110;
      uVar23 = *(ulong *)(local_78 + 0x10);
      if (uVar23 != 0) {
        uVar22 = 0;
        bVar1 = *(byte *)(local_e8 + 0x50);
        do {
          if (*(ulong *)(local_78 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x1001c15c4);
            (*pcVar26)();
          }
          FUN_100029504(local_78 +
                        *(long *)(lVar5 + 0x48) * uVar22 +
                        ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),puVar14,
                        FUN_10040211c);
          UVar9.unknown = puVar14;
          FUN_100007e64(puVar14,pSVar17,FUN_10040211c);
          SVar30 = Foundation::URL::get_lastPathComponent(UVar9);
          pvVar11 = SVar30.bridgeObject;
          uVar16 = (ulong)SVar30.str & 0xffffffffffff;
          if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
            uVar16 = (ulong)pvVar11 >> 0x38 & 0xf;
          }
          if (uVar16 == 0) {
            _swift_bridgeObjectRelease(pvVar11);
            SVar30 = *pSVar17;
            _swift_bridgeObjectRetain(pSVar17->bridgeObject);
          }
          _Var24.unknown = SVar30.bridgeObject;
          if (SVar30 == SVar2) {
            _swift_bridgeObjectRelease(_Var10.unknown);
            _Var10.unknown = local_78;
LAB_1001c1520:
            _swift_bridgeObjectRelease(_Var10.unknown);
            _swift_bridgeObjectRelease(_Var24.unknown);
            FUN_100007e64(pSVar17,param_1,FUN_10040211c);
            pcVar26 = *(code **)(lVar5 + 0x38);
            uVar12 = 0;
            goto LAB_1001c12bc;
          }
          bVar3 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar30.str,_Var24,expecting);
          _swift_bridgeObjectRelease(_Var24.unknown);
          _Var24.unknown = local_78;
          if (bVar3) goto LAB_1001c1520;
          uVar22 = uVar22 + 1;
          FUN_100029548(pSVar17,FUN_10040211c);
        } while (uVar23 != uVar22);
      }
      _swift_bridgeObjectRelease(_Var10.unknown);
      _swift_bridgeObjectRelease(local_78);
      pcVar26 = *(code **)(lVar5 + 0x38);
    }
  }
  else {
    FUN_1000087e4(uVar23,local_e0,&DAT_10054ac38,&DAT_10041e8e0);
    lVar15 = uVar23 + lVar19;
    (*pcVar28)(lVar15,1,lVar5);
    lVar20 = local_108;
    if ((int)lVar15 == 1) {
      FUN_10002a29c(lVar29,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_10002a29c(lVar21,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_100029548(uVar22,FUN_10025ee04);
      goto LAB_1001c0f68;
    }
    FUN_100007e64(uVar23 + lVar19,local_108,FUN_10025ee04);
    uVar16 = uVar22;
    FUN_100265c18(uVar22,lVar20);
    FUN_100029548(lVar20,FUN_10025ee04);
    FUN_10002a29c(lVar29,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar21,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_100029548(uVar22,FUN_10025ee04);
    FUN_10002a29c(uVar23,&DAT_10054ac38,&DAT_10041e8e0);
    if ((uVar16 & 1) != 0) goto LAB_1001c1150;
LAB_1001c0f84:
    puVar18 = &DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    puVar7 = &DAT_10042a698;
    _swift_getKeyPath(&DAT_10042a698);
    lVar19 = local_d8;
    Combine::Published::_get_subscript(local_d8,unaff_x20,puVar18,puVar7);
    _swift_release(puVar18);
    _swift_release(puVar7);
    puVar18 = local_130;
    lVar20 = lVar19;
    (*local_140.bridgeObject)(lVar19,1,local_130);
    lVar15 = local_f0;
    pcVar25 = local_140.str;
    if ((int)lVar20 == 1) {
      _swift_bridgeObjectRelease(_Var10.unknown);
      FUN_10002a29c(lVar19,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar19 = local_d0;
      (*pcVar26)(local_d0,1,1,lVar5);
    }
    else {
      (**(code **)(local_140.str + 0x20))(local_f0,lVar19,puVar18);
      lVar19 = local_d0;
      FUN_1001b6e74(local_d0,lVar15);
      (**(code **)(pcVar25 + 8))(lVar15,puVar18);
      lVar20 = lVar19;
      (*pcVar28)(lVar19,1,lVar5);
      lVar15 = local_f8;
      if ((int)lVar20 != 1) {
        FUN_100007e64(lVar19,local_f8,FUN_10025ee04);
        lVar20 = local_e8;
        pSVar17 = local_118;
        lVar19 = local_120;
        puVar13 = local_128;
        uVar23 = 0;
        lVar5 = *(long *)(lVar15 + *(int *)(lVar5 + 0x20));
        uVar22 = *(ulong *)(lVar5 + 0x10);
        do {
          if (uVar22 == uVar23) {
            _swift_bridgeObjectRelease(_Var10.unknown);
            FUN_100029548(local_f8,FUN_10025ee04);
            goto LAB_1001c10b4;
          }
          if (*(ulong *)(lVar5 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x1001c15c0);
            (*pcVar26)();
          }
          uVar16 = (ulong)*(byte *)(lVar19 + 0x50);
          FUN_100029504(lVar5 + (uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff)) +
                        *(long *)(lVar19 + 0x48) * uVar23,puVar13,FUN_100266c40);
          if ((undefined *)*puVar13 == pcVar8 && _Var10.unknown == (undefined *)puVar13[1]) {
            FUN_100029548(puVar13,FUN_100266c40);
            break;
          }
          uVar23 = uVar23 + 1;
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar13,(undefined *)puVar13[1],expecting);
          FUN_100029548(puVar13,FUN_100266c40);
        } while (!bVar3);
        puVar18 = &DAT_10042a9e8;
        _swift_getKeyPath(&DAT_10042a9e8);
        puVar7 = &DAT_10042aa10;
        _swift_getKeyPath(&DAT_10042aa10);
        Combine::Published::_get_subscript(&local_78,local_100,puVar18,puVar7);
        _swift_release(puVar18);
        _swift_release(puVar7);
        uVar23 = *(ulong *)(local_78 + 0x10);
        if (uVar23 != 0) {
          uVar22 = 0;
          bVar1 = *(byte *)(lVar20 + 0x50);
          do {
            UVar9.unknown = local_c8;
            if (*(ulong *)(local_78 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x1001c15c8);
              (*pcVar26)();
            }
            FUN_100029504(local_78 +
                          *(long *)(lVar20 + 0x48) * uVar22 +
                          ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),local_c8,
                          FUN_10040211c);
            FUN_100007e64(UVar9.unknown,pSVar17,FUN_10040211c);
            SVar30 = Foundation::URL::get_lastPathComponent(UVar9);
            pvVar11 = SVar30.bridgeObject;
            uVar16 = (ulong)SVar30.str & 0xffffffffffff;
            if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
              uVar16 = (ulong)pvVar11 >> 0x38 & 0xf;
            }
            if (uVar16 == 0) {
              _swift_bridgeObjectRelease(pvVar11);
              SVar30 = *pSVar17;
              _swift_bridgeObjectRetain(pSVar17->bridgeObject);
            }
            _Var24.unknown = SVar30.bridgeObject;
            if (SVar30 == SVar2) {
              _swift_bridgeObjectRelease(local_78);
              local_78 = _Var10.unknown;
              _Var10.unknown = _Var24.unknown;
LAB_1001c1568:
              _swift_bridgeObjectRelease(local_78);
              _swift_bridgeObjectRelease(_Var10.unknown);
              FUN_100007e64(pSVar17,param_1,FUN_10040211c);
              uVar12 = 0;
              goto LAB_1001c1594;
            }
            bVar3 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar30.str,_Var24,expecting);
            _swift_bridgeObjectRelease(_Var24.unknown);
            if (bVar3) goto LAB_1001c1568;
            uVar22 = uVar22 + 1;
            FUN_100029548(pSVar17,FUN_10040211c);
          } while (uVar23 != uVar22);
        }
        _swift_bridgeObjectRelease(local_78);
        _swift_bridgeObjectRelease(_Var10.unknown);
        uVar12 = 1;
LAB_1001c1594:
        (**(code **)(lVar20 + 0x38))(param_1,uVar12,1,lVar4);
        FUN_100029548(local_f8,FUN_10025ee04);
        return;
      }
      _swift_bridgeObjectRelease(_Var10.unknown);
    }
    lVar20 = local_e8;
    FUN_10002a29c(lVar19,&DAT_10054ac38,&DAT_10041e8e0);
LAB_1001c10b4:
    pcVar26 = *(code **)(lVar20 + 0x38);
  }
  uVar12 = 1;
LAB_1001c12bc:
  (*pcVar26)(param_1,uVar12,1,lVar4);
  return;
}

