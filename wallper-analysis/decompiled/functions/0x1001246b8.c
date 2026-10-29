// rea decompile_all
// name: FUN_1001246b8
// address: 0x1001246b8
// body: available
// range: 0x1001246b8-0x100124e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001246b8(char param_1,char *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  _StringGuts _Var6;
  long lVar7;
  Published PVar8;
  undefined *puVar9;
  code *pcVar10;
  bool bVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  Published *pPVar15;
  Published *pPVar16;
  undefined *puVar17;
  undefined8 uVar18;
  Published *pPVar19;
  _StringComparisonResult expecting;
  char *pcVar20;
  long lVar21;
  long extraout_x8;
  undefined8 *puVar22;
  long extraout_x8_00;
  long lVar23;
  long lVar24;
  long lVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar26;
  undefined *puVar27;
  Published *unaff_x20;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  Published *apPStack_f0 [2];
  long local_e0;
  Published local_80;
  undefined *puStack_78;
  
  lVar12 = 0;
  pcVar20 = param_3;
  FUN_100126a5c();
  lVar21 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined8 *)((long)apPStack_f0 + lVar7);
  puVar13 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar23 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar24 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar25 - extraout_x12_01;
  local_80.unknown = (undefined *)0x0;
  puStack_78 = (undefined *)0xe000000000000000;
  pcVar1 = (char *)0x6b636f6c;
  if (param_1 != '\x01') {
    pcVar1 = (char *)0x64616f6c6e776f64;
  }
  pvVar2 = (void *)0xe400000000000000;
  if (param_1 != '\x01') {
    pvVar2 = (void *)0xe800000000000000;
  }
  SVar32.bridgeObject = pvVar2;
  SVar32.str = pcVar1;
  SVar35.bridgeObject = param_4;
  SVar35.str = pcVar20;
  Swift::String::append(SVar32,SVar35);
  _swift_bridgeObjectRelease(pvVar2);
  SVar33.bridgeObject = (void *)0xe100000000000000;
  SVar33.str = (char *)0x3a;
  SVar36.bridgeObject = param_4;
  SVar36.str = pcVar20;
  Swift::String::append(SVar33,SVar36);
  SVar34.bridgeObject = param_3;
  SVar34.str = param_2;
  SVar37.bridgeObject = param_4;
  SVar37.str = pcVar20;
  Swift::String::append(SVar34,SVar37);
  puVar9 = puStack_78;
  PVar8.unknown = local_80.unknown;
  puVar13 = &DAT_100426930;
  _swift_getKeyPath(&DAT_100426930);
  puVar14 = &DAT_100426958;
  _swift_getKeyPath(&DAT_100426958);
  pPVar15 = &local_80;
  pPVar19 = unaff_x20;
  Combine::Published::_modify_subscript(&local_80);
  FUN_10027ee20(lVar26,PVar8.unknown,puVar9);
  (*(code *)pPVar15)(&local_80,0);
  _swift_release(puVar13);
  _swift_release(puVar14);
  FUN_10002a29c(lVar26,&DAT_100551e50,&DAT_100429e60);
  puVar13 = &DAT_100426978;
  _swift_getKeyPath();
  puVar14 = &DAT_1004269a0;
  _swift_getKeyPath();
  pPVar16 = &local_80;
  pPVar15 = unaff_x20;
  Combine::Published::_modify_subscript(pPVar19);
  puVar27 = pPVar15->unknown;
  uVar28 = *(ulong *)(puVar27 + 0x10);
  expecting.value = (__int8)PVar8.unknown;
  if (uVar28 == 0) {
    uVar30 = 0;
    uVar29 = 0;
  }
  else {
    lVar31 = 0;
    uVar30 = 0;
    local_e0 = lVar12;
    do {
                    /* WARNING: Load size is inaccurate */
      if ((puVar27[lVar31 + 0x20] == PVar8.unknown && puVar27[lVar31 + 0x28] == puVar9) ||
         (bVar11 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)puVar27[lVar31 + 0x20],
                              (_StringGuts)puVar27[lVar31 + 0x28],expecting), bVar11)) {
        uVar29 = uVar30 + 1;
        uVar28 = *(ulong *)(puVar27 + 0x10);
        apPStack_f0[1] = pPVar15;
        if (uVar28 - 1 != uVar30) {
          do {
            if (uVar28 <= uVar29) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100124e0c);
              (*pcVar10)();
            }
                    /* WARNING: Load size is inaccurate */
            _Var4.unknown = puVar27[lVar31 + 0x30];
            _Var6.unknown = puVar27[lVar31 + 0x38];
            if ((_Var4.unknown != PVar8.unknown || _Var6.unknown != puVar9) &&
               (bVar11 = Swift::_stringCompareWithSmolCheck(_Var4,_Var6,expecting), !bVar11)) {
              if (uVar29 != uVar30) {
                if (uVar28 <= uVar30) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100124e10);
                  (*pcVar10)();
                }
                uVar3 = *(undefined8 *)(puVar27 + uVar30 * 0x10 + 0x20);
                uVar5 = *(undefined8 *)((long)(puVar27 + uVar30 * 0x10 + 0x20) + 8);
                _swift_bridgeObjectRetain(uVar5);
                _swift_bridgeObjectRetain(_Var6.unknown);
                puVar17 = puVar27;
                _swift_isUniquelyReferenced_nonNull_native();
                pPVar15->unknown = puVar27;
                if (((ulong)puVar17 & 1) == 0) {
                  FUN_100287260();
                  apPStack_f0[1]->unknown = puVar27;
                }
                uVar18 = *(undefined8 *)(puVar27 + uVar30 * 0x10 + 0x28);
                *(undefined **)(puVar27 + uVar30 * 0x10 + 0x20) = _Var4.unknown;
                *(undefined **)(puVar27 + uVar30 * 0x10 + 0x28) = _Var6.unknown;
                _swift_bridgeObjectRelease(uVar18);
                pPVar15 = apPStack_f0[1];
                apPStack_f0[1]->unknown = puVar27;
                if (*(ulong *)(puVar27 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100124e14);
                  (*pcVar10)();
                }
                uVar18 = *(undefined8 *)(puVar27 + lVar31 + 0x38);
                *(undefined8 *)(puVar27 + lVar31 + 0x30) = uVar3;
                *(undefined8 *)(puVar27 + lVar31 + 0x38) = uVar5;
                _swift_bridgeObjectRelease(uVar18);
                pPVar15->unknown = puVar27;
              }
              uVar30 = uVar30 + 1;
            }
            uVar29 = uVar29 + 1;
            uVar28 = *(ulong *)(puVar27 + 0x10);
            lVar31 = lVar31 + 0x10;
          } while (uVar29 != uVar28);
        }
        goto LAB_10012495c;
      }
      uVar30 = uVar30 + 1;
      lVar31 = lVar31 + 0x10;
    } while (uVar28 != uVar30);
    uVar29 = *(ulong *)(puVar27 + 0x10);
    uVar30 = uVar28;
