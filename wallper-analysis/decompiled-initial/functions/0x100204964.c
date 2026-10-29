// rea decompile_all
// name: FUN_100204964
// address: 0x100204964
// body: available
// range: 0x100204964-0x100206fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100206f9c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100204964(undefined8 param_1,undefined8 param_2,char *param_3,URL param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  String SVar2;
  String SVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  NSDataReadingOptions contentsOf;
  bool bVar9;
  uint uVar10;
  Logger LVar11;
  DispatchWorkItemFlags DVar12;
  URL UVar13;
  undefined *puVar14;
  ID IVar15;
  ID self;
  URL UVar16;
  Data DVar17;
  NSString *pNVar18;
  NSData *pNVar19;
  undefined *puVar20;
  String *pSVar21;
  char *pcVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  String *pSVar25;
  Data DVar26;
  void *pvVar27;
  DispatchQoS DVar28;
  undefined8 *puVar29;
  OS_os_log *pOVar31;
  OS_os_log *pOVar32;
  undefined4 *puVar33;
  NSDictionary *pNVar34;
  NSURL *pNVar35;
  UUID UVar36;
  String *pSVar37;
  undefined8 extraout_x1;
  undefined8 uVar38;
  ulong uVar39;
  void *pvVar40;
  _StringGuts _Var42;
  char *extraout_x1_00;
  char *pcVar43;
  URL UVar44;
  long extraout_x8;
  long extraout_x8_00;
  long lVar45;
  long extraout_x8_01;
  undefined *puVar46;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar47;
  undefined *puVar48;
  char *pcVar49;
  ulong uVar50;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long unaff_x20;
  long lVar51;
  long lVar52;
  code *pcVar53;
  char *pcVar54;
  _StringGuts _Var55;
  String *pSVar56;
  long lVar57;
  ulong *puVar58;
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
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  undefined8 auStack_2d0 [4];
  undefined1 auStack_2b0 [16];
  void *pvStack_2a0;
  void *local_298;
  undefined *puStack_290;
  char *local_288;
  URL local_280;
  String *local_278;
  long local_270;
  long local_268;
  undefined *local_260;
  undefined *local_258;
  String *local_250;
  NSDataReadingOptions local_248;
  URL local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined *local_228;
  long local_220;
  undefined *local_218;
  undefined8 local_210;
  DispatchWorkItemFlags local_208;
  long local_200;
  undefined *puStack_1f8;
  long local_1f0;
  long local_1e8;
  undefined1 *local_1e0;
  char *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined *local_1c0;
  code *local_1b8;
  char *local_1b0;
  long local_1a8;
  char *local_1a0;
  undefined *local_198;
  String *local_170;
  String *local_168;
  String *local_160;
  char local_158 [24];
  undefined1 auStack_140 [16];
  char *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  String local_d0;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  String local_a0;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *puStack_78;
  long local_70;
  undefined1 *puVar30;
  void *pvVar41;
  
  local_230 = SUB84(param_4.unknown,0);
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_238 = param_2;
  local_22c = param_5;
  local_210 = param_1;
  local_1b0 = param_3;
  LVar11 = os::Logger::typeMetadataAccessor();
  lVar51 = *(long *)(LVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar51 + 0x40));
  local_1e0 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1e8 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1e8 + 0x40));
  lVar45 = (long)(auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1f0 = lVar45;
  puStack_1f8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_200 = *(long *)(puStack_1f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_200 + 0x40));
  puVar46 = (undefined *)(lVar45 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar48 = &DAT_10054a9c8;
  local_208.unknown = puVar46;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar48 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar52 = (long)puVar46 - extraout_x8_02;
  puVar48 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar48 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pSVar56 = (String *)(lVar52 - extraout_x8_03);
  local_1d8 = (char *)0x0;
  UVar13 = Foundation::URL::typeMetadataAccessor();
  local_1c8 = *(long *)(UVar13.unknown + -8);
  UVar16 = UVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c8 + 0x40));
  lVar57 = (long)pSVar56 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar46 = (undefined *)(lVar57 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar48 = puVar46 + -extraout_x12_00;
  local_240.unknown = puVar48;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar45 = (long)puVar48 - extraout_x12_01;
  local_1d0 = lVar45;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar45 = lVar45 - extraout_x12_02;
  local_1a8 = lVar45;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar49 = (char *)(lVar45 - extraout_x12_03);
  local_248.unknown = pcVar49;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar45 = (long)pcVar49 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_198 = (undefined *)(lVar45 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar48 = (undefined *)(lVar45 - extraout_x12_05) + -extraout_x12_06;
  FUN_10020e434();
  if ((((ulong)UVar16.unknown & 1) == 0) && (FUN_10020e434(), ((ulong)UVar16.unknown & 1) == 0))
  goto LAB_100206400;
  puVar14 = &_OBJC_CLASS___NSFileManager;
  local_280.unknown = puVar46;
  local_278 = pSVar56;
  local_270 = lVar52;
  local_268 = lVar57;
  local_228 = DVar12.unknown;
  local_220 = lVar51;
  local_218 = LVar11.unknown;
  IVar15 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar16.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar16);
  UVar16.unknown = local_198;
  local_1a0 = "en.slot.installed";
  SVar59.bridgeObject = (void *)0x80000001004e1140;
  SVar59.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar59,true,param_4);
  pcVar53 = *(code **)(local_1c8 + 8);
  (*pcVar53)(lVar45,UVar13.unknown);
  SVar60.bridgeObject = (void *)0xe800000000000000;
  SVar60.str = (char *)0x74736566696e616d;
  Foundation::URL::appendingPathComponent(SVar60,true,param_4);
  (*pcVar53)(UVar16.unknown,UVar13.unknown);
  DVar17.unknown = Foundation::URL::_bridgeToObjectiveC(UVar16);
  local_1b8 = pcVar53;
  (*pcVar53)(puVar48,UVar13.unknown);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_a0.bridgeObject;
  local_a0 = (String)(auVar4 << 0x40);
  pcVar49 = (char *)0x1;
  IVar15 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                     (IVar15,DVar17.unknown,1,0,&local_a0);
  pSVar56 = (String *)PTR___swiftEmptyArrayStorage_100524190;
  puVar46 = PTR___type_metadata_for_Swift_String_100523a98;
  if ((int)IVar15 == 0) {
    pcVar54 = local_a0.str;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    local_1c0 = UVar13.unknown;
    IVar15 = NSFileManager::defaultManager
                       ((ID)&_OBJC_CLASS___NSFileManager,
                        "/System/Library/ExtensionKit/Extensions/WallpaperAerialsExtension.appex/Contents/Resources/entries.json"
                       );
    pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar17.unknown = (undefined *)NSFileManager::contentsAtPath_(IVar15,pNVar18);
    local_260 = &_OBJC_CLASS___NSFileManager;
    if (DVar17.unknown == (undefined *)0x0) {
LAB_100205004:
      pcVar53 = local_1b8;
      puVar14 = (undefined *)NSFileManager::defaultManager((ID)puVar14);
      UVar16.unknown = puVar14;
      FUN_100207010(puVar48);
      SVar59 = Foundation::URL::get_path(UVar16);
      pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar59.bridgeObject);
      (*pcVar53)(puVar48,local_1c0);
      IVar15 = NSFileManager::fileExistsAtPath_((ID)puVar14,pNVar18);
      contentsOf.unknown = local_248.unknown;
      if ((int)IVar15 == 0) {
        pSVar37 = (String *)&DAT_10054c048;
        FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
        _swift_allocObject();
        pSVar37[2].str = (char *)0x6e6f6973726576;
        pSVar37[1].bridgeObject = (void *)0x8;
        pSVar37[1].str = (char *)0x4;
        pSVar37[2].bridgeObject = (void *)0xe700000000000000;
        pSVar37[3].str = (char *)0x1;
        pSVar37[4].bridgeObject = PTR___type_metadata_for_Swift_Int_100523bd8;
        pSVar37[5].str = (char *)0xd000000000000013;
        pSVar37[5].bridgeObject = (void *)0x80000001004e14f0;
        pSVar37[6].str = (char *)0x312d4c3232;
        pSVar37[6].bridgeObject = (void *)0xe500000000000000;
        pSVar37[7].bridgeObject = puVar46;
        pSVar37[8].str = (char *)0x737465737361;
        pSVar37[8].bridgeObject = (void *)0xe600000000000000;
        puVar14 = &DAT_10054f988;
        FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
        pSVar37[9].str = (char *)pSVar56;
        pSVar37[10].bridgeObject = puVar14;
        pSVar37[0xb].str = (char *)0x69726f6765746163;
        pSVar37[0xd].bridgeObject = puVar14;
        pSVar37[0xb].bridgeObject = (void *)0xea00000000007365;
        pSVar37[0xc].str = (char *)pSVar56;
        pSVar21 = pSVar37;
        FUN_100005b10();
        _swift_setDeallocating(pSVar37);
        puVar14 = &DAT_10054a1c0;
        FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
        _swift_arrayDestroy(pSVar37 + 2,4,puVar14);
        _swift_deallocClassInstance(pSVar37,0x20,7);
      }
      else {
        FUN_100207010(local_248.unknown,0);
        pcVar49 = local_1d8;
        uVar38 = 0;
        DVar17 = Foundation::Data::_init(contentsOf);
        if (pcVar49 == (char *)0x0) {
          local_1d8 = pcVar49;
          (*pcVar53)(contentsOf.unknown,local_1c0);
          pNVar19 = Foundation::Data::_bridgeToObjectiveC(DVar17);
          FUN_100093624(DVar17.unknown,uVar38);
          local_d0.str = (char *)0x0;
          IVar15 = NSJSONSerialization::JSONObjectWithData_options_error_
                             ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar19,0,&local_d0);
          if (IVar15 == 0) {
            pSVar56 = (String *)local_d0.str;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(pSVar56);
            local_1d8 = (char *)0x0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar15);
            puVar14 = &DAT_10054f980;
            FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
            pSVar56 = &local_d0;
            _swift_dynamicCast(pSVar56,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,puVar14,6
                              );
            pSVar21 = (String *)local_d0.str;
            if (((ulong)pSVar56 & 1) != 0) goto LAB_1002051f8;
          }
        }
        else {
          _swift_errorRelease(pcVar49);
          (*pcVar53)(contentsOf.unknown,local_1c0);
          local_1d8 = (char *)0x0;
        }
        pSVar21 = (String *)PTR___swiftEmptyArrayStorage_100524190;
        FUN_100005b10();
      }
    }
    else {
      uVar38 = extraout_x1;
      DVar17 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar17);
      pNVar19 = Foundation::Data::_bridgeToObjectiveC(DVar17);
      local_d0.str = (char *)0x0;
      IVar15 = NSJSONSerialization::JSONObjectWithData_options_error_
                         ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar19,0,&local_d0);
      if (IVar15 == 0) {
        pSVar21 = (String *)local_d0.str;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        FUN_100093624(DVar17.unknown,uVar38);
        puVar14 = local_260;
        _swift_errorRelease(pSVar21);
        local_1d8 = (char *)0x0;
        goto LAB_100205004;
      }
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar15);
      puVar20 = &DAT_10054f980;
      FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
      pSVar37 = &local_d0;
      _swift_dynamicCast(pSVar37,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,puVar20,6);
      pSVar21 = (String *)local_d0.str;
      if (((ulong)pSVar37 & 1) == 0) {
LAB_100204ff4:
        FUN_100093624(DVar17.unknown,uVar38);
        goto LAB_100205004;
      }
      if (((String *)((long)local_d0.str + 0x10))->str == (char *)0x0) {
LAB_100204fe8:
        _swift_bridgeObjectRelease(pSVar21);
        goto LAB_100204ff4;
      }
      _swift_bridgeObjectRetain(local_d0.str);
      lVar51 = 0x737465737361;
      uVar39 = 0;
      FUN_10000464c(0x737465737361);
      if ((uVar39 & 1) == 0) {
        _swift_bridgeObjectRelease(pSVar21);
        goto LAB_100204fe8;
      }
      FUN_1000280d4((void *)((long)((String *)((char *)pSVar21 + 3))->bridgeObject + lVar51 * 0x20),
                    &local_a0);
      _swift_bridgeObjectRelease(pSVar21);
      puVar20 = &DAT_10054f988;
      FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
      pSVar37 = &local_d0;
      _swift_dynamicCast(pSVar37,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,puVar20,6);
      pcVar49 = local_d0.str;
      if (((ulong)pSVar37 & 1) == 0) goto LAB_100204fe8;
      pcVar54 = ((String *)((long)local_d0.str + 0x10))->str;
      FUN_100093624(DVar17.unknown,uVar38);
      _swift_bridgeObjectRelease(pcVar49);
      if (pcVar54 == (char *)0x0) {
        _swift_bridgeObjectRelease(pSVar21);
        puVar14 = local_260;
        goto LAB_100205004;
      }
    }
