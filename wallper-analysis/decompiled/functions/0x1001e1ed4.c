// rea decompile_all
// name: FUN_1001e1ed4
// address: 0x1001e1ed4
// body: available
// range: 0x1001e1ed4-0x1001e2b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e29e0 to 0x1001e4dc0 FUN_1001e4dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e2abc to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001e1ed4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags DVar1;
  undefined8 uVar2;
  String SVar3;
  uint uVar4;
  undefined *puVar5;
  void *pvVar6;
  OS_os_log *pOVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  long *plVar15;
  Data DVar16;
  _StringGuts extraout_x1;
  _StringGuts _Var17;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  char *pcVar18;
  char *pcVar19;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  URL url;
  ID IVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  long unaff_x22;
  undefined8 uVar35;
  URLRequest *this;
  undefined8 uVar36;
  undefined8 uVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  tuple2_conflict1 tVar47;
  tuple2_conflict1 tVar48;
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
  char *local_68;
  undefined *local_60;
  
  IVar29 = *(ID *)(unaff_x22 + 0x2b8);
  _swift_dynamicCastObjCClass(IVar29,&_OBJC_CLASS___NSHTTPURLResponse);
  if (IVar29 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x290));
  }
  else {
    IVar29 = objc_stub::statusCode(IVar29);
    if (IVar29 == 200) {
      uVar27 = *(undefined8 *)(unaff_x22 + 0x290);
      SVar3 = *(String *)(unaff_x22 + 0x288);
      *(undefined8 *)(unaff_x22 + 0xe0) = 0;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x3f,extraout_x1);
      *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0xe0);
      *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xe8);
      SVar38.bridgeObject = (void *)0x80000001004e0fc0;
      SVar38.str = (char *)0xd000000000000026;
      SVar49.bridgeObject = param_4;
      SVar49.str = param_3;
      Swift::String::append(SVar38,SVar49);
      SVar50.bridgeObject = param_4;
      SVar50.str = param_3;
      Swift::String::append(SVar3,SVar50);
      _swift_bridgeObjectRelease(uVar27);
      uVar27 = 0xd000000000000017;
      SVar39.bridgeObject = (void *)0x80000001004e0ff0;
      SVar39.str = (char *)0xd000000000000017;
      SVar51.bridgeObject = param_4;
      SVar51.str = param_3;
      Swift::String::append(SVar39,SVar51);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xd8);
      SVar3 = *(String *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0xf0) = 0x5b;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x100) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x118) = 0xe100000000000000;
      FUN_100026df4();
      *(undefined8 *)(unaff_x22 + 0x2c8) = uVar27;
      pcVar18 = (char *)0x0;
      puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x110,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar27,uVar27);
      SVar52.bridgeObject = puVar20;
      SVar52.str = pcVar18;
      Swift::String::append(SVar40,SVar52);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar41.bridgeObject = (void *)0xe300000000000000;
      SVar41.str = (char *)0x5b205d;
      SVar53.bridgeObject = puVar20;
      SVar53.str = pcVar18;
      Swift::String::append(SVar41,SVar53);
      SVar42.bridgeObject = (void *)0xe300000000000000;
      SVar42.str = (char *)0x707061;
      SVar54.bridgeObject = puVar20;
      SVar54.str = pcVar18;
      Swift::String::append(SVar42,SVar54);
      SVar43.bridgeObject = (void *)0xe200000000000000;
      SVar43.str = (char *)0x205d;
      SVar55.bridgeObject = puVar20;
      SVar55.str = pcVar18;
      Swift::String::append(SVar43,SVar55);
      SVar56.bridgeObject = puVar20;
      SVar56.str = pcVar18;
      Swift::String::append(SVar3,SVar56);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
      puVar20 = *(undefined **)(unaff_x22 + 0xf8);
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      lVar34 = *(long *)(unaff_x22 + 0x1c8);
      DVar1.unknown = *(undefined **)(unaff_x22 + 0x1d0);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x1a8);
      lVar25 = *(long *)(unaff_x22 + 0x1b0);
      *(undefined8 *)(unaff_x22 + 0x2d0) = DAT_100559010;
      puVar5 = &DAT_100532068;
      _swift_allocObject(&DAT_100532068,0x30,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar27;
      *(undefined **)(puVar5 + 0x18) = puVar20;
      *(undefined8 *)(puVar5 + 0x20) = 0;
      *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x68) = puVar5;
      *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x58) = &DAT_100532080;
      pvVar6 = __Block_copy((void *)(unaff_x22 + 0x40));
      DVar10.unknown = puVar20;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar10);
      *(undefined **)(unaff_x22 + 0x148) = PTR___swiftEmptyArrayStorage_100524190;
      puVar11 = &DAT_100553db0;
      FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      *(undefined8 **)(unaff_x22 + 0x2d8) = puVar11;
      puVar5 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      *(undefined **)(unaff_x22 + 0x2e0) = puVar5;
      puVar12 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      *(undefined8 **)(unaff_x22 + 0x2e8) = puVar12;
      Swift::SetAlgebra::_init(uVar35,unaff_x22 + 0x148,puVar5,puVar12,uVar31,puVar11);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar1);
      __Block_release(pvVar6);
      pcVar21 = *(code **)(lVar25 + 8);
      *(code **)(unaff_x22 + 0x2f0) = pcVar21;
      (*pcVar21)(uVar35,uVar31);
      pcVar21 = *(code **)(lVar34 + 8);
      *(code **)(unaff_x22 + 0x2f8) = pcVar21;
      (*pcVar21)(DVar1.unknown,uVar30);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      uVar30 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x180);
      lVar34 = *(long *)(unaff_x22 + 0x188);
      uVar31 = uVar35;
      FUN_100099338(uVar35,&DAT_100558f50);
      *(undefined8 *)(unaff_x22 + 0x300) = uVar31;
      pcVar21 = *(code **)(lVar34 + 0x10);
      *(code **)(unaff_x22 + 0x308) = pcVar21;
      (*pcVar21)(uVar30,uVar31,uVar35);
      uVar4 = (uint)uVar30;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar13.unknown = puVar20;
      _swift_bridgeObjectRetain();
      pOVar7 = os::Logger::get_logObject(LVar13);
      pOVar14 = pOVar7;
      _os_log_type_enabled(pOVar7,uVar4 & 0xff);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x180);
      lVar34 = *(long *)(unaff_x22 + 0x188);
      if ((int)pOVar14 == 0) {
        _swift_bridgeObjectRelease_n(puVar20,2);
      }
      else {
        puVar8 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar18 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar8 = 0x8220102;
        local_68 = pcVar18;
        FUN_10012dbb0(uVar27,puVar20,&local_68);
        *(undefined8 *)(puVar8 + 1) = uVar27;
        _swift_bridgeObjectRelease_n(puVar20,2);
        __os_log_impl(0x100000000,pOVar7,uVar4 & 0xff,"%{public}s",puVar8,0xc);
        FUN_100043f24(pcVar18);
        _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
      }
      pcVar21 = *(code **)(lVar34 + 8);
      (*pcVar21)(uVar31,uVar35);
      _swift_bridgeObjectRelease(uVar32);
      *(code **)(unaff_x22 + 0x310) = pcVar21;
      plVar15 = (long *)0x440;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x318) = plVar15;
      *plVar15 = unaff_x22;
      plVar15[1] = (long)FUN_1001e2b28;
      UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 0x228);
      DVar16.unknown = *(undefined **)(unaff_x22 + 0x200);
      FUN_1001e4dc0(plVar15,DVar16.unknown,UNRECOVERED_JUMPTABLE,*(undefined8 *)(unaff_x22 + 0x158),
                    *(undefined8 *)(unaff_x22 + 0x160));
      tVar47._ = UNRECOVERED_JUMPTABLE;
      tVar47._.unknown = DVar16.unknown;
      return tVar47;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x290));
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar34 = *(long *)(unaff_x22 + 0x218);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x210);
  (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d8));
  (**(code **)(lVar34 + 8))(uVar32,uVar27);
  while( true ) {
    uVar24 = *(long *)(unaff_x22 + 0x280) + 1;
    lVar34 = *(long *)(unaff_x22 + 0x270);
    if (uVar24 == *(ulong *)(unaff_x22 + 0x278)) {
      uVar27 = *(undefined8 *)(unaff_x22 + 0x268);
      _Var17.unknown = (undefined *)0x2;
      _swift_bridgeObjectRelease_n(lVar34);
      _swift_bridgeObjectRelease(uVar27);
      uVar24 = *(ulong *)(unaff_x22 + 600);
      lVar25 = uVar24 * 0x18;
      do {
        uVar24 = uVar24 + 1;
        if (*(ulong *)(unaff_x22 + 0x250) == uVar24) {
          _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
          pcVar18 = ((String *)(unaff_x22 + 0x158))->str;
          SVar3 = *(String *)(unaff_x22 + 0x158);
          local_68 = (char *)0x0;
          local_60 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x2c,_Var17);
          _swift_bridgeObjectRelease(local_60);
          local_68 = (char *)0xd00000000000002a;
          local_60 = (void *)0x80000001004e0f90;
          SVar60.bridgeObject = param_4;
          SVar60.str = param_3;
          Swift::String::append(SVar3,SVar60);
          puVar20 = local_60;
          SVar3.bridgeObject = local_60;
          SVar3.str = local_68;
          local_68 = (char *)0x5b;
          local_60 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0xb0) = 0x4f464e49;
          *(undefined8 *)(unaff_x22 + 0xb8) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0xc0) = 0x20;
          *(undefined8 *)(unaff_x22 + 200) = 0xe100000000000000;
          FUN_100026df4();
          pcVar19 = (char *)0x0;
          puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0xc0,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pcVar18,pcVar18);
          SVar61.bridgeObject = puVar5;
          SVar61.str = pcVar19;
          Swift::String::append(SVar40,SVar61);
          _swift_bridgeObjectRelease(SVar40.bridgeObject);
          SVar40.bridgeObject = (void *)0xe300000000000000;
          SVar40.str = (char *)0x5b205d;
          SVar62.bridgeObject = puVar5;
          SVar62.str = pcVar19;
          Swift::String::append(SVar40,SVar62);
          SVar45.bridgeObject = (void *)0xe300000000000000;
          SVar45.str = (char *)0x707061;
          SVar63.bridgeObject = puVar5;
          SVar63.str = pcVar19;
          Swift::String::append(SVar45,SVar63);
          SVar46.bridgeObject = (void *)0xe200000000000000;
          SVar46.str = (char *)0x205d;
          SVar64.bridgeObject = puVar5;
          SVar64.str = pcVar19;
          Swift::String::append(SVar46,SVar64);
          SVar65.bridgeObject = puVar5;
          SVar65.str = pcVar19;
          Swift::String::append(SVar3,SVar65);
          puVar5 = local_60;
          pcVar18 = local_68;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          lVar34 = *(long *)(unaff_x22 + 0x1c8);
          DVar1.unknown = *(undefined **)(unaff_x22 + 0x1d0);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar35 = *(undefined8 *)(unaff_x22 + 0x1c0);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1a8);
          lVar25 = *(long *)(unaff_x22 + 0x1b0);
          puVar9 = &DAT_100532018;
          _swift_allocObject(&DAT_100532018,0x30,7);
          *(char **)(puVar9 + 0x10) = pcVar18;
          *(undefined **)(puVar9 + 0x18) = puVar5;
          *(undefined8 *)(puVar9 + 0x20) = 0;
          *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
          *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
          *(undefined **)(unaff_x22 + 0x38) = puVar9;
          *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
          *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x28) = &DAT_100532030;
          pvVar6 = __Block_copy((void *)(unaff_x22 + 0x10));
          DVar10.unknown = puVar5;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar10);
          *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
          puVar11 = &DAT_100553db0;
          FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar9 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar12 = &DAT_100553dc0;
          FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
          Swift::SetAlgebra::_init(uVar27,unaff_x22 + 0x140,puVar9,puVar12,uVar32,puVar11);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar1);
          __Block_release(pvVar6);
          (**(code **)(lVar25 + 8))(uVar27,uVar32);
          (**(code **)(lVar34 + 8))(DVar1.unknown,uVar35);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          lVar34 = *(long *)(unaff_x22 + 0x188);
          uVar27 = *(undefined8 *)(unaff_x22 + 400);
          uVar35 = *(undefined8 *)(unaff_x22 + 0x180);
          uVar32 = uVar35;
          FUN_100099338(uVar35,&DAT_100558f50);
          (**(code **)(lVar34 + 0x10))(uVar27,uVar32,uVar35);
          uVar4 = (uint)uVar27;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          LVar13.unknown = puVar5;
          _swift_bridgeObjectRetain();
          pOVar7 = os::Logger::get_logObject(LVar13);
          pOVar14 = pOVar7;
          _os_log_type_enabled(pOVar7,uVar4 & 0xff);
          lVar34 = *(long *)(unaff_x22 + 0x188);
          uVar27 = *(undefined8 *)(unaff_x22 + 400);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
          if ((int)pOVar14 == 0) {
            _swift_bridgeObjectRelease_n(puVar5,2);
          }
          else {
            puVar8 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar19 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar8 = 0x8220102;
            local_68 = pcVar19;
            FUN_10012dbb0(pcVar18,puVar5,&local_68);
            *(char **)(puVar8 + 1) = pcVar18;
            _swift_bridgeObjectRelease_n(puVar5,2);
            __os_log_impl(0x100000000,pOVar7,uVar4 & 0xff,"%{public}s",puVar8,0xc);
            FUN_100043f24(pcVar19);
            _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar34 + 8))(uVar27,uVar32);
          _swift_bridgeObjectRelease(puVar20);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x220);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x1f8);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x200);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1e8);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x1f0);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x1d0);
          uVar37 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar35 = *(undefined8 *)(unaff_x22 + 0x198);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
          uVar22 = *(undefined8 *)(unaff_x22 + 400);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x178);
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
          _swift_task_dealloc(uVar33);
          _swift_task_dealloc(uVar28);
          _swift_task_dealloc(uVar31);
          _swift_task_dealloc(uVar27);
          _swift_task_dealloc(uVar30);
          _swift_task_dealloc(uVar32);
          _swift_task_dealloc(uVar36);
          _swift_task_dealloc(uVar37);
          _swift_task_dealloc(uVar2);
          _swift_task_dealloc(uVar35);
          _swift_task_dealloc(uVar22);
          _swift_task_dealloc(uVar23);
          UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
          DVar16.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001001e295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)UNRECOVERED_JUMPTABLE)(0);
          tVar48._ = UNRECOVERED_JUMPTABLE;
          tVar48._.unknown = DVar16.unknown;
          return tVar48;
        }
        *(ulong *)(unaff_x22 + 600) = uVar24;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x248) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1001e2ac4);
          (*pcVar21)();
        }
        lVar34 = *(long *)(unaff_x22 + 0x248) + lVar25;
        *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(lVar34 + 0x38);
        uVar27 = *(undefined8 *)(lVar34 + 0x40);
        *(undefined8 *)(unaff_x22 + 0x268) = uVar27;
        lVar34 = *(long *)(lVar34 + 0x48);
        *(long *)(unaff_x22 + 0x270) = lVar34;
        lVar26 = *(long *)(lVar34 + 0x10);
        *(long *)(unaff_x22 + 0x278) = lVar26;
        lVar25 = lVar25 + 0x18;
      } while (lVar26 == 0);
      _swift_bridgeObjectRetain_n(lVar34,2);
      _swift_bridgeObjectRetain(uVar27);
      uVar24 = 0;
    }
    *(ulong *)(unaff_x22 + 0x280) = uVar24;
    if (*(ulong *)(lVar34 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1001e2ac8);
      (*pcVar21)();
    }
    lVar25 = *(long *)(unaff_x22 + 0x218);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
    SVar3 = *(String *)(unaff_x22 + 0x158);
    lVar34 = lVar34 + uVar24 * 0x10;
    uVar27 = *(undefined8 *)(lVar34 + 0x28);
    SVar40 = *(String *)(lVar34 + 0x20);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x260);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar27);
    SVar57.bridgeObject = param_4;
    SVar57.str = param_3;
    Swift::String::append(SVar3,SVar57);
    SVar44.bridgeObject = (void *)0xe100000000000000;
    SVar44.str = (char *)0x2e;
    SVar58.bridgeObject = param_4;
    SVar58.str = param_3;
    Swift::String::append(SVar44,SVar58);
    SVar59.bridgeObject = param_4;
    SVar59.str = param_3;
    Swift::String::append(SVar40,SVar59);
    _swift_bridgeObjectRelease(uVar27);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x290) = uVar27;
    Foundation::URL::_init();
    pcVar21 = *(code **)(lVar25 + 0x30);
    *(code **)(unaff_x22 + 0x298) = pcVar21;
    (*pcVar21)(uVar32,1,uVar35);
    if ((int)uVar32 != 1) break;
    uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
    _swift_bridgeObjectRelease(uVar27);
    param_3 = &DAT_10041bf10;
    FUN_10002a29c(uVar32,&DAT_100553d90);
  }
  uVar27 = *(undefined8 *)(unaff_x22 + 0x228);
  url.unknown = *(undefined **)(unaff_x22 + 0x220);
  lVar34 = *(long *)(unaff_x22 + 0x218);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x210);
  this = *(URLRequest **)(unaff_x22 + 0x1e8);
  pcVar21 = *(code **)(lVar34 + 0x20);
  *(code **)(unaff_x22 + 0x2a0) = pcVar21;
  (*pcVar21)(uVar27,*(undefined8 *)(unaff_x22 + 0x208),uVar32);
  (**(code **)(lVar34 + 0x10))(url.unknown,uVar27,uVar32);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  IVar29 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0x2a8) = IVar29;
  plVar15 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2b0) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_1001e1e38;
  tVar48 = (extension_Foundation)::__C::NSURLSession::_data
                     ((URLRequest)*(undefined **)(unaff_x22 + 0x1e8));
  return tVar48;
}

