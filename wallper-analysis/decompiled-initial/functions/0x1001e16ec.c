// rea decompile_all
// name: FUN_1001e16ec
// address: 0x1001e16ec
// body: available
// range: 0x1001e16ec-0x1001e1e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e1988 to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001e16ec(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags qos;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  String SVar4;
  undefined *puVar5;
  uint uVar6;
  ID IVar7;
  long *plVar8;
  char *pcVar9;
  undefined *puVar10;
  void *aBlock;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  Data DVar18;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  char *pcVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  URL url;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long unaff_x22;
  undefined8 uVar31;
  URLRequest *this;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  tuple2_conflict1 tVar35;
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
  char *local_68;
  undefined *local_60;
  
  lVar21 = *(long *)(*(long *)(unaff_x22 + 0x168) +
                    _TtC7Wallper14PreviewManager::remoteVideoTemplates);
  *(long *)(unaff_x22 + 0x248) = lVar21;
  uVar22 = *(ulong *)(lVar21 + 0x10);
  *(ulong *)(unaff_x22 + 0x250) = uVar22;
  if (uVar22 != 0) {
    uVar26 = 0;
    do {
      *(ulong *)(unaff_x22 + 600) = uVar26;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x248) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1001e1e08);
        (*pcVar23)();
      }
      lVar21 = *(long *)(unaff_x22 + 0x248) + uVar26 * 0x18;
      *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(lVar21 + 0x20);
      uVar29 = *(undefined8 *)(lVar21 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x268) = uVar29;
      lVar21 = *(long *)(lVar21 + 0x30);
      *(long *)(unaff_x22 + 0x270) = lVar21;
      lVar27 = *(long *)(lVar21 + 0x10);
      *(long *)(unaff_x22 + 0x278) = lVar27;
      if (lVar27 != 0) {
        _swift_bridgeObjectRetain_n(lVar21,2);
        _swift_bridgeObjectRetain(uVar29);
        uVar22 = 0;
        do {
          *(ulong *)(unaff_x22 + 0x280) = uVar22;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x270) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1001e1e04);
            (*pcVar23)();
          }
          lVar27 = *(long *)(unaff_x22 + 0x218);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x210);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
          SVar36 = *(String *)(unaff_x22 + 0x158);
          lVar21 = *(long *)(unaff_x22 + 0x270) + uVar22 * 0x10;
          uVar29 = *(undefined8 *)(lVar21 + 0x28);
          SVar4 = *(String *)(lVar21 + 0x20);
          *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x260);
          *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x268);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          SVar40.bridgeObject = param_4;
          SVar40.str = param_3;
          Swift::String::append(SVar36,SVar40);
          SVar36.bridgeObject = (void *)0xe100000000000000;
          SVar36.str = (char *)0x2e;
          SVar41.bridgeObject = param_4;
          SVar41.str = param_3;
          Swift::String::append(SVar36,SVar41);
          SVar42.bridgeObject = param_4;
          SVar42.str = param_3;
          Swift::String::append(SVar4,SVar42);
          _swift_bridgeObjectRelease(uVar29);
          uVar29 = *(undefined8 *)(unaff_x22 + 0xa8);
          *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0xa0);
          *(undefined8 *)(unaff_x22 + 0x290) = uVar29;
          Foundation::URL::_init();
          pcVar23 = *(code **)(lVar27 + 0x30);
          *(code **)(unaff_x22 + 0x298) = pcVar23;
          (*pcVar23)(uVar32,1,uVar31);
          if ((int)uVar32 != 1) {
            uVar29 = *(undefined8 *)(unaff_x22 + 0x228);
            url.unknown = *(undefined **)(unaff_x22 + 0x220);
            lVar21 = *(long *)(unaff_x22 + 0x218);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x210);
            this = *(URLRequest **)(unaff_x22 + 0x1e8);
            pcVar23 = *(code **)(lVar21 + 0x20);
            *(code **)(unaff_x22 + 0x2a0) = pcVar23;
            (*pcVar23)(uVar29,*(undefined8 *)(unaff_x22 + 0x208),uVar32);
            (**(code **)(lVar21 + 0x10))(url.unknown,uVar29,uVar32);
            Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
            Foundation::URLRequest::_set_httpMethod(this);
            IVar7 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
            *(ID *)(unaff_x22 + 0x2a8) = IVar7;
            plVar8 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x2b0) = plVar8;
            *plVar8 = unaff_x22;
            plVar8[1] = (long)FUN_1001e1e38;
            tVar35 = (extension_Foundation)::__C::NSURLSession::_data
                               ((URLRequest)*(undefined **)(unaff_x22 + 0x1e8));
            return tVar35;
          }
          uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
          _swift_bridgeObjectRelease(uVar29);
          param_3 = &DAT_10041bf10;
          FUN_10002a29c(uVar32,&DAT_100553d90);
          uVar22 = *(long *)(unaff_x22 + 0x280) + 1;
        } while (uVar22 != *(ulong *)(unaff_x22 + 0x278));
        uVar29 = *(undefined8 *)(unaff_x22 + 0x268);
        param_2.unknown = (undefined *)0x2;
        _swift_bridgeObjectRelease_n(*(undefined8 *)(unaff_x22 + 0x270));
        _swift_bridgeObjectRelease(uVar29);
        uVar26 = *(ulong *)(unaff_x22 + 600);
        uVar22 = *(ulong *)(unaff_x22 + 0x250);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar22);
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
  pcVar9 = ((String *)(unaff_x22 + 0x158))->str;
  SVar36 = *(String *)(unaff_x22 + 0x158);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x2c,param_2);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd00000000000002a;
  local_60 = (void *)0x80000001004e0f90;
  SVar43.bridgeObject = param_4;
  SVar43.str = param_3;
  Swift::String::append(SVar36,SVar43);
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
  pcVar19 = (char *)0x0;
  puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0xc0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pcVar9,pcVar9);
  SVar44.bridgeObject = puVar20;
  SVar44.str = pcVar19;
  Swift::String::append(SVar36,SVar44);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  SVar37.bridgeObject = (void *)0xe300000000000000;
  SVar37.str = (char *)0x5b205d;
  SVar45.bridgeObject = puVar20;
  SVar45.str = pcVar19;
  Swift::String::append(SVar37,SVar45);
  SVar38.bridgeObject = (void *)0xe300000000000000;
  SVar38.str = (char *)0x707061;
  SVar46.bridgeObject = puVar20;
  SVar46.str = pcVar19;
  Swift::String::append(SVar38,SVar46);
  SVar39.bridgeObject = (void *)0xe200000000000000;
  SVar39.str = (char *)0x205d;
  SVar47.bridgeObject = puVar20;
  SVar47.str = pcVar19;
  Swift::String::append(SVar39,SVar47);
  SVar48.bridgeObject = puVar20;
  SVar48.str = pcVar19;
  Swift::String::append(SVar4,SVar48);
  puVar20 = local_60;
  pcVar9 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar21 = *(long *)(unaff_x22 + 0x1c8);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1d0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar27 = *(long *)(unaff_x22 + 0x1b0);
  puVar10 = &DAT_100532018;
  _swift_allocObject(&DAT_100532018,0x30,7);
  *(char **)(puVar10 + 0x10) = pcVar9;
  *(undefined **)(puVar10 + 0x18) = puVar20;
  *(undefined8 *)(puVar10 + 0x20) = 0;
  *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar10;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100532030;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar11.unknown = puVar20;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar11);
  *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
  puVar12 = &DAT_100553db0;
  FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar10 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar13 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar29,unaff_x22 + 0x140,puVar10,puVar13,uVar32,puVar12);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar27 + 8))(uVar29,uVar32);
  (**(code **)(lVar21 + 8))(qos.unknown,uVar31);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar21 = *(long *)(unaff_x22 + 0x188);
  uVar29 = *(undefined8 *)(unaff_x22 + 400);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar32 = uVar31;
  FUN_100099338(uVar31,&DAT_100558f50);
  (**(code **)(lVar21 + 0x10))(uVar29,uVar32,uVar31);
  uVar6 = (uint)uVar29;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar14.unknown = puVar20;
  _swift_bridgeObjectRetain();
  pOVar15 = os::Logger::get_logObject(LVar14);
  pOVar16 = pOVar15;
  _os_log_type_enabled(pOVar15,uVar6 & 0xff);
  lVar21 = *(long *)(unaff_x22 + 0x188);
  uVar29 = *(undefined8 *)(unaff_x22 + 400);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
  if ((int)pOVar16 == 0) {
    _swift_bridgeObjectRelease_n(puVar20,2);
  }
  else {
    puVar17 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar19 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar17 = 0x8220102;
    local_68 = pcVar19;
    FUN_10012dbb0(pcVar9,puVar20,&local_68);
    *(char **)(puVar17 + 1) = pcVar9;
    _swift_bridgeObjectRelease_n(puVar20,2);
    __os_log_impl(0x100000000,pOVar15,uVar6 & 0xff,"%{public}s",puVar17,0xc);
    FUN_100043f24(pcVar19);
    _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar21 + 8))(uVar29,uVar32);
  _swift_bridgeObjectRelease(puVar5);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar24 = *(undefined8 *)(unaff_x22 + 400);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
  DVar18.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001001e1dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(0);
  tVar35._ = UNRECOVERED_JUMPTABLE;
  tVar35._.unknown = DVar18.unknown;
  return tVar35;
}

