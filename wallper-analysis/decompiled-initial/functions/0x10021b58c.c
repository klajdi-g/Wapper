// rea decompile_all
// name: FUN_10021b58c
// address: 0x10021b58c
// body: available
// range: 0x10021b58c-0x10021d70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10021b58c(long param_1)

{
  String *pSVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  bool bVar6;
  CharacterSet CVar7;
  long lVar8;
  UUID UVar9;
  undefined *puVar10;
  _ArrayBuffer _Var11;
  ID self;
  Dictionary<undefined,undefined> DVar12;
  undefined8 uVar13;
  ID *pIVar14;
  UUID UVar15;
  undefined7 extraout_var;
  ID IVar16;
  NSString *pNVar17;
  NSString *pNVar18;
  long lVar19;
  URL UVar20;
  TaskPriority TVar21;
  MainActor *pMVar22;
  MainActor *pMVar23;
  MainActor *pMVar24;
  undefined8 *puVar25;
  uint uVar26;
  _StringGuts _Var27;
  void *pvVar28;
  CharacterSet CVar29;
  void *pvVar30;
  _StringComparisonResult expecting;
  long extraout_x8;
  long lVar31;
  long extraout_x8_00;
  CharacterSet in;
  long lVar32;
  undefined *puVar33;
  long lVar34;
  long extraout_x8_01;
  ulong uVar35;
  long extraout_x8_02;
  long lVar36;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  char *pcVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
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
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x13;
  long extraout_x13_00;
  long lVar41;
  long unaff_x20;
  Published *pPVar42;
  _StringGuts _Var43;
  long lVar44;
  code *pcVar45;
  code *pcVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  char *pcVar50;
  String SVar51;
  String SVar52;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  ulong local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  code *local_108;
  code *local_100;
  undefined *local_f8;
  ID local_98;
  String local_90;
  undefined8 uStack_80;
  long local_78;
  undefined *local_70;
  
  puVar33 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar33 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_180 = (long)&local_1e0 - extraout_x8;
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar31 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  in.unknown = (undefined *)
               (((long)&local_1e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar8 = 0;
  FUN_10040211c();
  lVar32 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)in.unknown - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  local_110 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar33 = (undefined *)(lVar8 - extraout_x12_00);
  local_118 = puVar33;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = (long)puVar33 - extraout_x12_01;
  local_1e0 = lVar34;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar34 - extraout_x12_02;
  local_1d8 = extraout_x13_00;
  local_1d0 = lVar34;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar34 - extraout_x12_03;
  puVar33 = &DAT_100553d90;
  local_160 = lVar34;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar33 + -8) + 0x40));
  lVar34 = lVar34 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = lVar34;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar34 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1b0 = lVar34 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (lVar34 - extraout_x12_05) - extraout_x12_06;
  local_198 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar35 = lVar8 - extraout_x12_07;
  local_190 = uVar35;
  local_128 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_148 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar8 = uVar35 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar33 = (undefined *)(lVar8 - extraout_x12_08);
  local_1a0 = puVar33;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = (long)puVar33 - extraout_x12_09;
  local_1b8 = lVar36;
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar44 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar44 + 0x40));
  lVar36 = lVar36 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar33 = &DAT_10054a9c0;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar33 + -8) + 0x40));
  lVar38 = lVar36 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar38;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar38 - extraout_x12_10;
  local_158 = lVar38;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar38 - extraout_x12_11;
  local_150 = lVar38;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar38 - extraout_x12_12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar48 = lVar38 - extraout_x12_13;
  puVar10 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar39 = lVar48 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_178 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_14;
  local_140 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_15;
  local_168 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_16;
  local_120 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_17;
  local_188 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_18;
  local_130 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_19;
  local_170 = lVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar39 - extraout_x12_20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar49 = lVar39 - extraout_x12_21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar49 - extraout_x12_22;
  local_100 = *(code **)(lVar44 + 0x38);
  (*local_100)(lVar41,1,1,UVar9.unknown);
  lVar8 = (long)*(int *)(puVar33 + 0x30);
  local_f8 = puVar33;
  FUN_1000087e4(param_1,lVar48,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar41,lVar48 + lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar45 = *(code **)(lVar44 + 0x30);
  lVar19 = lVar48;
  (*pcVar45)(lVar48,1,UVar9.unknown);
  local_108 = pcVar45;
  if ((int)lVar19 == 1) {
    FUN_10002a29c(lVar41,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar8 = lVar48 + lVar8;
    (*pcVar45)(lVar8,1,UVar9.unknown);
    if ((int)lVar8 != 1) {
LAB_10021bc48:
      FUN_10002a29c(lVar48,&DAT_10054a9c0,&DAT_100422d20);
      goto LAB_10021bc64;
    }
    FUN_10002a29c(lVar48,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    FUN_1000087e4(lVar48,lVar49,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar19 = lVar48 + lVar8;
    (*pcVar45)(lVar19,1,UVar9.unknown);
    if ((int)lVar19 == 1) {
      FUN_10002a29c(lVar41,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar44 + 8))(lVar49,UVar9.unknown);
      goto LAB_10021bc48;
    }
    (**(code **)(lVar44 + 0x20))(lVar36,lVar48 + lVar8,UVar9.unknown);
    puVar33 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar6 = Swift::Equatable::___infix(lVar49,lVar36,UVar9.unknown,puVar33);
    pcVar45 = local_108;
    pcVar46 = *(code **)(lVar44 + 8);
    (*pcVar46)(lVar36,UVar9.unknown);
    FUN_10002a29c(lVar41,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar46)(lVar49,UVar9.unknown);
    FUN_10002a29c(lVar48,&DAT_10054a9c8,&DAT_10041bbe0);
    if (bVar6) goto LAB_10021be98;
LAB_10021bc64:
    IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar16 = NSUserDefaults::stringForKey_(IVar16,pNVar17);
    if (IVar16 == 0) {
      if (DAT_1005564c0 != -1) {
        _swift_once(&DAT_1005564c0,FUN_10017806c);
      }
      uVar35 = local_190;
      FUN_10017cd70(local_190);
      puVar33 = local_128;
      lVar19 = local_148;
      uVar47 = uVar35;
      (**(code **)(local_148 + 0x30))(uVar35,1,local_128);
      lVar8 = local_1b8;
      if ((int)uVar47 == 1) {
        FUN_10002a29c(uVar35,&DAT_100553d90,&DAT_10041bf10);
      }
      else {
        (**(code **)(lVar19 + 0x20))(local_1b8,uVar35,puVar33);
        UVar20.unknown =
             (undefined *)NSUserDefaults::standardUserDefaults(&_OBJC_CLASS___NSUserDefaults);
        SVar51 = Foundation::URL::get_absoluteString(UVar20);
        pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar51.bridgeObject);
        pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        NSUserDefaults::setObject_forKey_((ID)UVar20.unknown,pNVar17,pNVar18);
        (**(code **)(lVar19 + 8))(lVar8,local_128);
      }
    }
  }
LAB_10021be98:
  (*local_100)(lVar39,1,1,UVar9.unknown);
  lVar8 = (long)*(int *)(local_f8 + 0x30);
  FUN_1000087e4(param_1,lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar39,lVar38 + lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  lVar41 = lVar38;
  (*pcVar45)(lVar38,1,UVar9.unknown);
  lVar19 = local_170;
  if ((int)lVar41 == 1) {
    FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar8 = lVar38 + lVar8;
    (*pcVar45)(lVar8,1,UVar9.unknown);
    if ((int)lVar8 != 1) {
LAB_10021bfcc:
      FUN_10002a29c(lVar38,&DAT_10054a9c0,&DAT_100422d20);
      lVar8 = local_130;
      goto LAB_10021bfec;
    }
    FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_10021c4fc:
    lVar8 = local_130;
    lVar19 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager;
    _swift_weakLoadStrong();
    if (lVar19 != 0) {
      puVar33 = &DAT_10042b460;
      _swift_getKeyPath(&DAT_10042b460);
      puVar10 = &DAT_10042b488;
      _swift_getKeyPath(&DAT_10042b488);
      Combine::Published::_get_subscript(&local_90,lVar19,puVar33,puVar10);
      _swift_release(puVar33);
      _swift_release(puVar10);
      _swift_release(lVar19);
      if (((byte)local_90.str & 1) == 0) goto LAB_10021bfec;
    }
  }
  else {
    FUN_1000087e4(lVar38,local_170,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar41 = lVar38 + lVar8;
    (*pcVar45)(lVar41,1,UVar9.unknown);
    if ((int)lVar41 == 1) {
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar44 + 8))(lVar19,UVar9.unknown);
      goto LAB_10021bfcc;
    }
    (**(code **)(lVar44 + 0x20))(lVar36,lVar38 + lVar8,UVar9.unknown);
    puVar33 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar6 = Swift::Equatable::___infix(lVar19,lVar36,UVar9.unknown,puVar33);
    pcVar45 = local_108;
    pcVar46 = *(code **)(lVar44 + 8);
    (*pcVar46)(lVar36,UVar9.unknown);
    FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar46)(lVar19,UVar9.unknown);
    FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar8 = local_130;
    if (bVar6) goto LAB_10021c4fc;
LAB_10021bfec:
    local_130 = _TtC7Wallper19ShuffleQueueManager::activatingSource;
    *(undefined1 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::activatingSource) = 1;
    if (DAT_1005564c0 != -1) {
      _swift_once(&DAT_1005564c0,FUN_10017806c);
    }
    local_170 = DAT_100577cc0;
    (*local_100)(lVar8,1,1,UVar9.unknown);
    lVar39 = local_150;
    lVar19 = (long)*(int *)(local_f8 + 0x30);
    FUN_1000087e4(param_1,local_150,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar8,lVar39 + lVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar41 = lVar39;
    (*pcVar45)(lVar39,1,UVar9.unknown);
    lVar38 = local_188;
    if ((int)lVar41 == 1) {
      FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar19 = lVar39 + lVar19;
      (*pcVar45)(lVar19,1,UVar9.unknown);
      if ((int)lVar19 != 1) {
LAB_10021c150:
        FUN_10002a29c(lVar39,&DAT_10054a9c0,&DAT_100422d20);
        goto LAB_10021c168;
      }
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
      puVar33 = PTR___swiftEmptySetSingleton_1005241a0;
      lVar8 = local_120;
    }
    else {
      FUN_1000087e4(lVar39,local_188,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar41 = lVar39 + lVar19;
      (*pcVar45)(lVar41,1,UVar9.unknown);
      if ((int)lVar41 == 1) {
        FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(lVar44 + 8))(lVar38,UVar9.unknown);
        goto LAB_10021c150;
      }
      (**(code **)(lVar44 + 0x20))(lVar36,lVar39 + lVar19,UVar9.unknown);
      puVar33 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar6 = Swift::Equatable::___infix(lVar38,lVar36,UVar9.unknown,puVar33);
      local_190 = CONCAT44(local_190._4_4_,(int)CONCAT71(extraout_var,bVar6));
      pcVar45 = *(code **)(lVar44 + 8);
      (*pcVar45)(lVar36,UVar9.unknown);
      FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar45)(lVar38,UVar9.unknown);
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
      puVar33 = PTR___swiftEmptySetSingleton_1005241a0;
      lVar8 = local_120;
      if ((local_190 & 1) != 0) goto LAB_10021c690;
LAB_10021c168:
      _Var11.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var11.unknown >> 0x3e == 0) {
        uVar35 = *(ulong *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
        if (uVar35 == 0) goto LAB_10021c664;
LAB_10021c1c8:
        local_70 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,uVar35 & ((long)uVar35 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar35 < 0) {
                    /* WARNING: Does not return */
          pcVar45 = (code *)SoftwareBreakpoint(1,0x10021d6e0);
          (*pcVar45)();
        }
        IVar16 = 0;
        do {
          puVar33 = local_70;
          if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
            self = *(ID *)(_Var11.unknown + IVar16 * 8 + 0x20);
          }
          else {
            self = IVar16;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar16,_Var11);
          }
          objc_stub::deviceDescription(self);
          FUN_100008054(0);
          FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c)
          ;
          DVar12 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC
                             ();
          uVar47 = 0;
          pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          if (*(long *)(DVar12.unknown + 0x10) == 0) {
LAB_10021c2f0:
            local_90 = (String)ZEXT816(0);
            local_78 = 0;
            uStack_80 = 0;
          }
          else {
            _swift_bridgeObjectRetain(DVar12.unknown);
            thunk_FUN_1000046e0(pNVar17);
            if ((uVar47 & 1) == 0) {
              _swift_bridgeObjectRelease(DVar12.unknown);
              goto LAB_10021c2f0;
            }
            FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar17 * 0x20,&local_90);
            _swift_bridgeObjectRelease(DVar12.unknown);
          }
          _swift_bridgeObjectRelease(DVar12.unknown);
          if (local_78 == 0) {
            FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
LAB_10021c3a0:
            UVar15 = Foundation::UUID::init();
            SVar51 = Foundation::UUID::get_uuidString(UVar15);
            (**(code **)(lVar44 + 8))(lVar36,UVar9.unknown);
          }
          else {
            uVar13 = 0;
            FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
            pIVar14 = &local_98;
            _swift_dynamicCast(pIVar14,&local_90,PTR___type_metadata_for_Any_100524178 + 8,uVar13,6)
            ;
            if (((ulong)pIVar14 & 1) == 0) goto LAB_10021c3a0;
            objc_stub::stringValue(local_98);
            SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          uVar47 = *(ulong *)(puVar33 + 0x10);
          local_70 = puVar33;
          if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar47) {
            FUN_1001c5bc4(1 < *(ulong *)(puVar33 + 0x18),uVar47 + 1,1);
          }
          puVar10 = local_70;
          IVar16 = IVar16 + 1;
          *(ulong *)(local_70 + 0x10) = uVar47 + 1;
          *(String *)(local_70 + uVar47 * 0x10 + 0x20) = SVar51;
        } while (uVar35 != IVar16);
        _swift_bridgeObjectRelease(_Var11.unknown);
      }
      else {
        _Var2.unknown = _Var11.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
          _Var2.unknown = _Var11.unknown;
        }
        uVar35 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        if (uVar35 != 0) goto LAB_10021c1c8;
