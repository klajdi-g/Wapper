// rea decompile_all
// name: FUN_1002146d0
// address: 0x1002146d0
// body: available
// range: 0x1002146d0-0x1002154f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002154f0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002146d0(double param_1)

{
  uint uVar1;
  char **ppcVar2;
  byte bVar3;
  String SVar4;
  DispatchWorkItemFlags qos;
  undefined1 *puVar5;
  Date DVar6;
  bool bVar7;
  ID IVar8;
  URL UVar9;
  NSString *pNVar10;
  ulong uVar11;
  Dictionary<undefined,undefined> DVar12;
  undefined *puVar13;
  NSURL *pNVar14;
  undefined8 uVar15;
  void *aBlock;
  DispatchQoS DVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  Logger LVar21;
  OS_os_log *pOVar22;
  OS_os_log *pOVar23;
  undefined4 *puVar24;
  char *pcVar25;
  Date DVar26;
  _StringGuts _Var27;
  char *pcVar28;
  URL in_x3;
  char **ppcVar29;
  long extraout_x8;
  long extraout_x8_00;
  long lVar30;
  long extraout_x8_01;
  undefined *puVar31;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar32;
  undefined *puVar33;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar34;
  uint uVar35;
  code *pcVar36;
  long lVar37;
  double dVar38;
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
  undefined1 auStack_1c0 [8];
  DispatchWorkItemFlags local_1b8;
  long local_1b0;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  undefined *local_190;
  undefined1 *local_188;
  long local_180;
  undefined *local_178;
  undefined *local_170;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  long local_148;
  Date local_140;
  code *local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  ID local_110;
  uint local_104;
  long local_100;
  long local_f8;
  char **local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  char *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  local_178 = (undefined *)os::Logger::typeMetadataAccessor();
  local_180 = *(long *)(local_178 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  local_188 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_190 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_198 = *(long *)(local_190 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_198 + 0x40));
  lVar30 = (long)(auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar30;
  local_1a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1b0 = *(long *)(local_1a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b0 + 0x40));
  puVar31 = (undefined *)(lVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar33 = &DAT_10054b950;
  local_1b8.unknown = puVar31;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar33 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar31 = puVar31 + -extraout_x8_02;
  local_160 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar30 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar30 + 0x40));
  lVar37 = (long)puVar31 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_168 = lVar37 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = (lVar37 - extraout_x12) - extraout_x12_00;
  local_130 = lVar32;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar32 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar32 - extraout_x12_02;
  local_f0 = (char **)Foundation::Date::typeMetadataAccessor();
  local_f8 = *(long *)((long)local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  puVar33 = (undefined *)(lVar34 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_140.unknown = puVar33;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_148 = (long)puVar33 - extraout_x12_03;
  Foundation::Date::init();
  puVar33 = &DAT_100556998;
  FUN_100002f94(&DAT_100556998,&DAT_10042e640);
  local_128 = *(long *)(lVar30 + 0x48);
  bVar3 = *(byte *)(lVar30 + 0x50);
  local_118 = lVar30;
  _swift_allocObject();
  local_120 = puVar33 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  local_170 = puVar33;
  IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar9.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar8);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
  SVar42.bridgeObject = (void *)0x80000001004e1140;
  SVar42.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar42,true,in_x3);
  puVar33 = local_160;
  pcVar36 = *(code **)(local_118 + 8);
  (*pcVar36)(lVar32,local_160);
  SVar39.bridgeObject = (void *)0xe600000000000000;
  SVar39.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar39,true,in_x3);
  (*pcVar36)(lVar34,puVar33);
  local_e0 = &_OBJC_CLASS___NSFileManager;
  IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar9.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar8);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
  puVar33 = local_160;
  lVar30 = local_168;
  SVar40.bridgeObject = (void *)0x80000001004e1140;
  SVar40.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar40,true,in_x3);
  (*pcVar36)(lVar32,puVar33);
  SVar41.bridgeObject = (void *)0xea0000000000736c;
  SVar41.str = (char *)0x69616e626d756874;
  Foundation::URL::appendingPathComponent(SVar41,true,in_x3);
  local_e8 = pcVar36;
  (*pcVar36)(lVar34,puVar33);
  local_158 = (undefined *)0x0;
  local_150 = (undefined *)0x0;
  lVar32 = 0;
  local_100 = *(long *)PTR__NSFileModificationDate_100521020;
  local_138 = *(code **)(local_118 + 0x10);
  uVar35 = 0;
  do {
    lVar34 = local_130;
    (*local_138)(local_130,local_120 + lVar32 * local_128,puVar33);
    (**(code **)(local_118 + 0x20))(lVar30,lVar34,puVar33);
    UVar9.unknown = (undefined *)objc_stub::defaultManager(local_e0);
    SVar42 = Foundation::URL::get_path(UVar9);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar42.bridgeObject);
    local_b0 = (char *)0x0;
    ppcVar29 = &local_b0;
    IVar8 = objc_stub::contentsOfDirectoryAtPath_error_((ID)UVar9.unknown,pNVar10);
    if (IVar8 == 0) {
      pcVar28 = local_b0;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar28);
    }
    else {
      local_104 = uVar35;
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      lVar32 = *(long *)(IVar8 + 0x10);
      local_110 = IVar8;
      if (lVar32 != 0) {
        puVar17 = (undefined8 *)(IVar8 + 0x28);
        do {
          pcVar28 = (char *)puVar17[-1];
          ppcVar2 = (char **)*puVar17;
          _swift_bridgeObjectRetain(ppcVar2);
          SVar43.bridgeObject = (void *)0xe90000000000002d;
          SVar43.str = (char *)0x7265706c6c61772e;
          SVar50.bridgeObject = ppcVar2;
          SVar50.str = pcVar28;
          UVar9.unknown = pcVar28;
          ppcVar29 = ppcVar2;
          bVar7 = Swift::String::hasPrefix(SVar43,SVar50);
          if (bVar7) {
            SVar44.bridgeObject = ppcVar2;
            SVar44.str = pcVar28;
            Foundation::URL::appendingPathComponent(SVar44,UVar9);
            _swift_bridgeObjectRelease(ppcVar2);
            UVar9.unknown = (undefined *)objc_stub::defaultManager(local_e0);
            SVar42 = Foundation::URL::get_path(UVar9);
            pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar42.bridgeObject);
            local_c8 = (undefined *)0x0;
            IVar8 = objc_stub::attributesOfItemAtPath_error_((ID)UVar9.unknown,pNVar10,&local_c8);
            if (IVar8 == 0) {
              puVar13 = local_c8;
              Foundation::__convertNSErrorToError();
              _swift_willThrow(0);
              _swift_errorRelease(puVar13);
              ppcVar29 = local_f0;
LAB_100214e98:
              (*local_e8)(lVar37,puVar33);
              (**(code **)(local_f8 + 0x38))(puVar31,1,1);
            }
            else {
              uVar11 = 0;
              FUN_100008090();
              FUN_1000036d0(&DAT_10054a600,FUN_100008090,
                            &TargetProtocolConformanceDescriptor_10041b494);
              DVar12 = (extension_Foundation)::Swift::Dictionary::
                       __unconditionallyBridgeFromObjectiveC();
              ppcVar2 = local_f0;
              ppcVar29 = ppcVar2;
              if (*(long *)(DVar12.unknown + 0x10) == 0) {
LAB_100214e90:
                _swift_bridgeObjectRelease(DVar12.unknown);
                goto LAB_100214e98;
              }
              _swift_bridgeObjectRetain(DVar12.unknown);
              lVar34 = local_100;
              thunk_FUN_1000046e0(local_100);
              if ((uVar11 & 1) == 0) {
                _swift_bridgeObjectRelease(DVar12.unknown);
                goto LAB_100214e90;
              }
              FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + lVar34 * 0x20,&local_b0);
              _swift_bridgeObjectRelease_n(DVar12.unknown,2);
              puVar13 = puVar31;
              _swift_dynamicCast(puVar31,&local_b0,PTR___type_metadata_for_Any_100524178 + 8,ppcVar2
                                 ,6);
              lVar34 = local_f8;
              (**(code **)(local_f8 + 0x38))(puVar31,(uint)puVar13 ^ 1,1);
              puVar13 = puVar31;
              (**(code **)(lVar34 + 0x30))(puVar31,1,ppcVar2);
              DVar6.unknown = local_140.unknown;
              if ((int)puVar13 != 1) {
                DVar26.unknown = puVar31;
                (**(code **)(lVar34 + 0x20))(local_140.unknown,puVar31,ppcVar2);
                dVar38 = Foundation::Date::timeIntervalSince(DVar6,DVar26);
                if (dVar38 <= param_1) {
                  (**(code **)(lVar34 + 8))(DVar6.unknown,ppcVar2);
                  (*local_e8)(lVar37,puVar33);
                  puVar13 = local_158;
                  puVar19 = local_150;
                }
                else {
                  UVar9.unknown = (undefined *)objc_stub::defaultManager(local_e0);
                  pNVar14 = Foundation::URL::_bridgeToObjectiveC(UVar9);
                  local_b0 = (char *)0x0;
                  ppcVar29 = &local_b0;
                  IVar8 = objc_stub::removeItemAtURL_error_((ID)UVar9.unknown,pNVar14);
                  if ((int)IVar8 == 0) {
                    pcVar28 = local_b0;
                    Foundation::__convertNSErrorToError();
                    _swift_willThrow(0);
                    _swift_errorRelease(pcVar28);
                  }
                  (**(code **)(local_f8 + 8))(local_140.unknown,local_f0);
                  (*local_e8)(lVar37,puVar33);
                  puVar13 = local_150 + 1;
                  puVar19 = local_150 + 1;
                  if (SCARRY8((long)local_150,1)) {
                    /* WARNING: Does not return */
                    pcVar36 = (code *)SoftwareBreakpoint(1,0x1002154c0);
                    (*pcVar36)();
                  }
                }
                goto LAB_100214c8c;
              }
              (*local_e8)(lVar37,puVar33);
            }
            FUN_10002a29c(puVar31,&DAT_10054b950,&DAT_10041d870);
            puVar13 = local_158;
            puVar19 = local_150;
          }
          else {
            _swift_bridgeObjectRelease(ppcVar2);
            puVar13 = local_158;
            puVar19 = local_150;
          }
LAB_100214c8c:
          local_150 = puVar19;
          local_158 = puVar13;
          puVar17 = puVar17 + 2;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
      _swift_bridgeObjectRelease(local_110);
      uVar35 = local_104;
    }
    (*local_e8)(lVar30,puVar33);
    puVar13 = local_170;
    lVar32 = 1;
    uVar1 = uVar35 & 1;
    uVar35 = 1;
    if (uVar1 != 0) {
      _swift_setDeallocating(local_170);
      _swift_arrayDestroy(local_120,2,puVar33);
      _Var27.unknown = (undefined *)0x20;
      pcVar28 = (char *)0x7;
      _swift_deallocClassInstance(puVar13);
      puVar33 = local_158;
      if (0 < (long)local_158) {
        local_b0 = (char *)0x0;
        local_a8 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x45,_Var27);
        SVar45.bridgeObject = (void *)0x80000001004e1cd0;
        SVar45.str = (char *)0xd000000000000015;
        SVar51.bridgeObject = ppcVar29;
        SVar51.str = pcVar28;
        Swift::String::append(SVar45,SVar51);
        local_c8 = puVar33;
        SVar42 = Swift::CustomStringConvertible::get_description();
        SVar52.bridgeObject = ppcVar29;
        SVar52.str = pcVar28;
        Swift::String::append(SVar42,SVar52);
        _swift_bridgeObjectRelease(SVar42.bridgeObject);
        uVar15 = 0xd00000000000002e;
        SVar46.bridgeObject = (void *)0x80000001004e1cf0;
        SVar46.str = (char *)0xd00000000000002e;
        SVar53.bridgeObject = ppcVar29;
        SVar53.str = pcVar28;
        Swift::String::append(SVar46,SVar53);
        puVar33 = local_a8;
        SVar4.bridgeObject = local_a8;
        SVar4.str = local_b0;
        local_b0 = (char *)0x5b;
        local_a8 = (undefined *)0xe100000000000000;
        local_c8 = (undefined *)0x4f464e49;
        uStack_c0 = 0xe400000000000000;
        local_d8 = 0x20;
        uStack_d0 = 0xe100000000000000;
        FUN_100026df4();
        pcVar28 = (char *)0x0;
        puVar31 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar42 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_d8,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
        SVar54.bridgeObject = puVar31;
        SVar54.str = pcVar28;
        Swift::String::append(SVar42,SVar54);
        _swift_bridgeObjectRelease(SVar42.bridgeObject);
        SVar47.bridgeObject = (void *)0xe300000000000000;
        SVar47.str = (char *)0x5b205d;
        SVar55.bridgeObject = puVar31;
        SVar55.str = pcVar28;
        Swift::String::append(SVar47,SVar55);
        SVar48.bridgeObject = (void *)0xea00000000006e65;
        SVar48.str = (char *)0x657263736b636f6c;
        SVar56.bridgeObject = puVar31;
        SVar56.str = pcVar28;
        Swift::String::append(SVar48,SVar56);
        SVar49.bridgeObject = (void *)0xe200000000000000;
        SVar49.str = (char *)0x205d;
        SVar57.bridgeObject = puVar31;
        SVar57.str = pcVar28;
        Swift::String::append(SVar49,SVar57);
        SVar58.bridgeObject = puVar31;
        SVar58.str = pcVar28;
        Swift::String::append(SVar4,SVar58);
        puVar31 = local_a8;
        pcVar28 = local_b0;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar13 = &DAT_100533088;
        _swift_allocObject(&DAT_100533088,0x30,7);
        *(char **)(puVar13 + 0x10) = pcVar28;
        *(undefined **)(puVar13 + 0x18) = puVar31;
        *(undefined8 *)(puVar13 + 0x20) = 0;
        *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
        local_90 = thunk_FUN_100099310;
        local_b0 = PTR___NSConcreteStackBlock_100521110;
        local_a8 = (undefined *)0x42000000;
        local_a0 = FUN_1000c7e7c;
        puStack_98 = &DAT_1005330a0;
        local_88 = puVar13;
        aBlock = __Block_copy(&local_b0);
        DVar16.unknown = puVar31;
        _swift_bridgeObjectRetain();
        qos.unknown = local_1b8.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar16);
        local_c8 = PTR___swiftEmptyArrayStorage_100524190;
        puVar17 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar13 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar18 = puVar13;
        FUN_100077ac0();
        puVar19 = local_190;
        lVar30 = local_1a0;
        Swift::SetAlgebra::_init(local_1a0,&local_c8,puVar13,puVar18,local_190,puVar17);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(local_198 + 8))(lVar30,puVar19);
        (**(code **)(local_1b0 + 8))(qos.unknown,local_1a8);
        _swift_release(local_88);
        puVar13 = local_178;
        lVar30 = local_180;
        puVar5 = local_188;
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar19 = puVar13;
        FUN_100099338(puVar13,&DAT_100558f50);
        puVar20 = puVar5;
        (**(code **)(lVar30 + 0x10))(puVar5,puVar19,puVar13);
        uVar35 = (uint)puVar20;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar21.unknown = puVar31;
        _swift_bridgeObjectRetain();
        pOVar22 = os::Logger::get_logObject(LVar21);
        pOVar23 = pOVar22;
        _os_log_type_enabled(pOVar22,uVar35 & 0xff);
        if ((int)pOVar23 == 0) {
          _swift_bridgeObjectRelease_n(puVar31,2);
        }
        else {
          puVar24 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar25 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar24 = 0x8220102;
          local_b0 = pcVar25;
          FUN_10012dbb0(pcVar28,puVar31,&local_b0);
          *(char **)(puVar24 + 1) = pcVar28;
          _swift_bridgeObjectRelease_n(puVar31,2);
          __os_log_impl(0x100000000,pOVar22,uVar35 & 0xff,"%{public}s",puVar24,0xc);
          FUN_100043f24(pcVar25);
          _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar24,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar30 + 8))(puVar5,puVar13);
        _swift_bridgeObjectRelease(puVar33);
      }
      (**(code **)(local_f8 + 8))(local_148,local_f0);
      if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}