LAB_10012495c:
    lVar12 = local_e0;
    if ((long)uVar29 < (long)uVar30) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10012496c);
      (*pcVar10)();
    }
  }
  FUN_100288288(uVar30,uVar29);
  (*(code *)pPVar16)(&local_80,0);
  _swift_release(puVar13);
  _swift_release(puVar14);
  puVar13 = &DAT_1004269c0;
  _swift_getKeyPath(&DAT_1004269c0);
  puVar14 = &DAT_1004269e8;
  _swift_getKeyPath(&DAT_1004269e8);
  Combine::Published::_get_subscript(lVar25,unaff_x20,puVar13,puVar14);
  _swift_release(puVar13);
  _swift_release(puVar14);
  pcVar10 = *(code **)(lVar21 + 0x30);
  lVar31 = lVar25;
  (*pcVar10)(lVar25,1,lVar12);
  if ((int)lVar31 == 0) {
    FUN_10010b814(lVar25,puVar22);
    FUN_10002a29c(lVar25,&DAT_100551e50,&DAT_100429e60);
    _Var4.unknown = (undefined *)*puVar22;
    _Var6.unknown = *(undefined **)((long)apPStack_f0 + lVar7 + 8);
    _swift_bridgeObjectRetain(_Var6.unknown);
    FUN_10010c26c(puVar22);
    if ((_Var4.unknown == PVar8.unknown) && (_Var6.unknown == puVar9)) {
      _swift_bridgeObjectRetain(puVar9);
      _swift_bridgeObjectRelease(_Var6.unknown);
    }
    else {
      bVar11 = Swift::_stringCompareWithSmolCheck(_Var4,_Var6,expecting);
      _swift_bridgeObjectRetain(puVar9);
      _swift_bridgeObjectRelease(_Var6.unknown);
      if (!bVar11) goto LAB_100124c3c;
    }
    (**(code **)(lVar21 + 0x38))(lVar26,1,1,lVar12);
    puVar13 = &DAT_1004269c0;
    _swift_getKeyPath(&DAT_1004269c0);
    pPVar15 = (Published *)&DAT_1004269e8;
    _swift_getKeyPath(&DAT_1004269e8);
    FUN_1000087e4(lVar26,lVar24,&DAT_100551e50,&DAT_100429e60);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar15,lVar24,unaff_x20,puVar13,pPVar15);
    FUN_10002a29c(lVar26,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10002a29c(lVar25,&DAT_100551e50,&DAT_100429e60);
    _swift_bridgeObjectRetain(puVar9);
  }
LAB_100124c3c:
  puVar13 = &DAT_100426a18;
  _swift_getKeyPath(&DAT_100426a18);
  puVar14 = &DAT_100426a40;
  _swift_getKeyPath(&DAT_100426a40);
  Combine::Published::_get_subscript(lVar23,unaff_x20,puVar13,puVar14);
  _swift_release(puVar13);
  _swift_release(puVar14);
  _swift_bridgeObjectRelease(puVar9);
  lVar25 = lVar23;
  (*pcVar10)(lVar23,1,lVar12);
  if ((int)lVar25 == 0) {
    FUN_10010b814(lVar23,puVar22);
    FUN_10002a29c(lVar23,&DAT_100551e50,&DAT_100429e60);
    _Var4.unknown = (undefined *)*puVar22;
    _Var6.unknown = *(undefined **)((long)apPStack_f0 + lVar7 + 8);
    _swift_bridgeObjectRetain(_Var6.unknown);
    FUN_10010c26c(puVar22);
    if ((_Var4.unknown == PVar8.unknown) && (_Var6.unknown == puVar9)) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(puVar9);
    }
    else {
      bVar11 = Swift::_stringCompareWithSmolCheck(_Var4,_Var6,expecting);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(puVar9);
      if (!bVar11) {
        return;
      }
    }
    (**(code **)(lVar21 + 0x38))(lVar26,1,1,lVar12);
    puVar13 = &DAT_100426a18;
    _swift_getKeyPath(&DAT_100426a18);
    pPVar15 = (Published *)&DAT_100426a40;
    _swift_getKeyPath(&DAT_100426a40);
    FUN_1000087e4(lVar26,lVar24,&DAT_100551e50,&DAT_100429e60);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar15,lVar24,unaff_x20,puVar13,pPVar15);
    FUN_10002a29c(lVar26,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10002a29c(lVar23,&DAT_100551e50,&DAT_100429e60);
    _swift_bridgeObjectRelease(puVar9);
  }
  return;
}

