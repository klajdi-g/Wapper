// rea decompile_all
// name: FUN_10015ed48
// address: 0x10015ed48
// body: available
// range: 0x10015ed48-0x10015f13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015ed48(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  Task TVar7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  _StringGuts _Var21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  TVar7.unknown = *(undefined **)(unaff_x22 + 0x398);
  _swift_release();
  bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
  if (bVar6) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x418));
    goto LAB_10015f0b4;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2f8);
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x2e8);
  _Var8.unknown = *(undefined **)(unaff_x22 + 0x2e0);
  _Var9.unknown = *(undefined **)(unaff_x22 + 0x2d8);
  _Var10.unknown = *(undefined **)(unaff_x22 + 0x2d0);
  plVar1 = (long *)(*(long *)(unaff_x22 + 0x2b8) + *(long *)(unaff_x22 + 0x420));
  puVar2 = (undefined *)*plVar1;
  puVar11 = (undefined *)plVar1[1];
  puVar3 = (undefined *)plVar1[2];
  puVar13 = (undefined *)plVar1[3];
  puVar4 = (undefined *)plVar1[4];
  puVar5 = (undefined *)plVar1[5];
  *(undefined **)(unaff_x22 + 0x10) = _Var10.unknown;
  *(undefined **)(unaff_x22 + 0x18) = _Var9.unknown;
  *(undefined **)(unaff_x22 + 0x20) = _Var8.unknown;
  *(undefined **)(unaff_x22 + 0x28) = _Var21.unknown;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined **)(unaff_x22 + 0x40) = puVar2;
  *(undefined **)(unaff_x22 + 0x48) = puVar11;
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  *(undefined **)(unaff_x22 + 0x58) = puVar13;
  *(undefined **)(unaff_x22 + 0x60) = puVar4;
  *(undefined **)(unaff_x22 + 0x68) = puVar5;
  if (puVar11 == (undefined *)0x0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x418);
    _swift_bridgeObjectRetain(_Var9.unknown);
    _swift_bridgeObjectRetain(_Var21.unknown);
    _swift_bridgeObjectRetain(uVar12);
    _swift_errorRelease(uVar14);
    FUN_10002a29c(unaff_x22 + 0x10,&DAT_100555420,&DAT_100428ee8);
    goto LAB_10015f0b4;
  }
  if ((_Var10.unknown == puVar2) && (puVar11 == _Var9.unknown)) {
joined_r0x00010015ee54:
    if ((_Var8.unknown == puVar3) && (puVar13 == _Var21.unknown)) {
      _Var21.unknown = *(undefined **)(unaff_x22 + 0x2f8);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var8,_Var21,(_StringComparisonResult)(__int8)puVar3);
      _Var21.unknown = *(undefined **)(unaff_x22 + 0x2f8);
      if (!bVar6) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x418);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x2e8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x2d8);
        _swift_bridgeObjectRetain(uVar14);
        _swift_bridgeObjectRetain(uVar16);
        _swift_bridgeObjectRetain(_Var21.unknown);
        FUN_100163f7c(puVar2,puVar11,puVar3,puVar13,puVar4,puVar5);
        _swift_errorRelease(uVar12);
        _swift_bridgeObjectRelease(puVar5);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(uVar16);
        goto LAB_10015f09c;
      }
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2d8);
    if ((*(undefined **)(unaff_x22 + 0x2f0) == puVar4) && (puVar5 == _Var21.unknown)) {
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(_Var21.unknown);
      FUN_100163f7c(puVar2,puVar11,puVar3,puVar13,puVar4,puVar5);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(uVar12);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(unaff_x22 + 0x2f0),_Var21,
                         (_StringComparisonResult)(__int8)puVar4);
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(_Var21.unknown);
      FUN_100163f7c(puVar2,puVar11,puVar3,puVar13,puVar4,puVar5);
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(puVar13);
      _swift_bridgeObjectRelease(puVar5);
      if (!bVar6) {
        _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x418));
        puVar13 = *(undefined **)(unaff_x22 + 0x2e8);
        puVar11 = *(undefined **)(unaff_x22 + 0x2d8);
        goto LAB_10015f09c;
      }
      puVar13 = *(undefined **)(unaff_x22 + 0x2e8);
      puVar11 = *(undefined **)(unaff_x22 + 0x2d8);
    }
    lVar15 = *(long *)(unaff_x22 + 0x2c8);
    lVar17 = *(long *)(unaff_x22 + 0x2b8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2f8));
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(puVar13);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x418);
    if (lVar15 == *(long *)(lVar17 + _TtC7Wallper13LyricsManager::fetchGeneration)) {
      FUN_10015c704(*(long *)(unaff_x22 + 0x2c0) + 1,*(undefined1 *)(unaff_x22 + 0x204));
    }
    _swift_errorRelease(uVar12);
  }
  else {
    bVar6 = Swift::_stringCompareWithSmolCheck(_Var10,_Var9,(_StringComparisonResult)(__int8)puVar2)
    ;
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x2e8);
    if (bVar6) {
      _Var8.unknown = *(undefined **)(unaff_x22 + 0x2e0);
      goto joined_r0x00010015ee54;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2d8);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(_Var21.unknown);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100163f7c(puVar2,puVar11,puVar3,puVar13,puVar4,puVar5);
    _swift_errorRelease(uVar12);
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(_Var21.unknown);
LAB_10015f09c:
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2f8));
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(puVar13);
  }
LAB_10015f0b4:
  uVar14 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x390));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x00010015f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

