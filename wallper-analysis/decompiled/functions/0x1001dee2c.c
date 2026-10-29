// rea decompile_all
// name: FUN_1001dee2c
// address: 0x1001dee2c
// body: available
// range: 0x1001dee2c-0x1001dfc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001dfc7c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001df688) */

void FUN_1001dee2c(char *param_1,void *param_2,undefined8 param_3)

{
  code cVar1;
  byte bVar2;
  NSDataReadingOptions contentsOf;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  char *pcVar7;
  long lVar8;
  undefined7 extraout_var;
  NSString *pNVar9;
  URL UVar10;
  Data DVar11;
  NSURL *pNVar12;
  MainActor *pMVar13;
  MainActor *this;
  MainActor *pMVar14;
  undefined8 *puVar15;
  TaskPriority TVar16;
  void *pvVar17;
  Published *pPVar18;
  URL UVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  code *pcVar21;
  undefined *puVar22;
  ulong uVar23;
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
  undefined8 uVar24;
  long unaff_x20;
  _StringGuts _Var25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ID IVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  code *pcVar34;
  long lVar35;
  String SVar36;
  String SVar37;
  ID local_170;
  code *local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  NSDataReadingOptions local_128;
  undefined *local_120;
  code *local_118;
  code *local_110 [3];
  void *local_f8;
  char *local_f0;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0 [4];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  puVar22 = &DAT_100561090;
  local_110[2] = (code *)param_3;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar21 = (code *)&DAT_10054ea38;
  local_138 = (long)&local_170 - extraout_x8;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  local_110[0] = pcVar21;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(pcVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = ((long)&local_170 - extraout_x8) - extraout_x8_00;
  puVar22 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  local_150 = *(long *)(puVar22 + -8);
  lVar33 = *(long *)(local_150 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar26 - (lVar33 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12;
  local_130 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar21 = (code *)(lVar20 - extraout_x12_00);
  local_118 = pcVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar35 = (long)pcVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar35 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  _Var25.unknown = (undefined *)(lVar28 - extraout_x12_03);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar21 = *(code **)(UVar4.unknown + -8);
  lVar31 = *(long *)(pcVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)_Var25.unknown - (lVar31 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_04;
  local_140 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined *)(lVar20 - extraout_x12_05);
  local_160 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = puVar22 + -extraout_x12_06;
  local_128.unknown = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_120 = puVar22 + -extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = puVar22 + -extraout_x12_07 + -extraout_x12_08;
  uVar23 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar23 = (ulong)param_2 >> 0x38 & 0xf;
  }
  local_f8 = param_2;
  local_f0 = param_1;
  if (uVar23 == 0) goto LAB_1001dfc20;
  FUN_100077938(local_110[2],_Var25.unknown);
  local_110[1] = *(code **)(pcVar21 + 0x30);
  puVar5 = _Var25.unknown;
  (*local_110[1])(_Var25.unknown,1,UVar4.unknown);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(_Var25.unknown,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    _Var6.unknown = puVar22;
    (**(code **)(pcVar21 + 0x20))(puVar22,_Var25.unknown,UVar4.unknown);
    Foundation::URL::_get_scheme((URL)_Var6.unknown);
    if (_Var25.unknown == (undefined *)0x0) {
      (**(code **)(pcVar21 + 8))(puVar22,UVar4.unknown);
    }
    else {
      if ((_Var6.unknown == (undefined *)0x7463617265746e69) &&
         (_Var25.unknown == (undefined *)0xeb00000000657669)) {
        _swift_bridgeObjectRelease(0xeb00000000657669);
        (**(code **)(pcVar21 + 8))(puVar22,UVar4.unknown);
        goto LAB_1001dfc20;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var6,_Var25,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease(_Var25.unknown);
      (**(code **)(pcVar21 + 8))(puVar22,UVar4.unknown);
      if (bVar3) goto LAB_1001dfc20;
    }
  }
  puVar22 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar5 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  Combine::Published::_get_subscript(local_c0,unaff_x20,puVar22,puVar5);
  _swift_release(puVar22);
  _swift_release(puVar5);
  lVar20 = local_c0[0];
  if (*(long *)(local_c0[0] + 0x10) == 0) {
    bVar3 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_c0[0]);
    pcVar7 = local_f0;
    pvVar17 = local_f8;
    FUN_10000464c(local_f0);
    bVar3 = ((ulong)pvVar17 & 1) == 0;
    if (!bVar3) {
      (**(code **)(pcVar21 + 0x10))
                (lVar28,*(long *)(lVar20 + 0x38) + *(long *)(pcVar21 + 0x48) * (long)pcVar7,
                 UVar4.unknown);
    }
    _swift_bridgeObjectRelease(lVar20);
  }
  pcVar34 = *(code **)(pcVar21 + 0x38);
  (*pcVar34)(lVar28,bVar3,1,UVar4.unknown);
  _swift_bridgeObjectRelease(lVar20);
  local_168 = pcVar34;
  (*pcVar34)(lVar35,1,1,UVar4.unknown);
  lVar20 = (long)*(int *)(local_110[0] + 0x30);
  FUN_100077938(lVar28,lVar26);
  FUN_100077938(lVar35,lVar26 + lVar20);
  lVar8 = lVar26;
  (*local_110[1])(lVar26,1,UVar4.unknown);
  pcVar34 = local_118;
  if ((int)lVar8 == 1) {
    FUN_10002a29c(lVar35,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar28,&DAT_100553d90,&DAT_10041bf10);
    lVar20 = lVar26 + lVar20;
    (*local_110[1])(lVar20,1,UVar4.unknown);
    if ((int)lVar20 != 1) {
LAB_1001df3cc:
      FUN_10002a29c(lVar26,&DAT_10054ea38,&DAT_100426270);
      goto LAB_1001dfc20;
    }
    FUN_10002a29c(lVar26,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    FUN_100077938(lVar26,local_118);
    lVar8 = lVar26 + lVar20;
    (*local_110[1])(lVar8,1,UVar4.unknown);
    puVar22 = local_120;
    if ((int)lVar8 == 1) {
      FUN_10002a29c(lVar35,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar28,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(pcVar21 + 8))(pcVar34,UVar4.unknown);
      goto LAB_1001df3cc;
    }
    (**(code **)(pcVar21 + 0x20))(local_120,lVar26 + lVar20,UVar4.unknown);
    puVar5 = &DAT_100553da0;
    FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar3 = Swift::Equatable::___infix(pcVar34,puVar22,UVar4.unknown,puVar5);
    local_110[0] = (code *)CONCAT44(local_110[0]._4_4_,(int)CONCAT71(extraout_var,bVar3));
    pcVar34 = *(code **)(pcVar21 + 8);
    (*pcVar34)(puVar22,UVar4.unknown);
    FUN_10002a29c(lVar35,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar28,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar34)(local_118,UVar4.unknown);
    FUN_10002a29c(lVar26,&DAT_100553d90,&DAT_10041bf10);
    if (((ulong)local_110[0] & 1) == 0) goto LAB_1001dfc20;
  }
  lVar20 = _TtC7Wallper14PreviewManager::inFlightIDs;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_88,0,0);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar20);
  _swift_bridgeObjectRetain(uVar24);
  pcVar7 = local_f0;
  FUN_1002165a4(local_f0,local_f8,uVar24);
  _swift_bridgeObjectRelease(uVar24);
  lVar26 = _TtC7Wallper14PreviewManager::failedIDs;
  if (((ulong)pcVar7 & 1) != 0) goto LAB_1001dfc20;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::failedIDs,local_c0,0x20,0);
  lVar26 = *(long *)(unaff_x20 + lVar26);
  if (*(long *)(lVar26 + 0x10) == 0) {
LAB_1001df564:
    _swift_endAccess(local_c0);
  }
  else {
    _swift_bridgeObjectRetain(lVar26);
    pcVar7 = local_f0;
    pvVar17 = local_f8;
    FUN_10000464c();
    if (((ulong)pvVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar26);
      goto LAB_1001df564;
    }
    lVar28 = *(long *)(*(long *)(lVar26 + 0x38) + (long)pcVar7 * 8);
    _swift_endAccess(local_c0);
    _swift_bridgeObjectRelease(lVar26);
    if (2 < lVar28) goto LAB_1001dfc20;
  }
  lVar26 = _TtC7Wallper14PreviewManager::transparentIDs;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::transparentIDs,auStack_a0,0,0);
  puVar22 = *(undefined **)(unaff_x20 + lVar26);
  _swift_bridgeObjectRetain(puVar22);
  pcVar7 = local_f0;
  UVar19.unknown = puVar22;
  FUN_1002165a4(local_f0,local_f8);
  _swift_bridgeObjectRelease(puVar22);
  pvVar17 = local_f8;
  UVar10.unknown = local_120;
  if (((ulong)pcVar7 & 1) != 0) goto LAB_1001dfc20;
  SVar37.bridgeObject = local_f8;
  SVar37.str = local_f0;
  Foundation::URL::appendingPathComponent(SVar37,UVar19);
  contentsOf.unknown = local_128.unknown;
  SVar36.bridgeObject = (void *)0xe300000000000000;
  SVar36.str = (char *)0x676e70;
  Foundation::URL::appendingPathExtension(SVar36,UVar19);
  local_118 = *(code **)(pcVar21 + 8);
  local_110[0] = pcVar21;
  (*local_118)(UVar10.unknown,UVar4.unknown);
  IVar29 = *(ID *)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
  SVar37 = Foundation::URL::get_path(UVar10);
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar37.bridgeObject);
  local_170 = IVar29;
  IVar29 = objc_stub::fileExistsAtPath_(IVar29,pNVar9);
  if ((int)IVar29 != 0) {
    pPVar18 = (Published *)0x0;
    UVar10.unknown = (undefined *)Foundation::Data::_init(contentsOf);
    DVar11 = (Data)UVar10.unknown;
    _Var25.unknown = (undefined *)pPVar18;
    FUN_1001ec26c();
    if ((DVar11.unknown == (undefined *)0xd000000000000020) &&
       (_Var25.unknown == (undefined *)0x80000001004ddab0)) {
      _swift_bridgeObjectRelease(0x80000001004ddab0);
LAB_1001df7c0:
      FUN_100093624(UVar10.unknown,pPVar18);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)DVar11.unknown,_Var25,(_StringComparisonResult)0x20);
      _swift_bridgeObjectRelease(_Var25.unknown);
      if (bVar3) goto LAB_1001df7c0;
      DVar11 = (Data)UVar10.unknown;
      FUN_1001ec608(UVar10.unknown,pPVar18);
      FUN_100093624(UVar10.unknown,pPVar18);
      lVar26 = local_130;
      if (((ulong)DVar11.unknown & 1) == 0) {
        (**(code **)(local_110[0] + 0x10))(local_130,contentsOf.unknown,UVar4.unknown);
        (*local_168)(lVar26,0,1,UVar4.unknown);
        puVar22 = &DAT_10042ae68;
        _swift_getKeyPath(&DAT_10042ae68);
        puVar5 = &DAT_10042ae90;
        _swift_getKeyPath(&DAT_10042ae90);
        pvVar17 = local_f8;
        _swift_bridgeObjectRetain(local_f8);
        pcVar21 = (code *)local_c0;
        Combine::Published::_modify_subscript(pPVar18,pcVar21,unaff_x20,puVar22,puVar5);
        FUN_100122fac(lVar26,local_f0,pvVar17);
        (*pcVar21)(local_c0,0);
        _swift_release(puVar22);
        _swift_release(puVar5);
        (*local_118)(contentsOf.unknown,UVar4.unknown);
        goto LAB_1001dfc20;
      }
    }
    pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar10);
    local_c0[0] = 0;
    IVar29 = objc_stub::removeItemAtURL_error_(local_170,pNVar12,local_c0);
    pvVar17 = local_f8;
    if ((int)IVar29 == 0) {
      lVar26 = local_c0[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(lVar26);
      pvVar17 = local_f8;
    }
  }
  _swift_beginAccess(unaff_x20 + lVar20,local_c0,0x21,0);
  _swift_bridgeObjectRetain(pvVar17);
  TVar16.unknown = local_f0;
  FUN_1001ca054(auStack_d0,local_f0,pvVar17);
  _swift_endAccess(local_c0);
  _swift_bridgeObjectRelease(local_c8);
  lVar20 = local_148;
  FUN_100077938(local_110[2],local_148);
  lVar26 = lVar20;
  (*local_110[1])(lVar20,1,UVar4.unknown);
  pcVar21 = local_110[0];
  puVar22 = local_160;
  if ((int)lVar26 == 1) {
    FUN_10002a29c(lVar20,&DAT_100553d90,&DAT_10041bf10);
LAB_1001dfa50:
    puVar5 = local_120;
    FUN_1001da870(local_120,TVar16.unknown,pvVar17);
    lVar20 = local_138;
    Swift::TaskPriority::get_background(TVar16);
    TVar16 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar16.unknown + -8) + 0x38))(lVar20,0,1,TVar16.unknown);
    puVar22 = &DAT_100531a78;
    _swift_allocObject(&DAT_100531a78,0x18,7);
    _swift_weakInit(puVar22 + 0x10,unaff_x20);
    pcVar21 = local_110[0];
    pcVar34 = *(code **)(local_110[0] + 0x10);
    (*pcVar34)(local_140,puVar5,UVar4.unknown);
    lVar20 = local_158;
    (*pcVar34)(local_158,local_128.unknown,UVar4.unknown);
    FUN_100077938(local_110[2],local_130);
    cVar1 = pcVar21[0x50];
    uVar23 = (ulong)(byte)cVar1;
    uVar27 = uVar23 + 0x28 & (uVar23 ^ 0xffffffffffffffff);
    uVar23 = lVar31 + uVar23 + uVar27 & (uVar23 ^ 0xffffffffffffffff);
    uVar30 = lVar31 + uVar23 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(local_150 + 0x50);
    uVar32 = bVar2 + uVar30 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar5 = &DAT_100531c30;
    _swift_allocObject(&DAT_100531c30,uVar32 + lVar33,(byte)cVar1 | bVar2 | 7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined **)(puVar5 + 0x20) = puVar22;
    pcVar21 = *(code **)(pcVar21 + 0x20);
    (*pcVar21)(puVar5 + uVar27,local_140,UVar4.unknown);
    (*pcVar21)(puVar5 + uVar23,lVar20,UVar4.unknown);
    pvVar17 = local_f8;
    *(char **)(puVar5 + uVar30) = local_f0;
    *(void **)((long)(puVar5 + uVar30) + 8) = local_f8;
    FUN_1000f8c24(local_130,puVar5 + uVar32);
    _swift_bridgeObjectRetain(pvVar17);
    lVar20 = local_138;
    FUN_100176d50(0,0,local_138,&DAT_10042aef0,puVar5);
    _swift_release();
    FUN_10002a29c(lVar20,&DAT_100561090,&DAT_10041c870);
    lVar20 = -0x10;
  }
  else {
    pcVar34 = *(code **)(local_110[0] + 0x20);
    UVar10.unknown = local_160;
    (*pcVar34)(local_160,lVar20,UVar4.unknown);
    bVar3 = Foundation::URL::get_isFileURL(UVar10);
    if (!bVar3) {
      (*local_118)(puVar22,UVar4.unknown);
      TVar16.unknown = local_f0;
      goto LAB_1001dfa50;
    }
    TVar16 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar16.unknown + -8) + 0x38))(local_138,1,1,TVar16.unknown);
    pMVar13 = (MainActor *)&DAT_100531a78;
    _swift_allocObject(&DAT_100531a78,0x18,7);
    _swift_weakInit(pMVar13 + 0x10,unaff_x20);
    (**(code **)(pcVar21 + 0x10))(local_120,puVar22,UVar4.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar22 = PTR_typeMetadataAccessor_1005246d8;
    _swift_bridgeObjectRetain(pvVar17);
    pMVar14 = pMVar13;
    _swift_retain();
    pMVar14 = Swift::MainActor::get_shared(this,pMVar14);
    puVar15 = &DAT_100558b80;
    FUN_100047f94(&DAT_100558b80,0xff,puVar22,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    uVar23 = (ulong)(byte)pcVar21[0x50];
    uVar27 = uVar23 + 0x38 & (uVar23 ^ 0xffffffffffffffff);
    puVar22 = &DAT_100531c58;
    _swift_allocObject(&DAT_100531c58,uVar27 + lVar31,uVar23 | 7);
    *(MainActor **)(puVar22 + 0x10) = pMVar14;
    *(undefined8 **)(puVar22 + 0x18) = puVar15;
    *(MainActor **)(puVar22 + 0x20) = pMVar13;
    *(char **)(puVar22 + 0x28) = local_f0;
    *(void **)(puVar22 + 0x30) = pvVar17;
    (*pcVar34)(puVar22 + uVar27,local_120,UVar4.unknown);
    _swift_release(pMVar13);
    FUN_1001b1e74(0,0,local_138,&DAT_10042af00,puVar22);
    _swift_release();
    lVar20 = -0x50;
  }
  pcVar21 = local_118;
  (*local_118)(*(undefined8 *)((long)local_110 + lVar20),UVar4.unknown);
  (*pcVar21)(local_128.unknown,UVar4.unknown);
LAB_1001dfc20:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

