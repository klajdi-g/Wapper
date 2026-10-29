// rea decompile_all
// name: FUN_1001dfeb0
// address: 0x1001dfeb0
// body: available
// range: 0x1001dfeb0-0x1001e097f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e03cc to 0x1001e14e4 FUN_1001e14e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e091c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001dfeb0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags DVar1;
  long lVar2;
  String SVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  undefined *puVar9;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  ulong uVar15;
  undefined8 uVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  long *plVar20;
  MainActor *pMVar21;
  UnownedSerialExecutor UVar22;
  code *pcVar23;
  undefined *extraout_x1;
  _StringGuts _Var24;
  char *pcVar25;
  void *pvVar26;
  undefined *puVar27;
  uint uVar28;
  ID IVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long unaff_x22;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
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
  char *local_70;
  undefined *puStack_68;
  
  IVar29 = *(ID *)(unaff_x22 + 0x200);
  _Var7.unknown = &_OBJC_CLASS___NSHTTPURLResponse;
  _swift_dynamicCastObjCClass();
  if ((IVar29 != 0) &&
     (IVar29 = objc_stub::statusCode(IVar29), _Var7.unknown = extraout_x1, IVar29 == 200)) {
    _Var7.unknown = *(undefined **)(unaff_x22 + 0x1f8);
    uVar6 = (uint)((ulong)_Var7.unknown >> 0x20);
    uVar28 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar28 == 0) {
        if (((ulong)_Var7.unknown & 0xff000000000000) != 0) {
          _Var8.unknown = *(undefined **)(unaff_x22 + 0x1f0);
LAB_1001dff4c:
          FUN_1001ec26c();
          pvVar26 = (void *)0x80000001004ddab0;
          pcVar25 = (char *)0xd000000000000020;
          if ((_Var8.unknown == (undefined *)0xd000000000000020) &&
             (_Var7.unknown == (undefined *)0x80000001004ddab0)) {
            _swift_bridgeObjectRelease(0x80000001004ddab0);
            _Var24.unknown = _Var7.unknown;
          }
          else {
            _Var24.unknown = _Var7.unknown;
            bVar5 = Swift::_stringCompareWithSmolCheck(_Var8,_Var7,(_StringComparisonResult)0x20);
            _swift_bridgeObjectRelease(_Var7.unknown);
            if (!bVar5) {
              uVar15 = *(ulong *)(unaff_x22 + 0x1f0);
              _Var24.unknown = *(undefined **)(unaff_x22 + 0x1f8);
              FUN_1001ec608();
              if ((uVar15 & 1) == 0) {
                lVar32 = *(long *)(unaff_x22 + 0x208);
                Foundation::Data::_write
                          ((URL)*(undefined **)(unaff_x22 + 0x178),(NSDataWritingOptions)0x1,
                           (Data)*(undefined **)(unaff_x22 + 0x1f0));
                *(long *)(unaff_x22 + 0x220) = lVar32;
                if (lVar32 == 0) {
                  pMVar21 = Swift::MainActor::typeMetadataAccessor();
                  puVar4 = PTR_typeMetadataAccessor_1005246d8;
                  pMVar21 = Swift::MainActor::get_shared(pMVar21,pMVar21);
                  *(MainActor **)(unaff_x22 + 0x228) = pMVar21;
                  puVar11 = &DAT_100558b80;
                  FUN_100047f94(&DAT_100558b80,0xff,puVar4,
                                PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
                  UVar22 = Swift::Actor::get_unownedExecutor();
                  pcVar23 = FUN_1001e0b78;
                }
                else {
                  FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1f0),
                                *(undefined8 *)(unaff_x22 + 0x1f8));
                  *(long *)(unaff_x22 + 0x240) = lVar32;
                  pMVar21 = Swift::MainActor::typeMetadataAccessor();
                  puVar4 = PTR_typeMetadataAccessor_1005246d8;
                  pMVar21 = Swift::MainActor::get_shared(pMVar21,pMVar21);
                  *(MainActor **)(unaff_x22 + 0x248) = pMVar21;
                  puVar11 = &DAT_100558b80;
                  FUN_100047f94(&DAT_100558b80,0xff,puVar4,
                                PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
                  UVar22 = Swift::Actor::get_unownedExecutor();
                  pcVar23 = FUN_1001e0e00;
                }
                _swift_task_switch(pcVar23,UVar22.unknown,puVar11);
                return;
              }
            }
          }
          SVar35 = *(String *)(unaff_x22 + 0x168);
          local_70 = (char *)0x0;
          puStack_68 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x5b,_Var24);
          SVar40.bridgeObject = (void *)0x80000001004e0e50;
          SVar40.str = (char *)0xd000000000000041;
          SVar52.bridgeObject = pvVar26;
          SVar52.str = pcVar25;
          Swift::String::append(SVar40,SVar52);
          SVar53.bridgeObject = pvVar26;
          SVar53.str = pcVar25;
          Swift::String::append(SVar35,SVar53);
          uVar16 = 0xd000000000000018;
          SVar39.bridgeObject = (void *)0x80000001004e0f30;
          SVar39.str = (char *)0xd000000000000018;
          SVar54.bridgeObject = pvVar26;
          SVar54.str = pcVar25;
          Swift::String::append(SVar39,SVar54);
          puVar4 = puStack_68;
          SVar35.bridgeObject = puStack_68;
          SVar35.str = local_70;
          local_70 = (char *)0x5b;
          puStack_68 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0x110) = 0x4f464e49;
          *(undefined8 *)(unaff_x22 + 0x118) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0x120) = 0x20;
          *(undefined8 *)(unaff_x22 + 0x128) = 0xe100000000000000;
          FUN_100026df4();
          pcVar25 = (char *)0x0;
          puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0x120,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,uVar16,uVar16);
          SVar55.bridgeObject = puVar27;
          SVar55.str = pcVar25;
          Swift::String::append(SVar40,SVar55);
          _swift_bridgeObjectRelease(SVar40.bridgeObject);
          SVar41.bridgeObject = (void *)0xe300000000000000;
          SVar41.str = (char *)0x5b205d;
          SVar56.bridgeObject = puVar27;
          SVar56.str = pcVar25;
          Swift::String::append(SVar41,SVar56);
          SVar42.bridgeObject = (void *)0xe300000000000000;
          SVar42.str = (char *)0x707061;
          SVar57.bridgeObject = puVar27;
          SVar57.str = pcVar25;
          Swift::String::append(SVar42,SVar57);
          SVar43.bridgeObject = (void *)0xe200000000000000;
          SVar43.str = (char *)0x205d;
          SVar58.bridgeObject = puVar27;
          SVar58.str = pcVar25;
          Swift::String::append(SVar43,SVar58);
          SVar59.bridgeObject = puVar27;
          SVar59.str = pcVar25;
          Swift::String::append(SVar35,SVar59);
          puVar27 = puStack_68;
          pcVar25 = local_70;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          lVar32 = *(long *)(unaff_x22 + 0x1c8);
          DVar1.unknown = *(undefined **)(unaff_x22 + 0x1d0);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x1c0);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x1a8);
          lVar2 = *(long *)(unaff_x22 + 0x1b0);
          puVar9 = &DAT_100531f78;
          _swift_allocObject(&DAT_100531f78,0x30,7);
          *(char **)(puVar9 + 0x10) = pcVar25;
          *(undefined **)(puVar9 + 0x18) = puVar27;
          *(undefined8 *)(puVar9 + 0x20) = 0;
          *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
          *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
          *(undefined **)(unaff_x22 + 0x98) = puVar9;
          *(undefined **)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
          *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x88) = &DAT_100531f90;
          pvVar26 = __Block_copy((void *)(unaff_x22 + 0x70));
          DVar10.unknown = puVar27;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar10);
          *(undefined **)(unaff_x22 + 0x150) = PTR___swiftEmptyArrayStorage_100524190;
          puVar11 = &DAT_100553db0;
          FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar9 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar12 = &DAT_100553dc0;
          FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
          Swift::SetAlgebra::_init(uVar16,unaff_x22 + 0x150,puVar9,puVar12,uVar31,puVar11);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar1);
          __Block_release(pvVar26);
          (**(code **)(lVar2 + 8))(uVar16,uVar31);
          (**(code **)(lVar32 + 8))(DVar1.unknown,uVar30);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          uVar30 = *(undefined8 *)(unaff_x22 + 0x1a0);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
          lVar32 = *(long *)(unaff_x22 + 0x188);
          uVar31 = uVar16;
          FUN_100099338(uVar16,&DAT_100558f50);
          (**(code **)(lVar32 + 0x10))(uVar30,uVar31,uVar16);
          uVar6 = (uint)uVar30;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          LVar13.unknown = puVar27;
          _swift_bridgeObjectRetain();
          pOVar17 = os::Logger::get_logObject(LVar13);
          pOVar14 = pOVar17;
          _os_log_type_enabled(pOVar17,uVar6 & 0xff);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x1a0);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
          lVar32 = *(long *)(unaff_x22 + 0x188);
          if ((int)pOVar14 == 0) {
            _swift_bridgeObjectRelease_n(puVar27,2);
          }
          else {
            puVar18 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar19 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar18 = 0x8220102;
            local_70 = pcVar19;
            FUN_10012dbb0(pcVar25,puVar27,&local_70);
            *(char **)(puVar18 + 1) = pcVar25;
            _swift_bridgeObjectRelease_n(puVar27,2);
            __os_log_impl(0x100000000,pOVar17,uVar6 & 0xff,"%{public}s",puVar18,0xc);
            FUN_100043f24(pcVar19);
            _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar32 + 8))(uVar31,uVar16);
          _swift_bridgeObjectRelease(puVar4);
          plVar20 = (long *)0x320;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x210) = plVar20;
          pcVar23 = FUN_1001e0980;
          goto LAB_1001e0398;
        }
      }
      else {
        _Var8.unknown = *(undefined **)(unaff_x22 + 0x1f0);
        if ((long)(int)_Var8.unknown != (long)_Var8.unknown >> 0x20) goto LAB_1001dff4c;
      }
    }
    else if ((uVar28 == 2) &&
            (_Var8.unknown = *(undefined **)(unaff_x22 + 0x1f0),
            *(long *)(_Var8.unknown + 0x10) != *(long *)(_Var8.unknown + 0x18))) goto LAB_1001dff4c;
  }
  SVar35 = *(String *)(unaff_x22 + 0x168);
  local_70 = (char *)0x0;
  puStack_68 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x39,_Var7);
  SVar33.bridgeObject = (void *)0x80000001004e0f10;
  SVar33.str = (char *)0xd00000000000001f;
  SVar44.bridgeObject = param_4;
  SVar44.str = param_3;
  Swift::String::append(SVar33,SVar44);
  SVar45.bridgeObject = param_4;
  SVar45.str = param_3;
  Swift::String::append(SVar35,SVar45);
  uVar16 = 0xd000000000000018;
  SVar34.bridgeObject = (void *)0x80000001004e0f30;
  SVar34.str = (char *)0xd000000000000018;
  SVar46.bridgeObject = param_4;
  SVar46.str = param_3;
  Swift::String::append(SVar34,SVar46);
  puVar4 = puStack_68;
  SVar3.bridgeObject = puStack_68;
  SVar3.str = local_70;
  local_70 = (char *)0x5b;
  puStack_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x108) = 0xe100000000000000;
  FUN_100026df4();
  pcVar25 = (char *)0x0;
  puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x100,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar16,uVar16);
  SVar47.bridgeObject = puVar27;
  SVar47.str = pcVar25;
  Swift::String::append(SVar35,SVar47);
  _swift_bridgeObjectRelease(SVar35.bridgeObject);
  SVar36.bridgeObject = (void *)0xe300000000000000;
  SVar36.str = (char *)0x5b205d;
  SVar48.bridgeObject = puVar27;
  SVar48.str = pcVar25;
  Swift::String::append(SVar36,SVar48);
  SVar37.bridgeObject = (void *)0xe300000000000000;
  SVar37.str = (char *)0x707061;
  SVar49.bridgeObject = puVar27;
  SVar49.str = pcVar25;
  Swift::String::append(SVar37,SVar49);
  SVar38.bridgeObject = (void *)0xe200000000000000;
  SVar38.str = (char *)0x205d;
  SVar50.bridgeObject = puVar27;
  SVar50.str = pcVar25;
  Swift::String::append(SVar38,SVar50);
  SVar51.bridgeObject = puVar27;
  SVar51.str = pcVar25;
  Swift::String::append(SVar3,SVar51);
  puVar27 = puStack_68;
  pcVar25 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar32 = *(long *)(unaff_x22 + 0x1c8);
  DVar1.unknown = *(undefined **)(unaff_x22 + 0x1d0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar2 = *(long *)(unaff_x22 + 0x1b0);
  puVar9 = &DAT_100531f28;
  _swift_allocObject(&DAT_100531f28,0x30,7);
  *(char **)(puVar9 + 0x10) = pcVar25;
  *(undefined **)(puVar9 + 0x18) = puVar27;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x68) = puVar9;
  *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
  *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x58) = &DAT_100531f40;
  pvVar26 = __Block_copy((void *)(unaff_x22 + 0x40));
  DVar10.unknown = puVar27;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar10);
  *(undefined **)(unaff_x22 + 0x148) = PTR___swiftEmptyArrayStorage_100524190;
  puVar11 = &DAT_100553db0;
  FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar9 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar12 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar16,unaff_x22 + 0x148,puVar9,puVar12,uVar31,puVar11);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar1);
  __Block_release(pvVar26);
  (**(code **)(lVar2 + 8))(uVar16,uVar31);
  (**(code **)(lVar32 + 8))(DVar1.unknown,uVar30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar30 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar32 = *(long *)(unaff_x22 + 0x188);
  uVar31 = uVar16;
  FUN_100099338(uVar16,&DAT_100558f50);
  (**(code **)(lVar32 + 0x10))(uVar30,uVar31,uVar16);
  uVar6 = (uint)uVar30;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar13.unknown = puVar27;
  _swift_bridgeObjectRetain();
  pOVar17 = os::Logger::get_logObject(LVar13);
  pOVar14 = pOVar17;
  _os_log_type_enabled(pOVar17,uVar6 & 0xff);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar32 = *(long *)(unaff_x22 + 0x188);
  if ((int)pOVar14 == 0) {
    _swift_bridgeObjectRelease_n(puVar27,2);
  }
  else {
    puVar18 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar19 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar18 = 0x8220102;
    local_70 = pcVar19;
    FUN_10012dbb0(pcVar25,puVar27,&local_70);
    *(char **)(puVar18 + 1) = pcVar25;
    _swift_bridgeObjectRelease_n(puVar27,2);
    __os_log_impl(0x100000000,pOVar17,uVar6 & 0xff,"%{public}s",puVar18,0xc);
    FUN_100043f24(pcVar19);
    _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar32 + 8))(uVar31,uVar16);
  _swift_bridgeObjectRelease(puVar4);
  plVar20 = (long *)0x320;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar20;
  pcVar23 = FUN_1001e0c08;
LAB_1001e0398:
  *plVar20 = unaff_x22;
  plVar20[1] = (long)pcVar23;
  FUN_1001e14e4(*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x170),
                *(undefined8 *)(unaff_x22 + 0x178));
  return;
}

