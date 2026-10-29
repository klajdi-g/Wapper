// rea decompile_all
// name: FUN_1001da998
// address: 0x1001da998
// body: available
// range: 0x1001da998-0x1001db583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001db580 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001db1cc) */

void FUN_1001da998(char *param_1,void *param_2)

{
  bool bVar1;
  URL UVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  NSString *pNVar7;
  ID IVar8;
  Data DVar9;
  NSURL *pNVar10;
  TaskPriority TVar11;
  void *pvVar12;
  Published *pPVar13;
  _StringGuts _Var14;
  URL UVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  NSDataReadingOptions contentsOf;
  undefined *puVar20;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x13;
  long extraout_x13_00;
  code *pcVar23;
  ulong uVar24;
  long unaff_x20;
  undefined8 uVar25;
  undefined *puVar26;
  long lVar27;
  ulong uVar28;
  code *pcVar29;
  long lVar30;
  ID self;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  String SVar35;
  String SVar36;
  String SVar38;
  String SVar39;
  String SVar40;
  code *local_140;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  long local_c0 [4];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  String SVar37;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  puVar26 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_140 - extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar16 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  contentsOf.unknown = (undefined *)(lVar19 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = contentsOf.unknown + -extraout_x12_01;
  puVar26 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)puVar20 - extraout_x8_00;
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar22 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar22 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar32 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = lVar34 - extraout_x12_04;
  uVar21 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar21 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar21 == 0) goto LAB_1001dadd0;
  puVar3 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar4 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  Combine::Published::_get_subscript(local_c0);
  _swift_release(puVar3);
  _swift_release(puVar4);
  lVar33 = local_c0[0];
  if (*(long *)(local_c0[0] + 0x10) == 0) {
    bVar1 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_c0[0]);
    pcVar6 = param_1;
    pvVar12 = param_2;
    FUN_10000464c(param_1);
    bVar1 = ((ulong)pvVar12 & 1) == 0;
    if (!bVar1) {
      (**(code **)(lVar17 + 0x10))
                (lVar30,*(long *)(lVar33 + 0x38) + *(long *)(lVar17 + 0x48) * (long)pcVar6,
                 UVar2.unknown);
    }
    _swift_bridgeObjectRelease(lVar33);
  }
  pcVar29 = *(code **)(lVar17 + 0x38);
  (*pcVar29)(lVar30,bVar1,1,UVar2.unknown);
  _swift_bridgeObjectRelease(lVar33);
  local_140 = pcVar29;
  (*pcVar29)(lVar34,1,1,UVar2.unknown);
  lVar33 = (long)*(int *)(puVar26 + 0x30);
  FUN_100077938(lVar30,lVar27);
  FUN_100077938(lVar34,lVar27 + lVar33);
  pcVar29 = *(code **)(lVar17 + 0x30);
  lVar5 = lVar27;
  (*pcVar29)(lVar27,1,UVar2.unknown);
  if ((int)lVar5 == 1) {
    FUN_10002a29c(lVar34,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar30,&DAT_100553d90,&DAT_10041bf10);
    lVar33 = lVar27 + lVar33;
    (*pcVar29)(lVar33,1,UVar2.unknown);
    if ((int)lVar33 != 1) {
LAB_1001dadb8:
      FUN_10002a29c(lVar27,&DAT_10054ea38,&DAT_100426270);
      goto LAB_1001dadd0;
    }
    FUN_10002a29c(lVar27,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    FUN_100077938(lVar27,lVar32);
    lVar5 = lVar27 + lVar33;
    (*pcVar29)(lVar5,1,UVar2.unknown);
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar34,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar30,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar17 + 8))(lVar32,UVar2.unknown);
      goto LAB_1001dadb8;
    }
    (**(code **)(lVar17 + 0x20))(puVar20,lVar27 + lVar33,UVar2.unknown);
    puVar26 = &DAT_100553da0;
    FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar1 = Swift::Equatable::___infix(lVar32,puVar20,UVar2.unknown,puVar26);
    pcVar29 = *(code **)(lVar17 + 8);
    (*pcVar29)(puVar20,UVar2.unknown);
    FUN_10002a29c(lVar34,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar30,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar29)(lVar32,UVar2.unknown);
    FUN_10002a29c(lVar27,&DAT_100553d90,&DAT_10041bf10);
    if (!bVar1) goto LAB_1001dadd0;
  }
  SVar36.bridgeObject = (void *)0xec0000002d657669;
  SVar36.str = (char *)0x7463617265746e69;
  SVar40.bridgeObject = param_2;
  SVar40.str = param_1;
  pvVar12 = param_2;
  bVar1 = Swift::String::hasPrefix(SVar36,SVar40);
  lVar27 = _TtC7Wallper14PreviewManager::inFlightIDs;
  if (bVar1) {
    _swift_bridgeObjectRetain(param_2);
    SVar35.bridgeObject = (void *)0xec0000002d657669;
    SVar35.str = (char *)0x7463617265746e69;
    pcVar6 = (char *)Swift::String::get_count(SVar35);
    FUN_1002a8150(pcVar6,param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    SVar37.bridgeObject = param_1;
    SVar37.str = pcVar6;
    SVar36 = Swift::String::__fromSubstring(SVar37);
    pcVar6 = SVar36.str;
    _swift_bridgeObjectRelease(pvVar12);
    FUN_100043008(pcVar6,SVar36.bridgeObject);
    if (((uint)pcVar6 & 0xff) != 7) {
      FUN_1001db584();
    }
    goto LAB_1001dadd0;
  }
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_88,0,0);
  uVar25 = *(undefined8 *)(unaff_x20 + lVar27);
  _swift_bridgeObjectRetain(uVar25);
  pcVar6 = param_1;
  FUN_1002165a4(param_1,param_2,uVar25);
  _swift_bridgeObjectRelease(uVar25);
  lVar30 = _TtC7Wallper14PreviewManager::failedIDs;
  if (((ulong)pcVar6 & 1) != 0) goto LAB_1001dadd0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::failedIDs,local_c0,0x20,0);
  lVar30 = *(long *)(unaff_x20 + lVar30);
  if (*(long *)(lVar30 + 0x10) == 0) {
LAB_1001db04c:
    _swift_endAccess(local_c0);
  }
  else {
    _swift_bridgeObjectRetain(lVar30);
    pcVar6 = param_1;
    pvVar12 = param_2;
    FUN_10000464c();
    if (((ulong)pvVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar30);
      goto LAB_1001db04c;
    }
    lVar32 = *(long *)(*(long *)(lVar30 + 0x38) + (long)pcVar6 * 8);
    _swift_endAccess(local_c0);
    _swift_bridgeObjectRelease(lVar30);
    if (2 < lVar32) goto LAB_1001dadd0;
  }
  lVar30 = _TtC7Wallper14PreviewManager::transparentIDs;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::transparentIDs,auStack_a0,0,0);
  puVar26 = *(undefined **)(unaff_x20 + lVar30);
  _swift_bridgeObjectRetain(puVar26);
  pcVar6 = param_1;
  UVar15.unknown = puVar26;
  FUN_1002165a4(param_1,param_2);
  _swift_bridgeObjectRelease(puVar26);
  lVar30 = _TtC7Wallper14PreviewManager::transparentRetryCount;
  if (((ulong)pcVar6 & 1) != 0) {
    UVar15.unknown = (undefined *)0x20;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::transparentRetryCount,local_c0,0x20
                       ,0);
    lVar30 = *(long *)(unaff_x20 + lVar30);
    if (*(long *)(lVar30 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar30);
      pcVar6 = param_1;
      pvVar12 = param_2;
      FUN_10000464c();
      if (((ulong)pvVar12 & 1) != 0) {
        lVar32 = *(long *)(*(long *)(lVar30 + 0x38) + (long)pcVar6 * 8);
        _swift_endAccess(local_c0);
        _swift_bridgeObjectRelease(lVar30);
        if (1 < lVar32) goto LAB_1001dadd0;
        goto LAB_1001db11c;
      }
      _swift_bridgeObjectRelease(lVar30);
    }
    _swift_endAccess(local_c0);
  }
