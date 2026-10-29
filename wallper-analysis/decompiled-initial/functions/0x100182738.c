// rea decompile_all
// name: FUN_100182738
// address: 0x100182738
// body: available
// range: 0x100182738-0x100184403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100182738(undefined8 *param_1,undefined8 param_2,undefined8 param_3,_StringGuts param_4)

{
  double *pdVar1;
  NSData *pNVar2;
  Published *pPVar3;
  _StringGuts _Var4;
  char *pcVar5;
  Data DVar6;
  ulong uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  Date DVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  char *pcVar18;
  Task TVar19;
  MainActor *pMVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  Published *pPVar23;
  _StringGuts *p_Var24;
  NSData *pNVar25;
  undefined8 uVar26;
  TaskPriority TVar27;
  MainActor *pMVar28;
  MainActor *pMVar29;
  undefined8 uVar30;
  _StringGuts _Var31;
  Date DVar32;
  long *plVar33;
  long extraout_x8;
  long lVar34;
  long extraout_x8_00;
  long lVar35;
  long extraout_x8_01;
  long extraout_x8_02;
  double *pdVar36;
  long lVar37;
  long extraout_x8_03;
  long lVar38;
  code *pcVar39;
  double *pdVar40;
  double *pdVar41;
  double *pdVar42;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  _StringGuts _Var43;
  long *unaff_x20;
  undefined *puVar44;
  long lVar45;
  double *pdVar46;
  _StringGuts _Var47;
  long lVar48;
  long lVar49;
  long lVar50;
  NSData *pNVar51;
  long lVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  undefined8 uStack_170;
  undefined *local_168;
  uint local_15c;
  long local_158;
  _StringGuts local_150;
  undefined *local_108;
  undefined1 auStack_c0 [24];
  _StringGuts local_a8;
  _StringGuts local_a0;
  
  puVar44 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar44 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar34 = (long)&uStack_170 - extraout_x8;
  puVar44 = &DAT_1005564b8;
  FUN_100002f94(&DAT_1005564b8,&DAT_10042a1c0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar44 + -8) + 0x40));
  lVar48 = lVar34 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar35 = lVar48 - extraout_x12;
  puVar44 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar44 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar52 = lVar35 - extraout_x8_01;
  lVar12 = 0;
  FUN_10015f8e8();
  lVar49 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar49 + 0x40));
  pdVar40 = (double *)(lVar52 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  pdVar41 = (double *)((long)pdVar40 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pdVar46 = (double *)((long)pdVar41 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pdVar42 = (double *)((long)pdVar46 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar50 = (long)pdVar42 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pdVar36 = (double *)(lVar50 - extraout_x12_04);
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar37 = *(long *)(DVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  lVar45 = (long)pdVar36 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar45 - extraout_x12_05;
  puVar44 = &DAT_100429b50;
  _swift_getKeyPath(&DAT_100429b50);
  puVar14 = &DAT_100429b78;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(&local_a8);
  _swift_release(puVar44);
  _swift_release(puVar14);
  if ((byte)local_a8.unknown != '\x01') {
    return;
  }
  if ((*(byte *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::isQuitting) & 1) != 0) {
    return;
  }
  lVar15 = 0;
  local_158 = lVar48;
  FUN_1001698e0();
  puVar21 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar15 + 0x38));
  _Var4.unknown = (undefined *)*puVar21;
  _Var47.unknown = (undefined *)puVar21[1];
  _Var43.unknown = _Var4.unknown;
  FUN_1001abfcc(_Var4.unknown,_Var47.unknown);
  local_15c = (uint)_Var43.unknown;
  _Var43.unknown = _Var4.unknown;
  _Var31.unknown = _Var47.unknown;
  FUN_1001ac89c();
  bVar9 = *(byte *)((long)param_1 + (long)*(int *)(lVar15 + 0x30));
  if ((_Var43.unknown == (undefined *)0x726568746f) &&
     (_Var31.unknown == (undefined *)0xe500000000000000)) {
LAB_100182a94:
    _swift_bridgeObjectRelease(_Var31.unknown);
    if (_Var47.unknown != (undefined *)0x0) {
      uVar7 = (ulong)_Var4.unknown & 0xffffffffffff;
      if (((ulong)_Var47.unknown & 0x2000000000000000) != 0) {
        uVar7 = (ulong)_Var47.unknown >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        FUN_10017ebc8(_Var4.unknown,_Var47.unknown);
        _Var43.unknown = _Var4.unknown;
        FUN_10017e6a4(_Var4.unknown,_Var47.unknown);
        if (((ulong)_Var43.unknown & 1) != 0) goto LAB_100182b48;
      }
    }
LAB_100182b3c:
    if ((bVar9 & 1) != 0) {
      return;
    }
  }
  else {
    param_4.unknown = (undefined *)0xe500000000000000;
    bVar11 = Swift::_stringCompareWithSmolCheck(_Var43,_Var31,(_StringComparisonResult)0x6f);
    if (bVar11) goto LAB_100182a94;
    FUN_10017e6a4(_Var43.unknown,_Var31.unknown);
    _swift_bridgeObjectRelease(_Var31.unknown);
    if (((ulong)_Var43.unknown & 1) == 0) goto LAB_100182b3c;
  }
LAB_100182b48:
  puVar44 = &DAT_10042a230;
  _swift_getKeyPath(&DAT_10042a230);
  puVar14 = &DAT_10042a258;
  _swift_getKeyPath(&DAT_10042a258);
  Combine::Published::_get_subscript(&local_a8);
  _swift_release(puVar44);
  _swift_release(puVar14);
  pNVar51 = (NSData *)param_1[6];
  cVar8 = *(char *)(param_1 + 7);
  if ((char)local_a0.unknown == '\x01') {
    if (cVar8 != '\x01') {
LAB_100182bd0:
      puVar44 = &DAT_10042a230;
      _swift_getKeyPath(&DAT_10042a230);
      param_4.unknown = &DAT_10042a258;
      _swift_getKeyPath();
      local_a0.unknown._0_1_ = cVar8;
      local_a8.unknown = pNVar51;
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript((Published *)param_4.unknown,&local_a8,unaff_x20,puVar44);
    }
  }
  else if ((cVar8 == '\x01') || ((double)local_a8.unknown != (double)pNVar51)) goto LAB_100182bd0;
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(lVar15 + 0x2c));
  dVar55 = 1.0;
  if (*(char *)(pdVar1 + 1) != '\x01') {
    dVar55 = *pdVar1;
  }
  if (dVar55 <= 0.0) {
    dVar55 = 1.0;
  }
  dVar54 = dVar55;
  if ((bVar9 & 1) == 0) {
    dVar54 = 0.0;
  }
  Foundation::Date::init();
  local_150.unknown = (undefined *)*param_1;
  _Var43.unknown = (undefined *)param_1[1];
  puVar44 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  puVar14 = &DAT_100429da0;
  _swift_getKeyPath(&DAT_100429da0);
  _swift_bridgeObjectRetain(_Var43.unknown);
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44,puVar14);
  _swift_release(puVar44);
  _swift_release(puVar14);
  _Var31.unknown = local_a0.unknown;
  local_168 = _Var43.unknown;
  if (_Var43.unknown == (undefined *)0x0) {
    _Var43.unknown = local_a0.unknown;
    if ((Published *)local_a0.unknown == (Published *)0x0) goto LAB_100182d4c;
LAB_100182de8:
    _swift_bridgeObjectRelease(_Var43.unknown);
LAB_100182dec:
    bVar11 = true;
  }
  else {
    if ((Published *)local_a0.unknown == (Published *)0x0) goto LAB_100182de8;
    if ((local_150.unknown != local_a8.unknown) || (_Var43.unknown != local_a0.unknown)) {
      param_4.unknown = local_a0.unknown;
      bVar11 = Swift::_stringCompareWithSmolCheck
                         (local_150,_Var43,(_StringComparisonResult)(__int8)local_a8.unknown);
      _swift_bridgeObjectRelease(_Var43.unknown);
      _swift_bridgeObjectRelease(_Var31.unknown);
      if (bVar11) goto LAB_100182d4c;
      goto LAB_100182dec;
    }
    _swift_bridgeObjectRelease(_Var43.unknown);
    _swift_bridgeObjectRelease(_Var31.unknown);
LAB_100182d4c:
    puVar44 = &DAT_10042a288;
    _swift_getKeyPath(&DAT_10042a288);
    puVar14 = &DAT_10042a2b0;
    _swift_getKeyPath(&DAT_10042a2b0);
    _swift_bridgeObjectRetain(_Var47.unknown);
    Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44,puVar14);
    _swift_release(puVar44);
    _swift_release(puVar14);
    _Var31.unknown = local_a0.unknown;
    if (_Var47.unknown == (undefined *)0x0) {
      _Var43.unknown = local_a0.unknown;
      if ((Published *)local_a0.unknown != (Published *)0x0) goto LAB_100182de8;
      bVar11 = false;
    }
    else {
      _Var43.unknown = _Var47.unknown;
      if ((Published *)local_a0.unknown == (Published *)0x0) goto LAB_100182de8;
      if ((_Var4.unknown == local_a8.unknown) && (_Var47.unknown == local_a0.unknown)) {
        _swift_bridgeObjectRelease(_Var47.unknown);
        _swift_bridgeObjectRelease(_Var31.unknown);
        bVar11 = false;
      }
      else {
        param_4.unknown = local_a0.unknown;
        bVar11 = Swift::_stringCompareWithSmolCheck
                           (_Var4,_Var47,(_StringComparisonResult)(__int8)local_a8.unknown);
        _swift_bridgeObjectRelease(_Var47.unknown);
        _swift_bridgeObjectRelease(_Var31.unknown);
        bVar11 = !bVar11;
      }
    }
  }
  uStack_170._4_4_ = (uint)*(byte *)((long)param_1 + (long)*(int *)(lVar15 + 0x28));
  if ((uStack_170._4_4_ == 1) && (*(char *)(param_1 + 9) != '\x01')) {
    dVar53 = (double)param_1[8];
    param_4.unknown = &DAT_10041d870;
    FUN_1000087e4((long)param_1 + (long)*(int *)(lVar15 + 0x24),lVar52,&DAT_10054b950);
    lVar48 = lVar52;
    (**(code **)(lVar37 + 0x30))(lVar52,1,DVar13.unknown);
    if ((int)lVar48 == 1) {
      FUN_10002a29c(lVar52,&DAT_10054b950,&DAT_10041d870);
      goto LAB_100182e8c;
    }
    (**(code **)(lVar37 + 0x20))(lVar45,lVar52,DVar13.unknown);
    (**(code **)(lVar37 + 0x10))
              ((long)pdVar36 + (long)*(int *)(lVar12 + 0x14),lVar45,DVar13.unknown);
    *pdVar36 = dVar53;
    *(double *)((long)pdVar36 + (long)*(int *)(lVar12 + 0x18)) = dVar54;
    (**(code **)(lVar37 + 8))(lVar45,DVar13.unknown);
    local_108 = (undefined *)0xe500000000000000;
  }
  else {
LAB_100182e8c:
    if (bVar11) {
      (**(code **)(lVar37 + 0x10))
                ((long)pdVar36 + (long)*(int *)(lVar12 + 0x14),lVar38,DVar13.unknown);
      *pdVar36 = 0.0;
      *(double *)((long)pdVar36 + (long)*(int *)(lVar12 + 0x18)) = dVar54;
      local_108 = (undefined *)0xe800000000000000;
    }
    else {
      if ((bVar9 & 1) != 0) {
        puVar44 = &DAT_10042a1c8;
        _swift_getKeyPath(&DAT_10042a1c8);
        puVar14 = &DAT_10042a1f0;
        _swift_getKeyPath(&DAT_10042a1f0);
        Combine::Published::_get_subscript(lVar50,unaff_x20,puVar44,puVar14);
        _swift_release(puVar44);
        _swift_release(puVar14);
        dVar53 = *(double *)(lVar50 + *(int *)(lVar12 + 0x18));
        FUN_100029548(lVar50,FUN_10015f8e8);
        lVar45 = _TtC7Wallper17NowPlayingManager::mrPlayingAnchor;
        if ((dVar53 <= 0.0) &&
           ((*(byte *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPausedFresh) & 1) == 0))
        {
          _swift_beginAccess((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPlayingAnchor,
                             auStack_c0,0,0);
          param_4.unknown = &DAT_10042a1c0;
          FUN_1000087e4((long)unaff_x20 + lVar45,lVar35,&DAT_1005564b8);
          lVar45 = lVar35;
          (**(code **)(lVar49 + 0x30))(lVar35,1,lVar12);
          if ((int)lVar45 == 1) {
            FUN_10002a29c(lVar35,&DAT_1005564b8,&DAT_10042a1c0);
          }
          else {
            pcVar39 = FUN_10015f8e8;
            FUN_100007e64(lVar35,pdVar42,FUN_10015f8e8);
            puVar44 = &DAT_10042a1c8;
            _swift_getKeyPath();
            puVar14 = &DAT_10042a1f0;
            _swift_getKeyPath(&DAT_10042a1f0);
            DVar32.unknown = puVar44;
            Combine::Published::_get_subscript(lVar50,unaff_x20,puVar44,puVar14);
            _swift_release(puVar44);
            _swift_release(puVar14);
            dVar53 = Foundation::Date::timeIntervalSince
                               ((undefined *)(lVar50 + *(int *)(lVar12 + 0x14)),DVar32);
            FUN_100029548(lVar50);
            if (dVar53 < 1.5) {
              dVar53 = *pdVar42;
              dVar54 = Foundation::Date::timeIntervalSince
                                 ((undefined *)((long)pdVar42 + (long)*(int *)(lVar12 + 0x14)),
                                  (Date)pcVar39);
              if (dVar54 < 0.0) {
                dVar54 = 0.0;
              }
              dVar56 = *(double *)((long)pdVar42 + (long)*(int *)(lVar12 + 0x18));
              (**(code **)(lVar37 + 0x10))
                        ((long)pdVar36 + (long)*(int *)(lVar12 + 0x14),lVar38,DVar13.unknown);
              *pdVar36 = dVar53 + dVar54 * dVar56;
              *(double *)((long)pdVar36 + (long)*(int *)(lVar12 + 0x18)) = dVar55;
              FUN_100029548(pdVar42,FUN_10015f8e8);
              local_108 = (undefined *)0xe700000000000000;
              goto LAB_100183238;
            }
            FUN_100029548(pdVar42,FUN_10015f8e8);
          }
        }
      }
      puVar44 = &DAT_10042a1c8;
      _swift_getKeyPath();
      puVar14 = &DAT_10042a1f0;
      _swift_getKeyPath(&DAT_10042a1f0);
      DVar32.unknown = puVar44;
      Combine::Published::_get_subscript(pdVar46,unaff_x20,puVar44,puVar14);
      _swift_release(puVar44);
      _swift_release(puVar14);
      dVar53 = *pdVar46;
      dVar55 = Foundation::Date::timeIntervalSince
                         ((undefined *)((long)pdVar46 + (long)*(int *)(lVar12 + 0x14)),DVar32);
      if (dVar55 < 0.0) {
        dVar55 = 0.0;
      }
      dVar56 = *(double *)((long)pdVar46 + (long)*(int *)(lVar12 + 0x18));
      FUN_100029548(pdVar46,FUN_10015f8e8);
      (**(code **)(lVar37 + 0x10))
                ((long)pdVar36 + (long)*(int *)(lVar12 + 0x14),lVar38,DVar13.unknown);
      *pdVar36 = dVar53 + dVar55 * dVar56;
      *(double *)((long)pdVar36 + (long)*(int *)(lVar12 + 0x18)) = dVar54;
      local_108 = (undefined *)0xe400000000000000;
    }
  }
LAB_100183238:
  puVar44 = &DAT_10042a1c8;
  puVar16 = puVar44;
  _swift_getKeyPath(&DAT_10042a1c8);
  puVar14 = &DAT_10042a1f0;
  puVar17 = puVar14;
  _swift_getKeyPath(&DAT_10042a1f0);
  Combine::Published::_get_subscript(lVar50,unaff_x20,puVar16,puVar17);
  _swift_release(puVar16);
  _swift_release(puVar17);
  FUN_100159d88(pdVar41,pdVar36,lVar38);
  FUN_100029548(lVar50,FUN_10015f8e8);
  _swift_getKeyPath(&DAT_10042a1c8);
  _swift_getKeyPath();
  DVar32.unknown = puVar14;
  Combine::Published::_get_subscript(pdVar40,unaff_x20,puVar44);
  _swift_release(puVar44);
  _swift_release(puVar14);
  if ((*pdVar41 == *pdVar40) &&
     (bVar11 = Foundation::Date::___infix
                         ((undefined *)((long)pdVar41 + (long)*(int *)(lVar12 + 0x14)),
                          (undefined *)((long)pdVar40 + (long)*(int *)(lVar12 + 0x14)),DVar32),
     bVar11)) {
    dVar55 = *(double *)((long)pdVar41 + (long)*(int *)(lVar12 + 0x18));
    dVar54 = *(double *)((long)pdVar40 + (long)*(int *)(lVar12 + 0x18));
    FUN_100029548(pdVar40,FUN_10015f8e8);
    if (dVar55 != dVar54) goto LAB_100183350;
  }
  else {
    FUN_100029548(pdVar40,FUN_10015f8e8);
LAB_100183350:
    puVar44 = &DAT_10042a1c8;
    _swift_getKeyPath(&DAT_10042a1c8);
    param_4.unknown = &DAT_10042a1f0;
    _swift_getKeyPath();
    FUN_100029504(pdVar41,lVar50,FUN_10015f8e8);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript((Published *)param_4.unknown,lVar50,unaff_x20,puVar44);
  }
  lVar35 = local_158;
  if (*(double *)((long)pdVar41 + (long)*(int *)(lVar12 + 0x18)) <= 0.0) {
    *(char *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPausedFresh) =
         (char)uStack_170._4_4_;
  }
  else {
    FUN_100029504(pdVar41,local_158,FUN_10015f8e8);
    (**(code **)(lVar49 + 0x38))(lVar35,0,1,lVar12);
    lVar12 = _TtC7Wallper17NowPlayingManager::mrPlayingAnchor;
    _swift_beginAccess((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPlayingAnchor,&local_a8,
                       0x21,0);
    param_4.unknown = &DAT_10042a1c0;
    FUN_1001b08f0(lVar35,(long)unaff_x20 + lVar12,&DAT_1005564b8);
    _swift_endAccess(&local_a8);
  }
  lVar12 = _TtC7Wallper17NowPlayingManager::mrPauseTask;
  puVar44 = *(undefined **)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPauseTask);
  if ((bVar9 & 1) == 0) {
    if (puVar44 != (undefined *)0x0) {
      TVar19.unknown = puVar44;
      _swift_retain();
      Swift::Task::cancel(TVar19);
      _swift_release(puVar44);
    }
    TVar27 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar27.unknown + -8) + 0x38))(lVar34,1,1,TVar27.unknown);
    pMVar20 = (MainActor *)&DAT_100530458;
    _swift_allocObject(&DAT_100530458,0x18,7);
    _swift_weakInit(pMVar20 + 0x10,unaff_x20);
    pMVar28 = Swift::MainActor::typeMetadataAccessor();
    puVar44 = PTR_typeMetadataAccessor_1005246d8;
    pMVar29 = pMVar20;
    _swift_retain();
    pMVar29 = Swift::MainActor::get_shared(pMVar28,pMVar29);
    puVar21 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar44,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar44 = &DAT_100530d90;
    _swift_allocObject(&DAT_100530d90,0x28,7);
    *(MainActor **)(puVar44 + 0x10) = pMVar29;
    *(undefined8 **)(puVar44 + 0x18) = puVar21;
    *(MainActor **)(puVar44 + 0x20) = pMVar20;
    _swift_release(pMVar20);
    uVar26 = 0;
    FUN_1001b1e74(0,0,lVar34,&DAT_10042a280,puVar44);
    _swift_bridgeObjectRelease(local_108);
    FUN_100029548(pdVar41,FUN_10015f8e8);
    FUN_100029548(pdVar36,FUN_10015f8e8);
    (**(code **)(lVar37 + 8))(lVar38,DVar13.unknown);
    uVar30 = *(undefined8 *)((long)unaff_x20 + lVar12);
    *(undefined8 *)((long)unaff_x20 + lVar12) = uVar26;
    goto LAB_100183784;
  }
  if (puVar44 != (undefined *)0x0) {
    TVar19.unknown = puVar44;
    _swift_retain();
    param_4.unknown = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100524068;
    Swift::Task::cancel(TVar19);
    _swift_release(puVar44);
  }
  puVar44 = &DAT_100429b98;
  _swift_getKeyPath(&DAT_100429b98);
  puVar14 = &DAT_100429bc0;
  _swift_getKeyPath(&DAT_100429bc0);
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44,puVar14);
  _swift_release(puVar44);
  _swift_release(puVar14);
  uVar10 = local_15c;
  if (((ulong)local_a8.unknown & 1) == 0) {
    puVar44 = &DAT_100429b98;
    _swift_getKeyPath(&DAT_100429b98);
    param_4.unknown = &DAT_100429bc0;
    _swift_getKeyPath();
    local_a8.unknown._0_1_ = 1;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript((Published *)param_4.unknown,&local_a8,unaff_x20,puVar44);
  }
  puVar44 = &DAT_100429be0;
  _swift_getKeyPath(&DAT_100429be0);
  puVar14 = &DAT_100429c08;
  _swift_getKeyPath(&DAT_100429c08);
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44,puVar14);
  _swift_release(puVar44);
  _swift_release(puVar14);
  if ((uint)(byte)local_a8.unknown != (uVar10 & 0xff)) {
    puVar44 = &DAT_100429be0;
    _swift_getKeyPath(&DAT_100429be0);
    param_4.unknown = &DAT_100429c08;
    _swift_getKeyPath();
    local_a8.unknown._0_1_ = (char)uVar10;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript((Published *)param_4.unknown,&local_a8,unaff_x20,puVar44);
  }
  puVar44 = &DAT_10042a288;
  _swift_getKeyPath(&DAT_10042a288);
  pcVar18 = &DAT_10042a2b0;
  _swift_getKeyPath();
  _Var43.unknown = pcVar18;
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44);
  _swift_release(puVar44);
  _swift_release(pcVar18);
  _Var31.unknown = local_a0.unknown;
  if (local_a0.unknown == (undefined *)0x0) {
    if (_Var47.unknown == (undefined *)0x0) goto LAB_10018381c;
LAB_1001837cc:
    _Var43.unknown = &DAT_10042a288;
    _swift_getKeyPath();
    param_4.unknown = &DAT_10042a2b0;
    _swift_getKeyPath();
    local_a8.unknown = _Var4.unknown;
    local_a0.unknown = _Var47.unknown;
    _swift_bridgeObjectRetain(_Var47.unknown);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript((Published *)param_4.unknown,&local_a8,unaff_x20);
  }
  else {
    if (_Var47.unknown == (undefined *)0x0) {
      _swift_bridgeObjectRelease();
      goto LAB_1001837cc;
    }
    if ((local_a8.unknown == _Var4.unknown) && (local_a0.unknown == _Var47.unknown)) {
      _swift_bridgeObjectRelease();
    }
    else {
      _Var43.unknown = _Var4.unknown;
      param_4.unknown = _Var47.unknown;
      bVar11 = Swift::_stringCompareWithSmolCheck
                         (local_a8,local_a0,(_StringComparisonResult)(__int8)_Var4.unknown);
      _swift_bridgeObjectRelease(_Var31.unknown);
      if (!bVar11) goto LAB_1001837cc;
    }
  }
