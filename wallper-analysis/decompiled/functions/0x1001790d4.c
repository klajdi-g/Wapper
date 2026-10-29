// rea decompile_all
// name: FUN_1001790d4
// address: 0x1001790d4
// body: available
// range: 0x1001790d4-0x10017ac3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001790d4(undefined4 param_1)

{
  long *plVar1;
  int iVar2;
  String SVar3;
  String SVar4;
  undefined1 *puVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  undefined *puVar9;
  ID IVar10;
  UUID UVar11;
  UUID UVar12;
  _StringGuts _Var13;
  void *pvVar14;
  undefined8 uVar15;
  Published *pPVar16;
  void *pvVar17;
  DispatchQoS DVar18;
  DispatchWorkItemFlags DVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  Logger LVar22;
  Logger LVar23;
  OS_os_log *pOVar24;
  OS_os_log *pOVar25;
  undefined4 *puVar26;
  char *pcVar27;
  URL UVar28;
  undefined7 extraout_var;
  long lVar29;
  URL UVar30;
  NSString *pNVar31;
  undefined *puVar32;
  char *pcVar33;
  void *pvVar34;
  char *pcVar35;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  undefined *extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar36;
  undefined *unaff_x20;
  undefined8 uVar37;
  code *pcVar38;
  undefined *puVar39;
  _StringGuts _Var40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  String *pSVar46;
  undefined8 uVar47;
  DispatchWorkItemFlags qos;
  undefined1 *puVar48;
  undefined1 *puVar49;
  code *pcVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String local_1c0;
  char *local_1b0;
  void *local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  char *local_188;
  undefined *local_180;
  undefined *local_178;
  char *local_170;
  code *local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined *local_140;
  long local_138;
  undefined1 auStack_120 [24];
  char *local_108;
  void *pvStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [24];
  char *local_98;
  long lStack_90;
  char *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  
  puVar39 = &DAT_100429b50;
  _swift_getKeyPath(&DAT_100429b50);
  puVar9 = &DAT_100429b78;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(&local_98);
  _swift_release(puVar39);
  _swift_release(puVar9);
  lVar43 = _TtC7Wallper17NowPlayingManager::previousWallpaperURLs;
  lVar45 = _TtC7Wallper17NowPlayingManager::dominantColorTuples;
  if ((char)local_98 != '\x01') {
    return;
  }
  if (*(long *)(*(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) + 0x10)
      != 0x10) {
    return;
  }
  local_150 = (undefined1 *)CONCAT44(local_150._4_4_,param_1);
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperURLs,auStack_b0,1
                     ,0);
  pSVar46 = &local_1c0;
  if (*(long *)(*(long *)(unaff_x20 + lVar43) + 0x10) == 0) {
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    lVar29 = DAT_100577d38;
    lVar41 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                       auStack_120,0,0);
    uVar37 = *(undefined8 *)(lVar29 + lVar41);
    _swift_retain();
    uVar47 = uVar37;
    _swift_bridgeObjectRetain();
    FUN_1001abd70();
    _swift_bridgeObjectRelease(uVar37);
    _swift_release();
    uVar37 = *(undefined8 *)(unaff_x20 + lVar43);
    *(undefined8 *)(unaff_x20 + lVar43) = uVar47;
    _swift_bridgeObjectRelease(uVar37);
    IVar10 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
    pSVar46 = &local_1c0;
    if (IVar10 != 0) {
      FUN_100174ed8();
      if (IVar10 == 0) {
        UVar11 = Foundation::UUID::typeMetadataAccessor();
        lVar41 = *(long *)(UVar11.unknown + -8);
        (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar41 + 0x40));
        UVar12 = Foundation::UUID::init();
        SVar51 = Foundation::UUID::get_uuidString(UVar12);
        (**(code **)(lVar41 + 8))
                  ((long)&local_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar11.unknown);
      }
      else {
        objc_stub::stringValue(IVar10);
        SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar17 = SVar51.bridgeObject;
      local_140 = (undefined *)Foundation::URL::typeMetadataAccessor();
      local_138 = *(long *)(local_140 + -8);
      local_148 = (undefined1 *)&local_1c0;
      (*(code *)PTR____chkstk_darwin_100521118)();
      uVar36 = (long)&local_1c0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
      local_158 = (undefined1 *)uVar36;
      _swift_beginAccess(unaff_x20 + lVar43,&local_98,0x20,0);
      lVar43 = *(long *)(unaff_x20 + lVar43);
      puVar39 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar39 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _Var40.unknown = (undefined *)(uVar36 - extraout_x8_00);
      if (*(long *)(lVar43 + 0x10) == 0) {
        bVar7 = true;
        puVar39 = local_140;
      }
      else {
        _swift_bridgeObjectRetain(lVar43);
        FUN_10000464c(SVar51.str);
        puVar39 = local_140;
        bVar7 = ((ulong)SVar51.bridgeObject & 1) == 0;
        if (!bVar7) {
          (**(code **)(local_138 + 0x10))
                    (_Var40.unknown,
                     *(long *)(lVar43 + 0x38) + *(long *)(local_138 + 0x48) * (long)SVar51.str,
                     local_140);
        }
        _swift_bridgeObjectRelease(lVar43);
      }
      lVar43 = local_138;
      (**(code **)(local_138 + 0x38))(_Var40.unknown,bVar7,1,puVar39);
      _swift_bridgeObjectRelease(pvVar17);
      puVar9 = _Var40.unknown;
      (**(code **)(lVar43 + 0x30))(_Var40.unknown,1,puVar39);
      puVar5 = local_158;
      if ((int)puVar9 == 1) {
        FUN_10002a29c(_Var40.unknown,&DAT_100553d90,&DAT_10041bf10);
        _swift_endAccess(&local_98);
        pSVar46 = (String *)local_148;
      }
      else {
        (**(code **)(lVar43 + 0x20))(local_158,_Var40.unknown,puVar39);
        _Var13.unknown = (undefined *)&local_98;
        _swift_endAccess();
        Foundation::URL::_get_scheme((URL)_Var13.unknown);
        if (_Var40.unknown == (undefined *)0x0) {
LAB_1001795d0:
          if (DAT_100561128 != -1) {
            _swift_once(&DAT_100561128,FUN_1003f3f80);
          }
          puVar39 = &DAT_100577e38;
          _swift_unknownObjectWeakLoadStrong();
          if (puVar39 == (undefined *)0x0) {
            UVar28.unknown = (undefined *)0x0;
            if (DAT_100557fe0 != -1) {
              UVar28.unknown = (undefined *)&DAT_100557fe0;
              _swift_once(&DAT_100557fe0,FUN_10025cd74);
            }
            uVar47 = DAT_100577d70;
            (*(code *)PTR____chkstk_darwin_100521118)();
            UVar28 = Foundation::URL::deletingPathExtension(UVar28);
            SVar51 = Foundation::URL::get_lastPathComponent(UVar28);
            pcVar33 = SVar51.bridgeObject;
            pcVar50 = *(code **)(local_138 + 8);
            (*pcVar50)(uVar36 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0),local_140);
            puVar39 = &DAT_10042a060;
            _swift_getKeyPath(&DAT_10042a060);
            puVar9 = &DAT_10042a088;
            _swift_getKeyPath(&DAT_10042a088);
            Combine::Published::_get_subscript(&local_98,uVar47,puVar39,puVar9);
            _swift_release(puVar39);
            _swift_release(puVar9);
            pcVar35 = local_98;
            if (*(long *)(local_98 + 0x10) == 0) {
              uVar47 = 0;
              uVar37 = 0;
            }
            else {
              _swift_bridgeObjectRetain(local_98);
              FUN_10000464c();
              if (((ulong)SVar51.bridgeObject & 1) == 0) {
                uVar47 = 0;
                uVar37 = 0;
              }
              else {
                puVar20 = (undefined8 *)(*(long *)(pcVar35 + 0x38) + (long)SVar51.str * 0x10);
                uVar47 = *puVar20;
                uVar37 = puVar20[1];
                _swift_bridgeObjectRetain(uVar37);
              }
              _swift_bridgeObjectRelease(pcVar33);
              pcVar33 = pcVar35;
            }
            _swift_bridgeObjectRelease(pcVar33);
            _swift_bridgeObjectRelease(pcVar35);
            (*pcVar50)(local_158,local_140);
            puVar20 = (undefined8 *)
                      (unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperTitle);
            uVar15 = puVar20[1];
            *puVar20 = uVar47;
            puVar20[1] = uVar37;
            _swift_bridgeObjectRelease(uVar15);
            pSVar46 = (String *)local_148;
          }
          else {
            uVar47 = *(undefined8 *)(puVar39 + _TtC7Wallper11AppDelegate::videoLibrary);
            _swift_retain(uVar47);
            SVar51 = Foundation::URL::get_lastPathComponent((URL)0x0);
            puVar32 = SVar51.bridgeObject;
            local_170 = SVar51.str;
            lVar43 = 0;
            FUN_10040211c();
            local_168 = *(code **)(lVar43 + -8);
            lVar41 = *(long *)((long)local_168 + 0x40);
            local_1a0 = uVar36;
            local_178 = (undefined *)lVar43;
            (*(code *)PTR____chkstk_darwin_100521118)();
            uVar44 = lVar41 + 0xfU & 0xfffffffffffffff0;
            pvVar17 = (void *)(uVar36 - uVar44);
            local_1c0.bridgeObject = pvVar17;
            local_1a8 = pvVar17;
            (*(code *)PTR____chkstk_darwin_100521118)();
            pcVar35 = (char *)((long)pvVar17 - uVar44);
            puVar39 = &DAT_10042a0a8;
            local_1c0.str = pcVar35;
            _swift_getKeyPath(&DAT_10042a0a8);
            puVar9 = &DAT_10042a0d0;
            _swift_getKeyPath(&DAT_10042a0d0);
            local_198 = uVar47;
            Combine::Published::_get_subscript(&local_98,uVar47,puVar39,puVar9);
            _swift_release(puVar39);
            _swift_release(puVar9);
            local_1b0 = pcVar35;
            (*(code *)PTR____chkstk_darwin_100521118)();
            pcVar35 = pcVar35 + -uVar44;
            local_188 = *(char **)(extraout_x12_00 + 0x10);
            local_160 = extraout_x12_00;
            if (local_188 != (char *)0x0) {
              uVar36 = 0;
              local_180 = extraout_x12_00 +
                          ((ulong)*(byte *)((long)local_168 + 0x50) + 0x20 &
                          ((ulong)*(byte *)((long)local_168 + 0x50) ^ 0xffffffffffffffff));
              do {
                if (*(ulong *)(local_160 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
                  pcVar50 = (code *)SoftwareBreakpoint(1,0x10017abf4);
                  (*pcVar50)();
                }
                FUN_100029504(local_180 + *(long *)((long)local_168 + 0x48) * uVar36,pcVar35,
                              FUN_10040211c);
                (*(code *)PTR____chkstk_darwin_100521118)();
                pSVar46 = (String *)(pcVar35 + -(lVar41 + 0xfU & 0xfffffffffffffff0));
                UVar28.unknown = pcVar35;
                FUN_100007e64(pcVar35,pSVar46,FUN_10040211c);
                SVar51 = Foundation::URL::get_lastPathComponent(UVar28);
                pvVar17 = SVar51.bridgeObject;
                uVar44 = (ulong)SVar51.str & 0xffffffffffff;
                if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
                  uVar44 = (ulong)pvVar17 >> 0x38 & 0xf;
                }
                if (uVar44 == 0) {
                  _swift_bridgeObjectRelease(pvVar17);
                  SVar51 = *pSVar46;
                  _swift_bridgeObjectRetain(pSVar46->bridgeObject);
                }
                SVar4.bridgeObject = puVar32;
                SVar4.str = local_170;
                _Var40.unknown = SVar51.bridgeObject;
                if (SVar51 == SVar4) {
                  _swift_bridgeObjectRelease(puVar32);
                  puVar32 = local_160;
LAB_100179ad0:
                  _swift_bridgeObjectRelease(puVar32);
                  _swift_bridgeObjectRelease(_Var40.unknown);
                  pcVar35 = local_1c0.str;
                  FUN_100007e64(pSVar46,local_1c0.str,FUN_10040211c);
                  pvVar17 = local_1c0.bridgeObject;
                  pvVar34 = local_1c0.bridgeObject;
                  FUN_100007e64(pcVar35,local_1c0.bridgeObject,FUN_10040211c);
                  uVar47 = local_198;
                  pvVar14 = pvVar17;
                  FUN_10026a7c8();
                  _swift_release(uVar47);
                  FUN_100029548(pvVar17,FUN_10040211c);
                  (**(code **)(local_138 + 8))(local_158,local_140);
                  plVar1 = (long *)(unaff_x20 +
                                   _TtC7Wallper17NowPlayingManager::previousWallpaperTitle);
                  lVar43 = plVar1[1];
                  *plVar1 = (long)pvVar14;
                  plVar1[1] = (long)pvVar34;
                  _swift_bridgeObjectRelease(lVar43);
                  pSVar46 = (String *)local_148;
                  goto LAB_100179cb4;
                }
                bVar7 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar51.str,_Var40,
                                   (_StringComparisonResult)(__int8)local_170);
                _swift_bridgeObjectRelease(_Var40.unknown);
                _Var40.unknown = local_160;
                if (bVar7) goto LAB_100179ad0;
                uVar36 = uVar36 + 1;
                FUN_100029548(pSVar46,FUN_10040211c);
              } while (local_188 != (char *)uVar36);
            }
            _swift_bridgeObjectRelease(puVar32);
            _swift_bridgeObjectRelease();
            uVar36 = local_1a0;
            (*(code *)PTR____chkstk_darwin_100521118)();
            puVar5 = local_158;
            UVar28 = Foundation::URL::deletingPathExtension(local_160);
            SVar51 = Foundation::URL::get_lastPathComponent(UVar28);
            puVar39 = local_140;
            pvVar17 = SVar51.bridgeObject;
            pcVar50 = *(code **)(local_138 + 8);
            (*pcVar50)(uVar36 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0),local_140);
            uVar47 = local_198;
            FUN_10026ed28();
            _swift_bridgeObjectRelease(pvVar17);
            _swift_release(uVar47);
            (*pcVar50)(puVar5,puVar39);
            pSVar46 = (String *)
                      (unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperTitle);
            *pSVar46 = SVar51;
            _swift_bridgeObjectRelease(pSVar46->bridgeObject);
            pSVar46 = (String *)local_148;
          }
        }
        else {
          if ((_Var13.unknown == (undefined *)0x7463617265746e69) &&
             (_Var40.unknown == (undefined *)0xeb00000000657669)) {
            _swift_bridgeObjectRelease(0xeb00000000657669);
          }
          else {
            bVar7 = Swift::_stringCompareWithSmolCheck(_Var13,_Var40,(_StringComparisonResult)0x69);
            _swift_bridgeObjectRelease(_Var40.unknown);
            if (!bVar7) goto LAB_1001795d0;
          }
          pcVar35 = (char *)0x746e656964617267;
          puVar48 = puVar5;
          FUN_10004306c();
          uVar8 = (uint)puVar48 & 0xff;
          if (uVar8 < 4) {
            if (uVar8 == 1 || ((ulong)puVar48 & 0xff) == 0) {
              if (((ulong)puVar48 & 0xff) == 0) {
                lVar43 = -0x109e8d908d8a9ed3;
              }
              else {
                lVar43 = -0x108b9a8c918a8cd3;
              }
            }
            else if (uVar8 == 2) {
              lVar43 = -0x11ff919e9a9c90d3;
            }
            else {
              lVar43 = -0x12ffff91909a91d3;
            }
          }
          else if (uVar8 < 6) {
            if (uVar8 == 4) {
              lVar43 = -0x11ff8d9a9d929ad3;
            }
            else {
              lVar43 = -0x108b8c9a8d9099d3;
            }
          }
          else {
            if (uVar8 != 6) goto LAB_1001795d0;
            lVar43 = -0x7ffffffeffb24070;
            pcVar35 = (char *)0xd000000000000011;
          }
          local_98 = pcVar35;
          lStack_90 = lVar43;
          FUN_100026df4();
          SVar51 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
          (**(code **)(local_138 + 8))(puVar5,puVar39);
          _swift_bridgeObjectRelease(lVar43);
          pSVar46 = (String *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperTitle);
          *pSVar46 = SVar51;
          _swift_bridgeObjectRelease(pSVar46->bridgeObject);
          pSVar46 = (String *)local_148;
        }
      }
    }
  }
