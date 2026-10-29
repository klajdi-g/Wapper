// rea decompile_all
// name: FUN_100133628
// address: 0x100133628
// body: available
// range: 0x100133628-0x1001342bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013405c to 0x100134c90 FUN_100134c90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100134240 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100133628(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  DispatchWorkItemFlags DVar2;
  long lVar3;
  undefined8 uVar4;
  String SVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ID IVar9;
  JSONDecoder *pJVar10;
  void *pvVar11;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  DispatchQoS DVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  Logger LVar19;
  OS_os_log *pOVar20;
  char *pcVar21;
  ulong uVar22;
  long *plVar23;
  MainActor *pMVar24;
  UnownedSerialExecutor UVar25;
  _StringGuts extraout_x1;
  ulong uVar26;
  char *pcVar27;
  Data DVar28;
  undefined8 uVar29;
  ulong *puVar30;
  undefined8 uVar31;
  ID IVar32;
  undefined8 uVar33;
  long lVar34;
  code *pcVar35;
  undefined8 uVar36;
  long unaff_x22;
  undefined8 uVar37;
  undefined8 uVar38;
  Data DVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
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
  char *local_70;
  undefined *local_68;
  undefined8 uVar12;
  
  IVar32 = *(ID *)(unaff_x22 + 0x208);
  _swift_dynamicCastObjCClass(IVar32,&_OBJC_CLASS___NSHTTPURLResponse);
  if ((IVar32 == 0) || (IVar9 = objc_stub::statusCode(IVar32), IVar9 - 200 < 100)) {
    pJVar10 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
    pJVar10 = Foundation::JSONDecoder::init(pJVar10);
    *(JSONDecoder **)(unaff_x22 + 0x218) = pJVar10;
    if (DAT_100559110 != -1) {
      _swift_once(&DAT_100559110,FUN_10028f2ac);
    }
    lVar34 = *(long *)(unaff_x22 + 0x210);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1f8);
    pcVar21 = *(char **)(unaff_x22 + 0x200);
    lVar1 = *(long *)(unaff_x22 + 0x138);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
    DVar39.unknown = *(undefined **)(unaff_x22 + 0x120);
    uVar40 = uVar29;
    FUN_100099338(uVar29,&DAT_100577db0);
    (**(code **)(lVar1 + 0x10))(uVar33,uVar40,uVar29);
    Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar10,(DateDecodingStrategy)(__int8)uVar33);
    FUN_1000036d0(&DAT_1005543b0,FUN_100137890,&TargetProtocolConformanceDescriptor_100427208);
    DVar28.unknown = DVar39.unknown;
    Foundation::JSONDecoder::_decode(pJVar10,DVar39);
    if (lVar34 == 0) {
      puVar30 = *(ulong **)(unaff_x22 + 0x128);
      FUN_10028f000();
      uVar22 = *puVar30;
      *(ulong *)(unaff_x22 + 0x220) = uVar22;
      uVar26 = puVar30[1];
      *(ulong *)(unaff_x22 + 0x228) = uVar26;
      FUN_100137a74(uVar22,uVar26,DVar39.unknown,uVar12);
      *(byte *)(unaff_x22 + 0x243) = (byte)uVar22 & 1;
      _swift_bridgeObjectRelease(uVar12);
      if ((uVar22 & 1) != 0) {
        plVar23 = (long *)0x220;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x230) = plVar23;
        *plVar23 = unaff_x22;
        plVar23[1] = (long)FUN_1001342bc;
        FUN_100134c90();
        return;
      }
      pMVar24 = Swift::MainActor::typeMetadataAccessor();
      puVar6 = PTR_typeMetadataAccessor_1005246d8;
      pMVar24 = Swift::MainActor::get_shared(pMVar24,pMVar24);
      *(MainActor **)(unaff_x22 + 0x238) = pMVar24;
      puVar17 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar25 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_100134390,UVar25.unknown,puVar17);
      return;
    }
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x200));
    _swift_release(pJVar10);
    pcVar35 = *(code **)(unaff_x22 + 0x1e0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
    (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1a8),*(undefined8 *)(unaff_x22 + 0x198));
    (*pcVar35)(uVar33,uVar12);
    local_70 = (char *)0xd000000000000020;
    local_68 = (void *)0x80000001004de090;
    _swift_errorRetain(lVar34);
    SVar43.bridgeObject = (void *)0xa500000000000000;
    SVar43.str = (char *)0x209480e220;
    SVar57.bridgeObject = DVar28.unknown;
    SVar57.str = pcVar21;
    Swift::String::append(SVar43,SVar57);
    pcVar21 = (char *)(unaff_x22 + 0x70);
    _swift_getErrorValue(lVar34,unaff_x22 + 0xd8);
    SVar44 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar11 = SVar44.bridgeObject;
    SVar58.bridgeObject = DVar28.unknown;
    SVar58.str = pcVar21;
    Swift::String::append(SVar44,SVar58);
    _swift_bridgeObjectRelease(pvVar11);
    puVar6 = local_68;
    SVar5.bridgeObject = local_68;
    SVar5.str = local_70;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x524f525245;
    *(undefined8 *)(unaff_x22 + 0x90) = 0xe500000000000000;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0xe100000000000000;
    FUN_100026df4();
    pcVar27 = (char *)0x0;
    puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0x98,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar11,pvVar11);
    SVar59.bridgeObject = puVar18;
    SVar59.str = pcVar27;
    Swift::String::append(SVar44,SVar59);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar45.bridgeObject = (void *)0xe300000000000000;
    SVar45.str = (char *)0x5b205d;
    SVar60.bridgeObject = puVar18;
    SVar60.str = pcVar27;
    Swift::String::append(SVar45,SVar60);
    SVar46.bridgeObject = (void *)0xe300000000000000;
    SVar46.str = (char *)0x707061;
    SVar61.bridgeObject = puVar18;
    SVar61.str = pcVar27;
    Swift::String::append(SVar46,SVar61);
    SVar47.bridgeObject = (void *)0xe200000000000000;
    SVar47.str = (char *)0x205d;
    SVar62.bridgeObject = puVar18;
    SVar62.str = pcVar27;
    Swift::String::append(SVar47,SVar62);
    SVar63.bridgeObject = puVar18;
    SVar63.str = pcVar27;
    Swift::String::append(SVar5,SVar63);
    puVar7 = local_68;
    pcVar21 = local_70;
    local_70 = (char *)0x282020;
    local_68 = (undefined *)0xe300000000000000;
    SVar48.bridgeObject = (void *)0x80000001004de0c0;
    SVar48.str = (char *)0xd000000000000018;
    SVar64.bridgeObject = puVar18;
    SVar64.str = pcVar27;
    Swift::String::append(SVar48,SVar64);
    SVar49.bridgeObject = (void *)0xe100000000000000;
    SVar49.str = (char *)0x3a;
    SVar65.bridgeObject = puVar18;
    SVar65.str = pcVar27;
    Swift::String::append(SVar49,SVar65);
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x4b;
    SVar44 = Swift::CustomStringConvertible::get_description();
    SVar66.bridgeObject = puVar18;
    SVar66.str = pcVar27;
    Swift::String::append(SVar44,SVar66);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar50.bridgeObject = (void *)0xe100000000000000;
    SVar50.str = (char *)0x29;
    SVar67.bridgeObject = puVar18;
    SVar67.str = pcVar27;
    Swift::String::append(SVar50,SVar67);
    puVar18 = local_68;
    pcVar27 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar1 = *(long *)(unaff_x22 + 0x188);
    DVar2.unknown = *(undefined **)(unaff_x22 + 400);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar3 = *(long *)(unaff_x22 + 0x170);
    puVar15 = &DAT_10052d8b8;
    _swift_allocObject(&DAT_10052d8b8,0x30,7);
    *(char **)(puVar15 + 0x10) = pcVar21;
    *(undefined **)(puVar15 + 0x18) = puVar7;
    *(char **)(puVar15 + 0x20) = pcVar27;
    *(undefined **)(puVar15 + 0x28) = puVar18;
    *(code **)(unaff_x22 + 0x30) = FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar15;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052d8d0;
    pvVar11 = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar16.unknown = puVar7;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar16);
    *(undefined **)(unaff_x22 + 0xe8) = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar18 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = puVar18;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar12,unaff_x22 + 0xe8,puVar18,puVar15,uVar33,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
    __Block_release(pvVar11);
    (**(code **)(lVar3 + 8))(uVar12,uVar33);
    (**(code **)(lVar1 + 8))(DVar2.unknown,uVar29);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar1 = *(long *)(unaff_x22 + 0x150);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar33 = uVar29;
    FUN_100099338(uVar29,&DAT_100558f50);
    (**(code **)(lVar1 + 0x10))(uVar12,uVar33,uVar29);
    uVar8 = (uint)uVar12;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar19.unknown = puVar7;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar19);
    pOVar20 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar8 & 0xff);
    lVar1 = *(long *)(unaff_x22 + 0x150);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x148);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar7,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar27 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      local_70 = pcVar27;
      FUN_10012dbb0(pcVar21,puVar7,&local_70);
      *(char **)(puVar14 + 1) = pcVar21;
      _swift_bridgeObjectRelease_n(puVar7,2);
      __os_log_impl(0x100000000,pOVar13,uVar8 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar27);
      _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar1 + 8))(uVar12,uVar33);
    _swift_bridgeObjectRelease(puVar6);
    _swift_errorRelease(lVar34);
    _swift_errorRelease(lVar34);
  }
  else {
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x22,extraout_x1);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (char *)0xd000000000000020;
    local_68 = (void *)0x80000001004de0e0;
    IVar32 = objc_stub::statusCode(IVar32);
    *(ID *)(unaff_x22 + 0xf0) = IVar32;
    SVar44 = Swift::CustomStringConvertible::get_description();
    pvVar11 = SVar44.bridgeObject;
    SVar68.bridgeObject = param_4;
    SVar68.str = param_3;
    Swift::String::append(SVar44,SVar68);
    _swift_bridgeObjectRelease(pvVar11);
    puVar6 = local_68;
    SVar44.bridgeObject = local_68;
    SVar44.str = local_70;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x524f525245;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xe500000000000000;
    *(undefined8 *)(unaff_x22 + 200) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0xe100000000000000;
    FUN_100026df4();
    _swift_bridgeObjectRetain(puVar6);
    pcVar27 = (char *)0x0;
    puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar51 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 200,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar11,pvVar11);
    SVar69.bridgeObject = puVar18;
    SVar69.str = pcVar27;
    Swift::String::append(SVar51,SVar69);
    _swift_bridgeObjectRelease(SVar51.bridgeObject);
    SVar51.bridgeObject = (void *)0xe300000000000000;
    SVar51.str = (char *)0x5b205d;
    SVar70.bridgeObject = puVar18;
    SVar70.str = pcVar27;
    Swift::String::append(SVar51,SVar70);
    SVar52.bridgeObject = (void *)0xe300000000000000;
    SVar52.str = (char *)0x707061;
    SVar71.bridgeObject = puVar18;
    SVar71.str = pcVar27;
    Swift::String::append(SVar52,SVar71);
    SVar53.bridgeObject = (void *)0xe200000000000000;
    SVar53.str = (char *)0x205d;
    SVar72.bridgeObject = puVar18;
    SVar72.str = pcVar27;
    Swift::String::append(SVar53,SVar72);
    SVar73.bridgeObject = puVar18;
    SVar73.str = pcVar27;
    Swift::String::append(SVar44,SVar73);
    puVar7 = local_68;
    pcVar21 = local_70;
    local_70 = (char *)0x282020;
    local_68 = (undefined *)0xe300000000000000;
    SVar54.bridgeObject = (void *)0x80000001004de0c0;
    SVar54.str = (char *)0xd000000000000018;
    SVar74.bridgeObject = puVar18;
    SVar74.str = pcVar27;
    Swift::String::append(SVar54,SVar74);
    SVar55.bridgeObject = (void *)0xe100000000000000;
    SVar55.str = (char *)0x3a;
    SVar75.bridgeObject = puVar18;
    SVar75.str = pcVar27;
    Swift::String::append(SVar55,SVar75);
    *(undefined8 *)(unaff_x22 + 0xf8) = 0x31;
    SVar44 = Swift::CustomStringConvertible::get_description();
    SVar76.bridgeObject = puVar18;
    SVar76.str = pcVar27;
    Swift::String::append(SVar44,SVar76);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar56.bridgeObject = (void *)0xe100000000000000;
    SVar56.str = (char *)0x29;
    SVar77.bridgeObject = puVar18;
    SVar77.str = pcVar27;
    Swift::String::append(SVar56,SVar77);
    puVar18 = local_68;
    pcVar27 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar1 = *(long *)(unaff_x22 + 0x188);
    DVar2.unknown = *(undefined **)(unaff_x22 + 400);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar34 = *(long *)(unaff_x22 + 0x170);
    puVar15 = &DAT_10052d908;
    _swift_allocObject(&DAT_10052d908,0x30,7);
    *(char **)(puVar15 + 0x10) = pcVar21;
    *(undefined **)(puVar15 + 0x18) = puVar7;
    *(char **)(puVar15 + 0x20) = pcVar27;
    *(undefined **)(puVar15 + 0x28) = puVar18;
    *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x68) = puVar15;
    *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x58) = &DAT_10052d920;
    pvVar11 = __Block_copy((void *)(unaff_x22 + 0x40));
    DVar16.unknown = puVar7;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar16);
    *(undefined **)(unaff_x22 + 0x100) = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar18 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = puVar18;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar12,unaff_x22 + 0x100,puVar18,puVar15,uVar33,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
    __Block_release(pvVar11);
    (**(code **)(lVar34 + 8))(uVar12,uVar33);
    (**(code **)(lVar1 + 8))(DVar2.unknown,uVar29);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    uVar29 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar1 = *(long *)(unaff_x22 + 0x150);
    uVar33 = uVar12;
    FUN_100099338(uVar12,&DAT_100558f50);
    (**(code **)(lVar1 + 0x10))(uVar29,uVar33,uVar12);
    uVar8 = (uint)uVar29;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar19.unknown = puVar7;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar19);
    pOVar20 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar8 & 0xff);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar1 = *(long *)(unaff_x22 + 0x150);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar7,2);
      (**(code **)(lVar1 + 8))(uVar40,uVar33);
      _swift_bridgeObjectRelease(puVar6);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar27 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      local_70 = pcVar27;
      FUN_10012dbb0(pcVar21,puVar7,&local_70);
      *(char **)(puVar14 + 1) = pcVar21;
      _swift_bridgeObjectRelease_n(puVar7,2);
      __os_log_impl(0x100000000,pOVar13,uVar8 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar27);
      _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(lVar1 + 8))(uVar40,uVar33);
      _swift_bridgeObjectRelease(puVar6);
    }
    FUN_100093624(uVar12,uVar29);
    pcVar35 = *(code **)(unaff_x22 + 0x1e0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x198);
    lVar1 = *(long *)(unaff_x22 + 0x1a0);
    _swift_bridgeObjectRelease(puVar6);
    (**(code **)(lVar1 + 8))(uVar12,uVar33);
    (*pcVar35)(uVar40,uVar29);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar37 = *(undefined8 *)(unaff_x22 + 400);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1d0));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar42);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar29);
                    /* WARNING: Could not recover jumptable at 0x0001001341c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}