LAB_10018381c:
  puVar44 = local_168;
  local_a8.unknown = (undefined *)0x0;
  local_a0.unknown = (undefined *)0xe000000000000000;
  _Var4.unknown = (char *)0x0;
  if (local_168 != (undefined *)0x0) {
    _Var4.unknown = local_150.unknown;
  }
  puVar14 = (undefined *)0xe000000000000000;
  if (local_168 != (undefined *)0x0) {
    puVar14 = local_168;
  }
  _swift_bridgeObjectRetain_n(local_168,2);
  SVar57.bridgeObject = puVar14;
  SVar57.str = _Var4.unknown;
  SVar60.bridgeObject = param_4.unknown;
  SVar60.str = _Var43.unknown;
  Swift::String::append(SVar57,SVar60);
  _swift_bridgeObjectRelease(puVar14);
  SVar58.bridgeObject = (void *)0xe100000000000000;
  SVar58.str = (char *)0x7c;
  SVar61.bridgeObject = param_4.unknown;
  SVar61.str = _Var43.unknown;
  Swift::String::append(SVar58,SVar61);
  pcVar5 = (char *)param_1[2];
  puVar14 = (undefined *)param_1[3];
  pcVar18 = (char *)0x0;
  if (puVar14 != (undefined *)0x0) {
    pcVar18 = pcVar5;
  }
  puVar16 = (undefined *)0xe000000000000000;
  if (puVar14 != (undefined *)0x0) {
    puVar16 = puVar14;
  }
  _swift_bridgeObjectRetain_n(puVar14,2);
  SVar59.bridgeObject = puVar16;
  SVar59.str = pcVar18;
  SVar62.bridgeObject = param_4.unknown;
  SVar62.str = _Var43.unknown;
  Swift::String::append(SVar59,SVar62);
  _swift_bridgeObjectRelease(puVar16);
  _Var47.unknown = local_a0.unknown;
  _Var4.unknown = local_a8.unknown;
  puVar17 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  puVar22 = &DAT_100429da0;
  _swift_getKeyPath(&DAT_100429da0);
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar17,puVar22);
  _swift_release(puVar17);
  _swift_release(puVar22);
  _Var43.unknown = local_a0.unknown;
  if (local_a0.unknown == (undefined *)0x0) {
    if (puVar44 == (undefined *)0x0) goto LAB_1001839b8;
LAB_100183960:
    puVar44 = &DAT_100429d78;
    _swift_getKeyPath(&DAT_100429d78);
    pPVar23 = (Published *)&DAT_100429da0;
    _swift_getKeyPath(&DAT_100429da0);
    puVar17 = local_168;
    local_a8.unknown = local_150.unknown;
    local_a0.unknown = local_168;
    _swift_retain(unaff_x20);
    _swift_bridgeObjectRetain(puVar17);
    Combine::Published::_set_subscript(pPVar23,&local_a8,unaff_x20,puVar44,pPVar23);
  }
  else {
    if (puVar44 == (undefined *)0x0) {
      _swift_bridgeObjectRelease();
      goto LAB_100183960;
    }
    if ((local_a8.unknown == local_150.unknown) && (local_a0.unknown == puVar44)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar11 = Swift::_stringCompareWithSmolCheck
                         (local_a8,local_a0,(_StringComparisonResult)(__int8)local_150.unknown);
      _swift_bridgeObjectRelease(_Var43.unknown);
      if (!bVar11) goto LAB_100183960;
    }
  }