LAB_1001db11c:
  SVar38.bridgeObject = param_2;
  SVar38.str = param_1;
  Foundation::URL::appendingPathComponent(SVar38,UVar15);
  SVar39.bridgeObject = (void *)0xe300000000000000;
  SVar39.str = (char *)0x676e70;
  Foundation::URL::appendingPathExtension(SVar39,UVar15);
  pcVar29 = *(code **)(lVar17 + 8);
  UVar15.unknown = puVar20;
  (*pcVar29)(puVar20,UVar2.unknown);
  self = *(ID *)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
  SVar36 = Foundation::URL::get_path(UVar15);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  IVar8 = objc_stub::fileExistsAtPath_(self,pNVar7);
  if ((int)IVar8 != 0) {
    pPVar13 = (Published *)0x0;
    UVar15.unknown = (undefined *)Foundation::Data::_init(contentsOf);
    DVar9 = (Data)UVar15.unknown;
    _Var14.unknown = (undefined *)pPVar13;
    FUN_1001ec26c();
    if ((DVar9.unknown == (undefined *)0xd000000000000020) &&
       (_Var14.unknown == (undefined *)0x80000001004ddab0)) {
      _swift_bridgeObjectRelease(0x80000001004ddab0);
LAB_1001db308:
      FUN_100093624(UVar15.unknown,pPVar13);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)DVar9.unknown,_Var14,(_StringComparisonResult)0x20);
      _swift_bridgeObjectRelease(_Var14.unknown);
      if (bVar1) goto LAB_1001db308;
      DVar9 = (Data)UVar15.unknown;
      FUN_1001ec608(UVar15.unknown,pPVar13);
      FUN_100093624(UVar15.unknown,pPVar13);
      if (((ulong)DVar9.unknown & 1) == 0) {
        (**(code **)(lVar17 + 0x10))(lVar22,contentsOf.unknown,UVar2.unknown);
        (*local_140)(lVar22,0,1,UVar2.unknown);
        puVar26 = &DAT_10042ae68;
        _swift_getKeyPath(&DAT_10042ae68);
        puVar3 = &DAT_10042ae90;
        _swift_getKeyPath(&DAT_10042ae90);
        _swift_bridgeObjectRetain(param_2);
        pcVar23 = (code *)local_c0;
        Combine::Published::_modify_subscript(pPVar13,pcVar23,unaff_x20,puVar26,puVar3);
        FUN_100122fac(lVar22,param_1,param_2);
        (*pcVar23)(local_c0,0);
        _swift_release(puVar26);
        _swift_release(puVar3);
        (*pcVar29)(contentsOf.unknown,UVar2.unknown);
        goto LAB_1001dadd0;
      }
    }
    pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar15);
    local_c0[0] = 0;
    IVar8 = objc_stub::removeItemAtURL_error_(self,pNVar10,local_c0);
    if ((int)IVar8 == 0) {
      lVar22 = local_c0[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(lVar22);
    }
  }
  FUN_1001da870(puVar20,param_1,param_2);
  _swift_beginAccess(unaff_x20 + lVar27,local_c0,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  FUN_1001ca054(auStack_d0,param_1,param_2);
  _swift_endAccess(local_c0);
  _swift_bridgeObjectRelease();
  Swift::TaskPriority::get_background((TaskPriority)local_c8);
  TVar11 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(lVar16,0,1,TVar11.unknown);
  puVar26 = &DAT_100531a78;
  _swift_allocObject(&DAT_100531a78,0x18,7);
  _swift_weakInit(puVar26 + 0x10,unaff_x20);
  pcVar23 = *(code **)(lVar17 + 0x10);
  (*pcVar23)(lVar19,puVar20,UVar2.unknown);
  (*pcVar23)(lVar18,contentsOf.unknown,UVar2.unknown);
  uVar21 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar24 = uVar21 + 0x28 & (uVar21 ^ 0xffffffffffffffff);
  uVar28 = extraout_x13_00 + uVar24 + 7 & 0xfffffffffffffff8;
  uVar31 = uVar21 + uVar28 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100531eb0;
  _swift_allocObject(&DAT_100531eb0,uVar31 + extraout_x13_00,uVar21 | 7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = puVar26;
  pcVar23 = *(code **)(lVar17 + 0x20);
  (*pcVar23)(puVar3 + uVar24,lVar19,UVar2.unknown);
  *(char **)(puVar3 + uVar28) = param_1;
  *(void **)((long)(puVar3 + uVar28) + 8) = param_2;
  (*pcVar23)(puVar3 + uVar31,lVar18,UVar2.unknown);
  _swift_bridgeObjectRetain(param_2);
  FUN_100176d50(0,0,lVar16,&DAT_10042af48,puVar3);
  _swift_release();
  FUN_10002a29c(lVar16,&DAT_100561090,&DAT_10041c870);
  (*pcVar29)(puVar20,UVar2.unknown);
  (*pcVar29)(contentsOf.unknown,UVar2.unknown);
LAB_1001dadd0:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

