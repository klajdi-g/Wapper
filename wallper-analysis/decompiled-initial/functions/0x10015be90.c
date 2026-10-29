// rea decompile_all
// name: FUN_10015be90
// address: 0x10015be90
// body: available
// range: 0x10015be90-0x10015c40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015be90(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined *puVar11;
  Task TVar12;
  _StringGuts _Var13;
  _StringGuts _Var14;
  _StringGuts _Var15;
  _StringGuts _Var16;
  long lVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  _StringGuts _Var20;
  _StringGuts _Var21;
  _StringGuts _Var22;
  _StringGuts _Var23;
  long lVar24;
  long lVar25;
  long lVar26;
  _StringGuts local_118;
  undefined1 auStack_100 [48];
  undefined *local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  _Var20.unknown = (undefined *)param_1[1];
  _Var16.unknown = (undefined *)param_1[3];
  _Var14.unknown = (undefined *)param_1[5];
  plVar1 = (long *)(unaff_x20 + _TtC7Wallper13LyricsManager::track);
  puVar18 = (undefined *)*plVar1;
  puVar19 = (undefined *)plVar1[1];
  puVar11 = (undefined *)plVar1[2];
  puVar5 = (undefined *)plVar1[3];
  puVar2 = (undefined *)plVar1[4];
  puVar6 = (undefined *)plVar1[5];
  if (_Var20.unknown == (undefined *)0x0) {
    if (puVar19 == (undefined *)0x0) {
      return;
    }
LAB_10015bff0:
    lStack_c8 = param_1[1];
    local_d0 = (undefined *)*param_1;
    lStack_b8 = param_1[3];
    lStack_c0 = param_1[2];
    lStack_a8 = param_1[5];
    local_b0 = param_1[4];
    local_a0 = puVar18;
    puStack_98 = puVar19;
    local_90 = puVar11;
    puStack_88 = puVar5;
    local_80 = puVar2;
    puStack_78 = puVar6;
    FUN_100163f7c(puVar18,puVar19,puVar11,puVar5,puVar2,puVar6);
    FUN_1001640d8(param_1,auStack_100);
    FUN_10002a29c(&local_d0,&DAT_100555420,&DAT_100428ee8);
    _Var23.unknown = (undefined *)param_1[1];
    if (_Var23.unknown != (undefined *)0x0) {
      _Var13.unknown = (undefined *)param_1[4];
      _Var22.unknown = (undefined *)param_1[5];
      local_118.unknown = (undefined *)param_1[2];
      _Var21.unknown = (undefined *)param_1[3];
      _Var15.unknown = (undefined *)*param_1;
      puVar18 = (undefined *)plVar1[1];
      if (puVar18 == (undefined *)0x0) goto LAB_10015c240;
LAB_10015c070:
      puVar19 = (undefined *)*plVar1;
      puVar11 = (undefined *)plVar1[2];
      puVar2 = (undefined *)plVar1[3];
      lVar17 = plVar1[4];
      lVar3 = plVar1[5];
      if (((_Var15.unknown == puVar19 && puVar18 == _Var23.unknown) ||
          (bVar10 = Swift::_stringCompareWithSmolCheck
                              (_Var15,_Var23,(_StringComparisonResult)(__int8)puVar19), bVar10)) &&
         (((local_118.unknown == puVar11 && (puVar2 == _Var21.unknown)) ||
          (bVar10 = Swift::_stringCompareWithSmolCheck
                              (local_118,_Var21,(_StringComparisonResult)(__int8)puVar11), bVar10)))
         ) {
        *plVar1 = (long)_Var15.unknown;
        plVar1[1] = (long)_Var23.unknown;
        plVar1[2] = (long)local_118.unknown;
        plVar1[3] = (long)_Var21.unknown;
        plVar1[4] = (long)_Var13.unknown;
        plVar1[5] = (long)_Var22.unknown;
        FUN_1001640d8(param_1,&local_d0);
        FUN_10016409c(puVar19,puVar18,puVar11,puVar2,lVar17,lVar3);
        puVar18 = &DAT_100428e00;
        _swift_getKeyPath(&DAT_100428e00);
        puVar11 = &DAT_100428e28;
        _swift_getKeyPath(&DAT_100428e28);
        Combine::Published::_get_subscript(&local_d0,unaff_x20,puVar18,puVar11);
        _swift_release(puVar18);
        _swift_release(puVar11);
        lVar17 = *(long *)(local_d0 + 0x10);
        _swift_bridgeObjectRelease();
        if (lVar17 != 0) {
          return;
        }
        goto LAB_10015c3e4;
      }
      _swift_bridgeObjectRetain(_Var20.unknown);
      _swift_bridgeObjectRetain(_Var16.unknown);
      _swift_bridgeObjectRetain(_Var14.unknown);
      _swift_bridgeObjectRelease(_Var22.unknown);
      _swift_bridgeObjectRelease(_Var21.unknown);
      _swift_bridgeObjectRelease(_Var23.unknown);
    }
  }
  else {
    if (puVar19 == (undefined *)0x0) goto LAB_10015bff0;
    _Var15.unknown = (undefined *)*param_1;
    local_118.unknown = (undefined *)param_1[2];
    _Var13.unknown = (undefined *)param_1[4];
    if (((_Var15.unknown == puVar18 && _Var20.unknown == puVar19) ||
        (bVar10 = Swift::_stringCompareWithSmolCheck
                            (_Var15,_Var20,(_StringComparisonResult)(__int8)puVar18), bVar10)) &&
       ((local_118.unknown == puVar11 && _Var16.unknown == puVar5 ||
        (bVar10 = Swift::_stringCompareWithSmolCheck
                            (local_118,_Var16,(_StringComparisonResult)(__int8)puVar11), bVar10))))
    {
      if (_Var13.unknown == puVar2 && _Var14.unknown == puVar6) {
        FUN_100163f7c(puVar18,puVar19,puVar11,puVar5,_Var13.unknown);
        FUN_1001640d8(param_1,&local_d0);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(puVar5);
        _swift_bridgeObjectRelease(puVar19);
        FUN_10002a29c(param_1,&DAT_100555428,&DAT_100428ef0);
        return;
      }
      bVar10 = Swift::_stringCompareWithSmolCheck
                         (_Var13,_Var14,(_StringComparisonResult)(__int8)puVar2);
      FUN_100163f7c(puVar18,puVar19,puVar11,puVar5,puVar2,puVar6);
      FUN_1001640d8(param_1,&local_d0);
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(puVar19);
      FUN_10002a29c(param_1,&DAT_100555428,&DAT_100428ef0);
      if (bVar10) {
        return;
      }
    }
    else {
      FUN_100163f7c(puVar18,puVar19,puVar11,puVar5,puVar2,puVar6);
      FUN_1001640d8(param_1,&local_d0);
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(puVar19);
      FUN_10002a29c(param_1,&DAT_100555428,&DAT_100428ef0);
    }
    puVar18 = (undefined *)plVar1[1];
    _Var21.unknown = _Var16.unknown;
    _Var22.unknown = _Var14.unknown;
    _Var23.unknown = _Var20.unknown;
    if (puVar18 != (undefined *)0x0) goto LAB_10015c070;
LAB_10015c240:
    _swift_bridgeObjectRetain(_Var20.unknown);
    _swift_bridgeObjectRetain(_Var16.unknown);
    _swift_bridgeObjectRetain(_Var14.unknown);
    _swift_bridgeObjectRelease(_Var22.unknown);
    _swift_bridgeObjectRelease(_Var21.unknown);
    _swift_bridgeObjectRelease(_Var23.unknown);
  }
  lVar17 = *plVar1;
  lVar7 = plVar1[1];
  lVar3 = plVar1[2];
  lVar8 = plVar1[3];
  lVar4 = plVar1[4];
  lVar9 = plVar1[5];
  lVar24 = *param_1;
  lVar26 = param_1[3];
  lVar25 = param_1[2];
  plVar1[1] = param_1[1];
  *plVar1 = lVar24;
  plVar1[3] = lVar26;
  plVar1[2] = lVar25;
  lVar24 = param_1[4];
  plVar1[5] = param_1[5];
  plVar1[4] = lVar24;
  FUN_1001640d8(param_1,&local_d0);
  FUN_10016409c(lVar17,lVar7,lVar3,lVar8,lVar4,lVar9);
  puVar18 = *(undefined **)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchTask);
  if (puVar18 != (undefined *)0x0) {
    TVar12.unknown = puVar18;
    _swift_retain();
    Swift::Task::cancel(TVar12);
    _swift_release(puVar18);
  }
  _swift_getKeyPath(&DAT_100428e00);
  _swift_getKeyPath(&DAT_100428e28);
  local_d0 = PTR___swiftEmptyArrayStorage_100524190;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  *(undefined1 *)(unaff_x20 + _TtC7Wallper13LyricsManager::provisional) = 0;
  FUN_10015b3e0();
LAB_10015c3e4:
  FUN_10015c704(0,0);
  return;
}

