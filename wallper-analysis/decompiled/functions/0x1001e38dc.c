// rea decompile_all
// name: FUN_1001e38dc
// address: 0x1001e38dc
// body: available
// range: 0x1001e38dc-0x1001e4043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e4008 to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

tuple2_conflict1 FUN_1001e38dc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags qos;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  String SVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  Data DVar16;
  ID IVar17;
  long *plVar18;
  _StringGuts _Var19;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  char *pcVar20;
  undefined *puVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  URL url;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long unaff_x22;
  long lVar33;
  URLRequest *this;
  undefined8 uVar34;
  undefined8 uVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  tuple2_conflict1 tVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  char *local_68;
  undefined *local_60;
  
  uVar30 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar33 = *(long *)(unaff_x22 + 0x218);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x210);
  (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d8));
  (**(code **)(lVar33 + 8))(uVar28,uVar32);
  _swift_errorRelease(uVar30);
  while( true ) {
    uVar25 = *(long *)(unaff_x22 + 0x280) + 1;
    lVar33 = *(long *)(unaff_x22 + 0x270);
    if (uVar25 == *(ulong *)(unaff_x22 + 0x278)) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x268);
      _Var19.unknown = (undefined *)0x2;
      _swift_bridgeObjectRelease_n(lVar33);
      _swift_bridgeObjectRelease(uVar28);
      uVar25 = *(ulong *)(unaff_x22 + 600);
      lVar26 = uVar25 * 0x18;
      do {
        uVar25 = uVar25 + 1;
        if (*(ulong *)(unaff_x22 + 0x250) == uVar25) {
          _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
          pcVar7 = ((String *)(unaff_x22 + 0x158))->str;
          SVar4 = *(String *)(unaff_x22 + 0x158);
          local_68 = (char *)0x0;
          local_60 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x2c,_Var19);
          _swift_bridgeObjectRelease(local_60);
          local_68 = (char *)0xd00000000000002a;
          local_60 = (void *)0x80000001004e0f90;
          SVar44.bridgeObject = param_4;
          SVar44.str = param_3;
          Swift::String::append(SVar4,SVar44);
          puVar5 = local_60;
          SVar4.bridgeObject = local_60;
          SVar4.str = local_68;
          local_68 = (char *)0x5b;
          local_60 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0xb0) = 0x4f464e49;
          *(undefined8 *)(unaff_x22 + 0xb8) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0xc0) = 0x20;
          *(undefined8 *)(unaff_x22 + 200) = 0xe100000000000000;
          FUN_100026df4();
          pcVar20 = (char *)0x0;
          puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0xc0,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pcVar7,pcVar7);
          SVar45.bridgeObject = puVar21;
          SVar45.str = pcVar20;
          Swift::String::append(SVar37,SVar45);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar37.bridgeObject = (void *)0xe300000000000000;
          SVar37.str = (char *)0x5b205d;
          SVar46.bridgeObject = puVar21;
          SVar46.str = pcVar20;
          Swift::String::append(SVar37,SVar46);
          SVar38.bridgeObject = (void *)0xe300000000000000;
          SVar38.str = (char *)0x707061;
          SVar47.bridgeObject = puVar21;
          SVar47.str = pcVar20;
          Swift::String::append(SVar38,SVar47);
          SVar39.bridgeObject = (void *)0xe200000000000000;
          SVar39.str = (char *)0x205d;
          SVar48.bridgeObject = puVar21;
          SVar48.str = pcVar20;
          Swift::String::append(SVar39,SVar48);
          SVar49.bridgeObject = puVar21;
          SVar49.str = pcVar20;
          Swift::String::append(SVar4,SVar49);
          puVar21 = local_60;
          pcVar7 = local_68;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          lVar33 = *(long *)(unaff_x22 + 0x1c8);
          qos.unknown = *(undefined **)(unaff_x22 + 0x1d0);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1c0);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x1a8);
          lVar26 = *(long *)(unaff_x22 + 0x1b0);
          puVar8 = &DAT_100532018;
          _swift_allocObject(&DAT_100532018,0x30,7);
          *(char **)(puVar8 + 0x10) = pcVar7;
          *(undefined **)(puVar8 + 0x18) = puVar21;
          *(undefined8 *)(puVar8 + 0x20) = 0;
          *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
          *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
          *(undefined **)(unaff_x22 + 0x38) = puVar8;
          *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
          *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x28) = &DAT_100532030;
          aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
          DVar9.unknown = puVar21;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar9);
          *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
          puVar10 = &DAT_100553db0;
          FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar8 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar11 = &DAT_100553dc0;
          FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
          Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0x140,puVar8,puVar11,uVar30,puVar10);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(aBlock);
          (**(code **)(lVar26 + 8))(uVar28,uVar30);
          (**(code **)(lVar33 + 8))(qos.unknown,uVar32);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          lVar33 = *(long *)(unaff_x22 + 0x188);
          uVar28 = *(undefined8 *)(unaff_x22 + 400);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
          uVar30 = uVar32;
          FUN_100099338(uVar32,&DAT_100558f50);
          (**(code **)(lVar33 + 0x10))(uVar28,uVar30,uVar32);
          uVar6 = (uint)uVar28;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          LVar12.unknown = puVar21;
          _swift_bridgeObjectRetain();
          pOVar13 = os::Logger::get_logObject(LVar12);
          pOVar14 = pOVar13;
          _os_log_type_enabled(pOVar13,uVar6 & 0xff);
          lVar33 = *(long *)(unaff_x22 + 0x188);
          uVar28 = *(undefined8 *)(unaff_x22 + 400);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
          if ((int)pOVar14 == 0) {
            _swift_bridgeObjectRelease_n(puVar21,2);
          }
          else {
            puVar15 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar20 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar15 = 0x8220102;
            local_68 = pcVar20;
            FUN_10012dbb0(pcVar7,puVar21,&local_68);
            *(char **)(puVar15 + 1) = pcVar7;
            _swift_bridgeObjectRelease_n(puVar21,2);
            __os_log_impl(0x100000000,pOVar13,uVar6 & 0xff,"%{public}s",puVar15,0xc);
            FUN_100043f24(pcVar20);
            _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar33 + 8))(uVar28,uVar30);
          _swift_bridgeObjectRelease(puVar5);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x220);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1f8);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x200);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x1e8);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x1d0);
          uVar35 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x198);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
          uVar23 = *(undefined8 *)(unaff_x22 + 400);
          uVar24 = *(undefined8 *)(unaff_x22 + 0x178);
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
          _swift_task_dealloc(uVar31);
          _swift_task_dealloc(uVar29);
          _swift_task_dealloc(uVar1);
          _swift_task_dealloc(uVar28);
          _swift_task_dealloc(uVar2);
          _swift_task_dealloc(uVar30);
          _swift_task_dealloc(uVar34);
          _swift_task_dealloc(uVar35);
          _swift_task_dealloc(uVar3);
          _swift_task_dealloc(uVar32);
          _swift_task_dealloc(uVar23);
          _swift_task_dealloc(uVar24);
          UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
          DVar16.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001001e3f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)UNRECOVERED_JUMPTABLE)(0);
          tVar40._ = UNRECOVERED_JUMPTABLE;
          tVar40._.unknown = DVar16.unknown;
          return tVar40;
        }
        *(ulong *)(unaff_x22 + 600) = uVar25;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x248) + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001e4010);
          (*pcVar22)();
        }
        lVar33 = *(long *)(unaff_x22 + 0x248) + lVar26;
        *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(lVar33 + 0x38);
        uVar28 = *(undefined8 *)(lVar33 + 0x40);
        *(undefined8 *)(unaff_x22 + 0x268) = uVar28;
        lVar33 = *(long *)(lVar33 + 0x48);
        *(long *)(unaff_x22 + 0x270) = lVar33;
        lVar27 = *(long *)(lVar33 + 0x10);
        *(long *)(unaff_x22 + 0x278) = lVar27;
        lVar26 = lVar26 + 0x18;
      } while (lVar27 == 0);
      _swift_bridgeObjectRetain_n(lVar33,2);
      _swift_bridgeObjectRetain(uVar28);
      uVar25 = 0;
    }
    *(ulong *)(unaff_x22 + 0x280) = uVar25;
    if (*(ulong *)(lVar33 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1001e4014);
      (*pcVar22)();
    }
    lVar26 = *(long *)(unaff_x22 + 0x218);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x208);
    SVar4 = *(String *)(unaff_x22 + 0x158);
    lVar33 = lVar33 + uVar25 * 0x10;
    uVar28 = *(undefined8 *)(lVar33 + 0x28);
    SVar37 = *(String *)(lVar33 + 0x20);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x260);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar28);
    SVar41.bridgeObject = param_4;
    SVar41.str = param_3;
    Swift::String::append(SVar4,SVar41);
    SVar36.bridgeObject = (void *)0xe100000000000000;
    SVar36.str = (char *)0x2e;
    SVar42.bridgeObject = param_4;
    SVar42.str = param_3;
    Swift::String::append(SVar36,SVar42);
    SVar43.bridgeObject = param_4;
    SVar43.str = param_3;
    Swift::String::append(SVar37,SVar43);
    _swift_bridgeObjectRelease(uVar28);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x290) = uVar28;
    Foundation::URL::_init();
    pcVar22 = *(code **)(lVar26 + 0x30);
    *(code **)(unaff_x22 + 0x298) = pcVar22;
    (*pcVar22)(uVar30,1,uVar32);
    if ((int)uVar30 != 1) break;
    uVar30 = *(undefined8 *)(unaff_x22 + 0x208);
    _swift_bridgeObjectRelease(uVar28);
    param_3 = &DAT_10041bf10;
    FUN_10002a29c(uVar30,&DAT_100553d90);
  }
  uVar28 = *(undefined8 *)(unaff_x22 + 0x228);
  url.unknown = *(undefined **)(unaff_x22 + 0x220);
  lVar33 = *(long *)(unaff_x22 + 0x218);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x210);
  this = *(URLRequest **)(unaff_x22 + 0x1e8);
  pcVar22 = *(code **)(lVar33 + 0x20);
  *(code **)(unaff_x22 + 0x2a0) = pcVar22;
  (*pcVar22)(uVar28,*(undefined8 *)(unaff_x22 + 0x208),uVar30);
  (**(code **)(lVar33 + 0x10))(url.unknown,uVar28,uVar30);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  IVar17 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0x2a8) = IVar17;
  plVar18 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2b0) = plVar18;
  *plVar18 = unaff_x22;
  plVar18[1] = (long)FUN_1001e1e38;
  tVar40 = (extension_Foundation)::__C::NSURLSession::_data
                     ((URLRequest)*(undefined **)(unaff_x22 + 0x1e8));
  return tVar40;
}

