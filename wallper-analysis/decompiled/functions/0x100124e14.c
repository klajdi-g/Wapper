// rea decompile_all
// name: FUN_100124e14
// address: 0x100124e14
// body: available
// range: 0x100124e14-0x10012553b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100124e14(undefined8 param_1,undefined *param_2,undefined *param_3,byte param_4)

{
  double *pdVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  Date DVar11;
  code *pcVar12;
  undefined8 uVar13;
  Published *pPVar14;
  TaskPriority TVar15;
  MainActor *pMVar16;
  MainActor *pMVar17;
  undefined8 *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar23;
  MainActor *unaff_x20;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  double local_e8 [11];
  long local_90 [4];
  
  puVar7 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)local_e8 + (-8 - extraout_x8);
  puVar7 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar29 - extraout_x8_00;
  puVar7 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar21 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar21 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar22 - extraout_x12_00;
  lVar8 = 0;
  FUN_100126a5c();
  lVar26 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar19 = lVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100426930;
  _swift_getKeyPath(&DAT_100426930);
  puVar9 = &DAT_100426958;
  _swift_getKeyPath(&DAT_100426958);
  Combine::Published::_get_subscript(local_90);
  _swift_release(puVar7);
  _swift_release(puVar9);
  if (*(long *)(local_90[0] + 0x10) == 0) {
    bVar6 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_90[0]);
    puVar7 = param_2;
    puVar9 = param_3;
    FUN_10000464c(param_2);
    bVar6 = ((ulong)puVar9 & 1) == 0;
    if (!bVar6) {
      FUN_10010b814(*(long *)(local_90[0] + 0x38) + *(long *)(lVar26 + 0x48) * (long)puVar7,lVar27);
    }
    _swift_bridgeObjectRelease(local_90[0]);
  }
  pcVar20 = *(code **)(lVar26 + 0x38);
  (*pcVar20)(lVar27,bVar6,1,lVar8);
  _swift_bridgeObjectRelease(local_90[0]);
  lVar10 = lVar27;
  (**(code **)(lVar26 + 0x30))(lVar27,1,lVar8);
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar27,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10010b858(lVar27,lVar19);
    Foundation::Date::init();
    DVar11 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar11.unknown + -8) + 0x38))(lVar24,0,1,DVar11.unknown);
    FUN_100127368(lVar24,lVar19 + *(int *)(lVar8 + 0x38));
    *(byte *)(lVar19 + *(int *)(lVar8 + 0x3c)) = param_4 & 1;
    if ((*(char *)(lVar19 + *(int *)(lVar8 + 0x1c)) == '\0') &&
       ((pdVar1 = (double *)(lVar19 + *(int *)(lVar8 + 0x24)), *(char *)(pdVar1 + 1) == '\x01' ||
        (*pdVar1 < 1.0)))) {
      *pdVar1 = 1.0;
      *(undefined1 *)(pdVar1 + 1) = 0;
    }
    FUN_10010b814(lVar19,lVar22);
    (*pcVar20)(lVar22,0,1,lVar8);
    puVar7 = &DAT_100426930;
    _swift_getKeyPath(&DAT_100426930);
    puVar9 = &DAT_100426958;
    _swift_getKeyPath(&DAT_100426958);
    _swift_bridgeObjectRetain(param_3);
    pcVar12 = (code *)local_90;
    pMVar17 = unaff_x20;
    Combine::Published::_modify_subscript();
    FUN_100123160(lVar22,param_2,param_3);
    (*pcVar12)(local_90,0);
    _swift_release(puVar7);
    _swift_release(puVar9);
    puVar7 = &DAT_100426978;
    _swift_getKeyPath();
    puVar9 = &DAT_1004269a0;
    _swift_getKeyPath();
    pcVar12 = (code *)local_90;
    pMVar16 = unaff_x20;
    Combine::Published::_modify_subscript((Published *)pMVar17);
    uVar28 = *(ulong *)pMVar16;
    uVar23 = *(ulong *)(uVar28 + 0x10);
    if (uVar23 == 0) {
      uVar30 = 0;
      uVar25 = 0;
    }
    else {
      lVar24 = 0;
      uVar30 = 0;
      do {
        _Var2.unknown = *(undefined **)(uVar28 + lVar24 + 0x20);
        _Var4.unknown = *(undefined **)(uVar28 + lVar24 + 0x28);
        if ((_Var2.unknown == param_2 && _Var4.unknown == param_3) ||
           (bVar6 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var4,(_StringComparisonResult)(__int8)param_2), bVar6)) {
          uVar25 = uVar30 + 1;
          uVar23 = *(ulong *)(uVar28 + 0x10);
          if (uVar23 - 1 != uVar30) {
            do {
              if (uVar23 <= uVar25) {
                    /* WARNING: Does not return */
                pcVar20 = (code *)SoftwareBreakpoint(1,0x100125534);
                (*pcVar20)();
              }
              _Var2.unknown = *(undefined **)(uVar28 + lVar24 + 0x30);
              _Var4.unknown = *(undefined **)(uVar28 + lVar24 + 0x38);
              if ((_Var2.unknown != param_2 || _Var4.unknown != param_3) &&
                 (bVar6 = Swift::_stringCompareWithSmolCheck
                                    (_Var2,_Var4,(_StringComparisonResult)(__int8)param_2), !bVar6))
              {
                if (uVar25 != uVar30) {
                  if (uVar23 <= uVar30) {
                    /* WARNING: Does not return */
                    pcVar20 = (code *)SoftwareBreakpoint(1,0x100125538);
                    (*pcVar20)();
                  }
                  puVar18 = (undefined8 *)(uVar28 + 0x20 + uVar30 * 0x10);
                  uVar3 = *puVar18;
                  uVar5 = puVar18[1];
                  _swift_bridgeObjectRetain(uVar5);
                  _swift_bridgeObjectRetain(_Var4.unknown);
                  uVar23 = uVar28;
                  _swift_isUniquelyReferenced_nonNull_native();
                  *(ulong *)pMVar16 = uVar28;
                  if ((uVar23 & 1) == 0) {
                    FUN_100287260();
                    *(ulong *)pMVar16 = uVar28;
                  }
                  lVar26 = uVar28 + uVar30 * 0x10;
                  uVar13 = *(undefined8 *)(lVar26 + 0x28);
                  *(undefined **)(lVar26 + 0x20) = _Var2.unknown;
                  *(undefined **)(lVar26 + 0x28) = _Var4.unknown;
                  _swift_bridgeObjectRelease(uVar13);
                  *(ulong *)pMVar16 = uVar28;
                  if (*(ulong *)(uVar28 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                    pcVar20 = (code *)SoftwareBreakpoint(1,0x10012553c);
                    (*pcVar20)();
                  }
                  lVar26 = uVar28 + lVar24;
                  uVar13 = *(undefined8 *)(lVar26 + 0x38);
                  *(undefined8 *)(lVar26 + 0x30) = uVar3;
                  *(undefined8 *)(lVar26 + 0x38) = uVar5;
                  _swift_bridgeObjectRelease(uVar13);
                  *(ulong *)pMVar16 = uVar28;
                }
                uVar30 = uVar30 + 1;
              }
              uVar25 = uVar25 + 1;
              uVar23 = *(ulong *)(uVar28 + 0x10);
              lVar24 = lVar24 + 0x10;
            } while (uVar25 != uVar23);
          }
          goto LAB_100125258;
        }
        uVar30 = uVar30 + 1;
        lVar24 = lVar24 + 0x10;
      } while (uVar23 != uVar30);
      uVar25 = *(ulong *)(uVar28 + 0x10);
      uVar30 = uVar23;
LAB_100125258:
      if ((long)uVar25 < (long)uVar30) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x10012526c);
        (*pcVar20)();
      }
    }
    FUN_100288288(uVar30,uVar25);
    (*pcVar12)(local_90,0);
    _swift_release(puVar7);
    _swift_release(puVar9);
    FUN_10010b814(lVar19,lVar22);
    (*pcVar20)(lVar22,0,1,lVar8);
    bVar6 = (param_4 & 1) == 0;
    pPVar14 = (Published *)&DAT_100426a18;
    if (bVar6) {
      pPVar14 = (Published *)&DAT_1004269c0;
    }
    puVar7 = &DAT_100426a40;
    if (bVar6) {
      puVar7 = &DAT_1004269e8;
    }
    _swift_getKeyPath(pPVar14);
    _swift_getKeyPath(puVar7);
    FUN_1000087e4(lVar22,lVar21,&DAT_100551e50,&DAT_100429e60);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar14,lVar21,unaff_x20,pPVar14,puVar7);
    FUN_10002a29c(lVar22,&DAT_100551e50,&DAT_100429e60);
    TVar15 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar15.unknown + -8) + 0x38))(lVar29,1,1,TVar15.unknown);
    pMVar16 = Swift::MainActor::typeMetadataAccessor();
    puVar7 = PTR_typeMetadataAccessor_1005246d8;
    _swift_bridgeObjectRetain(param_3);
    pMVar17 = unaff_x20;
    _swift_retain();
    pMVar17 = Swift::MainActor::get_shared(pMVar16,pMVar17);
    puVar18 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar7 = &DAT_10052d120;
    _swift_allocObject(&DAT_10052d120,0x40,7);
    *(MainActor **)(puVar7 + 0x10) = pMVar17;
    *(undefined8 **)(puVar7 + 0x18) = puVar18;
    *(undefined8 *)(puVar7 + 0x20) = param_1;
    *(MainActor **)(puVar7 + 0x28) = unaff_x20;
    *(undefined **)(puVar7 + 0x30) = param_2;
    *(undefined **)(puVar7 + 0x38) = param_3;
    FUN_1001b1e74(0,0,lVar29,&DAT_100426a10,puVar7);
    _swift_release();
    FUN_10010c26c(lVar19);
  }
  return;
}