LAB_10021c664:
        _swift_bridgeObjectRelease(_Var11.unknown);
        puVar10 = PTR___swiftEmptyArrayStorage_100524190;
      }
      lVar8 = local_120;
      puVar33 = puVar10;
      FUN_10020c98c(puVar10);
      _swift_bridgeObjectRelease(puVar10);
    }
LAB_10021c690:
    (*local_100)(lVar8,1,1,UVar9.unknown);
    lVar39 = local_158;
    lVar19 = (long)*(int *)(local_f8 + 0x30);
    FUN_1000087e4(param_1,local_158,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar8,lVar39 + lVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar45 = local_108;
    lVar41 = lVar39;
    (*local_108)(lVar39,1,UVar9.unknown);
    lVar38 = local_168;
    if ((int)lVar41 == 1) {
      FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar19 = lVar39 + lVar19;
      (*pcVar45)(lVar19,1,UVar9.unknown);
      if ((int)lVar19 != 1) {
LAB_10021c7c8:
        FUN_10002a29c(lVar39,&DAT_10054a9c0,&DAT_100422d20);
        goto LAB_10021c7e0;
      }
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
      uVar26 = 1;
    }
    else {
      FUN_1000087e4(lVar39,local_168,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar8 = lVar39 + lVar19;
      (*pcVar45)(lVar8,1,UVar9.unknown);
      if ((int)lVar8 == 1) {
        FUN_10002a29c(local_120,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(lVar44 + 8))(lVar38,UVar9.unknown);
        goto LAB_10021c7c8;
      }
      (**(code **)(lVar44 + 0x20))(lVar36,lVar39 + lVar19,UVar9.unknown);
      puVar10 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar6 = Swift::Equatable::___infix(lVar38,lVar36,UVar9.unknown,puVar10);
      pcVar45 = *(code **)(lVar44 + 8);
      (*pcVar45)(lVar36,UVar9.unknown);
      FUN_10002a29c(local_120,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar45)(local_168,UVar9.unknown);
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
      if (bVar6) {
        uVar26 = 1;
        pcVar45 = local_108;
        goto LAB_10021c848;
      }
LAB_10021c7e0:
      IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar16 = NSUserDefaults::boolForKey_(IVar16,pNVar17);
      uVar26 = (uint)IVar16 ^ 1;
      pcVar45 = local_108;
    }
LAB_10021c848:
    FUN_10017d0ac(puVar33,uVar26);
    _swift_bridgeObjectRelease(puVar33);
    *(undefined1 *)(unaff_x20 + local_130) = 0;
  }
  lVar38 = local_140;
  (*local_100)(local_140,1,1,UVar9.unknown);
  lVar39 = local_138;
  lVar8 = (long)*(int *)(local_f8 + 0x30);
  FUN_1000087e4(param_1,local_138,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar38,lVar39 + lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  lVar41 = lVar39;
  (*pcVar45)(lVar39,1,UVar9.unknown);
  lVar19 = local_178;
  if ((int)lVar41 == 1) {
    FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar8 = lVar39 + lVar8;
    (*pcVar45)(lVar8,1,UVar9.unknown);
    if ((int)lVar8 == 1) {
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_10021cae8:
      FUN_100219cf4(1);
      IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar16 = NSUserDefaults::stringForKey_(IVar16,pNVar17);
      if (IVar16 == 0) {
        return;
      }
      SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      lVar19 = local_1a8;
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(SVar51.bridgeObject);
      puVar33 = local_128;
      lVar31 = local_148;
      lVar32 = lVar19;
      (**(code **)(local_148 + 0x30))(lVar19,1,local_128);
      lVar8 = local_1c0;
      if ((int)lVar32 == 1) {
        FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
        return;
      }
      (**(code **)(lVar31 + 0x20))(local_1c0,lVar19,puVar33);
      IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::removeObjectForKey_(IVar16,pNVar17);
      FUN_10021f34c(lVar8);
      (**(code **)(lVar31 + 8))(lVar8,puVar33);
      return;
    }
LAB_10021c9a8:
    FUN_10002a29c(lVar39,&DAT_10054a9c0,&DAT_100422d20);
  }
  else {
    FUN_1000087e4(lVar39,local_178,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar41 = lVar39 + lVar8;
    (*pcVar45)(lVar41,1,UVar9.unknown);
    if ((int)lVar41 == 1) {
      FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar44 + 8))(lVar19,UVar9.unknown);
      goto LAB_10021c9a8;
    }
    (**(code **)(lVar44 + 0x20))(lVar36,lVar39 + lVar8,UVar9.unknown);
    puVar33 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar6 = Swift::Equatable::___infix(lVar19,lVar36,UVar9.unknown,puVar33);
    pcVar45 = *(code **)(lVar44 + 8);
    (*pcVar45)(lVar36,UVar9.unknown);
    FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar45)(lVar19,UVar9.unknown);
    FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
    if (bVar6) goto LAB_10021cae8;
  }
  IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar16 = NSUserDefaults::stringForKey_(IVar16,pNVar17);
  if (IVar16 != 0) goto LAB_10021cf58;
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  lVar8 = local_1b0;
  FUN_10017cd70(local_1b0);
  FUN_100007e1c(lVar8,lVar34,&DAT_100553d90,&DAT_10041bf10);
  puVar33 = local_128;
  lVar19 = local_148;
  pcVar45 = *(code **)(local_148 + 0x30);
  lVar36 = lVar34;
  (*pcVar45)(lVar34,1,local_128);
  lVar8 = local_198;
  if ((int)lVar36 == 1) {
    FUN_10021d764(local_198);
    puVar33 = local_128;
    lVar19 = lVar34;
    (*pcVar45)(lVar34,1,local_128);
    if ((int)lVar19 != 1) {
      FUN_10002a29c(lVar34,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    (**(code **)(lVar19 + 0x20))(local_198,lVar34,puVar33);
    (**(code **)(lVar19 + 0x38))(lVar8,0,1,puVar33);
  }
  lVar19 = lVar8;
  (*pcVar45)(lVar8,1,puVar33);
  if ((int)lVar19 == 1) {
    FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
    goto LAB_10021cf58;
  }
  UVar20.unknown = local_1a0;
  (**(code **)(local_148 + 0x20))(local_1a0,lVar8,puVar33);
  SVar51 = Foundation::URL::get_absoluteString(UVar20);
  _Var27.unknown = SVar51.bridgeObject;
  if ((SVar51.str == (undefined *)0xd00000000000001c) &&
     (_Var27.unknown == (undefined *)0x80000001004dc890)) {
    _swift_bridgeObjectRelease(0x80000001004dc890);
LAB_10021ceb4:
    pcVar45 = *(code **)(local_148 + 8);
    puVar33 = local_1a0;
  }
  else {
    bVar6 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar51.str,_Var27,(_StringComparisonResult)0x1c);
    _swift_bridgeObjectRelease(_Var27.unknown);
    if (bVar6) goto LAB_10021ceb4;
    UVar20.unknown =
         (undefined *)NSUserDefaults::standardUserDefaults(&_OBJC_CLASS___NSUserDefaults);
    puVar33 = local_1a0;
    SVar51 = Foundation::URL::get_absoluteString(UVar20);
    pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar51.bridgeObject);
    pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_((ID)UVar20.unknown,pNVar17,pNVar18);
    pcVar45 = *(code **)(local_148 + 8);
  }
  (*pcVar45)(puVar33,local_128);