LAB_1001839b8:
  puVar44 = &DAT_100429dc0;
  _swift_getKeyPath(&DAT_100429dc0);
  puVar17 = &DAT_100429de8;
  _swift_getKeyPath(&DAT_100429de8);
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44,puVar17);
  _swift_release(puVar44);
  _swift_release(puVar17);
  _Var43.unknown = local_a0.unknown;
  if (local_a0.unknown == (undefined *)0x0) {
    _Var43.unknown = puVar14;
    if (puVar14 == (undefined *)0x0) goto LAB_100183a80;
LAB_100183a34:
    _swift_bridgeObjectRelease(_Var43.unknown);
LAB_100183a38:
    puVar44 = &DAT_100429dc0;
    _swift_getKeyPath(&DAT_100429dc0);
    pPVar23 = (Published *)&DAT_100429de8;
    _swift_getKeyPath(&DAT_100429de8);
    local_a8.unknown = pcVar5;
    local_a0.unknown = puVar14;
    _swift_retain(unaff_x20);
    _swift_bridgeObjectRetain(puVar14);
    Combine::Published::_set_subscript(pPVar23,&local_a8,unaff_x20,puVar44,pPVar23);
  }
  else {
    if (puVar14 == (undefined *)0x0) goto LAB_100183a34;
    if ((local_a8.unknown != pcVar5) || (local_a0.unknown != puVar14)) {
      bVar11 = Swift::_stringCompareWithSmolCheck
                         (local_a8,local_a0,(_StringComparisonResult)(__int8)pcVar5);
      _swift_bridgeObjectRelease(_Var43.unknown);
      _swift_bridgeObjectRelease(puVar14);
      if (bVar11) goto LAB_100183a80;
      goto LAB_100183a38;
    }
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(puVar14);
  }