LAB_1002051f8:
    local_160 = pSVar21;
    if (pSVar21[1].str == (char *)0x0) {
LAB_1002052a4:
      local_d0.str = (char *)0x312d4c3232;
      local_d0.bridgeObject = (String *)0xe500000000000000;
      puStack_b8 = puVar46;
      FUN_100007d88(&local_d0,&local_a0);
      pSVar56 = pSVar21;
      _swift_isUniquelyReferenced_nonNull_native(pSVar21);
      UVar36.unknown = (undefined *)&local_a0;
      local_d0.str = (char *)pSVar21;
      FUN_100340514(UVar36.unknown,0xd000000000000013,0x80000001004e14f0,pSVar56);
      local_160 = (String *)local_d0.str;
      pSVar21 = (String *)local_d0.str;
      if (((String *)((long)local_d0.str + 0x10))->str == (char *)0x0) goto LAB_100205370;
LAB_1002052f0:
      _swift_bridgeObjectRetain(pSVar21);
      lVar51 = 0x737465737361;
      uVar39 = 0;
      FUN_10000464c(0x737465737361);
      if ((uVar39 & 1) == 0) {
        UVar36.unknown = (undefined *)pSVar21;
        _swift_bridgeObjectRelease();
        goto LAB_100205370;
      }
      FUN_1000280d4((void *)((long)pSVar21[3].bridgeObject + lVar51 * 0x20),&local_a0);
      _swift_bridgeObjectRelease(pSVar21);
      puVar14 = &DAT_10054f988;
      FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
      UVar36.unknown = (undefined *)&local_d0;
      _swift_dynamicCast(UVar36.unknown,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,puVar14,
                         6);
      local_168 = (String *)local_d0.str;
      if (((ulong)UVar36.unknown & 1) == 0) goto LAB_100205370;
    }
    else {
      _swift_bridgeObjectRetain(pSVar21);
      lVar51 = -0x2fffffffffffffed;
      uVar39 = 0;
      FUN_10000464c(0xd000000000000013);
      if ((uVar39 & 1) == 0) {
        _swift_bridgeObjectRelease(pSVar21);
        goto LAB_1002052a4;
      }
      FUN_1000280d4((void *)((long)pSVar21[3].bridgeObject + lVar51 * 0x20),&local_a0);
      _swift_bridgeObjectRelease(pSVar21);
      pSVar56 = &local_d0;
      _swift_dynamicCast(pSVar56,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      pvVar40 = local_d0.bridgeObject;
      pcVar49 = local_d0.str;
      if (((ulong)pSVar56 & 1) == 0) goto LAB_1002052a4;
      UVar36.unknown = local_d0.bridgeObject;
      _swift_bridgeObjectRelease();
      uVar39 = (ulong)pcVar49 & 0xffffffffffff;
      if (((ulong)pvVar40 & 0x2000000000000000) != 0) {
        uVar39 = (ulong)pvVar40 >> 0x38 & 0xf;
      }
      if (uVar39 == 0) goto LAB_1002052a4;
      if (pSVar21[1].str != (char *)0x0) goto LAB_1002052f0;
LAB_100205370:
      local_168 = (String *)PTR___swiftEmptyArrayStorage_100524190;
    }
    local_170 = (String *)PTR___swiftEmptyArrayStorage_100524190;
    if (pSVar21[1].str != (char *)0x0) {
      _swift_bridgeObjectRetain(pSVar21);
      lVar51 = 0x69726f6765746163;
      uVar39 = 0xea00000000007365;
      FUN_10000464c(0x69726f6765746163);
      if ((uVar39 & 1) == 0) {
        _swift_bridgeObjectRelease();
        UVar36.unknown = (undefined *)pSVar21;
        local_170 = (String *)PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        FUN_1000280d4((void *)((long)pSVar21[3].bridgeObject + lVar51 * 0x20),&local_a0);
        _swift_bridgeObjectRelease(pSVar21);
        puVar14 = &DAT_10054f988;
        FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
        UVar36.unknown = (undefined *)&local_d0;
        _swift_dynamicCast(UVar36.unknown,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,
                           puVar14,6);
        local_170 = (String *)PTR___swiftEmptyArrayStorage_100524190;
        if (((ulong)UVar36.unknown & 1) != 0) {
          local_170 = (String *)local_d0.str;
        }
      }
    }
    SVar59 = Foundation::UUID::get_uuidString(UVar36);
    UVar36.unknown = SVar59.bridgeObject;
    SVar59 = Swift::String::uppercased(SVar59);
    pcVar43 = SVar59.str;
    local_258 = SVar59.bridgeObject;
    _swift_bridgeObjectRelease();
    local_a0 = Foundation::UUID::get_uuidString(UVar36);
    pvVar40 = local_a0.bridgeObject;
    pcVar49 = local_a0.str;
    local_d0.str = (char *)0x2d;
    local_d0.bridgeObject = (String *)0xe100000000000000;
    local_f0 = (char *)0x0;
    uStack_e8 = 0xe000000000000000;
    FUN_100026df4();
    *(char **)(puVar48 + -0x10) = pcVar49;
    *(char **)(puVar48 + -8) = pcVar49;
    *(undefined **)(puVar48 + -0x20) = puVar46;
    *(char **)(puVar48 + -0x18) = pcVar49;
    puVar14 = (undefined *)0x0;
    SVar60 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_d0,&local_f0,0,0,0,1,puVar46,puVar46);
    pvVar41 = SVar60.bridgeObject;
    _swift_bridgeObjectRelease(pvVar40);
    pcVar49 = (char *)0x6;
    FUN_10020cba0();
    pcVar54 = SVar60.bridgeObject;
    SVar61.bridgeObject = SVar60.str;
    _swift_bridgeObjectRelease(pvVar41);
    local_a0.str = (char *)0x5f4d4f54535543;
    local_a0.bridgeObject = (String *)0xe700000000000000;
    SVar61.str = pcVar49;
    UVar16.unknown = puVar14;
    SVar60 = Swift::String::__fromSubstring(SVar61);
    SVar78.bridgeObject = UVar16.unknown;
    SVar78.str = pcVar54;
    Swift::String::append(SVar60,SVar78);
    _swift_bridgeObjectRelease(puVar14);
    _swift_bridgeObjectRelease(SVar60.bridgeObject);
    local_250 = local_a0.bridgeObject;
    local_248.unknown = local_a0.str;
    FUN_100207198(&local_168,pcVar43,SVar59.bridgeObject);
    puVar46 = local_260;
    IVar15 = objc_stub::defaultManager((ID)local_260);
    UVar13.unknown = (undefined *)objc_stub::homeDirectoryForCurrentUser(IVar15);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar13);
    puVar20 = local_198;
    SVar62.bridgeObject = (void *)((ulong)local_1a0 | 0x8000000000000000);
    SVar62.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar62,true,UVar16);
    pcVar53 = local_1b8;
    puVar14 = local_1c0;
    (*local_1b8)(lVar45,local_1c0);
    UVar13.unknown = (char *)0x1;
    SVar63.bridgeObject = (void *)0xe600000000000000;
    SVar63.str = (char *)0x736f65646976;
    Foundation::URL::appendingPathComponent(SVar63,true,UVar16);
    (*pcVar53)(puVar20,puVar14);
    local_a0.bridgeObject = local_258;
    local_a0.str = pcVar43;
    _swift_bridgeObjectRetain();
    SVar64.bridgeObject = (void *)0xe400000000000000;
    SVar64.str = (char *)0x766f6d2e;
    SVar79.bridgeObject = UVar16.unknown;
    SVar79.str = UVar13.unknown;
    Swift::String::append(SVar64,SVar79);
    pvVar40 = local_a0.bridgeObject;
    Foundation::URL::appendingPathComponent(local_a0,UVar13);
    _swift_bridgeObjectRelease(pvVar40);
    (*pcVar53)(puVar48,puVar14);
    IVar15 = objc_stub::defaultManager((ID)puVar46);
    UVar13.unknown = (undefined *)objc_stub::homeDirectoryForCurrentUser(IVar15);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar13);
    SVar65.bridgeObject = (void *)((ulong)local_1a0 | 0x8000000000000000);
    SVar65.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar65,true,UVar16);
    (*pcVar53)(lVar45,puVar14);
    UVar13.unknown = (char *)0x1;
    SVar66.bridgeObject = (void *)0xea0000000000736c;
    SVar66.str = (char *)0x69616e626d756874;
    Foundation::URL::appendingPathComponent(SVar66,true,UVar16);
    (*pcVar53)(puVar20,puVar14);
    _Var55.unknown = local_258;
    local_a0.bridgeObject = local_258;
    _swift_bridgeObjectRetain(local_258);
    SVar67.bridgeObject = (void *)0xe400000000000000;
    SVar67.str = (char *)0x676e702e;
    SVar80.bridgeObject = UVar16.unknown;
    SVar80.str = UVar13.unknown;
    Swift::String::append(SVar67,SVar80);
    pvVar40 = local_a0.bridgeObject;
    Foundation::URL::appendingPathComponent(local_a0,UVar13);
    _swift_bridgeObjectRelease(pvVar40);
    UVar16.unknown = puVar48;
    (*pcVar53)(puVar48,puVar14);
    SVar59 = Foundation::URL::get_absoluteString(UVar16);
    local_298 = SVar59.bridgeObject;
    puStack_290 = SVar59.str;
    join_0x00004008_0x00004000_ = Foundation::URL::get_absoluteString((URL)puStack_290);
    pcVar54 = local_1b0;
    uVar38 = local_238;
    pcVar22 = auStack_2b0._8_8_;
    FUN_100208370(&local_170,local_238,local_1b0,pcVar22,auStack_2b0._16_8_,pcVar43,_Var55.unknown);
    pcVar49 = &DAT_10054c048;
    FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
    _swift_allocObject();
    pcVar49[0x18] = '\x18';
    pcVar49[0x19] = '\0';
    pcVar49[0x1a] = '\0';
    pcVar49[0x1b] = '\0';
    pcVar49[0x1c] = '\0';
    pcVar49[0x1d] = '\0';
    pcVar49[0x1e] = '\0';
    pcVar49[0x1f] = '\0';
    pcVar49[0x10] = '\f';
    pcVar49[0x11] = '\0';
    pcVar49[0x12] = '\0';
    pcVar49[0x13] = '\0';
    pcVar49[0x14] = '\0';
    pcVar49[0x15] = '\0';
    pcVar49[0x16] = '\0';
    pcVar49[0x17] = '\0';
    local_288 = pcVar49 + 0x20;
    *(undefined1 **)local_288 = &DAT_00006469;
    pcVar49[0x28] = '\0';
    pcVar49[0x29] = '\0';
    pcVar49[0x2a] = '\0';
    pcVar49[0x2b] = '\0';
    pcVar49[0x2c] = '\0';
    pcVar49[0x2d] = '\0';
    pcVar49[0x2e] = '\0';
    pcVar49[0x2f] = -0x1e;
    *(char **)(pcVar49 + 0x30) = pcVar43;
    *(undefined **)(pcVar49 + 0x38) = _Var55.unknown;
    puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
    *(undefined **)(pcVar49 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    pcVar49[0x50] = 's';
    pcVar49[0x51] = 'h';
    pcVar49[0x52] = 'o';
    pcVar49[0x53] = 't';
    pcVar49[0x54] = 'I';
    pcVar49[0x55] = 'D';
    pcVar49[0x56] = '\0';
    pcVar49[0x57] = '\0';
    pcVar49[0x58] = '\0';
    pcVar49[0x59] = '\0';
    pcVar49[0x5a] = '\0';
    pcVar49[0x5b] = '\0';
    pcVar49[0x5c] = '\0';
    pcVar49[0x5d] = '\0';
    pcVar49[0x5e] = '\0';
    pcVar49[0x5f] = -0x1a;
    *(undefined **)(pcVar49 + 0x60) = local_248.unknown;
    *(String **)(pcVar49 + 0x68) = local_250;
    *(undefined **)(pcVar49 + 0x78) = puVar20;
    pcVar49[0x80] = '\x10';
    pcVar49[0x81] = '\0';
    pcVar49[0x82] = '\0';
    pcVar49[0x83] = '\0';
    pcVar49[0x84] = '\0';
    pcVar49[0x85] = '\0';
    pcVar49[0x86] = '\0';
    pcVar49[0x87] = -0x30;
    pcVar49[0x88] = '\x10';
    pcVar49[0x89] = '\x15';
    pcVar49[0x8a] = 'N';
    pcVar49[0x8b] = '\0';
    pcVar49[0x8c] = '\x01';
    pcVar49[0x8d] = '\0';
    pcVar49[0x8e] = '\0';
    pcVar49[0x8f] = -0x80;
    *(undefined8 *)(pcVar49 + 0x90) = uVar38;
    *(char **)(pcVar49 + 0x98) = pcVar54;
    *(undefined **)(pcVar49 + 0xa8) = puVar20;
    pcVar49[0xb0] = '\x12';
    pcVar49[0xb1] = '\0';
    pcVar49[0xb2] = '\0';
    pcVar49[0xb3] = '\0';
    pcVar49[0xb4] = '\0';
    pcVar49[0xb5] = '\0';
    pcVar49[0xb6] = '\0';
    pcVar49[0xb7] = -0x30;
    pcVar49[0xb8] = '0';
    pcVar49[0xb9] = '\x15';
    pcVar49[0xba] = 'N';
    pcVar49[0xbb] = '\0';
    pcVar49[0xbc] = '\x01';
    pcVar49[0xbd] = '\0';
    pcVar49[0xbe] = '\0';
    pcVar49[0xbf] = -0x80;
    *(undefined8 *)(pcVar49 + 0xc0) = uVar38;
    *(char **)(pcVar49 + 200) = pcVar54;
    *(undefined **)(pcVar49 + 0xd8) = puVar20;
    pcVar49[0xe0] = '\x10';
    pcVar49[0xe1] = '\0';
    pcVar49[0xe2] = '\0';
    pcVar49[0xe3] = '\0';
    pcVar49[0xe4] = '\0';
    pcVar49[0xe5] = '\0';
    pcVar49[0xe6] = '\0';
    pcVar49[0xe7] = -0x30;
    pcVar49[0xe8] = 'P';
    puVar46 = PTR___type_metadata_for_Swift_Bool_100523b70;
    pcVar49[0xe9] = '\x15';
    pcVar49[0xea] = 'N';
    pcVar49[0xeb] = '\0';
    pcVar49[0xec] = '\x01';
    pcVar49[0xed] = '\0';
    pcVar49[0xee] = '\0';
    pcVar49[0xef] = -0x80;
    pcVar49[0xf0] = (byte)local_230 & 1;
    *(undefined **)(pcVar49 + 0x108) = puVar46;
    pcVar49[0x110] = 's';
    pcVar49[0x111] = 'h';
    pcVar49[0x112] = 'o';
    pcVar49[0x113] = 'w';
    pcVar49[0x114] = 'I';
    pcVar49[0x115] = 'n';
    pcVar49[0x116] = 'T';
    pcVar49[0x117] = 'o';
    pcVar49[0x118] = 'p';
    pcVar49[0x119] = 'L';
    pcVar49[0x11a] = 'e';
    pcVar49[0x11b] = 'v';
    pcVar49[0x11c] = 'e';
    pcVar49[0x11d] = 'l';
    pcVar49[0x11e] = '\0';
    pcVar49[0x11f] = -0x12;
    pcVar49[0x120] = (byte)local_22c & 1;
    *(undefined **)(pcVar49 + 0x138) = puVar46;
    pcVar49[0x140] = 'p';
    pcVar49[0x141] = 'r';
    pcVar49[0x142] = 'e';
    pcVar49[0x143] = 'f';
    pcVar49[0x144] = 'e';
    pcVar49[0x145] = 'r';
    pcVar49[0x146] = 'r';
    pcVar49[0x147] = 'e';
    pcVar49[0x148] = 'd';
    pcVar49[0x149] = 'O';
    pcVar49[0x14a] = 'r';
    pcVar49[0x14b] = 'd';
    pcVar49[0x14c] = 'e';
    pcVar49[0x14d] = 'r';
    pcVar49[0x14e] = '\0';
    pcVar49[0x14f] = -0x12;
    pcVar49[0x150] = '\0';
    pcVar49[0x151] = '\0';
    pcVar49[0x152] = '\0';
    pcVar49[0x153] = '\0';
    pcVar49[0x154] = '\0';
    pcVar49[0x155] = '\0';
    pcVar49[0x156] = '\0';
    pcVar49[0x157] = '\0';
    *(undefined **)(pcVar49 + 0x168) = PTR___type_metadata_for_Swift_Int_100523bd8;
    pcVar49[0x170] = 'c';
    pcVar49[0x171] = 'a';
    pcVar49[0x172] = 't';
    pcVar49[0x173] = 'e';
    pcVar49[0x174] = 'g';
    pcVar49[0x175] = 'o';
    pcVar49[0x176] = 'r';
    pcVar49[0x177] = 'i';
    pcVar49[0x178] = 'e';
    pcVar49[0x179] = 's';
    pcVar49[0x17a] = '\0';
    pcVar49[0x17b] = '\0';
    pcVar49[0x17c] = '\0';
    pcVar49[0x17d] = '\0';
    pcVar49[0x17e] = '\0';
    pcVar49[0x17f] = -0x16;
    puVar46 = &DAT_100549eb0;
    local_1a0 = pcVar43;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    puVar23 = puVar46;
    _swift_allocObject();
    *(undefined8 *)(puVar23 + 0x18) = 2;
    *(undefined8 *)(puVar23 + 0x10) = 1;
    uVar38 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar23 + 0x20) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar23 + 0x28) = uVar38;
    puVar14 = &DAT_100553858;
    FUN_100002f94(&DAT_100553858,&DAT_100429e10);
    *(undefined **)(pcVar49 + 0x180) = puVar23;
    *(undefined **)(pcVar49 + 0x198) = puVar14;
    pcVar49[0x1a0] = 's';
    pcVar49[0x1a1] = 'u';
    pcVar49[0x1a2] = 'b';
    pcVar49[0x1a3] = 'c';
    pcVar49[0x1a4] = 'a';
    pcVar49[0x1a5] = 't';
    pcVar49[0x1a6] = 'e';
    pcVar49[0x1a7] = 'g';
    pcVar49[0x1a8] = 'o';
    pcVar49[0x1a9] = 'r';
    pcVar49[0x1aa] = 'i';
    pcVar49[0x1ab] = 'e';
    pcVar49[0x1ac] = 's';
    pcVar49[0x1ad] = '\0';
    pcVar49[0x1ae] = '\0';
    pcVar49[0x1af] = -0x13;
    _swift_allocObject(puVar46,0x30,7);
    *(undefined8 *)(puVar46 + 0x18) = 2;
    *(undefined8 *)(puVar46 + 0x10) = 1;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(puVar46 + 0x20) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(puVar46 + 0x28) = uVar1;
    *(undefined **)(pcVar49 + 0x1b0) = puVar46;
    *(undefined **)(pcVar49 + 0x1c8) = puVar14;
    pcVar49[0x1d0] = 'p';
    pcVar49[0x1d1] = 'r';
    pcVar49[0x1d2] = 'e';
    pcVar49[0x1d3] = 'v';
    pcVar49[0x1d4] = 'i';
    pcVar49[0x1d5] = 'e';
    pcVar49[0x1d6] = 'w';
    pcVar49[0x1d7] = 'I';
    pcVar49[0x1d8] = 'm';
    pcVar49[0x1d9] = 'a';
    pcVar49[0x1da] = 'g';
    pcVar49[0x1db] = 'e';
    pcVar49[0x1dc] = '\0';
    pcVar49[0x1dd] = '\0';
    pcVar49[0x1de] = '\0';
    pcVar49[0x1df] = -0x14;
    *(undefined8 *)(pcVar49 + 0x1e0) = auStack_2b0._8_8_;
    *(void **)(pcVar49 + 0x1e8) = pvStack_2a0;
    *(undefined **)(pcVar49 + 0x1f8) = puVar20;
    pcVar49[0x200] = '\x11';
    pcVar49[0x201] = '\0';
    pcVar49[0x202] = '\0';
    pcVar49[0x203] = '\0';
    pcVar49[0x204] = '\0';
    pcVar49[0x205] = '\0';
    pcVar49[0x206] = '\0';
    pcVar49[0x207] = -0x30;
    pcVar49[0x208] = 'p';
    pcVar49[0x209] = '\x15';
    pcVar49[0x20a] = 'N';
    pcVar49[0x20b] = '\0';
    pcVar49[0x20c] = '\x01';
    pcVar49[0x20d] = '\0';
    pcVar49[0x20e] = '\0';
    pcVar49[0x20f] = -0x80;
    *(undefined **)(pcVar49 + 0x228) = puVar20;
    *(undefined **)(pcVar49 + 0x210) = puStack_290;
    *(void **)(pcVar49 + 0x218) = local_298;
    pcVar49[0x230] = '\x10';
    pcVar49[0x231] = '\0';
    pcVar49[0x232] = '\0';
    pcVar49[0x233] = '\0';
    pcVar49[0x234] = '\0';
    pcVar49[0x235] = '\0';
    pcVar49[0x236] = '\0';
    pcVar49[0x237] = -0x30;
    pcVar49[0x238] = -0x70;
    pcVar49[0x239] = '\x15';
    pcVar49[0x23a] = 'N';
    pcVar49[0x23b] = '\0';
    pcVar49[0x23c] = '\x01';
    pcVar49[0x23d] = '\0';
    pcVar49[0x23e] = '\0';
    pcVar49[0x23f] = -0x80;
    puVar46 = &DAT_100554f88;
    FUN_100002f94(&DAT_100554f88,&DAT_100428a98);
    pcVar43 = (char *)0x7;
    _swift_allocObject();
    pSVar56 = local_250;
    *(undefined8 *)(puVar46 + 0x18) = 2;
    *(undefined8 *)(puVar46 + 0x10) = 1;
    *(undefined8 *)(puVar46 + 0x20) = 0x30;
    *(undefined8 *)(puVar46 + 0x28) = 0xe100000000000000;
    local_a0.str = local_248.unknown;
    local_a0.bridgeObject = local_250;
    _swift_bridgeObjectRetain_n(pcVar54,2);
    _swift_bridgeObjectRetain(_Var55.unknown);
    _swift_bridgeObjectRetain(pSVar56);
    _swift_bridgeObjectRetain(uVar38);
    _swift_bridgeObjectRetain(uVar1);
    SVar68.bridgeObject = (void *)0xe200000000000000;
    SVar68.str = (char *)0x305f;
    SVar81.bridgeObject = pcVar22;
    SVar81.str = pcVar43;
    Swift::String::append(SVar68,SVar81);
    *(char **)(puVar46 + 0x30) = local_a0.str;
    *(void **)(puVar46 + 0x38) = local_a0.bridgeObject;
    puVar14 = puVar46;
    FUN_100005574();
    _swift_setDeallocating(puVar46);
    FUN_10002a29c(puVar46 + 0x20,&DAT_100554f90,&DAT_100428aa0);
    _swift_deallocClassInstance(puVar46,0x20,7);
    puVar46 = &DAT_100555b40;
    FUN_100002f94(&DAT_100555b40,&DAT_100429998);
    *(undefined **)(pcVar49 + 600) = puVar46;
    *(undefined **)(pcVar49 + 0x240) = puVar14;
    pcVar54 = pcVar49;
    FUN_100005b10();
    local_1b0 = pcVar54;
    _swift_setDeallocating(pcVar49);
    puVar46 = &DAT_10054a1c0;
    FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
    _swift_arrayDestroy(local_288,0xc,puVar46);
    _swift_deallocClassInstance(pcVar49,0x20,7);
    pSVar56 = local_168;
    puVar46 = PTR___type_metadata_for_Swift_String_100523a98;
    pcVar49 = local_168[1].str;
    if (pcVar49 != (char *)0x0) {
      pcVar54 = (char *)0x0;
      pSVar21 = local_168 + 2;
      do {
        if (pSVar56[1].str <= pcVar54) {
                    /* WARNING: Does not return */
          pcVar53 = (code *)SoftwareBreakpoint(1,0x100206edc);
          (*pcVar53)();
        }
        pcVar43 = pSVar21->str;
        if (*(long *)(pcVar43 + 0x10) != 0) {
          _swift_bridgeObjectRetain(pcVar43);
          puVar24 = &DAT_00006469;
          uVar39 = 0;
          FUN_10000464c(&DAT_00006469);
          if ((uVar39 & 1) != 0) {
            FUN_1000280d4(*(long *)(pcVar43 + 0x38) + (long)puVar24 * 0x20,&local_a0);
            pSVar37 = &local_d0;
            _swift_dynamicCast(pSVar37,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,puVar46,6
                              );
            pvVar40 = local_d0.bridgeObject;
            if (((ulong)pSVar37 & 1) != 0) {
              SVar3.bridgeObject = local_d0.bridgeObject;
              SVar3.str = local_d0.str;
              SVar59 = Swift::String::uppercased(SVar3);
              _Var42.unknown = SVar59.bridgeObject;
              _swift_bridgeObjectRelease(pvVar40);
              SVar2.bridgeObject = _Var55.unknown;
              SVar2.str = local_1a0;
              if (SVar59 == SVar2) {
                _swift_bridgeObjectRelease(_Var55.unknown);
                _swift_bridgeObjectRelease(pcVar43);
                _Var55.unknown = _Var42.unknown;
              }
              else {
                bVar9 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar59.str,_Var42,
                                   (_StringComparisonResult)(__int8)local_1a0);
                _swift_bridgeObjectRelease(pcVar43);
                _swift_bridgeObjectRelease(_Var42.unknown);
                if (!bVar9) goto LAB_100205b68;
              }
              _swift_bridgeObjectRelease(_Var55.unknown);
              if (pSVar56[1].str <= pcVar54) {
                    /* WARNING: Does not return */
                pcVar53 = (code *)SoftwareBreakpoint(1,0x100206f88);
                (*pcVar53)();
              }
              pcVar49 = pSVar21->str;
              puVar58 = (ulong *)(local_1b0 + 0x40);
              uVar50 = 1L << ((ulong)(byte)local_1b0[0x20] & 0x3f);
              uVar39 = 0xffffffffffffffff;
              if ((local_1b0[0x20] & 0x3fU) < 6) {
                uVar39 = ~(-1L << (uVar50 & 0x3f));
              }
              uVar39 = uVar39 & *puVar58;
              uVar50 = uVar50 + 0x3f >> 6;
              _swift_bridgeObjectRetain(pcVar49);
              lVar45 = 0;
              goto LAB_100206728;
            }
          }
          _swift_bridgeObjectRelease(pcVar43);
        }
LAB_100205b68:
        pcVar54 = pcVar54 + 1;
        pSVar21 = (String *)&pSVar21->bridgeObject;
      } while (pcVar49 != pcVar54);
    }
    _swift_bridgeObjectRelease(_Var55.unknown);
    pSVar21 = pSVar56;
    _swift_isUniquelyReferenced_nonNull_native();
    pSVar37 = pSVar56;
    if (((ulong)pSVar21 & 1) == 0) {
      pSVar37 = (String *)0x0;
      FUN_1001c4338(0,pSVar56[1].str + 1,1,pSVar56);
    }
    puVar46 = PTR___type_metadata_for_Swift_Int_100523bd8;
    pcVar49 = pSVar37[1].str;
    pSVar56 = pSVar37;
    if ((char *)((ulong)pSVar37[1].bridgeObject >> 1) <= pcVar49) {
      pSVar56 = (String *)(ulong)((void *)0x1 < pSVar37[1].bridgeObject);
      FUN_1001c4338(pSVar56,pcVar49 + 1,1,pSVar37);
    }
    pSVar56[1].str = pcVar49 + 1;
    (&pSVar56[2].str)[(long)pcVar49] = local_1b0;
