// rea decompile_all
// name: FUN_10023382c
// address: 0x10023382c
// body: available
// range: 0x10023382c-0x1002352a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023382c(char *param_1,char *param_2)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  String SVar3;
  DispatchWorkItemFlags DVar4;
  bool bVar5;
  uint uVar6;
  UUID UVar7;
  URL UVar8;
  _StringGuts _Var9;
  ulong uVar10;
  Dictionary<undefined,undefined> DVar11;
  NSString *pNVar12;
  undefined8 uVar13;
  ID *pIVar14;
  UUID UVar15;
  long lVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  undefined7 extraout_var;
  URL UVar20;
  ID IVar21;
  undefined *puVar22;
  DispatchQoS DVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  Logger LVar26;
  OS_os_log *pOVar27;
  char *pcVar28;
  void *pvVar29;
  long extraout_x8;
  long lVar30;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar31;
  long extraout_x8_02;
  long lVar32;
  long extraout_x8_03;
  long lVar33;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *pcVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
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
  undefined *puVar38;
  long unaff_x20;
  code *pcVar39;
  _StringGuts _Var40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  code *pcVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
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
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  code *local_200;
  code *local_1f8;
  code *local_1f0;
  long local_1e8;
  long local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  code *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  long local_180;
  DispatchWorkItemFlags local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  long local_140;
  undefined *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  char *local_e8;
  undefined *local_e0;
  code *local_d8;
  undefined *puStack_d0;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ID local_98 [3];
  undefined1 auStack_80 [32];
  undefined7 extraout_var_00;
  
  local_148 = (undefined *)os::Logger::typeMetadataAccessor();
  local_128 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar30 = (long)&local_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = lVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = lVar30 - extraout_x12;
  local_190 = lVar30;
  local_150 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_160 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  lVar30 = lVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar30;
  local_158 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_170 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_170 + 0x40));
  puVar31 = (undefined *)(lVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar35 = &DAT_10054ea38;
  local_178.unknown = puVar31;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  local_138 = puVar35;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar35 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = (long)puVar31 - extraout_x8_02;
  puVar35 = &DAT_1005539e0;
  local_120 = lVar32;
  FUN_100002f94(&DAT_1005539e0,&DAT_100426a78);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar35 + -8) + 0x40));
  lVar32 = lVar32 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_180 = lVar32;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar32 - extraout_x12_00;
  local_1b8 = lVar32;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar32 - extraout_x12_01;
  local_140 = lVar32;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar32 - extraout_x12_02;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar33 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar41 = lVar32 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar35 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar35 + -8) + 0x40));
  puVar35 = (undefined *)(lVar41 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  local_1a8 = puVar35;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = (long)puVar35 - extraout_x12_03;
  local_1b0 = lVar36;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar36 - extraout_x12_04;
  local_198 = lVar36;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar36 - extraout_x12_05;
  local_118 = lVar36;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar36 - extraout_x12_06;
  local_130 = lVar36;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar36 - extraout_x12_07;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar43 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
  puVar35 = (undefined *)(lVar36 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  local_188 = puVar35;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = (long)puVar35 - extraout_x12_08;
  local_1a0 = lVar37;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  puVar35 = (undefined *)(lVar37 - extraout_x12_09);
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_80
                     ,0,0);
  lVar30 = *(long *)(unaff_x20 + lVar30);
  if (*(long *)(lVar30 + 0x10) == 0) {
    (**(code **)(lVar43 + 0x38))(lVar36,1,1,UVar8.unknown);
  }
  else {
    _swift_bridgeObjectRetain(lVar30);
    pcVar28 = param_1;
    pcVar19 = param_2;
    FUN_10000464c(param_1);
    bVar5 = ((ulong)pcVar19 & 1) == 0;
    if (!bVar5) {
      (**(code **)(lVar43 + 0x10))
                (lVar36,*(long *)(lVar30 + 0x38) + *(long *)(lVar43 + 0x48) * (long)pcVar28,
                 UVar8.unknown);
    }
    pcVar44 = *(code **)(lVar43 + 0x38);
    (*pcVar44)(lVar36,bVar5,1,UVar8.unknown);
    _swift_bridgeObjectRelease(lVar30);
    pcVar39 = *(code **)(lVar43 + 0x30);
    lVar30 = lVar36;
    (*pcVar39)(lVar36,1,UVar8.unknown);
    if ((int)lVar30 != 1) {
      local_200 = *(code **)(lVar43 + 0x20);
      local_1f8 = pcVar44;
      local_1f0 = pcVar39;
      local_1e8 = lVar32;
      local_1e0 = lVar43;
      local_1d8 = puVar35;
      local_1d0 = UVar8.unknown;
      (*local_200)(puVar35,lVar36,UVar8.unknown);
      _Var9.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var9.unknown >> 0x3e == 0) {
        lVar30 = *(long *)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var9.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
          _Var1.unknown = _Var9.unknown;
        }
        lVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar30 != 0) {
        uVar42 = 0;
        local_1c8 = (code *)((ulong)_Var9.unknown & 0xffffffffffffff8);
        do {
          if (((ulong)_Var9.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(local_1c8 + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
              pcVar39 = (code *)SoftwareBreakpoint(1,0x100235224);
              (*pcVar39)();
            }
            uVar10 = *(ulong *)(_Var9.unknown + uVar42 * 8 + 0x20);
          }
          else {
            uVar10 = uVar42;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar42,(_ArrayBuffer)_Var9.unknown);
          }
          objc_stub::deviceDescription(uVar10);
          FUN_100008054(0);
          FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c)
          ;
          DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC
                             ();
          uVar10 = 0;
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          if ((*(long *)(DVar11.unknown + 0x10) == 0) ||
             (thunk_FUN_1000046e0(pNVar12), (uVar10 & 1) == 0)) {
            _swift_bridgeObjectRelease(DVar11.unknown);
LAB_100233f28:
            UVar15 = Foundation::UUID::init();
            SVar45 = Foundation::UUID::get_uuidString(UVar15);
            (**(code **)(lVar33 + 8))(lVar41,UVar7.unknown);
          }
          else {
            FUN_1000280d4(*(long *)(DVar11.unknown + 0x38) + (long)pNVar12 * 0x20,&local_e8);
            _swift_bridgeObjectRelease(DVar11.unknown);
            uVar13 = 0;
            FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
            pIVar14 = local_98;
            _swift_dynamicCast(pIVar14,&local_e8,PTR___type_metadata_for_Any_100524178 + 8,uVar13,6)
            ;
            if (((ulong)pIVar14 & 1) == 0) goto LAB_100233f28;
            objc_stub::stringValue(local_98[0]);
            SVar45 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          _Var40.unknown = SVar45.bridgeObject;
          SVar56.bridgeObject = param_2;
          SVar56.str = param_1;
          if (SVar45 == SVar56) {
            _swift_bridgeObjectRelease(_Var9.unknown);
            _Var9.unknown = _Var40.unknown;
LAB_100233fe8:
            _swift_bridgeObjectRelease(_Var9.unknown);
            lVar30 = _TtC7Wallper21VideoWallpaperManager::stallRebuilds;
            _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::stallRebuilds,
                               local_98,0,0);
            lVar36 = local_118;
            lVar33 = local_130;
            puVar35 = local_1d8;
            lVar32 = local_1e8;
            lVar37 = *(long *)(unaff_x20 + lVar30);
            if (*(long *)(lVar37 + 0x10) == 0) {
              puVar31 = &DAT_10054a360;
              FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
              (**(code **)(*(long *)(puVar31 + -8) + 0x38))(lVar32,1,1,puVar31);
            }
            else {
              _swift_bridgeObjectRetain(lVar37);
              pcVar28 = param_1;
              pcVar19 = param_2;
              FUN_10000464c(param_1);
              bVar5 = ((ulong)pcVar19 & 1) == 0;
              if (bVar5) {
                puVar31 = &DAT_10054a360;
                FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
                pcVar39 = *(code **)(*(long *)(puVar31 + -8) + 0x38);
              }
              else {
                lVar33 = *(long *)(lVar37 + 0x38);
                puVar31 = &DAT_10054a360;
                FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
                lVar36 = local_118;
                lVar41 = *(long *)(puVar31 + -8);
                FUN_1000087e4(lVar33 + *(long *)(lVar41 + 0x48) * (long)pcVar28,lVar32,
                              &DAT_10054a360,&DAT_10041a330);
                pcVar39 = *(code **)(lVar41 + 0x38);
                lVar33 = local_130;
              }
              (*pcVar39)(lVar32,bVar5,1,puVar31);
              _swift_bridgeObjectRelease(lVar37);
            }
            lVar37 = local_140;
            FUN_1000087e4(lVar32,local_140,&DAT_1005539e0,&DAT_100426a78);
            puVar31 = &DAT_10054a360;
            FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
            local_130 = *(long *)(puVar31 + -8);
            local_1c8 = *(code **)(local_130 + 0x30);
            lVar41 = lVar37;
            (*local_1c8)(lVar37,1,puVar31);
            puVar38 = local_1d0;
            bVar5 = (int)lVar41 != 1;
            if (bVar5) {
              (*local_200)(lVar33,lVar37,local_1d0);
            }
            else {
              FUN_10002a29c(lVar37,&DAT_1005539e0,&DAT_100426a78);
              puVar38 = local_1d0;
            }
            pcVar39 = local_1f8;
            (*local_1f8)(lVar33,!bVar5,1,puVar38);
            pcVar44 = *(code **)(local_1e0 + 0x10);
            (*pcVar44)(lVar36,puVar35,puVar38);
            (*pcVar39)(lVar36,0,1,puVar38);
            lVar43 = local_120;
            lVar37 = (long)*(int *)(local_138 + 0x30);
            FUN_1000087e4(lVar33,local_120,&DAT_100553d90,&DAT_10041bf10);
            FUN_1000087e4(lVar36,lVar43 + lVar37,&DAT_100553d90,&DAT_10041bf10);
            pcVar39 = local_1f0;
            lVar16 = lVar43;
            (*local_1f0)(lVar43,1,puVar38);
            lVar41 = local_198;
            if ((int)lVar16 == 1) {
              FUN_10002a29c(lVar36,&DAT_100553d90,&DAT_10041bf10);
              lVar36 = local_120;
              FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
              lVar37 = lVar36 + lVar37;
              (*pcVar39)(lVar37,1,puVar38);
              lVar33 = local_128;
              puVar35 = local_1d8;
              if ((int)lVar37 != 1) {
LAB_1002343b8:
                puVar35 = local_1d8;
                FUN_10002a29c(lVar36,&DAT_10054ea38,&DAT_100426270);
                goto LAB_1002343d0;
              }
              FUN_10002a29c(lVar36,&DAT_100553d90,&DAT_10041bf10);
LAB_1002344c0:
              lVar36 = local_1b8;
              FUN_1000087e4(lVar32,local_1b8,&DAT_1005539e0,&DAT_100426a78);
              lVar37 = lVar36;
              (*local_1c8)(lVar36,1,puVar31);
              if ((int)lVar37 == 1) {
                FUN_10002a29c(lVar36,&DAT_1005539e0,&DAT_100426a78);
                lVar37 = 0;
              }
              else {
                lVar37 = *(long *)(lVar36 + *(int *)(puVar31 + 0x30));
                (**(code **)(local_1e0 + 8))(lVar36,local_1d0);
              }
              lVar36 = local_180;
              puVar38 = (undefined *)(lVar37 + 1);
              if (SCARRY8(lVar37,1)) {
                    /* WARNING: Does not return */
                pcVar39 = (code *)SoftwareBreakpoint(1,0x100235274);
                (*pcVar39)();
              }
              if (3 < (long)puVar38) {
                if (puVar38 == (undefined *)0x4) {
                  iVar2 = *(int *)(puVar31 + 0x30);
                  (*pcVar44)(local_180,puVar35,local_1d0);
                  *(undefined8 *)(lVar36 + iVar2) = 4;
                  (**(code **)(local_130 + 0x38))(lVar36,0,1,puVar31);
                  pvVar29 = (void *)0x0;
                  _swift_beginAccess(unaff_x20 + lVar30,&local_e8,0x21);
                  _swift_bridgeObjectRetain(param_2);
                  _Var9.unknown = param_1;
                  pcVar28 = param_2;
                  FUN_10012330c(lVar36);
                  _swift_endAccess(&local_e8);
                  local_e8 = (char *)0x0;
                  local_e0 = (undefined *)0xe000000000000000;
                  Swift::_StringGuts::grow(0x2f,_Var9);
                  UVar8.unknown = local_e0;
                  _swift_bridgeObjectRelease();
                  local_e8 = (char *)0x6b63616279616c50;
                  local_e0 = (void *)0xea0000000000203a;
                  SVar45 = Foundation::URL::get_lastPathComponent(UVar8);
                  SVar73.bridgeObject = pvVar29;
                  SVar73.str = pcVar28;
                  Swift::String::append(SVar45,SVar73);
                  _swift_bridgeObjectRelease(SVar45.bridgeObject);
                  SVar53.bridgeObject = (void *)0x80000001004e2ba0;
                  SVar53.str = (char *)0xd000000000000012;
                  SVar74.bridgeObject = pvVar29;
                  SVar74.str = pcVar28;
                  Swift::String::append(SVar53,SVar74);
                  SVar54.bridgeObject = param_2;
                  SVar54.str = param_1;
                  SVar75.bridgeObject = pvVar29;
                  SVar75.str = pcVar28;
                  Swift::String::append(SVar54,SVar75);
                  uVar13 = 0x61656c209480e220;
                  SVar55.bridgeObject = (void *)0xaf746920676e6976;
                  SVar55.str = (char *)0x61656c209480e220;
                  SVar76.bridgeObject = pvVar29;
                  SVar76.str = pcVar28;
                  Swift::String::append(SVar55,SVar76);
                  puVar35 = local_e0;
                  SVar45.bridgeObject = local_e0;
                  SVar45.str = local_e8;
                  local_e8 = (char *)0x5b;
                  local_e0 = (undefined *)0xe100000000000000;
                  local_a8 = (undefined *)0x4e524157;
                  local_a0 = 0xe400000000000000;
                  local_b8 = 0x20;
                  uStack_b0 = 0xe100000000000000;
                  FUN_100026df4();
                  pcVar19 = (char *)0x0;
                  puVar38 = PTR___type_metadata_for_Swift_String_100523a98;
                  SVar56 = (extension_Foundation)::Swift::StringProtocol::_padding
                                     (6,&local_b8,0,PTR___type_metadata_for_Swift_String_100523a98,
                                      PTR___type_metadata_for_Swift_String_100523a98,uVar13,uVar13);
                  SVar77.bridgeObject = puVar38;
                  SVar77.str = pcVar19;
                  Swift::String::append(SVar56,SVar77);
                  _swift_bridgeObjectRelease(SVar56.bridgeObject);
                  SVar57.bridgeObject = (void *)0xe300000000000000;
                  SVar57.str = (char *)0x5b205d;
                  SVar78.bridgeObject = puVar38;
                  SVar78.str = pcVar19;
                  Swift::String::append(SVar57,SVar78);
                  SVar58.bridgeObject = (void *)0xe800000000000000;
                  SVar58.str = (char *)0x6b63616279616c70;
                  SVar79.bridgeObject = puVar38;
                  SVar79.str = pcVar19;
                  Swift::String::append(SVar58,SVar79);
                  SVar59.bridgeObject = (void *)0xe200000000000000;
                  SVar59.str = (char *)0x205d;
                  SVar80.bridgeObject = puVar38;
                  SVar80.str = pcVar19;
                  Swift::String::append(SVar59,SVar80);
                  SVar81.bridgeObject = puVar38;
                  SVar81.str = pcVar19;
                  Swift::String::append(SVar45,SVar81);
                  puVar31 = local_e0;
                  pcVar28 = local_e8;
                  local_e8 = (char *)0x282020;
                  local_e0 = (undefined *)0xe300000000000000;
                  SVar60.bridgeObject = (void *)0x80000001004e2bc0;
                  SVar60.str = (char *)0xd00000000000001c;
                  SVar82.bridgeObject = puVar38;
                  SVar82.str = pcVar19;
                  Swift::String::append(SVar60,SVar82);
                  SVar61.bridgeObject = (void *)0xe100000000000000;
                  SVar61.str = (char *)0x3a;
                  SVar83.bridgeObject = puVar38;
                  SVar83.str = pcVar19;
                  Swift::String::append(SVar61,SVar83);
                  local_a8 = (undefined *)0x6f;
                  SVar45 = Swift::CustomStringConvertible::get_description();
                  SVar84.bridgeObject = puVar38;
                  SVar84.str = pcVar19;
                  Swift::String::append(SVar45,SVar84);
                  _swift_bridgeObjectRelease(SVar45.bridgeObject);
                  SVar62.bridgeObject = (void *)0xe100000000000000;
                  SVar62.str = (char *)0x29;
                  SVar85.bridgeObject = puVar38;
                  SVar85.str = pcVar19;
                  Swift::String::append(SVar62,SVar85);
                  puVar38 = local_e0;
                  pcVar19 = local_e8;
                  if (DAT_100559018 != -1) {
                    _swift_once(&DAT_100559018,FUN_1002854a0);
                  }
                  puVar22 = &DAT_1005356f8;
                  _swift_allocObject(&DAT_1005356f8,0x30,7);
                  *(char **)(puVar22 + 0x10) = pcVar28;
                  *(undefined **)(puVar22 + 0x18) = puVar31;
                  *(char **)(puVar22 + 0x20) = pcVar19;
                  *(undefined **)(puVar22 + 0x28) = puVar38;
                  local_c8 = thunk_FUN_100099310;
                  local_e8 = PTR___NSConcreteStackBlock_100521110;
                  local_e0 = (undefined *)0x42000000;
                  local_d8 = FUN_1000c7e7c;
                  puStack_d0 = &DAT_100535710;
                  local_c0 = puVar22;
                  pvVar29 = __Block_copy(&local_e8);
                  DVar23.unknown = puVar31;
                  _swift_bridgeObjectRetain();
                  DVar4.unknown = local_178.unknown;
                  Dispatch::DispatchQoS::get_unspecified(DVar23);
                  local_a8 = PTR___swiftEmptyArrayStorage_100524190;
                  puVar24 = &DAT_100553db0;
                  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                               );
                  puVar38 = &DAT_100561080;
                  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
                  puVar25 = puVar38;
                  FUN_100077ac0();
                  puVar22 = local_150;
                  lVar30 = local_168;
                  Swift::SetAlgebra::_init(local_168,&local_a8,puVar38,puVar25,local_150,puVar24);
                  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar4);
                  __Block_release(pvVar29);
                  (**(code **)(local_160 + 8))(lVar30,puVar22);
                  (**(code **)(local_170 + 8))(DVar4.unknown,local_158);
                  _swift_release(local_c0);
                  if (DAT_100559020 != -1) {
                    _swift_once(&DAT_100559020,FUN_100285420);
                  }
                  puVar38 = local_148;
                  puVar22 = local_148;
                  FUN_100099338(local_148,&DAT_100558f50);
                  lVar30 = local_1c0;
                  lVar32 = local_1c0;
                  (**(code **)(lVar33 + 0x10))(local_1c0,puVar22,puVar38);
                  uVar6 = (uint)lVar32;
                  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::
                  _get_default();
                  LVar26.unknown = puVar31;
                  _swift_bridgeObjectRetain();
                  pOVar17 = os::Logger::get_logObject(LVar26);
                  pOVar27 = pOVar17;
                  _os_log_type_enabled(pOVar17,uVar6 & 0xff);
                  lVar32 = local_1e8;
                  if ((int)pOVar27 == 0) {
                    _swift_bridgeObjectRelease_n(puVar31,2);
                  }
                  else {
                    puVar18 = (undefined4 *)0xc;
                    _swift_slowAlloc(0xc,0xffffffffffffffff);
                    pcVar19 = (char *)0x20;
                    _swift_slowAlloc(0x20,0xffffffffffffffff);
                    *puVar18 = 0x8220102;
                    local_e8 = pcVar19;
                    FUN_10012dbb0(pcVar28,puVar31,&local_e8);
                    *(char **)(puVar18 + 1) = pcVar28;
                    _swift_bridgeObjectRelease_n(puVar31,2);
                    __os_log_impl(0x100000000,pOVar17,uVar6 & 0xff,"%{public}s",puVar18,0xc);
                    FUN_100043f24(pcVar19);
                    _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
                    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
                  }
                  (**(code **)(lVar33 + 8))(lVar30,puVar38);
                  _swift_bridgeObjectRelease(puVar35);
                  puVar35 = local_1d8;
                }
                FUN_10002a29c(lVar32,&DAT_1005539e0,&DAT_100426a78);
                pcVar39 = *(code **)(local_1e0 + 8);
                goto LAB_100233fc0;
              }
            }
            else {
              FUN_1000087e4(lVar43,local_198,&DAT_100553d90,&DAT_10041bf10);
              lVar32 = lVar43 + lVar37;
              (*pcVar39)(lVar32,1,puVar38);
              lVar36 = local_1a0;
              if ((int)lVar32 == 1) {
                FUN_10002a29c(local_118,&DAT_100553d90,&DAT_10041bf10);
                lVar36 = local_120;
                FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
                (**(code **)(local_1e0 + 8))(lVar41,puVar38);
                goto LAB_1002343b8;
              }
              (*local_200)(local_1a0,lVar43 + lVar37,puVar38);
              puVar35 = &DAT_100553da0;
              FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                            PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
              bVar5 = Swift::Equatable::___infix(lVar41,lVar36,puVar38,puVar35);
              pcVar39 = *(code **)(local_1e0 + 8);
              (*pcVar39)(lVar36,puVar38);
              FUN_10002a29c(local_118,&DAT_100553d90,&DAT_10041bf10);
              FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
              (*pcVar39)(lVar41,puVar38);
              lVar32 = local_1e8;
              FUN_10002a29c(lVar43,&DAT_100553d90,&DAT_10041bf10);
              puVar35 = local_1d8;
              lVar33 = local_128;
              if (bVar5) goto LAB_1002344c0;
LAB_1002343d0:
              puVar38 = (undefined *)0x1;
            }
            lVar32 = local_180;
            iVar2 = *(int *)(puVar31 + 0x30);
            (*pcVar44)(local_180,puVar35,local_1d0);
            *(undefined **)(lVar32 + iVar2) = puVar38;
            (**(code **)(local_130 + 0x38))(lVar32,0,1,puVar31);
            pvVar29 = (void *)0x0;
            _swift_beginAccess(unaff_x20 + lVar30,&local_e8,0x21);
            _swift_bridgeObjectRetain(param_2);
            _Var9.unknown = param_1;
            pcVar28 = param_2;
            FUN_10012330c(lVar32);
            _swift_endAccess(&local_e8);
            local_e8 = (char *)0x0;
            local_e0 = (undefined *)0xe000000000000000;
            Swift::_StringGuts::grow(0x40,_Var9);
            SVar46.bridgeObject = (void *)0x80000001004e2b50;
            SVar46.str = (char *)0xd000000000000026;
            SVar63.bridgeObject = pvVar29;
            SVar63.str = pcVar28;
            Swift::String::append(SVar46,SVar63);
            SVar47.bridgeObject = param_2;
            SVar47.str = param_1;
            SVar64.bridgeObject = pvVar29;
            SVar64.str = pcVar28;
            Swift::String::append(SVar47,SVar64);
            SVar48.bridgeObject = (void *)0x80000001004e2b80;
            SVar48.str = (char *)0xd000000000000013;
            SVar65.bridgeObject = pvVar29;
            SVar65.str = pcVar28;
            Swift::String::append(SVar48,SVar65);
            local_a8 = puVar38;
            SVar45 = Swift::CustomStringConvertible::get_description();
            SVar66.bridgeObject = pvVar29;
            SVar66.str = pcVar28;
            Swift::String::append(SVar45,SVar66);
            _swift_bridgeObjectRelease(SVar45.bridgeObject);
            uVar13 = 0x29332f;
            SVar49.bridgeObject = (void *)0xe300000000000000;
            SVar49.str = (char *)0x29332f;
            SVar67.bridgeObject = pvVar29;
            SVar67.str = pcVar28;
            Swift::String::append(SVar49,SVar67);
            UVar8.unknown = local_e0;
            SVar3.bridgeObject = local_e0;
            SVar3.str = local_e8;
            local_e8 = (char *)0x5b;
            local_e0 = (undefined *)0xe100000000000000;
            local_a8 = (undefined *)0x4f464e49;
            local_a0 = 0xe400000000000000;
            local_b8 = 0x20;
            uStack_b0 = 0xe100000000000000;
            FUN_100026df4();
            pcVar28 = (char *)0x0;
            puVar35 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar45 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_b8,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,uVar13,uVar13);
            SVar68.bridgeObject = puVar35;
            SVar68.str = pcVar28;
            Swift::String::append(SVar45,SVar68);
            _swift_bridgeObjectRelease(SVar45.bridgeObject);
            SVar50.bridgeObject = (void *)0xe300000000000000;
            SVar50.str = (char *)0x5b205d;
            SVar69.bridgeObject = puVar35;
            SVar69.str = pcVar28;
            Swift::String::append(SVar50,SVar69);
            SVar51.bridgeObject = (void *)0xe800000000000000;
            SVar51.str = (char *)0x6b63616279616c70;
            SVar70.bridgeObject = puVar35;
            SVar70.str = pcVar28;
            Swift::String::append(SVar51,SVar70);
            SVar52.bridgeObject = (void *)0xe200000000000000;
            SVar52.str = (char *)0x205d;
            SVar71.bridgeObject = puVar35;
            SVar71.str = pcVar28;
            Swift::String::append(SVar52,SVar71);
            SVar72.bridgeObject = puVar35;
            SVar72.str = pcVar28;
            Swift::String::append(SVar3,SVar72);
            puVar35 = local_e0;
            pcVar28 = local_e8;
            if (DAT_100559018 != -1) {
              _swift_once(&DAT_100559018,FUN_1002854a0);
            }
            puVar31 = &DAT_1005356a8;
            _swift_allocObject(&DAT_1005356a8,0x30,7);
            *(char **)(puVar31 + 0x10) = pcVar28;
            *(undefined **)(puVar31 + 0x18) = puVar35;
            *(undefined8 *)(puVar31 + 0x20) = 0;
            *(undefined8 *)(puVar31 + 0x28) = 0xe000000000000000;
            local_c8 = thunk_FUN_100099310;
            local_e8 = PTR___NSConcreteStackBlock_100521110;
            local_e0 = (undefined *)0x42000000;
            local_d8 = FUN_1000c7e7c;
            puStack_d0 = &DAT_1005356c0;
            local_c0 = puVar31;
            pvVar29 = __Block_copy(&local_e8);
            DVar23.unknown = puVar35;
            _swift_bridgeObjectRetain();
            DVar4.unknown = local_178.unknown;
            Dispatch::DispatchQoS::get_unspecified(DVar23);
            local_a8 = PTR___swiftEmptyArrayStorage_100524190;
            puVar24 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar31 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar22 = puVar31;
            FUN_100077ac0();
            puVar38 = local_150;
            lVar30 = local_168;
            Swift::SetAlgebra::_init(local_168,&local_a8,puVar31,puVar22,local_150,puVar24);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar4);
            __Block_release(pvVar29);
            (**(code **)(local_160 + 8))(lVar30,puVar38);
            (**(code **)(local_170 + 8))(DVar4.unknown,local_158);
            _swift_release(local_c0);
            if (DAT_100559020 != -1) {
              _swift_once(&DAT_100559020,FUN_100285420);
            }
            puVar31 = local_148;
            puVar38 = local_148;
            FUN_100099338(local_148,&DAT_100558f50);
            lVar32 = local_128;
            lVar30 = local_190;
            lVar33 = local_190;
            (**(code **)(local_128 + 0x10))(local_190,puVar38,puVar31);
            uVar6 = (uint)lVar33;
            static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
            LVar26.unknown = puVar35;
            _swift_bridgeObjectRetain();
            pOVar17 = os::Logger::get_logObject(LVar26);
            pOVar27 = pOVar17;
            _os_log_type_enabled(pOVar17,uVar6 & 0xff);
            if ((int)pOVar27 == 0) {
              _swift_bridgeObjectRelease_n(puVar35,2);
            }
            else {
              puVar18 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar19 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar18 = 0x8220102;
              local_e8 = pcVar19;
              FUN_10012dbb0(pcVar28,puVar35,&local_e8);
              *(char **)(puVar18 + 1) = pcVar28;
              _swift_bridgeObjectRelease_n(puVar35,2);
              __os_log_impl(0x100000000,pOVar17,uVar6 & 0xff,"%{public}s",puVar18,0xc);
              FUN_100043f24(pcVar19);
              _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
            }
            (**(code **)(lVar32 + 8))(lVar30,puVar31);
            _swift_bridgeObjectRelease();
            puVar31 = local_1d0;
            puVar35 = local_1d8;
            UVar8.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar8);
            puVar22 = local_188;
            lVar30 = local_1e8;
            pcVar39 = local_1f0;
            UVar8.unknown._1_7_ = extraout_var;
            puVar38 = puVar35;
            pcVar34 = pcVar44;
            if (UVar8.unknown._0_1_) {
LAB_100234b58:
              UVar8.unknown = puVar22;
              (*pcVar34)(puVar22,puVar38,puVar31);
            }
            else {
              UVar20.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar8);
              lVar33 = local_1a0;
              lVar32 = local_1b0;
              UVar20.unknown._1_7_ = extraout_var_00;
              if (UVar20.unknown._0_1_) {
                (*local_1f8)(local_1b0,1,1,puVar31);
              }
              else {
                UVar8 = Foundation::URL::deletingPathExtension(UVar20);
                SVar45 = Foundation::URL::get_lastPathComponent(UVar8);
                (**(code **)(local_1e0 + 8))(lVar33,puVar31);
                lVar32 = local_1b0;
                FUN_100268ac4(local_1b0,SVar45.str,SVar45.bridgeObject);
                _swift_bridgeObjectRelease(SVar45.bridgeObject);
              }
              puVar38 = local_1a8;
              FUN_100007e1c(lVar32,local_1a8,&DAT_100553d90,&DAT_10041bf10);
              puVar25 = puVar38;
              (*pcVar39)(puVar38,1,puVar31);
              pcVar34 = local_200;
              if ((int)puVar25 != 1) goto LAB_100234b58;
              (*pcVar44)(puVar22,puVar35,puVar31);
              UVar8.unknown = puVar38;
              (*pcVar39)(puVar38,1,puVar31);
              if ((int)UVar8.unknown != 1) {
                FUN_10002a29c(puVar38,&DAT_100553d90,&DAT_10041bf10);
                UVar8.unknown = puVar38;
              }
            }
            bVar5 = Foundation::URL::get_isFileURL(UVar8);
            if (bVar5) {
              UVar8.unknown =
                   (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
              SVar45 = Foundation::URL::get_path(UVar8);
              pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(SVar45.bridgeObject);
              IVar21 = NSFileManager::fileExistsAtPath_((ID)UVar8.unknown,pNVar12);
              if ((int)IVar21 != 0) {
                _swift_beginAccess(unaff_x20 +
                                   _TtC7Wallper21VideoWallpaperManager::forcedRebuildScreens,
                                   &local_e8,0x21,0);
                _swift_bridgeObjectRetain(param_2);
                FUN_1001ca054(&local_a8,param_1,param_2);
                _swift_endAccess(&local_e8);
                _swift_bridgeObjectRelease(local_a0);
                FUN_10023e14c(puVar22,uVar42,0,0,1,0,0x3fc999999999999a,0);
                pcVar39 = *(code **)(local_1e0 + 8);
                (*pcVar39)(puVar22,puVar31);
                FUN_10002a29c(lVar30,&DAT_1005539e0,&DAT_100426a78);
                goto LAB_100234cb4;
              }
            }
            pcVar39 = *(code **)(local_1e0 + 8);
            (*pcVar39)(puVar22,puVar31);
            FUN_10002a29c(lVar30,&DAT_1005539e0,&DAT_100426a78);
LAB_100234cb4:
            (*pcVar39)(puVar35,puVar31);
            return;
          }
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar45.str,_Var40,(_StringComparisonResult)(__int8)param_1
                            );
          _swift_bridgeObjectRelease(_Var40.unknown);
          if (bVar5) goto LAB_100233fe8;
          lVar32 = uVar42 + 1;
          if (SCARRY8(uVar42,1)) {
                    /* WARNING: Does not return */
            pcVar39 = (code *)SoftwareBreakpoint(1,0x100235220);
            (*pcVar39)();
          }
          uVar42 = uVar42 + 1;
        } while (lVar32 != lVar30);
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
      pcVar39 = *(code **)(local_1e0 + 8);
      puVar35 = local_1d8;
LAB_100233fc0:
      (*pcVar39)(puVar35,local_1d0);
      return;
    }
  }
  FUN_10002a29c(lVar36,&DAT_100553d90,&DAT_10041bf10);
  return;
}