LAB_100183a80:
  puVar44 = &DAT_100429ed8;
  _swift_getKeyPath(&DAT_100429ed8);
  puVar17 = &DAT_100429f00;
  _swift_getKeyPath(&DAT_100429f00);
  Combine::Published::_get_subscript(&local_a8,unaff_x20,puVar44,puVar17);
  _swift_release(puVar44);
  _swift_release(puVar17);
  _Var43.unknown = local_a0.unknown;
  pNVar51 = (NSData *)param_1[4];
  pPVar23 = (Published *)param_1[5];
  if (local_a0.unknown == (undefined *)0x0) {
    if (pPVar23 == (Published *)0x0) goto LAB_100183bbc;
LAB_100183b68:
    puVar44 = &DAT_100429ed8;
    _swift_getKeyPath(&DAT_100429ed8);
    puVar17 = &DAT_100429f00;
    _swift_getKeyPath(&DAT_100429f00);
    local_a8.unknown = pNVar51;
    local_a0.unknown = (undefined *)pPVar23;
    _swift_bridgeObjectRetain(pPVar23);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar23,&local_a8,unaff_x20,puVar44,puVar17);
  }
  else {
    if (pPVar23 == (Published *)0x0) {
      _swift_bridgeObjectRelease();
      goto LAB_100183b68;
    }
    if (((NSData *)local_a8.unknown == pNVar51) && ((Published *)local_a0.unknown == pPVar23)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar11 = Swift::_stringCompareWithSmolCheck
                         (local_a8,local_a0,(_StringComparisonResult)(__int8)pNVar51);
      _swift_bridgeObjectRelease(_Var43.unknown);
      if (!bVar11) goto LAB_100183b68;
    }
  }