LAB_100179cb4:
  uVar47 = *(undefined8 *)(unaff_x20 + lVar45);
  puVar39 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  puVar9 = &DAT_100429da0;
  _swift_getKeyPath(&DAT_100429da0);
  _swift_bridgeObjectRetain(uVar47);
  Combine::Published::_get_subscript(&local_98,unaff_x20,puVar39,puVar9);
  _swift_release(puVar39);
  _swift_release(puVar9);
  pcVar35 = (char *)0x636973754d;
  if (lStack_90 != 0) {
    pcVar35 = local_98;
  }
  lVar45 = -0x1b00000000000000;
  if (lStack_90 != 0) {
    lVar45 = lStack_90;
  }
  puVar39 = &DAT_100429dc0;
  _swift_getKeyPath(&DAT_100429dc0);
  puVar9 = &DAT_100429de8;
  _swift_getKeyPath(&DAT_100429de8);
  Combine::Published::_get_subscript(&local_98,unaff_x20,puVar39,puVar9);
  _swift_release(puVar39);
  _swift_release(puVar9);
  pcVar33 = (char *)0x79616c5020776f4e;
  if (lStack_90 != 0) {
    pcVar33 = local_98;
  }
  lVar43 = -0x14ffffffff989197;
  if (lStack_90 != 0) {
    lVar43 = lStack_90;
  }
  puVar39 = &DAT_10054c318;
  FUN_100002f94(&DAT_10054c318,&DAT_10041d860);
  _swift_initStaticObject();
  local_98 = pcVar35;
  lStack_90 = lVar45;
  local_88 = pcVar33;
  lStack_80 = lVar43;
  local_78 = uVar47;
  puStack_70 = puVar39;
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar41 = *(long *)(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder);
  if (lVar41 == 0) {
    FUN_100248cb8(&local_98);
  }
  else {
    _swift_retain(lVar41);
    FUN_10004462c(&local_98);
    _swift_release(lVar41);
  }
  pPVar16 = (Published *)&DAT_100429b00;
  _swift_getKeyPath(&DAT_100429b00);
  puVar9 = &DAT_100429b28;
  _swift_getKeyPath();
  local_e0 = pcVar35;
  local_d8 = (undefined1 *)lVar45;
  local_d0 = (code *)pcVar33;
  puStack_c8 = (undefined *)lVar43;
  local_c0 = (code *)uVar47;
  local_b8 = puVar39;
  _swift_retain(unaff_x20);
  local_140 = (undefined *)uVar47;
  _swift_bridgeObjectRetain(uVar47);
  local_148 = (undefined1 *)lVar45;
  _swift_bridgeObjectRetain(lVar45);
  local_138 = lVar43;
  _swift_bridgeObjectRetain(lVar43);
  _Var40.unknown = unaff_x20;
  Combine::Published::_set_subscript(pPVar16,&local_e0,unaff_x20,pPVar16);
  FUN_100182498();
  local_e0 = (char *)0x0;
  local_d8 = (undefined1 *)0xe000000000000000;
  Swift::_StringGuts::grow(0x32,_Var40);
  _swift_bridgeObjectRelease(local_d8);
  local_e0 = &DAT_d000000000000029;
  local_d8 = (undefined1 *)0x80000001004e03c0;
  puVar39 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  pcVar35 = &DAT_100429da0;
  _swift_getKeyPath();
  pcVar33 = pcVar35;
  Combine::Published::_get_subscript(&local_108,unaff_x20,puVar39);
  _swift_release(puVar39);
  _swift_release(pcVar35);
  pcVar35 = (char *)0x6e776f6e6b6e75;
  if (pvStack_100 != (void *)0x0) {
    pcVar35 = local_108;
  }
  pvVar17 = (void *)0xe700000000000000;
  if (pvStack_100 != (void *)0x0) {
    pvVar17 = pvStack_100;
  }
  SVar51.bridgeObject = pvVar17;
  SVar51.str = pcVar35;
  SVar57.bridgeObject = puVar9;
  SVar57.str = pcVar33;
  Swift::String::append(SVar51,SVar57);
  _swift_bridgeObjectRelease(pvVar17);
  SVar52.bridgeObject = (void *)0xe500000000000000;
  SVar52.str = (char *)0x2079622022;
  SVar58.bridgeObject = puVar9;
  SVar58.str = pcVar33;
  Swift::String::append(SVar52,SVar58);
  puVar39 = &DAT_100429dc0;
  _swift_getKeyPath(&DAT_100429dc0);
  pcVar35 = &DAT_100429de8;
  _swift_getKeyPath();
  pcVar33 = pcVar35;
  Combine::Published::_get_subscript(&local_108,unaff_x20,puVar39);
  _swift_release(puVar39);
  _swift_release(pcVar35);
  pcVar35 = (char *)0x6e776f6e6b6e75;
  if (pvStack_100 != (void *)0x0) {
    pcVar35 = local_108;
  }
  pvVar17 = (void *)0xe700000000000000;
  if (pvStack_100 != (void *)0x0) {
    pvVar17 = pvStack_100;
  }
  SVar53.bridgeObject = pvVar17;
  SVar53.str = pcVar35;
  SVar59.bridgeObject = puVar9;
  SVar59.str = pcVar33;
  Swift::String::append(SVar53,SVar59);
  _swift_bridgeObjectRelease(pvVar17);
  puVar5 = local_d8;
  SVar3.bridgeObject = local_d8;
  SVar3.str = local_e0;
  local_e0 = (char *)0x5b;
  local_d8 = (undefined *)0xe100000000000000;
  local_108 = (char *)0x4f464e49;
  pvStack_100 = (void *)0xe400000000000000;
  local_f0 = 0x20;
  uStack_e8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar35 = (char *)0x0;
  puVar39 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar51 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_f0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar17,pvVar17);
  SVar60.bridgeObject = puVar39;
  SVar60.str = pcVar35;
  Swift::String::append(SVar51,SVar60);
  _swift_bridgeObjectRelease(SVar51.bridgeObject);
  SVar54.bridgeObject = (void *)0xe300000000000000;
  SVar54.str = (char *)0x5b205d;
  SVar61.bridgeObject = puVar39;
  SVar61.str = pcVar35;
  Swift::String::append(SVar54,SVar61);
  SVar55.bridgeObject = (void *)0xe500000000000000;
  SVar55.str = (char *)0x616964656d;
  SVar62.bridgeObject = puVar39;
  SVar62.str = pcVar35;
  Swift::String::append(SVar55,SVar62);
  SVar56.bridgeObject = (void *)0xe200000000000000;
  SVar56.str = (char *)0x205d;
  SVar63.bridgeObject = puVar39;
  SVar63.str = pcVar35;
  Swift::String::append(SVar56,SVar63);
  local_158 = puVar5;
  SVar64.bridgeObject = puVar39;
  SVar64.str = pcVar35;
  Swift::String::append(SVar3,SVar64);
  puVar5 = local_d8;
  pcVar35 = local_e0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  local_168 = DAT_100559010;
  puVar39 = &DAT_100530b38;
  _swift_allocObject(&DAT_100530b38,0x30,7);
  local_188 = pcVar35;
  *(char **)(puVar39 + 0x10) = pcVar35;
  *(undefined1 **)(puVar39 + 0x18) = puVar5;
  *(undefined8 *)(puVar39 + 0x20) = 0;
  *(undefined8 *)(puVar39 + 0x28) = 0xe000000000000000;
  local_c0 = thunk_FUN_100099310;
  local_e0 = PTR___NSConcreteStackBlock_100521110;
  local_d8 = (undefined1 *)0x42000000;
  local_d0 = FUN_1000c7e7c;
  puStack_c8 = &DAT_100530b50;
  local_b8 = puVar39;
  pvVar17 = __Block_copy(&local_e0);
  local_178 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar41 = *(long *)(local_178 + -8);
  local_170 = (char *)pSVar46;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar41 + 0x40));
  qos.unknown = (undefined *)((long)pSVar46 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  DVar18.unknown = puVar5;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar18);
  DVar19 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar45 = *(long *)(DVar19.unknown + -8);
  local_180 = qos.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(lVar45 + 0x40),DVar19.unknown,PTR_typeMetadataAccessor_1005244a8);
  lVar43 = (long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_108 = PTR___swiftEmptyArrayStorage_100524190;
  puVar20 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0);
  local_160 = puVar5;
  puVar39 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar21 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar43,&local_108,puVar39,puVar21,DVar19.unknown,puVar20);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar17);
  (**(code **)(lVar45 + 8))(lVar43,DVar19.unknown);
  (**(code **)(lVar41 + 8))(qos.unknown,local_178);
  pcVar35 = local_170;
  _swift_release(local_b8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar22 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar22.unknown,&DAT_100558f50);
  lVar41 = *(long *)(LVar22.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar41 + 0x40));
  lVar43 = (long)pcVar35 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar45 = lVar43;
  (**(code **)(lVar41 + 0x10))(lVar43);
  uVar8 = (uint)lVar45;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  puVar39 = local_160;
  LVar23.unknown = local_160;
  _swift_bridgeObjectRetain();
  pOVar24 = os::Logger::get_logObject(LVar23);
  pOVar25 = pOVar24;
  _os_log_type_enabled(pOVar24,uVar8 & 0xff);
  if ((int)pOVar25 == 0) {
    _swift_bridgeObjectRelease_n(puVar39,2);
  }
  else {
    puVar26 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar27 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar26 = 0x8220102;
    pcVar33 = local_188;
    local_e0 = pcVar27;
    FUN_10012dbb0(local_188,puVar39,&local_e0);
    *(char **)(puVar26 + 1) = pcVar33;
    _swift_bridgeObjectRelease_n(puVar39,2);
    __os_log_impl(0x100000000,pOVar24,uVar8 & 0xff,"%{public}s",puVar26,0xc);
    FUN_100043f24(pcVar27);
    _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar26,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar41 + 8))(lVar43,LVar22.unknown);
  _swift_bridgeObjectRelease(local_158);
  lVar45 = local_138;
  puVar39 = local_140;
  puVar5 = local_148;
  if (((ulong)local_150 & 1) == 0) goto LAB_10017a9d8;
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  puVar9 = _TtC7Wallper17NowPlayingManager::previousLockscreenURL;
  if ((bVar6 & 1) == 0) {
    FUN_10019dcbc(&local_98);
    goto LAB_10017a9d8;
  }
  _swift_beginAccess(unaff_x20 + (long)_TtC7Wallper17NowPlayingManager::previousLockscreenURL,
                     &local_e0,0,0);
  puVar39 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  local_150 = pcVar35;
  lVar45 = *(long *)(*(long *)(puVar39 + -8) + 0x40);
  uVar36 = lVar45 + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar49 = pcVar35 + -uVar36;
  UVar28 = Foundation::URL::typeMetadataAccessor();
  lVar43 = *(long *)(UVar28.unknown + -8);
  local_168 = *(code **)(lVar43 + 0x38);
  (*local_168)(puVar49,1,1,UVar28.unknown);
  puVar39 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  local_158 = puVar49;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar39 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar48 = puVar49 + -extraout_x8_04;
  iVar2 = *(int *)(puVar39 + 0x30);
  local_160 = puVar9;
  FUN_1000087e4(unaff_x20 + (long)puVar9,puVar48,&DAT_100553d90,&DAT_10041bf10);
  FUN_1000087e4(puVar49,puVar48 + iVar2,&DAT_100553d90,&DAT_10041bf10);
  pcVar50 = *(code **)(lVar43 + 0x30);
  puVar5 = puVar48;
  (*pcVar50)(puVar48,1,UVar28.unknown);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(puVar49,&DAT_100553d90,&DAT_10041bf10);
    puVar5 = puVar48 + iVar2;
    (*pcVar50)(puVar5,1,UVar28.unknown);
    if ((int)puVar5 != 1) goto LAB_10017a694;
    FUN_10002a29c(puVar48,&DAT_100553d90,&DAT_10041bf10);
    puVar5 = local_150;
