// rea decompile_all
// name: FUN_100275678
// address: 0x100275678
// body: available
// range: 0x100275678-0x10027602b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100275678(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  URL UVar6;
  long lVar7;
  URL UVar8;
  Published *pPVar9;
  undefined *puVar10;
  void *pvVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  String *pSVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  String *pSVar17;
  long unaff_x20;
  _StringGuts _Var18;
  _StringGuts _Var19;
  undefined *puVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 *puVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined *puVar28;
  String SVar29;
  String SVar30;
  String local_100;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  void *local_88;
  undefined *local_78;
  undefined *local_70 [2];
  
  puVar28 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar28 + -8) + 0x40));
  lVar14 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  local_d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  lVar5 = 0;
  local_d8 = lVar14;
  FUN_10040211c();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  pcVar24 = (char *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar15 = (String *)(pcVar24 + -extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined8 *)((long)pSVar15 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)puVar23 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar17 = (String *)(lVar16 - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = (undefined *)((long)pSVar17 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar28 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(puVar20 + -extraout_x12_06) - extraout_x8_01;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  puVar28 = (undefined *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100268ac4(lVar14,param_1,param_2);
  lVar7 = lVar14;
  (**(code **)(lVar26 + 0x30))(lVar14,1,UVar6.unknown);
  if ((int)lVar7 == 1) {
    puVar28 = &DAT_100553d90;
    puVar20 = &DAT_10041bf10;
  }
  else {
    UVar8.unknown = puVar28;
    local_100.str = pcVar24;
    local_100.bridgeObject = puVar20 + -extraout_x12_06;
    local_e8 = lVar26;
    local_e0 = UVar6.unknown;
    (**(code **)(lVar26 + 0x20))(puVar28,lVar14,UVar6.unknown);
    local_f0 = puVar28;
    SVar29 = Foundation::URL::get_lastPathComponent(UVar8);
    puVar28 = &DAT_10042d1d8;
    _swift_getKeyPath(&DAT_10042d1d8);
    puVar10 = &DAT_10042d200;
    _swift_getKeyPath(&DAT_10042d200);
    Combine::Published::_get_subscript(local_70,unaff_x20,puVar28,puVar10);
    _swift_release(puVar28);
    _swift_release(puVar10);
    _Var19.unknown = local_70[0];
    uVar27 = *(ulong *)(local_70[0] + 0x10);
    local_88 = SVar29.bridgeObject;
    if (uVar27 != 0) {
      uVar25 = 0;
      bVar2 = *(byte *)(lVar13 + 0x50);
      do {
        if (*(ulong *)(_Var19.unknown + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100275fe4);
          (*pcVar21)();
        }
        FUN_100029504(_Var19.unknown +
                      *(long *)(lVar13 + 0x48) * uVar25 +
                      ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)),puVar20,
                      FUN_10040211c);
        UVar6.unknown = puVar20;
        FUN_100007e64(puVar20,pSVar17,FUN_10040211c);
        SVar30 = Foundation::URL::get_lastPathComponent(UVar6);
        pvVar11 = SVar30.bridgeObject;
        uVar1 = (ulong)SVar30.str & 0xffffffffffff;
        if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar11 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(pvVar11);
          SVar30 = *pSVar17;
          _swift_bridgeObjectRetain(pSVar17->bridgeObject);
        }
        _Var18.unknown = SVar30.bridgeObject;
        if (SVar30 == SVar29) {
          _swift_bridgeObjectRelease(_Var19.unknown);
          _Var19.unknown = _Var18.unknown;
LAB_100275a54:
          _swift_bridgeObjectRelease(_Var19.unknown);
          lVar14 = local_d0;
          FUN_100007e64(pSVar17,local_d0,FUN_10040211c);
          uVar12 = 0;
          goto LAB_100275a80;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar30.str,_Var18,
                           (_StringComparisonResult)(__int8)SVar29.str);
        _swift_bridgeObjectRelease(_Var18.unknown);
        if (bVar4) goto LAB_100275a54;
        uVar25 = uVar25 + 1;
        FUN_100029548(pSVar17,FUN_10040211c);
      } while (uVar27 != uVar25);
    }
    _swift_bridgeObjectRelease(_Var19.unknown);
    uVar12 = 1;
    lVar14 = local_d0;
LAB_100275a80:
    lVar7 = local_c8;
    pcVar22 = *(code **)(lVar13 + 0x38);
    (*pcVar22)(lVar14,uVar12,1,lVar5);
    FUN_100007e1c(lVar14,lVar7,&DAT_10054ac40,&DAT_10041ce70);
    pcVar21 = *(code **)(lVar13 + 0x30);
    lVar26 = lVar7;
    (*pcVar21)(lVar7,1,lVar5);
    lVar14 = local_d8;
    if ((int)lVar26 == 1) {
      puVar28 = &DAT_10042d1d8;
      _swift_getKeyPath(&DAT_10042d1d8);
      puVar20 = &DAT_10042d200;
      _swift_getKeyPath(&DAT_10042d200);
      Combine::Published::_get_subscript(local_70,unaff_x20,puVar28,puVar20);
      _swift_release(puVar28);
      _swift_release(puVar20);
      puVar20 = local_70[0];
      puVar28 = local_100.bridgeObject;
      uVar27 = *(ulong *)(local_70[0] + 0x10);
      if (uVar27 != 0) {
        uVar25 = 0;
        do {
          if (*(ulong *)(puVar20 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100275fe8);
            (*pcVar21)();
          }
          FUN_100029504(puVar20 + *(long *)(lVar13 + 0x48) * uVar25 +
                                  ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),lVar16,
                        FUN_10040211c);
          FUN_100007e64(lVar16,puVar23,FUN_10040211c);
          if (((undefined *)*puVar23 == param_1 && (undefined *)puVar23[1] == param_2) ||
             (bVar4 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar23,(undefined *)puVar23[1],
                                 (_StringComparisonResult)(__int8)param_1), bVar4)) {
            _swift_bridgeObjectRelease(puVar20);
            lVar14 = local_d8;
            FUN_100007e64(puVar23,local_d8,FUN_10040211c);
            uVar12 = 0;
            goto LAB_100275c28;
          }
          uVar25 = uVar25 + 1;
          FUN_100029548(puVar23,FUN_10040211c);
        } while (uVar27 != uVar25);
      }
      _swift_bridgeObjectRelease(puVar20);
      uVar12 = 1;
      lVar14 = local_d8;
LAB_100275c28:
      (*pcVar22)(lVar14,uVar12,1,lVar5);
      lVar7 = local_c8;
      lVar16 = local_c8;
      (*pcVar21)(local_c8,1,lVar5);
      if ((int)lVar16 != 1) {
        FUN_10002a29c(lVar7,&DAT_10054ac40,&DAT_10041ce70);
      }
    }
    else {
      FUN_100007e64(lVar7,local_d8,FUN_10040211c);
      (*pcVar22)(lVar14,0,1,lVar5);
      puVar28 = local_100.bridgeObject;
    }
    lVar7 = lVar14;
    (*pcVar21)(lVar14,1,lVar5);
    if ((int)lVar7 != 1) {
      FUN_100007e64(lVar14,puVar28,FUN_10040211c);
      puVar20 = local_e0;
      lVar14 = local_e8;
      (**(code **)(local_e8 + 0x18))(puVar28 + *(int *)(lVar5 + 0x14),local_f0,local_e0);
      iVar3 = *(int *)(lVar5 + 0x18);
      FUN_10002a29c(puVar28 + iVar3,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar14 + 0x38))(puVar28 + iVar3,1,1,puVar20);
      puVar28[*(int *)(lVar5 + 0x40)] = 1;
      puVar28[*(int *)(lVar5 + 0x48)] = 0;
      puVar20 = &DAT_10042d220;
      _swift_getKeyPath(&DAT_10042d220);
      puVar10 = &DAT_10042d248;
      _swift_getKeyPath(&DAT_10042d248);
      Combine::Published::_get_subscript(local_70,unaff_x20,puVar20,puVar10);
      _swift_release(puVar20);
      _swift_release(puVar10);
      puVar20 = local_70[0];
      uVar27 = *(ulong *)(local_70[0] + 0x10);
      if (uVar27 != 0) {
        uVar25 = 0;
        bVar2 = *(byte *)(lVar13 + 0x50);
        do {
          if (*(ulong *)(puVar20 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100275fec);
            (*pcVar21)();
          }
          UVar6.unknown =
               puVar20 + *(long *)(lVar13 + 0x48) * uVar25 +
                         ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
          FUN_100029504(UVar6.unknown,pSVar15,FUN_10040211c);
          SVar30 = Foundation::URL::get_lastPathComponent(UVar6);
          pvVar11 = SVar30.bridgeObject;
          uVar1 = (ulong)SVar30.str & 0xffffffffffff;
          if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)pvVar11 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            _swift_bridgeObjectRelease(pvVar11);
            SVar30 = *pSVar15;
            _swift_bridgeObjectRetain(pSVar15->bridgeObject);
          }
          _Var19.unknown = SVar30.bridgeObject;
          if (SVar30 == SVar29) {
            _swift_bridgeObjectRelease(_Var19.unknown);
            FUN_100029548(pSVar15,FUN_10040211c);
LAB_100275f90:
            (**(code **)(local_e8 + 8))(local_f0,local_e0);
            _swift_bridgeObjectRelease(local_88);
            goto LAB_100275fac;
          }
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar30.str,_Var19,
                             (_StringComparisonResult)(__int8)SVar29.str);
          _swift_bridgeObjectRelease(_Var19.unknown);
          FUN_100029548(pSVar15,FUN_10040211c);
          if (bVar4) goto LAB_100275f90;
          uVar25 = uVar25 + 1;
        } while (uVar27 != uVar25);
      }
      _swift_bridgeObjectRelease(local_88);
      _swift_bridgeObjectRelease(puVar20);
      pcVar24 = local_100.str;
      FUN_100029504(puVar28,local_100.str,FUN_10040211c);
      puVar20 = &DAT_10042d220;
      _swift_getKeyPath(&DAT_10042d220);
      puVar10 = &DAT_10042d248;
      _swift_getKeyPath(&DAT_10042d248);
      Combine::Published::_get_subscript(local_70,unaff_x20,puVar20,puVar10);
      _swift_release(puVar20);
      _swift_release(puVar10);
      puVar20 = local_70[0];
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = local_70[0];
      if (((ulong)puVar20 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_1001c4344(0,*(long *)(local_70[0] + 0x10) + 1,1,local_70[0]);
      }
      uVar27 = *(ulong *)(puVar10 + 0x10);
      puVar20 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar27) {
        puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_1001c4344(puVar20,uVar27 + 1,1,puVar10);
      }
      *(ulong *)(puVar20 + 0x10) = uVar27 + 1;
      FUN_100007e64(pcVar24,puVar20 + *(long *)(lVar13 + 0x48) * uVar27 +
                                      ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),
                    FUN_10040211c);
      pPVar9 = (Published *)&DAT_10042d220;
      _swift_getKeyPath(&DAT_10042d220);
      puVar10 = &DAT_10042d248;
      _swift_getKeyPath(&DAT_10042d248);
      local_78 = puVar20;
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(pPVar9,&local_78,unaff_x20,pPVar9,puVar10);
      (**(code **)(local_e8 + 8))(local_f0,local_e0);
      puVar20 = *(undefined **)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache);
      *(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache) = 0;
LAB_100275fac:
      _swift_bridgeObjectRelease(puVar20);
      FUN_100029548(puVar28,FUN_10040211c);
      return;
    }
    (**(code **)(local_e8 + 8))(local_f0,local_e0);
    _swift_bridgeObjectRelease(local_88);
    puVar28 = &DAT_10054ac40;
    puVar20 = &DAT_10041ce70;
  }
  FUN_10002a29c(lVar14,puVar28,puVar20);
  return;
}