LAB_100183bbc:
  puVar44 = local_168;
  if (local_168 == (undefined *)0x0) {
LAB_100183c74:
    _swift_bridgeObjectRelease(_Var47.unknown);
    puVar44 = &DAT_100429f20;
    _swift_getKeyPath(&DAT_100429f20);
    pPVar23 = (Published *)&DAT_100429f48;
    _swift_getKeyPath(&DAT_100429f48);
    local_a8.unknown = (undefined *)0x0;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar23,&local_a8,unaff_x20,puVar44,pPVar23);
    puVar44 = &DAT_100429f68;
    _swift_getKeyPath(&DAT_100429f68);
    puVar14 = &DAT_100429f90;
    _swift_getKeyPath(&DAT_100429f90);
    p_Var24 = &local_a8;
    plVar33 = unaff_x20;
    Combine::Published::_modify_subscript();
    if (!SCARRY8(*plVar33,1)) {
      *plVar33 = *plVar33 + 1;
      (*(code *)p_Var24)(&local_a8,0);
      _swift_release(puVar44);
      _swift_release(puVar14);
      puVar44 = &DAT_100429ce8;
      _swift_getKeyPath(&DAT_100429ce8);
      pPVar23 = (Published *)&DAT_100429d10;
      _swift_getKeyPath(&DAT_100429d10);
      puVar14 = PTR___swiftEmptyArrayStorage_100524190;
      local_a8.unknown = PTR___swiftEmptyArrayStorage_100524190;
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(pPVar23,&local_a8,unaff_x20,puVar44,pPVar23);
      _swift_bridgeObjectRelease(local_108);
      FUN_100029548(pdVar41,FUN_10015f8e8);
      FUN_100029548(pdVar36,FUN_10015f8e8);
      (**(code **)(lVar37 + 8))(lVar38,DVar13.unknown);
      uVar26 = *(undefined8 *)
                ((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples);
      *(undefined **)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) =
           puVar14;
      _swift_bridgeObjectRelease(uVar26);
      return;
    }
                    /* WARNING: Does not return */
    pcVar39 = (code *)SoftwareBreakpoint(1,0x100184400);
    (*pcVar39)();
  }
  uVar7 = (ulong)local_150.unknown & 0xffffffffffff;
  if (((ulong)local_168 & 0x2000000000000000) != 0) {
    uVar7 = (ulong)local_168 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(_Var47.unknown);
    _Var47.unknown = puVar44;
    goto LAB_100183c74;
  }
  plVar33 = (long *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrLastTrackKey);
  if (((undefined *)plVar33[1] == (undefined *)0x0) ||
     (((_Var4.unknown != (undefined *)*plVar33 || ((undefined *)plVar33[1] != _Var47.unknown)) &&
      (bVar11 = Swift::_stringCompareWithSmolCheck
                          (_Var4,_Var47,(_StringComparisonResult)(__int8)(undefined *)*plVar33),
      !bVar11)))) {
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar15 + 0x34));
    DVar6.unknown = (undefined *)*param_1;
    uVar7 = param_1[1];
    _swift_bridgeObjectRetain(_Var47.unknown);
    if (uVar7 >> 0x3c < 0xf) {
      FUN_1001b0bb0(DVar6.unknown,uVar7);
      pNVar25 = Foundation::Data::_bridgeToObjectiveC(DVar6);
      _CGImageSourceCreateWithData(pNVar25,0);
      if ((pNVar25 != (NSData *)0x0) && (FUN_10010f93c(pNVar25,0x5dc), pNVar25 != (NSData *)0x0)) {
        _swift_bridgeObjectRelease(_Var47.unknown);
        puVar44 = *(undefined **)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkTask);
        if (puVar44 != (undefined *)0x0) {
          TVar19.unknown = puVar44;
          _swift_retain();
          Swift::Task::cancel(TVar19);
          _swift_release(puVar44);
        }
        puVar44 = *(undefined **)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkTask);
        if (puVar44 != (undefined *)0x0) {
          TVar19.unknown = puVar44;
          _swift_retain();
          Swift::Task::cancel(TVar19);
          _swift_release(puVar44);
        }
        lVar12 = plVar33[1];
        *plVar33 = (long)_Var4.unknown;
        plVar33[1] = (long)_Var47.unknown;
        _swift_bridgeObjectRetain(_Var47.unknown);
        _swift_bridgeObjectRelease(lVar12);
        *(undefined1 *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrShowingMusic) = 1;
        puVar21 = (undefined8 *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkKey);
        uVar26 = puVar21[1];
        *puVar21 = _Var4.unknown;
        puVar21[1] = _Var47.unknown;
        _swift_bridgeObjectRelease(uVar26);
        _swift_getKeyPath(&DAT_100429f20);
        _swift_getKeyPath(&DAT_100429f48);
        local_a8.unknown = pNVar25;
        _swift_retain(unaff_x20);
        Combine::Published::_set_subscript();
        puVar44 = &DAT_100429f68;
        _swift_getKeyPath(&DAT_100429f68);
        puVar17 = &DAT_100429f90;
        _swift_getKeyPath(&DAT_100429f90);
        p_Var24 = &local_a8;
        Combine::Published::_modify_subscript();
        if (SCARRY8(*unaff_x20,1)) {
                    /* WARNING: Does not return */
          pcVar39 = (code *)SoftwareBreakpoint(1,0x100184404);
          (*pcVar39)();
        }
        *unaff_x20 = *unaff_x20 + 1;
        (*(code *)p_Var24)(&local_a8,0);
        _swift_release(puVar44);
        _swift_release(puVar17);
        pNVar2 = (NSData *)0x0;
        if (pPVar23 != (Published *)0x0) {
          pNVar2 = pNVar51;
        }
        pPVar3 = (Published *)0xe000000000000000;
        if (pPVar23 != (Published *)0x0) {
          pPVar3 = pPVar23;
        }
        _swift_bridgeObjectRetain(puVar14);
        _swift_bridgeObjectRetain(pPVar23);
        puVar44 = local_168;
        FUN_10009e814(local_150.unknown,local_168,pcVar18,puVar16,pNVar2,pPVar3,pNVar25);
        _swift_bridgeObjectRelease(puVar44);
        _swift_bridgeObjectRelease(puVar16);
        _swift_bridgeObjectRelease(pPVar3);
        FUN_100184828(pNVar25);
        FUN_1000a3004(DVar6.unknown,uVar7);
        _swift_bridgeObjectRelease(local_108);
        FUN_100029548(pdVar41,FUN_10015f8e8);
        FUN_100029548(pdVar36,FUN_10015f8e8);
        pcVar39 = *(code **)(lVar37 + 8);
        goto LAB_1001841d4;
      }
      FUN_1000a3004(DVar6.unknown,uVar7);
    }
    puVar21 = (undefined8 *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkWaitKey);
    _Var43.unknown = (undefined *)puVar21[1];
    if ((_Var43.unknown == (undefined *)0x0) ||
       ((((undefined *)*puVar21 != _Var4.unknown || (_Var43.unknown != _Var47.unknown)) &&
        (bVar11 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar21,_Var43,
                             (_StringComparisonResult)(__int8)_Var4.unknown), !bVar11)))) {
      *puVar21 = _Var4.unknown;
      puVar21[1] = _Var47.unknown;
      _swift_bridgeObjectRelease(_Var43.unknown);
      lVar12 = _TtC7Wallper17NowPlayingManager::mrArtworkTask;
      puVar44 = *(undefined **)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkTask);
      if (puVar44 != (undefined *)0x0) {
        TVar19.unknown = puVar44;
        _swift_retain();
        Swift::Task::cancel(TVar19);
        _swift_release(puVar44);
      }
      pNVar25 = (NSData *)0x0;
      if (pPVar23 != (Published *)0x0) {
        pNVar25 = pNVar51;
      }
      pPVar3 = (Published *)0xe000000000000000;
      if (pPVar23 != (Published *)0x0) {
        pPVar3 = pPVar23;
      }
      TVar27 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar27.unknown + -8) + 0x38))(lVar34,1,1,TVar27.unknown);
      pMVar20 = (MainActor *)&DAT_100530458;
      _swift_allocObject(&DAT_100530458,0x18,7);
      _swift_weakInit(pMVar20 + 0x10,unaff_x20);
      pMVar28 = Swift::MainActor::typeMetadataAccessor();
      _swift_bridgeObjectRetain(puVar14);
      _swift_bridgeObjectRetain(pPVar23);
      pMVar29 = pMVar20;
      _swift_retain();
      pMVar29 = Swift::MainActor::get_shared(pMVar28,pMVar29);
      puVar21 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar44 = &DAT_100530db8;
      _swift_allocObject(&DAT_100530db8,0x68,7);
      *(MainActor **)(puVar44 + 0x10) = pMVar29;
      *(undefined8 **)(puVar44 + 0x18) = puVar21;
      *(MainActor **)(puVar44 + 0x20) = pMVar20;
      *(undefined **)(puVar44 + 0x28) = _Var4.unknown;
      *(undefined **)(puVar44 + 0x30) = _Var47.unknown;
      *(undefined **)(puVar44 + 0x38) = local_150.unknown;
      *(undefined **)(puVar44 + 0x40) = local_168;
      *(char **)(puVar44 + 0x48) = pcVar18;
      *(undefined **)(puVar44 + 0x50) = puVar16;
      *(NSData **)(puVar44 + 0x58) = pNVar25;
      *(Published **)(puVar44 + 0x60) = pPVar3;
      _swift_release(pMVar20);
      uVar26 = 0;
      FUN_1001b1e74(0,0,lVar34,&DAT_10042a2d8,puVar44);
      _swift_bridgeObjectRelease(local_108);
      FUN_100029548(pdVar41,FUN_10015f8e8);
      FUN_100029548(pdVar36,FUN_10015f8e8);
      (**(code **)(lVar37 + 8))(lVar38,DVar13.unknown);
      uVar30 = *(undefined8 *)((long)unaff_x20 + lVar12);
      *(undefined8 *)((long)unaff_x20 + lVar12) = uVar26;
