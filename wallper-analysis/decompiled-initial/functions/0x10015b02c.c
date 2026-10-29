// rea decompile_all
// name: FUN_10015b02c
// address: 0x10015b02c
// body: available
// range: 0x10015b02c-0x10015b3df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015b02c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  undefined1 uVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  _StringGuts _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  ulong uVar15;
  String SVar16;
  String SVar17;
  long lVar18;
  code *pcVar19;
  bool bVar20;
  bool bVar21;
  Task TVar22;
  Published *pPVar23;
  long lVar24;
  char *pcVar25;
  char *pcVar26;
  void *pvVar27;
  ulong uVar28;
  undefined1 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  String SVar37;
  String SVar38;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined *puStack_98;
  undefined *local_90 [3];
  undefined1 auStack_78 [24];
  
  _Var6.unknown = (undefined *)*param_1;
  _Var10.unknown = (undefined *)param_1[1];
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_2 + _TtC7Wallper13LyricsManager::track);
  puVar30 = (undefined *)puVar1[1];
  if (puVar30 == (undefined *)0x0) {
    if (_Var10.unknown == (undefined *)0x0) goto LAB_10015b398;
LAB_10015b0d8:
    bVar21 = false;
  }
  else {
    puVar31 = (undefined *)*puVar1;
    _swift_bridgeObjectRetain(puVar30);
    if (_Var10.unknown != (undefined *)0x0) {
      if (_Var6.unknown == puVar31 && _Var10.unknown == puVar30) {
        _swift_release(param_2);
        _swift_bridgeObjectRelease(puVar30);
        return;
      }
      bVar21 = Swift::_stringCompareWithSmolCheck
                         (_Var6,_Var10,(_StringComparisonResult)(__int8)puVar31);
      _swift_bridgeObjectRelease(puVar30);
      if (bVar21) goto LAB_10015b398;
      goto LAB_10015b0d8;
    }
    _swift_bridgeObjectRelease(puVar30);
    bVar21 = true;
  }
  puVar30 = *(undefined **)(param_2 + _TtC7Wallper13LyricsManager::fetchTask);
  if (puVar30 != (undefined *)0x0) {
    TVar22.unknown = puVar30;
    _swift_retain();
    Swift::Task::cancel(TVar22);
    _swift_release(puVar30);
  }
  uVar7 = *puVar1;
  uVar11 = puVar1[1];
  uVar8 = puVar1[2];
  uVar12 = puVar1[3];
  uVar9 = puVar1[4];
  uVar13 = puVar1[5];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  FUN_10016409c(uVar7,uVar11,uVar8,uVar12,uVar9,uVar13);
  pPVar23 = (Published *)&DAT_100428e00;
  _swift_getKeyPath(&DAT_100428e00);
  puVar30 = &DAT_100428e28;
  _swift_getKeyPath(&DAT_100428e28);
  local_90[0] = PTR___swiftEmptyArrayStorage_100524190;
  _swift_retain(param_2);
  Combine::Published::_set_subscript(pPVar23,local_90,param_2,pPVar23,puVar30);
  lVar24 = _TtC7Wallper13LyricsManager::unavailable;
  pcVar25 = (char *)0x0;
  pvVar27 = (void *)0x0;
  _swift_beginAccess(param_2 + _TtC7Wallper13LyricsManager::unavailable,local_90);
  lVar24 = *(long *)(param_2 + lVar24);
  puVar33 = (ulong *)(lVar24 + 0x38);
  uVar28 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
  uVar34 = 0xffffffffffffffff;
  if (-uVar28 < 0x40) {
    uVar34 = ~(-1L << (-uVar28 & 0x3f));
  }
  uVar34 = uVar34 & *puVar33;
  _Var4.unknown = (undefined *)0x0;
  if (!bVar21) {
    _Var4.unknown = _Var6.unknown;
  }
  _Var5.unknown = (undefined *)0xe000000000000000;
  if (!bVar21) {
    _Var5.unknown = _Var10.unknown;
  }
  _swift_bridgeObjectRetain_n(lVar24,2);
  lVar35 = 0;
  lVar18 = lVar35;
  uVar15 = uVar34;
  do {
    while (uVar32 = uVar15, lVar36 = lVar18, uVar34 == 0) {
      bVar20 = SCARRY8(lVar35,1);
      lVar35 = lVar35 + 1;
      if (bVar20) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10015b3e0);
        (*pcVar19)();
      }
      if ((long)(0x3f - uVar28 >> 6) <= lVar35) {
        uVar32 = 0;
        uVar29 = 1;
        goto LAB_10015b2e0;
      }
      lVar18 = lVar36;
      uVar15 = uVar32;
      uVar34 = puVar33[lVar35];
    }
    uVar15 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    pSVar2 = (String *)
             (*(long *)(lVar24 + 0x30) + LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) * 0x10 +
             lVar35 * 0x400);
    pcVar26 = pSVar2->str;
    pvVar14 = pSVar2->bridgeObject;
    SVar16 = *pSVar2;
    uVar34 = uVar34 - 1 & uVar34;
    local_a0 = SUB81(_Var4.unknown,0);
    uStack_9f = (undefined7)((ulong)_Var4.unknown >> 8);
    puStack_98 = _Var5.unknown;
    _swift_bridgeObjectRetain(pvVar14);
    _swift_bridgeObjectRetain(_Var5.unknown);
    _swift_bridgeObjectRetain(_Var10.unknown);
    SVar37.bridgeObject = (void *)0xe100000000000000;
    SVar37.str = (char *)0x7c;
    SVar38.bridgeObject = pvVar27;
    SVar38.str = pcVar25;
    Swift::String::append(SVar37,SVar38);
    _swift_bridgeObjectRelease(_Var5.unknown);
    puVar30 = puStack_98;
    SVar17.str._1_7_ = uStack_9f;
    SVar17.str._0_1_ = local_a0;
    SVar17.bridgeObject = puStack_98;
    pvVar27 = pvVar14;
    bVar20 = Swift::String::hasPrefix(SVar17,SVar16);
    _swift_bridgeObjectRelease(pvVar14);
    _swift_bridgeObjectRelease(puVar30);
    lVar18 = lVar35;
    uVar15 = uVar34;
    pcVar25 = pcVar26;
  } while (!bVar20);
  uVar29 = 0;
LAB_10015b2e0:
  FUN_10002f6ec(lVar24,puVar33,~uVar28,lVar36,uVar32);
  _swift_bridgeObjectRelease(lVar24);
  *(undefined1 *)(param_2 + _TtC7Wallper13LyricsManager::provisional) = 0;
  uVar34 = 0;
  if (!bVar21) {
    uVar34 = (ulong)_Var6.unknown & 0xffffffffffff;
  }
  _swift_bridgeObjectRetain(_Var10.unknown);
  _swift_bridgeObjectRelease(_Var5.unknown);
  if (((ulong)_Var5.unknown & 0x2000000000000000) != 0) {
    uVar34 = (ulong)_Var5.unknown >> 0x38 & 0xf;
  }
  uVar3 = 0;
  if (uVar34 != 0) {
    uVar3 = uVar29;
  }
  pPVar23 = (Published *)&DAT_100428e90;
  _swift_getKeyPath(&DAT_100428e90);
  puVar30 = &DAT_100428eb8;
  _swift_getKeyPath(&DAT_100428eb8);
  local_a0 = uVar3;
  _swift_retain(param_2);
  Combine::Published::_set_subscript(pPVar23,&local_a0,param_2,pPVar23,puVar30);
  FUN_10015b3e0();
LAB_10015b398:
  _swift_release(param_2);
  return;
}