LAB_100205c90:
    puVar14 = &DAT_10054f988;
    FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
    local_d0.str = (char *)pSVar56;
    puStack_b8 = puVar14;
    if (puVar14 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(pSVar56);
      FUN_10002a29c(&local_d0,&DAT_10054d428,&DAT_100420300);
      FUN_10027eb2c(&local_a0,0x737465737361,0xe600000000000000);
      FUN_10002a29c(&local_a0,&DAT_10054d428,&DAT_100420300);
      pSVar21 = local_170;
      local_d0.str = (char *)local_170;
      puStack_b8 = (undefined *)0x0;
      _swift_bridgeObjectRetain(local_170);
      FUN_10002a29c(&local_d0,&DAT_10054d428,&DAT_100420300);
      FUN_10027eb2c(&local_a0,0x69726f6765746163,0xea00000000007365);
      FUN_10002a29c(&local_a0,&DAT_10054d428,&DAT_100420300);
    }
    else {
      FUN_100007d88(&local_d0,&local_a0);
      _swift_bridgeObjectRetain(pSVar56);
      pSVar21 = local_160;
      pSVar37 = local_160;
      _swift_isUniquelyReferenced_nonNull_native(local_160);
      local_d0.str = (char *)pSVar21;
      FUN_100340514(&local_a0,0x737465737361,0xe600000000000000,pSVar37);
      pcVar49 = local_d0.str;
      pSVar21 = local_170;
      local_d0.str = (char *)local_170;
      puStack_b8 = puVar14;
      FUN_100007d88(&local_d0,&local_a0);
      _swift_bridgeObjectRetain(pSVar21);
      pSVar37 = (String *)pcVar49;
      _swift_isUniquelyReferenced_nonNull_native(pcVar49);
      local_d0.str = pcVar49;
      FUN_100340514(&local_a0,0x69726f6765746163,0xea00000000007365,pSVar37);
      local_160 = (String *)local_d0.str;
    }
    pSVar37 = local_160;
    local_d0.str = pSVar56[1].str;
    puStack_b8 = puVar46;
    FUN_100007d88(&local_d0,&local_a0);
    pSVar25 = pSVar37;
    _swift_isUniquelyReferenced_nonNull_native(pSVar37);
    local_d0.str = (char *)pSVar37;
    FUN_100340514(&local_a0,0xd000000000000011,0x80000001004e15b0,pSVar25);
    pcVar43 = local_d0.str;
    local_160 = (String *)local_d0.str;
    DVar17.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_a0.bridgeObject;
    local_a0 = (String)(auVar8 << 0x40);
    pcVar49 = (char *)0x3;
    DVar26.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,DVar17.unknown,3,&local_a0);
    if (DVar26.unknown == (undefined *)0x0) {
      pcVar54 = local_a0.str;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      pcVar53 = local_1b8;
      puVar48 = local_1c0;
      (*local_1b8)(local_1d0,local_1c0);
      (*pcVar53)(local_1a8,puVar48);
      _swift_bridgeObjectRelease(pcVar43);
    }
    else {
      pcVar22 = extraout_x1_00;
      DVar26 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar26);
      UVar16.unknown = local_240.unknown;
      FUN_100207010(local_240.unknown,0);
      pcVar54 = local_1d8;
      DVar17 = DVar26;
      pcVar49 = pcVar22;
      Foundation::Data::_write(UVar16,(NSDataWritingOptions)0x1,DVar26);
      pcVar53 = local_1b8;
      puVar46 = local_1c0;
      if (pcVar54 == (char *)0x0) {
        local_1b0 = (char *)DVar26;
        (*local_1b8)(UVar16.unknown,local_1c0);
        FUN_100207010(puVar48);
        FUN_100212f10(puVar48);
        puVar14 = puVar48;
        (*pcVar53)(puVar48,puVar46);
        _NSHomeDirectory();
        if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar53 = (code *)SoftwareBreakpoint(1,0x100206fa4);
          (*pcVar53)();
        }
        pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar18 = (NSString *)objc_stub::stringByAppendingPathComponent_((ID)puVar14,pNVar18);
        if (pNVar18 == (NSString *)0x0) {
          SVar59 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar59.bridgeObject);
        }
        puVar46 = &_OBJC_CLASS___NSDictionary;
        local_1d8 = pcVar22;
        _objc_allocWithZone();
        pNVar34 = (NSDictionary *)objc_stub::initWithContentsOfFile_((ID)puVar46,pNVar18);
        puVar46 = local_260;
        if (pNVar34 != (NSDictionary *)0x0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_a0.bridgeObject;
          local_a0 = (String)(auVar5 << 0x40);
          (extension_Foundation)::Swift::Dictionary::__conditionallyBridgeFromObjectiveC(pNVar34);
          pcVar49 = local_a0.str;
          if (local_a0.str != (char *)0x0) {
            if (*(long *)(local_a0.str + 0x10) == 0) {
LAB_100206a7c:
              local_a0 = (String)ZEXT816(0);
              local_88 = (undefined *)0x0;
              local_90 = (code *)0x0;
            }
            else {
              _swift_bridgeObjectRetain(local_a0.str);
              lVar45 = -0x2fffffffffffffef;
              uVar39 = 0;
              FUN_10000464c(0xd000000000000011);
              if ((uVar39 & 1) == 0) {
                _swift_bridgeObjectRelease(pcVar49);
                goto LAB_100206a7c;
              }
              FUN_1000280d4(*(long *)(pcVar49 + 0x38) + lVar45 * 0x20,&local_a0);
              _swift_bridgeObjectRelease(pcVar49);
            }
            _swift_bridgeObjectRelease(pcVar49);
            if (local_88 == (undefined *)0x0) {
              puVar14 = &DAT_10054d428;
              puVar20 = &DAT_100420300;
              UVar16.unknown = (undefined *)&local_a0;
LAB_100206b24:
              FUN_10002a29c(UVar16.unknown,puVar14,puVar20);
            }
            else {
              pSVar37 = &local_d0;
              _swift_dynamicCast(pSVar37,&local_a0,PTR___type_metadata_for_Any_100524178 + 8,
                                 PTR___type_metadata_for_Swift_String_100523a98,6);
              pvVar40 = local_d0.bridgeObject;
              UVar16.unknown = (undefined *)local_278;
              if (((ulong)pSVar37 & 1) != 0) {
                Foundation::URL::_init();
                _swift_bridgeObjectRelease(pvVar40);
                puVar14 = local_1c0;
                UVar13.unknown = UVar16.unknown;
                UVar44.unknown = local_1c0;
                (**(code **)(local_1c8 + 0x30))(UVar16.unknown,1);
                if ((int)UVar13.unknown == 1) {
                  puVar14 = &DAT_100553d90;
                  puVar20 = &DAT_10041bf10;
                  goto LAB_100206b24;
                }
                SVar59 = Foundation::URL::get_path(UVar13);
                pvVar40 = SVar59.bridgeObject;
                (*pcVar53)(UVar16.unknown,puVar14);
                puVar46 = local_198;
                uVar39 = (ulong)SVar59.str & 0xffffffffffff;
                if (((ulong)pvVar40 & 0x2000000000000000) != 0) {
                  uVar39 = (ulong)pvVar40 >> 0x38 & 0xf;
                }
                if (uVar39 == 0) {
                  _swift_bridgeObjectRelease(pvVar40);
                  puVar46 = local_260;
                }
                else {
                  local_1a0 = pcVar54;
                  FUN_100207010(local_198);
                  Foundation::URL::deletingLastPathComponent(UVar16);
                  (*pcVar53)(puVar46,puVar14);
                  UVar16.unknown = local_280.unknown;
                  SVar77.bridgeObject = (void *)0xef656372756f732e;
                  SVar77.str = (char *)0x74736566696e616d;
                  Foundation::URL::appendingPathComponent(SVar77,UVar44);
                  (*pcVar53)(puVar48,puVar14);
                  FUN_100284930(SVar59.str,pvVar40);
                  pcVar49 = local_1a0;
                  DVar17.unknown = SVar59.str;
                  Foundation::Data::_write(UVar16,(NSDataWritingOptions)0x1,DVar17);
                  if (pcVar49 == (char *)0x0) {
                    (*pcVar53)(UVar16.unknown,puVar14);
                    FUN_100093624(DVar17.unknown,SVar59.bridgeObject);
                    puVar46 = local_260;
                  }
                  else {
                    _swift_errorRelease(pcVar49);
                    FUN_100093624(DVar17.unknown,SVar59.bridgeObject);
                    (*pcVar53)(UVar16.unknown,puVar14);
                    puVar46 = local_260;
                  }
                }
              }
            }
          }
        }
        IVar15 = objc_stub::defaultManager
                           ((ID)puVar46,
                            "/System/Library/ExtensionKit/Extensions/WallpaperAerialsExtension.appex/Contents/Resources/TVIdleScreenStrings.bundle"
                           );
        UVar16.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar15 = objc_stub::fileExistsAtPath_(IVar15);
        puVar14 = local_198;
        UVar13.unknown = (undefined *)0x0;
        if ((int)IVar15 != 0) {
          FUN_100207010(local_198);
          Foundation::URL::deletingLastPathComponent(UVar13);
          pcVar53 = local_1b8;
          puVar20 = local_1c0;
          (*local_1b8)(puVar14,local_1c0);
          SVar76.bridgeObject = (void *)0x80000001004e1690;
          SVar76.str = (char *)0xd00000000000001a;
          Foundation::URL::appendingPathComponent(SVar76,UVar16);
          (*pcVar53)(puVar48,puVar20);
          UVar16.unknown = (undefined *)objc_stub::defaultManager(puVar46);
          pNVar35 = Foundation::URL::_bridgeToObjectiveC(UVar16);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_a0.bridgeObject;
          local_a0 = (String)(auVar6 << 0x40);
          IVar15 = objc_stub::removeItemAtURL_error_((ID)UVar16.unknown,pNVar35,&local_a0);
          if ((int)IVar15 == 0) {
            pcVar49 = local_a0.str;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(pcVar49);
          }
          IVar15 = objc_stub::defaultManager((ID)local_260);
          UVar16.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          SVar59 = Foundation::URL::get_path(UVar16);
          pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar59.bridgeObject);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_a0.bridgeObject;
          local_a0 = (String)(auVar7 << 0x40);
          IVar15 = objc_stub::copyItemAtPath_toPath_error_(IVar15,UVar16.unknown,pNVar18,&local_a0);
          if ((int)IVar15 == 0) {
            pcVar49 = local_a0.str;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(pcVar49);
          }
          (*pcVar53)(local_268,local_1c0);
        }
        UVar36 = Foundation::UUID::typeMetadataAccessor();
        lVar45 = local_270;
        lVar51 = *(long *)(UVar36.unknown + -8);
        (**(code **)(lVar51 + 0x10))(local_270,local_210,UVar36.unknown);
        (**(code **)(lVar51 + 0x38))(lVar45,0,1,UVar36.unknown);
        FUN_100209310(lVar45);
        FUN_100093624(local_1b0,local_1d8);
        FUN_10002a29c(lVar45,&DAT_10054a9c8,&DAT_10041bbe0);
        pcVar53 = local_1b8;
        puVar48 = local_1c0;
        (*local_1b8)(local_1d0,local_1c0);
        (*pcVar53)(local_1a8,puVar48);
        _swift_bridgeObjectRelease(pcVar43);
        _swift_bridgeObjectRelease(pSVar56);
        _swift_bridgeObjectRelease(pSVar21);
        goto LAB_100206400;
      }
      FUN_100093624(DVar26.unknown,pcVar22);
      puVar48 = local_1c0;
      (*pcVar53)(UVar16.unknown,local_1c0);
      (*pcVar53)(local_1d0,puVar48);
      (*pcVar53)(local_1a8,puVar48);
      _swift_bridgeObjectRelease(pcVar43);
    }
    _swift_bridgeObjectRelease(pSVar56);
    _swift_bridgeObjectRelease(pSVar21);
    pSVar56 = (String *)PTR___swiftEmptyArrayStorage_100524190;
  }
  local_a0.bridgeObject = (void *)0x80000001004e1400;
  local_a0.str = (char *)0xd000000000000032;
  _swift_errorRetain(pcVar54);
  SVar69.bridgeObject = (void *)0xa500000000000000;
  SVar69.str = (char *)0x209480e220;
  SVar82.bridgeObject = pcVar49;
  SVar82.str = DVar17.unknown;
  Swift::String::append(SVar69,SVar82);
  pcVar43 = local_158;
  local_1a0 = pcVar54;
  _swift_getErrorValue(pcVar54,auStack_140);
  SVar59 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar41 = SVar59.bridgeObject;
  SVar83.bridgeObject = pcVar49;
  SVar83.str = pcVar43;
  Swift::String::append(SVar59,SVar83);
  _swift_bridgeObjectRelease(pvVar41);
  SVar59 = local_a0;
  pvVar40 = local_a0.bridgeObject;
  local_a0.str = (char *)0x5b;
  local_a0.bridgeObject = (undefined *)0xe100000000000000;
  local_d0.str = (char *)0x524f525245;
  local_d0.bridgeObject = (String *)0xe500000000000000;
  local_f0 = (char *)0x20;
  uStack_e8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar54 = (char *)0x0;
  puVar48 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar60 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_f0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar41,pvVar41);
  SVar84.bridgeObject = puVar48;
  SVar84.str = pcVar54;
  Swift::String::append(SVar60,SVar84);
  _swift_bridgeObjectRelease(SVar60.bridgeObject);
  SVar70.bridgeObject = (void *)0xe300000000000000;
  SVar70.str = (char *)0x5b205d;
  SVar85.bridgeObject = puVar48;
  SVar85.str = pcVar54;
  Swift::String::append(SVar70,SVar85);
  SVar71.bridgeObject = (void *)0xea00000000006e65;
  SVar71.str = (char *)0x657263736b636f6c;
  SVar86.bridgeObject = puVar48;
  SVar86.str = pcVar54;
  Swift::String::append(SVar71,SVar86);
  SVar72.bridgeObject = (void *)0xe200000000000000;
  SVar72.str = (char *)0x205d;
  SVar87.bridgeObject = puVar48;
  SVar87.str = pcVar54;
  Swift::String::append(SVar72,SVar87);
  SVar88.bridgeObject = puVar48;
  SVar88.str = pcVar54;
  Swift::String::append(SVar59,SVar88);
  pvVar41 = local_a0.bridgeObject;
  pcVar49 = local_a0.str;
  local_a0.str = (char *)0x282020;
  local_a0.bridgeObject = (void *)0xe300000000000000;
  SVar73.bridgeObject = (void *)0x80000001004e1440;
  SVar73.str = (char *)0xd00000000000003f;
  SVar89.bridgeObject = puVar48;
  SVar89.str = pcVar54;
  Swift::String::append(SVar73,SVar89);
  SVar74.bridgeObject = (void *)0xe100000000000000;
  SVar74.str = (char *)0x3a;
  SVar90.bridgeObject = puVar48;
  SVar90.str = pcVar54;
  Swift::String::append(SVar74,SVar90);
  local_d0.str = (char *)0x1cb;
  SVar59 = Swift::CustomStringConvertible::get_description();
  SVar91.bridgeObject = puVar48;
  SVar91.str = pcVar54;
  Swift::String::append(SVar59,SVar91);
  _swift_bridgeObjectRelease(SVar59.bridgeObject);
  SVar75.bridgeObject = (void *)0xe100000000000000;
  SVar75.str = (char *)0x29;
  SVar92.bridgeObject = puVar48;
  SVar92.str = pcVar54;
  Swift::String::append(SVar75,SVar92);
  pvVar27 = local_a0.bridgeObject;
  pcVar54 = local_a0.str;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar48 = &DAT_100532ae8;
  _swift_allocObject(&DAT_100532ae8,0x30,7);
  *(char **)(puVar48 + 0x10) = pcVar49;
  *(void **)(puVar48 + 0x18) = pvVar41;
  *(char **)(puVar48 + 0x20) = pcVar54;
  *(void **)(puVar48 + 0x28) = pvVar27;
  local_80 = thunk_FUN_100099310;
  local_a0.bridgeObject = (void *)0x42000000;
  local_a0.str = PTR___NSConcreteStackBlock_100521110;
  local_90 = FUN_1000c7e7c;
  local_88 = &DAT_100532b00;
  puStack_78 = puVar48;
  pvVar27 = __Block_copy(&local_a0);
  DVar28.unknown = pvVar41;
  _swift_bridgeObjectRetain();
  DVar12.unknown = local_208.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar28);
  puVar29 = &DAT_100553db0;
  local_d0.str = (char *)pSVar56;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar48 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar14 = puVar48;
  FUN_100077ac0();
  lVar45 = local_1f0;
  puVar46 = local_228;
  Swift::SetAlgebra::_init(local_1f0,&local_d0,puVar48,puVar14,local_228,puVar29);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar12);
  __Block_release(pvVar27);
  (**(code **)(local_1e8 + 8))(lVar45,puVar46);
  (**(code **)(local_200 + 8))(DVar12.unknown,puStack_1f8);
  _swift_release(puStack_78);
  puVar24 = local_1e0;
  puVar48 = local_218;
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar46 = puVar48;
  FUN_100099338(puVar48,&DAT_100558f50);
  lVar45 = local_220;
  puVar30 = puVar24;
  (**(code **)(local_220 + 0x10))(puVar24,puVar46,puVar48);
  uVar10 = (uint)puVar30;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar11.unknown = pvVar41;
  _swift_bridgeObjectRetain();
  pOVar31 = os::Logger::get_logObject(LVar11);
  pOVar32 = pOVar31;
  _os_log_type_enabled(pOVar31,uVar10 & 0xff);
  if ((int)pOVar32 == 0) {
    _swift_bridgeObjectRelease_n(pvVar41,2);
    pcVar53 = *(code **)(lVar45 + 8);
  }
  else {
    puVar33 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar54 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    local_a0.str = pcVar54;
    *puVar33 = 0x8220102;
    FUN_10012dbb0(pcVar49,pvVar41,&local_a0);
    *(char **)(puVar33 + 1) = pcVar49;
    _swift_bridgeObjectRelease_n(pvVar41,2);
    __os_log_impl(0x100000000,pOVar31,uVar10 & 0xff,"%{public}s",puVar33,0xc);
    FUN_100043f24(pcVar54);
    _swift_slowDealloc(pcVar54,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
    pcVar53 = *(code **)(lVar45 + 8);
  }
  (*pcVar53)(puVar24,puVar48);
  _swift_bridgeObjectRelease(pvVar40);
  pcVar49 = local_1a0;
  _swift_errorRelease(local_1a0);
  _swift_errorRelease(pcVar49);
LAB_100206400:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100206728:
  if (uVar39 == 0) {
    uVar39 = uVar50;
    if ((long)uVar50 <= lVar45 + 1) {
      uVar39 = lVar45 + 1;
    }
    lVar52 = uVar39 - 1;
    lVar51 = lVar45;
    do {
      lVar45 = lVar51 + 1;
      if (SCARRY8(lVar51,1)) {
                    /* WARNING: Does not return */
        pcVar53 = (code *)SoftwareBreakpoint(1,0x100206ed8);
        (*pcVar53)();
      }
      if ((long)uVar50 <= lVar45) {
        uVar39 = 0;
        puStack_b8 = (undefined *)0x0;
        local_c0 = (code *)0x0;
        puStack_a8 = (undefined *)0x0;
        local_b0 = (code *)0x0;
        local_d0.bridgeObject = (String *)0x0;
        local_d0.str = (char *)0x0;
        goto LAB_1002067a4;
      }
      uVar39 = puVar58[lVar45];
      lVar51 = lVar51 + 1;
    } while (uVar39 == 0);
  }
  uVar47 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
  uVar47 = (uVar47 & 0xcccccccccccccccc) >> 2 | (uVar47 & 0x3333333333333333) << 2;
  uVar47 = (uVar47 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar47 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar47 = (uVar47 & 0xff00ff00ff00ff00) >> 8 | (uVar47 & 0xff00ff00ff00ff) << 8;
  uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
  uVar39 = uVar39 - 1 & uVar39;
  uVar47 = LZCOUNT(uVar47 >> 0x20 | uVar47 << 0x20) | lVar45 << 6;
  puVar29 = (undefined8 *)(*(long *)(local_1b0 + 0x30) + uVar47 * 0x10);
  local_d0.str = (char *)*puVar29;
  pSVar21 = (String *)puVar29[1];
  local_d0.bridgeObject = pSVar21;
  FUN_1000280d4(*(long *)(local_1b0 + 0x38) + uVar47 * 0x20,&local_c0);
  _swift_bridgeObjectRetain(pSVar21);
  lVar52 = lVar45;
LAB_1002067a4:
  pvVar40 = local_d0.bridgeObject;
  pcVar43 = local_d0.str;
  local_a0.str = local_d0.str;
  local_a0.bridgeObject = local_d0.bridgeObject;
  local_88 = puStack_b8;
  local_90 = local_c0;
  puStack_78 = puStack_a8;
  local_80 = local_b0;
  if (local_d0.bridgeObject == (String *)0x0) {
    _swift_release(local_1b0);
    _swift_bridgeObjectRetain(pcVar49);
    pSVar21 = pSVar56;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)pSVar21 & 1) == 0) {
      FUN_100287224();
    }
    puVar46 = PTR___type_metadata_for_Swift_Int_100523bd8;
    if (pSVar56[1].str <= pcVar54) {
                    /* WARNING: Does not return */
      pcVar53 = (code *)SoftwareBreakpoint(1,0x100206f9c);
      (*pcVar53)();
    }
    pcVar43 = (&pSVar56[2].str)[(long)pcVar54];
    (&pSVar56[2].str)[(long)pcVar54] = pcVar49;
    _swift_bridgeObjectRelease(pcVar49);
    _swift_bridgeObjectRelease(pcVar43);
    goto LAB_100205c90;
  }
  FUN_100007d88(&local_90,&local_d0);
  FUN_1000280d4(&local_d0,&local_f0);
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  local_118 = lStack_d8;
  uStack_120 = uStack_e0;
  lVar45 = lVar52;
  if (lStack_d8 == 0) {
    FUN_10002a29c(&local_130,&DAT_10054d428,&DAT_100420300);
    _swift_bridgeObjectRetain(pcVar49);
    pSVar21 = pvVar40;
    FUN_10000464c();
    _swift_bridgeObjectRelease(pcVar49);
    if (((ulong)pSVar21 & 1) == 0) {
      FUN_100043f24(&local_d0);
      _swift_bridgeObjectRelease(pvVar40);
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
    }
    else {
      pcVar22 = pcVar49;
      _swift_isUniquelyReferenced_nonNull_native();
      local_130 = pcVar49;
      if ((int)pcVar22 == 0) {
        FUN_1001cb1fc();
      }
      pcVar49 = local_130;
      _swift_bridgeObjectRelease
                (*(undefined8 *)(*(long *)(local_130 + 0x30) + (long)pcVar43 * 0x10 + 8));
      FUN_100007d88(*(long *)(pcVar49 + 0x38) + (long)pcVar43 * 0x20,&local_110);
      FUN_1001d1f74(pcVar43,pcVar49);
      _swift_bridgeObjectRelease(pvVar40);
      FUN_100043f24(&local_d0);
    }
    FUN_10002a29c(&local_110,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_130,&local_110);
    pcVar22 = pcVar49;
    _swift_isUniquelyReferenced_nonNull_native();
    local_1a0 = pcVar43;
    pSVar21 = pvVar40;
    local_130 = pcVar49;
    FUN_10000464c();
    uVar47 = (ulong)~(uint)pSVar21 & 1;
    lVar51 = *(long *)(pcVar49 + 0x10) + uVar47;
    if (SCARRY8(*(long *)(pcVar49 + 0x10),uVar47)) {
                    /* WARNING: Does not return */
      pcVar53 = (code *)SoftwareBreakpoint(1,0x100206f10);
      (*pcVar53)();
    }
    if (*(long *)(pcVar49 + 0x18) < lVar51) {
      FUN_1001cdec8(lVar51,pcVar22);
      pcVar43 = local_1a0;
      pSVar37 = pvVar40;
      FUN_10000464c();
      if (((uint)pSVar21 & 1) != ((uint)pSVar37 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar53 = (code *)SoftwareBreakpoint(1,0x100206fb4);
        (*pcVar53)();
      }
    }
    else if (((ulong)pcVar22 & 1) == 0) {
      FUN_1001cb1fc();
    }
    pcVar49 = local_130;
    if (((ulong)pSVar21 & 1) == 0) {
      *(ulong *)(local_130 + ((ulong)pcVar43 >> 6) * 8 + 0x40) =
           *(ulong *)(local_130 + ((ulong)pcVar43 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar43 & 0x3f);
      puVar29 = (undefined8 *)(*(long *)(local_130 + 0x30) + (long)pcVar43 * 0x10);
      *puVar29 = local_1a0;
      puVar29[1] = pvVar40;
      FUN_100007d88(&local_110,*(long *)(local_130 + 0x38) + (long)pcVar43 * 0x20);
      FUN_100043f24(&local_d0);
      if (SCARRY8(*(long *)(pcVar49 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar53 = (code *)SoftwareBreakpoint(1,0x100206f44);
        (*pcVar53)();
      }
      *(long *)(pcVar49 + 0x10) = *(long *)(pcVar49 + 0x10) + 1;
    }
    else {
      lVar51 = *(long *)(local_130 + 0x38) + (long)pcVar43 * 0x20;
      FUN_100043f24(lVar51);
      FUN_100007d88(&local_110,lVar51);
      _swift_bridgeObjectRelease(pvVar40);
      FUN_100043f24(&local_d0);
    }
  }
  goto LAB_100206728;
}