LAB_100183784:
      _swift_release(uVar30);
      return;
    }
    _swift_bridgeObjectRelease(local_108);
    _swift_bridgeObjectRelease_n(_Var47.unknown,2);
    local_108 = local_168;
  }
  else {
    _swift_bridgeObjectRelease(_Var47.unknown);
    _swift_bridgeObjectRelease(local_168);
    lVar12 = _TtC7Wallper17NowPlayingManager::mrShowingMusic;
    if ((*(byte *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mrShowingMusic) & 1) == 0) {
      if (*(long *)(*(long *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples
                             ) + 0x10) == 0x10) {
        FUN_1001790d4(1);
        _swift_bridgeObjectRelease(local_108);
        FUN_100029548(pdVar41,FUN_10015f8e8);
        FUN_100029548(pdVar36,FUN_10015f8e8);
        (**(code **)(lVar37 + 8))(lVar38,DVar13.unknown);
        *(undefined1 *)((long)unaff_x20 + lVar12) = 1;
        return;
      }
      _swift_bridgeObjectRelease(local_108);
      FUN_100029548(pdVar41,FUN_10015f8e8);
      FUN_100029548(pdVar36,FUN_10015f8e8);
      pcVar39 = *(code **)(lVar37 + 8);
      goto LAB_1001841d4;
    }
  }
  _swift_bridgeObjectRelease(local_108);
  FUN_100029548(pdVar41,FUN_10015f8e8);
  FUN_100029548(pdVar36,FUN_10015f8e8);
  pcVar39 = *(code **)(lVar37 + 8);
LAB_1001841d4:
  (*pcVar39)(lVar38,DVar13.unknown);
  return;
}