LAB_10021cf58:
  lVar8 = local_160;
  FUN_100219cf4(0);
  lVar19 = 0;
  FUN_1001b7b68();
  pSVar1 = (String *)(param_1 + *(int *)(lVar19 + 0x14));
  pvVar30 = pSVar1->bridgeObject;
  SVar51 = *pSVar1;
  expecting.value = (__int8)pSVar1->str;
  if (pvVar30 == (void *)0x0) {
    pcVar50 = (char *)0x0;
    pPVar42 = (Published *)0x0;
  }
  else {
    puVar33 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar10 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(&local_90,unaff_x20,puVar33,puVar10);
    _swift_release(puVar33);
    _swift_release(puVar10);
    pcVar5 = local_90.str;
    pcVar37 = *(char **)(local_90.str + 0x10);
    pcVar50 = (char *)0x0;
    if (pcVar37 == (char *)0x0) {
      pPVar42 = (Published *)0x0;
    }
    else {
      bVar4 = *(byte *)(lVar32 + 0x50);
      do {
        if (*(char **)(pcVar5 + 0x10) <= pcVar50) {
                    /* WARNING: Does not return */
          pcVar45 = (code *)SoftwareBreakpoint(1,0x10021d6d8);
          (*pcVar45)();
        }
        UVar20.unknown =
             pcVar5 + *(long *)(lVar32 + 0x48) * (long)pcVar50 +
                      ((ulong)bVar4 + 0x20 & ((ulong)bVar4 ^ 0xffffffffffffffff));
        FUN_10002f154(UVar20.unknown,lVar8);
        local_90 = Foundation::URL::get_lastPathComponent(UVar20);
        pvVar28 = local_90.bridgeObject;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_90.str);
        FUN_100026df4();
        SVar52 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        CVar29.unknown = SVar52.bridgeObject;
        pcVar45 = *(code **)(lVar31 + 8);
        (*pcVar45)(in.unknown,CVar7.unknown);
        _swift_bridgeObjectRelease(pvVar28);
        uVar35 = (ulong)SVar52.str & 0xffffffffffff;
        if (((ulong)CVar29.unknown & 0x2000000000000000) != 0) {
          uVar35 = (ulong)CVar29.unknown >> 0x38 & 0xf;
        }
        if (uVar35 == 0) {
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar29);
          SVar52 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          (*pcVar45)(in.unknown,CVar7.unknown);
        }
        _Var27.unknown = SVar52.bridgeObject;
        if (SVar52 == SVar51) {
          _swift_bridgeObjectRelease(_Var27.unknown);
          FUN_100029548(lVar8,FUN_10040211c);
          pPVar42 = (Published *)0x1;
          goto LAB_10021d184;
        }
        bVar6 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar52.str,_Var27,expecting);
        pPVar42 = (Published *)(ulong)bVar6;
        _swift_bridgeObjectRelease(_Var27.unknown);
        FUN_100029548(lVar8,FUN_10040211c);
        if (bVar6) goto LAB_10021d184;
        pcVar50 = pcVar50 + 1;
      } while (pcVar37 != pcVar50);
      pcVar50 = (char *)0x0;
    }
