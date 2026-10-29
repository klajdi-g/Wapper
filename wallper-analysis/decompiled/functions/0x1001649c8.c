// rea decompile_all
// name: FUN_1001649c8
// address: 0x1001649c8
// body: available
// range: 0x1001649c8-0x100165f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100165f6c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001649c8(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  URL UVar7;
  ID IVar8;
  NSString *pNVar9;
  NSString *pNVar10;
  void *pvVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  char *pcVar15;
  NSURL *pNVar16;
  NSArray *pNVar17;
  ID self;
  void *pvVar18;
  char **ppcVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  OS_os_log *pOVar24;
  char *pcVar25;
  char *pcVar26;
  long extraout_x8;
  long extraout_x8_00;
  long lVar27;
  long extraout_x8_01;
  undefined *puVar28;
  long extraout_x8_02;
  long lVar29;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 extraout_x13;
  void *extraout_x14;
  long lVar30;
  char **ppcVar31;
  long lVar32;
  undefined8 uVar33;
  code *pcVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
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
  ID local_1a0;
  ID local_198;
  code *local_190;
  char *local_188;
  undefined8 local_180;
  long local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  char *local_130;
  char *local_128;
  void *local_120;
  long local_118;
  DispatchWorkItemFlags local_110;
  long local_108;
  long local_100;
  char local_f8 [24];
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar37 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  pcVar15 = (char *)((long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_128 = pcVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = (long)pcVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_130 = (char *)(lVar36 - extraout_x12_00);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_108 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar27 = (lVar36 - extraout_x12_00) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar27;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_100 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  puVar28 = (undefined *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_110.unknown = puVar28;
  local_138 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_140 = *(long *)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar29 = (long)puVar28 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar28 = &DAT_100553d90;
  local_148 = lVar29;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar29 - extraout_x8_03;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar30 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar30 + 0x40));
  lVar35 = lVar29 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = (lVar35 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = _TtC7Wallper21MediaRemoteController::isRunning;
  if ((*(byte *)((long)extraout_x14 + _TtC7Wallper21MediaRemoteController::isRunning) & 1) == 0) {
    local_180 = extraout_x13;
    local_178 = lVar32 - extraout_x12_03;
    local_170 = UVar7.unknown;
    local_168 = DVar5.unknown;
    local_160 = DVar6.unknown;
    local_158 = lVar37;
    local_150 = LVar4.unknown;
    local_120 = extraout_x14;
    IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = NSFileManager::isExecutableFileAtPath_(IVar8,pNVar9);
    lVar37 = 0;
    if ((int)IVar8 != 0) {
      IVar8 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      UVar7.unknown = (undefined *)NSBundle::URLForResource_withExtension_(IVar8,pNVar9);
      lVar37 = 0;
      if (UVar7.unknown != (undefined *)0x0) {
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
        puVar28 = local_170;
        lVar37 = local_178;
        pcVar34 = *(code **)(lVar30 + 0x20);
        (*pcVar34)(local_178,lVar32,local_170);
        pvVar11 = local_120;
        FUN_100165f70(lVar29);
        lVar32 = lVar29;
        (**(code **)(lVar30 + 0x30))(lVar29,1,puVar28);
        if ((int)lVar32 != 1) {
          (*pcVar34)(local_180,lVar29,puVar28);
          puVar14 = &_OBJC_CLASS___NSTask;
          _objc_allocWithZone();
          pcVar15 = (char *)objc_stub::init((ID)puVar14);
          UVar7 = Foundation::URL::_init();
          pNVar16 = Foundation::URL::_bridgeToObjectiveC(UVar7);
          local_190 = *(code **)(lVar30 + 8);
          (*local_190)(lVar35,puVar28);
          objc_stub::setExecutableURL_((ID)pcVar15,pNVar16);
          UVar7.unknown = &DAT_100549eb0;
          FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
          _swift_allocObject();
          *(undefined8 *)(UVar7.unknown + 0x18) = 8;
          *(undefined8 *)(UVar7.unknown + 0x10) = 4;
          SVar38 = Foundation::URL::get_path(UVar7);
          *(String *)(UVar7.unknown + 0x20) = SVar38;
          SVar38 = Foundation::URL::get_path((URL)SVar38.str);
          *(String *)(UVar7.unknown + 0x30) = SVar38;
          *(undefined8 *)(UVar7.unknown + 0x40) = 0x6d6165727473;
          *(undefined8 *)(UVar7.unknown + 0x48) = 0xe600000000000000;
          *(undefined8 *)(UVar7.unknown + 0x50) = 0x736f7263696d2d2d;
          *(undefined8 *)(UVar7.unknown + 0x58) = 0xe800000000000000;
          pNVar17 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
          _swift_release(UVar7.unknown);
          objc_stub::setArguments_((ID)pcVar15,pNVar17);
          puVar28 = &_OBJC_CLASS___NSPipe;
          _objc_allocWithZone();
          IVar8 = objc_stub::init((ID)puVar28);
          local_188 = pcVar15;
          objc_stub::setStandardOutput_((ID)pcVar15,IVar8);
          puVar28 = &_OBJC_CLASS___NSPipe;
          _objc_allocWithZone();
          self = objc_stub::init((ID)puVar28);
          objc_stub::setStandardError_((ID)pcVar15,self);
          local_198 = IVar8;
          IVar8 = objc_stub::fileHandleForReading(IVar8);
          puVar28 = &DAT_10052f760;
          _swift_allocObject(&DAT_10052f760,0x18,7);
          _swift_weakInit(puVar28 + 0x10,pvVar11);
          puVar14 = PTR___NSConcreteStackBlock_100521110;
          local_90 = FUN_10016a5f0;
          local_b0 = PTR___NSConcreteStackBlock_100521110;
          local_a8 = (undefined *)0x42000000;
          local_a0 = thunk_FUN_10016802c;
          puStack_98 = &DAT_10052f868;
          local_88 = puVar28;
          pvVar18 = __Block_copy(&local_b0);
          puVar23 = local_88;
          _swift_retain(puVar28);
          FUN_1000939f8(FUN_10016a5f0,puVar28);
          _swift_release(puVar23);
          objc_stub::setReadabilityHandler_(IVar8,pvVar18);
          __Block_release(pvVar18);
          _swift_release_n(puVar28,2);
          local_1a0 = self;
          IVar8 = objc_stub::fileHandleForReading(self);
          pcVar15 = local_188;
          local_90 = FUN_100167328;
          local_88 = (undefined *)0x0;
          local_b0 = puVar14;
          local_a8 = (undefined *)0x42000000;
          local_a0 = thunk_FUN_10016802c;
          puStack_98 = &DAT_10052f840;
          pvVar18 = __Block_copy(&local_b0);
          _swift_release(local_88);
          objc_stub::setReadabilityHandler_(IVar8,pvVar18);
          __Block_release(pvVar18);
          puVar28 = &DAT_10052f760;
          _swift_allocObject(&DAT_10052f760,0x18,7);
          _swift_weakInit(puVar28 + 0x10,pvVar11);
          local_90 = FUN_10016a5f8;
          local_b0 = puVar14;
          local_a8 = (undefined *)0x42000000;
          local_a0 = thunk_FUN_10016802c;
          puStack_98 = &DAT_10052f818;
          local_88 = puVar28;
          pvVar18 = __Block_copy(&local_b0);
          puVar23 = local_88;
          _swift_retain(puVar28);
          FUN_1000939f8(FUN_10016a5f8,puVar28);
          _swift_release(puVar23);
          objc_stub::setTerminationHandler_((ID)pcVar15,pvVar18);
          __Block_release(pvVar18);
          _swift_release_n(puVar28,2);
          local_b0 = (char *)0x0;
          ppcVar19 = &local_b0;
          IVar8 = objc_stub::launchAndReturnError_((ID)pcVar15);
          lVar29 = local_148;
          if ((int)IVar8 == 0) {
            pcVar15 = local_b0;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            cVar1 = *(char *)((long)pvVar11 + 0x30);
            *(undefined1 *)((long)pvVar11 + 0x30) = 0;
            if ((cVar1 == '\x01') &&
               (pcVar34 = *(code **)((long)pvVar11 + 0x20), pcVar34 != (code *)0x0)) {
              uVar33 = *(undefined8 *)((long)pvVar11 + 0x28);
              _swift_retain(uVar33);
              (*pcVar34)(0);
              FUN_10002f6dc(pcVar34,uVar33);
            }
            local_b0 = (char *)0xd000000000000025;
            local_a8 = (void *)0x80000001004dee90;
            _swift_errorRetain(pcVar15);
            SVar50.bridgeObject = (void *)0xa500000000000000;
            SVar50.str = (char *)0x209480e220;
            SVar71.bridgeObject = pNVar10;
            SVar71.str = (char *)ppcVar19;
            Swift::String::append(SVar50,SVar71);
            pcVar26 = local_f8;
            _swift_getErrorValue(pcVar15,auStack_e0);
            SVar38 = (extension_Foundation)::Swift::Error::get_localizedDescription();
            pvVar11 = SVar38.bridgeObject;
            SVar72.bridgeObject = pNVar10;
            SVar72.str = pcVar26;
            Swift::String::append(SVar38,SVar72);
            _swift_bridgeObjectRelease(pvVar11);
            puVar28 = local_a8;
            SVar38.bridgeObject = local_a8;
            SVar38.str = local_b0;
            local_b0 = (char *)0x5b;
            local_a8 = (undefined *)0xe100000000000000;
            local_c0 = (undefined *)0x524f525245;
            uStack_b8 = 0xe500000000000000;
            local_d0 = 0x20;
            uStack_c8 = 0xe100000000000000;
            FUN_100026df4();
            pcVar20 = (char *)0x0;
            puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar50 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_d0,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,pvVar11,pvVar11);
            SVar73.bridgeObject = puVar23;
            SVar73.str = pcVar20;
            Swift::String::append(SVar50,SVar73);
            _swift_bridgeObjectRelease(SVar50.bridgeObject);
            SVar51.bridgeObject = (void *)0xe300000000000000;
            SVar51.str = (char *)0x5b205d;
            SVar74.bridgeObject = puVar23;
            SVar74.str = pcVar20;
            Swift::String::append(SVar51,SVar74);
            SVar52.bridgeObject = (void *)0xe300000000000000;
            SVar52.str = (char *)0x707061;
            SVar75.bridgeObject = puVar23;
            SVar75.str = pcVar20;
            Swift::String::append(SVar52,SVar75);
            SVar53.bridgeObject = (void *)0xe200000000000000;
            SVar53.str = (char *)0x205d;
            SVar76.bridgeObject = puVar23;
            SVar76.str = pcVar20;
            Swift::String::append(SVar53,SVar76);
            local_120 = puVar28;
            SVar77.bridgeObject = puVar23;
            SVar77.str = pcVar20;
            Swift::String::append(SVar38,SVar77);
            puVar28 = local_a8;
            pcVar26 = local_b0;
            local_b0 = (char *)0x282020;
            local_a8 = (undefined *)0xe300000000000000;
            SVar54.bridgeObject = (void *)0xe700000000000000;
            SVar54.str = (char *)0x29287472617473;
            SVar78.bridgeObject = puVar23;
            SVar78.str = pcVar20;
            Swift::String::append(SVar54,SVar78);
            SVar55.bridgeObject = (void *)0xe100000000000000;
            SVar55.str = (char *)0x3a;
            SVar79.bridgeObject = puVar23;
            SVar79.str = pcVar20;
            Swift::String::append(SVar55,SVar79);
            local_c0 = (undefined *)0x7d;
            SVar38 = Swift::CustomStringConvertible::get_description();
            SVar80.bridgeObject = puVar23;
            SVar80.str = pcVar20;
            Swift::String::append(SVar38,SVar80);
            _swift_bridgeObjectRelease(SVar38.bridgeObject);
            SVar56.bridgeObject = (void *)0xe100000000000000;
            SVar56.str = (char *)0x29;
            SVar81.bridgeObject = puVar23;
            SVar81.str = pcVar20;
            Swift::String::append(SVar56,SVar81);
            puVar23 = local_a8;
            pcVar20 = local_b0;
            if (DAT_100559018 != -1) {
              _swift_once(&DAT_100559018,FUN_1002854a0);
            }
            puVar21 = &DAT_10052f788;
            _swift_allocObject(&DAT_10052f788,0x30,7);
            local_130 = pcVar26;
            *(char **)(puVar21 + 0x10) = pcVar26;
            *(undefined **)(puVar21 + 0x18) = puVar28;
            *(char **)(puVar21 + 0x20) = pcVar20;
            *(undefined **)(puVar21 + 0x28) = puVar23;
            local_90 = thunk_FUN_100099310;
            local_b0 = puVar14;
            local_a8 = (undefined *)0x42000000;
            local_a0 = FUN_1000c7e7c;
            puStack_98 = &DAT_10052f7a0;
            local_88 = puVar21;
            pvVar11 = __Block_copy(&local_b0);
            DVar6.unknown = puVar28;
            _swift_bridgeObjectRetain();
            DVar5.unknown = local_110.unknown;
            DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
            local_c0 = PTR___swiftEmptyArrayStorage_100524190;
            FUN_1000fedc8();
            puVar14 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar22 = &DAT_100553dc0;
            FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                          PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
            lVar27 = local_118;
            puVar23 = local_168;
            Swift::SetAlgebra::_init(local_118,&local_c0,puVar14,puVar22,local_168,DVar6.unknown);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
            __Block_release(pvVar11);
            (**(code **)(local_108 + 8))(lVar27,puVar23);
            (**(code **)(local_100 + 8))(DVar5.unknown,local_160);
            _swift_release(local_88);
            if (DAT_100559020 != -1) {
              _swift_once(&DAT_100559020,FUN_100285420);
            }
            puVar14 = local_150;
            puVar23 = local_150;
            FUN_100099338(local_150,&DAT_100558f50);
            pcVar26 = local_128;
            lVar27 = local_158;
            pcVar20 = local_128;
            (**(code **)(local_158 + 0x10))(local_128,puVar23,puVar14);
            uVar3 = (uint)pcVar20;
            static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error
                      ();
            LVar4.unknown = puVar28;
            _swift_bridgeObjectRetain();
            pOVar12 = os::Logger::get_logObject(LVar4);
            pOVar24 = pOVar12;
            _os_log_type_enabled(pOVar12,uVar3 & 0xff);
            if ((int)pOVar24 == 0) {
              _swift_bridgeObjectRelease_n(puVar28,2);
            }
            else {
              puVar13 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar25 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar13 = 0x8220102;
              pcVar20 = local_130;
              local_b0 = pcVar25;
              FUN_10012dbb0(local_130,puVar28,&local_b0);
              *(char **)(puVar13 + 1) = pcVar20;
              _swift_bridgeObjectRelease_n(puVar28,2);
              __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar13,0xc);
              FUN_100043f24(pcVar25);
              _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
            }
            (**(code **)(lVar27 + 8))(pcVar26,puVar14);
            _swift_bridgeObjectRelease(local_120);
            _swift_errorRelease(pcVar15);
            _swift_errorRelease(pcVar15);
            puVar28 = local_170;
          }
          else {
            *(char **)((long)pvVar11 + _TtC7Wallper21MediaRemoteController::process) = pcVar15;
            local_128 = pcVar15;
            Foundation::Date::init();
            lVar30 = _TtC7Wallper21MediaRemoteController::startedAt;
            _swift_beginAccess((long)pvVar11 + _TtC7Wallper21MediaRemoteController::startedAt,
                               &local_b0,0x21,0);
            (**(code **)(local_140 + 0x28))((long)pvVar11 + lVar30,lVar29,local_138);
            ppcVar19 = &local_b0;
            _swift_endAccess(ppcVar19);
            *(undefined1 *)((long)pvVar11 + lVar27) = 1;
            bVar2 = *(byte *)((long)pvVar11 + 0x30);
            *(undefined1 *)((long)pvVar11 + 0x30) = 1;
            if (((bVar2 & 1) == 0) &&
               (ppcVar31 = *(char ***)((long)pvVar11 + 0x20), ppcVar31 != (char **)0x0)) {
              uVar33 = *(undefined8 *)((long)pvVar11 + 0x28);
              _swift_retain(uVar33);
              (*(code *)ppcVar31)(1);
              FUN_10002f6dc(ppcVar31,uVar33);
              ppcVar19 = ppcVar31;
            }
            local_b0 = (char *)0x5b;
            local_a8 = (undefined *)0xe100000000000000;
            local_c0 = (undefined *)0x4f464e49;
            uStack_b8 = 0xe400000000000000;
            local_d0 = 0x20;
            uStack_c8 = 0xe100000000000000;
            FUN_100026df4();
            pcVar15 = (char *)0x0;
            puVar28 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar38 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_d0,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,ppcVar19,ppcVar19);
            SVar66.bridgeObject = puVar28;
            SVar66.str = pcVar15;
            Swift::String::append(SVar38,SVar66);
            _swift_bridgeObjectRelease(SVar38.bridgeObject);
            SVar46.bridgeObject = (void *)0xe300000000000000;
            SVar46.str = (char *)0x5b205d;
            SVar67.bridgeObject = puVar28;
            SVar67.str = pcVar15;
            Swift::String::append(SVar46,SVar67);
            SVar47.bridgeObject = (void *)0xe300000000000000;
            SVar47.str = (char *)0x707061;
            SVar68.bridgeObject = puVar28;
            SVar68.str = pcVar15;
            Swift::String::append(SVar47,SVar68);
            SVar48.bridgeObject = (void *)0xe200000000000000;
            SVar48.str = (char *)0x205d;
            SVar69.bridgeObject = puVar28;
            SVar69.str = pcVar15;
            Swift::String::append(SVar48,SVar69);
            SVar49.bridgeObject = (void *)0x80000001004deec0;
            SVar49.str = (char *)0xd000000000000023;
            SVar70.bridgeObject = puVar28;
            SVar70.str = pcVar15;
            Swift::String::append(SVar49,SVar70);
            puVar23 = local_a8;
            pcVar15 = local_b0;
            if (DAT_100559018 != -1) {
              _swift_once(&DAT_100559018,FUN_1002854a0);
            }
            puVar28 = &DAT_10052f7d8;
            _swift_allocObject(&DAT_10052f7d8,0x30,7);
            *(char **)(puVar28 + 0x10) = pcVar15;
            *(undefined **)(puVar28 + 0x18) = puVar23;
            *(undefined8 *)(puVar28 + 0x20) = 0;
            *(undefined8 *)(puVar28 + 0x28) = 0xe000000000000000;
            local_90 = thunk_FUN_100099310;
            local_b0 = puVar14;
            local_a8 = (undefined *)0x42000000;
            local_a0 = FUN_1000c7e7c;
            puStack_98 = &DAT_10052f7f0;
            local_88 = puVar28;
            pvVar11 = __Block_copy(&local_b0);
            DVar6.unknown = puVar23;
            _swift_bridgeObjectRetain();
            DVar5.unknown = local_110.unknown;
            DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
            local_c0 = PTR___swiftEmptyArrayStorage_100524190;
            FUN_1000fedc8();
            puVar28 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar22 = &DAT_100553dc0;
            FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                          PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
            lVar27 = local_118;
            puVar14 = local_168;
            Swift::SetAlgebra::_init(local_118,&local_c0,puVar28,puVar22,local_168,DVar6.unknown);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
            __Block_release(pvVar11);
            (**(code **)(local_108 + 8))(lVar27,puVar14);
            (**(code **)(local_100 + 8))(DVar5.unknown,local_160);
            _swift_release(local_88);
            if (DAT_100559020 != -1) {
              _swift_once(&DAT_100559020,FUN_100285420);
            }
            puVar14 = local_150;
            puVar28 = local_150;
            FUN_100099338(local_150,&DAT_100558f50);
            pcVar26 = local_130;
            lVar27 = local_158;
            pcVar20 = local_130;
            (**(code **)(local_158 + 0x10))(local_130,puVar28,puVar14);
            uVar3 = (uint)pcVar20;
            static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
            LVar4.unknown = puVar23;
            _swift_bridgeObjectRetain();
            pOVar12 = os::Logger::get_logObject(LVar4);
            pOVar24 = pOVar12;
            _os_log_type_enabled(pOVar12,uVar3 & 0xff);
            puVar28 = local_170;
            if ((int)pOVar24 == 0) {
              _swift_bridgeObjectRelease_n(puVar23,2);
            }
            else {
              puVar13 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar20 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar13 = 0x8220102;
              local_b0 = pcVar20;
              FUN_10012dbb0(pcVar15,puVar23,&local_b0);
              *(char **)(puVar13 + 1) = pcVar15;
              _swift_bridgeObjectRelease_n(puVar23,2);
              __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar13,0xc);
              FUN_100043f24(pcVar20);
              _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
            }
            (**(code **)(lVar27 + 8))(pcVar26,puVar14);
          }
          pcVar34 = local_190;
          (*local_190)(local_180,puVar28);
          (*pcVar34)(local_178,puVar28);
          goto LAB_100165ea0;
        }
        (**(code **)(lVar30 + 8))(lVar37,puVar28);
        FUN_10002a29c(lVar29,&DAT_100553d90,&DAT_10041bf10);
        lVar37 = lVar29;
      }
    }
    local_b0 = (char *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_c0 = (undefined *)0x4e524157;
    uStack_b8 = 0xe400000000000000;
    local_d0 = 0x20;
    uStack_c8 = 0xe100000000000000;
    FUN_100026df4();
    pcVar26 = (char *)0x0;
    puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar38 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_d0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,lVar37,lVar37);
    SVar57.bridgeObject = puVar14;
    SVar57.str = pcVar26;
    Swift::String::append(SVar38,SVar57);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
    SVar39.bridgeObject = (void *)0xe300000000000000;
    SVar39.str = (char *)0x5b205d;
    SVar58.bridgeObject = puVar14;
    SVar58.str = pcVar26;
    Swift::String::append(SVar39,SVar58);
    SVar40.bridgeObject = (void *)0xe300000000000000;
    SVar40.str = (char *)0x707061;
    SVar59.bridgeObject = puVar14;
    SVar59.str = pcVar26;
    Swift::String::append(SVar40,SVar59);
    SVar41.bridgeObject = (void *)0xe200000000000000;
    SVar41.str = (char *)0x205d;
    SVar60.bridgeObject = puVar14;
    SVar60.str = pcVar26;
    Swift::String::append(SVar41,SVar60);
    SVar42.bridgeObject = (void *)0x80000001004dee30;
    SVar42.str = (char *)0x100000000000003e;
    SVar61.bridgeObject = puVar14;
    SVar61.str = pcVar26;
    Swift::String::append(SVar42,SVar61);
    puVar28 = local_a8;
    pcVar15 = local_b0;
    local_b0 = (char *)0x282020;
    local_a8 = (undefined *)0xe300000000000000;
    SVar43.bridgeObject = (void *)0xe700000000000000;
    SVar43.str = (char *)0x29287472617473;
    SVar62.bridgeObject = puVar14;
    SVar62.str = pcVar26;
    Swift::String::append(SVar43,SVar62);
    SVar44.bridgeObject = (void *)0xe100000000000000;
    SVar44.str = (char *)0x3a;
    SVar63.bridgeObject = puVar14;
    SVar63.str = pcVar26;
    Swift::String::append(SVar44,SVar63);
    local_c0 = (undefined *)0x44;
    SVar38 = Swift::CustomStringConvertible::get_description();
    SVar64.bridgeObject = puVar14;
    SVar64.str = pcVar26;
    Swift::String::append(SVar38,SVar64);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
    SVar45.bridgeObject = (void *)0xe100000000000000;
    SVar45.str = (char *)0x29;
    SVar65.bridgeObject = puVar14;
    SVar65.str = pcVar26;
    Swift::String::append(SVar45,SVar65);
    puVar14 = local_a8;
    pcVar26 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar23 = &DAT_10052f710;
    _swift_allocObject(&DAT_10052f710,0x30,7);
    local_128 = pcVar15;
    *(char **)(puVar23 + 0x10) = pcVar15;
    *(undefined **)(puVar23 + 0x18) = puVar28;
    *(char **)(puVar23 + 0x20) = pcVar26;
    *(undefined **)(puVar23 + 0x28) = puVar14;
    local_90 = FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10052f728;
    local_88 = puVar23;
    pvVar11 = __Block_copy(&local_b0);
    DVar6.unknown = puVar28;
    _swift_bridgeObjectRetain();
    DVar5.unknown = local_110.unknown;
    DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_c0 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar14 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar22 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    lVar27 = local_118;
    puVar23 = local_168;
    Swift::SetAlgebra::_init(local_118,&local_c0,puVar14,puVar22,local_168,DVar6.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
    __Block_release(pvVar11);
    (**(code **)(local_108 + 8))(lVar27,puVar23);
    (**(code **)(local_100 + 8))(DVar5.unknown,local_160);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar14 = local_150;
    puVar23 = local_150;
    FUN_100099338(local_150,&DAT_100558f50);
    lVar27 = local_158;
    lVar29 = lVar36;
    (**(code **)(local_158 + 0x10))(lVar36,puVar23,puVar14);
    uVar3 = (uint)lVar29;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar4.unknown = puVar28;
    _swift_bridgeObjectRetain();
    pOVar12 = os::Logger::get_logObject(LVar4);
    pOVar24 = pOVar12;
    _os_log_type_enabled(pOVar12,uVar3 & 0xff);
    if ((int)pOVar24 == 0) {
      _swift_bridgeObjectRelease_n(puVar28,2);
    }
    else {
      puVar13 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar26 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar13 = 0x8220102;
      pcVar15 = local_128;
      local_b0 = pcVar26;
      FUN_10012dbb0(local_128,puVar28,&local_b0);
      *(char **)(puVar13 + 1) = pcVar15;
      _swift_bridgeObjectRelease_n(puVar28,2);
      __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar13,0xc);
      FUN_100043f24(pcVar26);
      _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar27 + 8))(lVar36,puVar14);
    cVar1 = *(char *)((long)local_120 + 0x30);
    *(undefined1 *)((long)local_120 + 0x30) = 0;
    if ((cVar1 == '\x01') && (pcVar34 = *(code **)((long)local_120 + 0x20), pcVar34 != (code *)0x0))
    {
      uVar33 = *(undefined8 *)((long)local_120 + 0x28);
      _swift_retain(uVar33);
      (*pcVar34)(0);
      FUN_10002f6dc(pcVar34,uVar33);
    }
  }
LAB_100165ea0:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