LAB_10017a7e8:
    local_150 = puVar5;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar36 = lVar45 + 0xfU & 0xfffffffffffffff0;
    lVar41 = (long)puVar5 - uVar36;
    if (DAT_100557360 != -1) {
      _swift_once(&DAT_100557360,FUN_1001f067c);
    }
    FUN_1001f05b0(lVar41);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
    puVar39 = (undefined *)(lVar41 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar42 = (long)puVar39 - uVar36;
    FUN_1000087e4(lVar41,lVar42,&DAT_100553d90,&DAT_10041bf10);
    lVar29 = lVar42;
    (*pcVar50)(lVar42,1,UVar28.unknown);
    if ((int)lVar29 == 1) {
      FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar42,&DAT_100553d90,&DAT_10041bf10);
    }
    else {
      UVar30.unknown = puVar39;
      (**(code **)(lVar43 + 0x20))(puVar39,lVar42,UVar28.unknown);
      SVar51 = Foundation::URL::get_lastPathComponent(UVar30);
      _Var40.unknown = SVar51.bridgeObject;
      if ((SVar51.str == (undefined *)0xd00000000000001d) &&
         (_Var40.unknown == (undefined *)0x80000001004df4d0)) {
        _swift_bridgeObjectRelease(0x80000001004df4d0);
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar51.str,_Var40,(_StringComparisonResult)0x1d);
        _swift_bridgeObjectRelease(_Var40.unknown);
        if (!bVar7) {
          (*(code *)PTR____chkstk_darwin_100521118)();
          lVar45 = (long)puVar39 - (lVar45 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar43 + 0x10))(lVar45,puVar39,UVar28.unknown);
          (*local_168)(lVar45,0,1,UVar28.unknown);
          puVar9 = local_160;
          _swift_beginAccess(unaff_x20 + (long)local_160,&local_108,0x21,0);
          FUN_1001b08f0(lVar45,unaff_x20 + (long)puVar9,&DAT_100553d90,&DAT_10041bf10);
          _swift_endAccess(&local_108);
          IVar10 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
          pNVar31 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar10 = NSUserDefaults::stringForKey_(IVar10,pNVar31);
          if (IVar10 == 0) {
            SVar51 = (String)ZEXT816(0);
          }
          else {
            SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          (**(code **)(lVar43 + 8))(puVar39,UVar28.unknown);
          FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
          pSVar46 = (String *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousLockscreenTitle)
          ;
          *pSVar46 = SVar51;
          _swift_bridgeObjectRelease(pSVar46->bridgeObject);
          goto LAB_10017a9b0;
        }
      }
      (**(code **)(lVar43 + 8))(puVar39,UVar28.unknown);
      FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    local_170 = puVar48;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar39 = puVar48 + -uVar36;
    FUN_1000087e4(puVar48,puVar39,&DAT_100553d90,&DAT_10041bf10);
    puVar5 = puVar48 + iVar2;
    (*pcVar50)(puVar5,1,UVar28.unknown);
    if ((int)puVar5 != 1) {
      local_178 = puVar39;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
      lVar41 = (long)puVar39 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar43 + 0x20))(lVar41,puVar48 + iVar2,UVar28.unknown);
      puVar9 = &DAT_100553da0;
      FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar7 = Swift::Equatable::___infix(puVar39,lVar41,UVar28.unknown,puVar9);
      local_180 = (undefined *)CONCAT44(local_180._4_4_,(int)CONCAT71(extraout_var,bVar7));
      pcVar38 = *(code **)(lVar43 + 8);
      (*pcVar38)(lVar41,UVar28.unknown);
      FUN_10002a29c(puVar49,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar38)(puVar39,UVar28.unknown);
      FUN_10002a29c(puVar48,&DAT_100553d90,&DAT_10041bf10);
      puVar5 = local_150;
      if (((ulong)local_180 & 1) != 0) goto LAB_10017a7e8;
      goto LAB_10017a9b0;
    }
    FUN_10002a29c(puVar49,&DAT_100553d90,&DAT_10041bf10);
    (**(code **)(lVar43 + 8))(puVar39,UVar28.unknown);
LAB_10017a694:
    FUN_10002a29c(puVar48,&DAT_10054ea38,&DAT_100426270);
  }
LAB_10017a9b0:
  lVar45 = local_138;
  FUN_10017f398(&local_98,0,0);
  puVar39 = local_140;
  puVar5 = local_148;
LAB_10017a9d8:
  _swift_bridgeObjectRelease(puVar39);
  _swift_bridgeObjectRelease(lVar45);
  _swift_bridgeObjectRelease(puVar5);
  return;
}