LAB_10021d184:
    _swift_bridgeObjectRelease(pcVar5);
  }
  puVar33 = &DAT_10042b4f8;
  _swift_getKeyPath(&DAT_10042b4f8);
  puVar10 = &DAT_10042b520;
  _swift_getKeyPath(&DAT_10042b520);
  local_90.str = pcVar50;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar42,&local_90,unaff_x20,puVar33,puVar10);
  if ((pvVar30 != (void *)0x0) && (((ulong)pPVar42 & 1) == 0)) {
    lVar8 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
    _swift_weakLoadStrong();
    if (lVar8 != 0) {
      puVar33 = &DAT_10042b700;
      _swift_getKeyPath(&DAT_10042b700);
      puVar10 = &DAT_10042b728;
      _swift_getKeyPath(&DAT_10042b728);
      Combine::Published::_get_subscript(&local_90,lVar8,puVar33,puVar10);
      _swift_release(puVar33);
      _swift_release(puVar10);
      _swift_release(lVar8);
      _Var27.unknown = local_90.str;
      uVar35 = *(ulong *)(local_90.str + 0x10);
      if (uVar35 != 0) {
        uVar47 = 0;
        uVar40 = (ulong)*(byte *)(lVar32 + 0x50);
        local_f8 = (undefined *)~uVar40;
        lVar8 = local_110;
        do {
          UVar20.unknown = local_118;
          if (*(ulong *)(_Var27.unknown + 0x10) <= uVar47) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10021d6dc);
            (*pcVar45)();
          }
          FUN_10002f154(_Var27.unknown +
                        *(long *)(lVar32 + 0x48) * uVar47 +
                        (uVar40 + 0x20 & (uVar40 ^ 0xffffffffffffffff)),local_118);
          FUN_100007e64(UVar20.unknown,lVar8,FUN_10040211c);
          local_90 = Foundation::URL::get_lastPathComponent(UVar20);
          pvVar30 = local_90.bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_90.str);
          FUN_100026df4();
          SVar52 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          CVar29.unknown = SVar52.bridgeObject;
          pcVar45 = *(code **)(lVar31 + 8);
          (*pcVar45)(in.unknown,CVar7.unknown);
          _swift_bridgeObjectRelease(pvVar30);
          uVar3 = (ulong)SVar52.str & 0xffffffffffff;
          if (((ulong)CVar29.unknown & 0x2000000000000000) != 0) {
            uVar3 = (ulong)CVar29.unknown >> 0x38 & 0xf;
          }
          if (uVar3 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar29);
            SVar52 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            (*pcVar45)(in.unknown,CVar7.unknown);
          }
          _Var43.unknown = SVar52.bridgeObject;
          if (SVar52 == SVar51) {
            _swift_bridgeObjectRelease(_Var27.unknown);
            _Var27.unknown = _Var43.unknown;
LAB_10021d564:
            _swift_bridgeObjectRelease(_Var27.unknown);
            lVar8 = local_1e0;
            FUN_100007e64(local_110,local_1e0,FUN_10040211c);
            lVar19 = local_1d0;
            FUN_100007e64(lVar8,local_1d0,FUN_10040211c);
            TVar21 = Swift::TaskPriority::typeMetadataAccessor();
            lVar31 = local_180;
            (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(local_180,1,1,TVar21.unknown);
            pMVar24 = (MainActor *)&DAT_1005333a8;
            _swift_allocObject(&DAT_1005333a8,0x18,7);
            _swift_weakInit(pMVar24 + 0x10,unaff_x20);
            lVar8 = local_1c8;
            FUN_10002f154(lVar19,local_1c8);
            pMVar22 = Swift::MainActor::typeMetadataAccessor();
            puVar33 = PTR_typeMetadataAccessor_1005246d8;
            pMVar23 = pMVar24;
            _swift_retain();
            pMVar23 = Swift::MainActor::get_shared(pMVar22,pMVar23);
            puVar25 = &DAT_100558b80;
            FUN_1000036d0(&DAT_100558b80,puVar33,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0
                         );
            uVar35 = uVar40 + 0x28 & (ulong)local_f8;
            puVar33 = &DAT_1005337e0;
            _swift_allocObject(&DAT_1005337e0,uVar35 + local_1d8,uVar40 | 7);
            *(MainActor **)(puVar33 + 0x10) = pMVar23;
            *(undefined8 **)(puVar33 + 0x18) = puVar25;
            *(MainActor **)(puVar33 + 0x20) = pMVar24;
            FUN_100007e64(lVar8,puVar33 + uVar35,FUN_10040211c);
            _swift_release(pMVar24);
            FUN_1001b2110(0,0,lVar31,&DAT_10042b888,puVar33);
            _swift_release();
            FUN_100217d50();
            FUN_100029548(lVar19,FUN_10040211c);
            return;
          }
          bVar6 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar52.str,_Var43,expecting);
          _swift_bridgeObjectRelease(_Var43.unknown);
          lVar8 = local_110;
          if (bVar6) goto LAB_10021d564;
          uVar47 = uVar47 + 1;
          FUN_100029548(local_110,FUN_10040211c);
        } while (uVar35 != uVar47);
      }
      _swift_bridgeObjectRelease(_Var27.unknown);
    }
  }
  puVar33 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar10 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_90,unaff_x20,puVar33,puVar10);
  _swift_release(puVar33);
  _swift_release(puVar10);
  lVar8 = *(long *)(local_90.str + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar8 != 0) {
    TVar21 = Swift::TaskPriority::typeMetadataAccessor();
    lVar8 = local_180;
    (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(local_180,1,1,TVar21.unknown);
    pMVar24 = (MainActor *)&DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(pMVar24 + 0x10,unaff_x20);
    pMVar22 = Swift::MainActor::typeMetadataAccessor();
    puVar33 = PTR_typeMetadataAccessor_1005246d8;
    pMVar23 = pMVar24;
    _swift_retain();
    pMVar23 = Swift::MainActor::get_shared(pMVar22,pMVar23);
    puVar25 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar33,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar33 = &DAT_1005337b8;
    _swift_allocObject(&DAT_1005337b8,0x31,7);
    *(MainActor **)(puVar33 + 0x10) = pMVar23;
    *(undefined8 **)(puVar33 + 0x18) = puVar25;
    *(MainActor **)(puVar33 + 0x20) = pMVar24;
    *(undefined8 *)(puVar33 + 0x28) = 0;
    puVar33[0x30] = 1;
    _swift_release(pMVar24);
    FUN_1001b1e74(0,0,lVar8,&DAT_10042b878,puVar33);
    _swift_release();
    FUN_100217d50();
  }
  return;
}

