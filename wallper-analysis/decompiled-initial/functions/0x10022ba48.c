// rea decompile_all
// name: FUN_10022ba48
// address: 0x10022ba48
// body: available
// range: 0x10022ba48-0x10022c72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022c6a8 to 0x100413658 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$download (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010022bc34) */

tuple2_conflict1 FUN_10022ba48(void)

{
  long lVar1;
  DispatchWorkItemFlags DVar2;
  byte bVar3;
  String SVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar9;
  OS_os_log *pOVar10;
  undefined4 *puVar11;
  URL UVar12;
  undefined *puVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  Data DVar19;
  long *plVar20;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  char *pcVar21;
  char *pcVar22;
  void *pvVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  Published *pPVar29;
  long lVar30;
  _StringGuts _Var31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long unaff_x22;
  undefined1 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
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
  tuple2_conflict1 tVar52;
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
  char *local_70;
  undefined *local_68;
  
  lVar30 = _TtC7Wallper13UpdateManager::isUpdating;
  pPVar29 = *(Published **)(unaff_x22 + 0x180);
  *(long *)(unaff_x22 + 0x260) = _TtC7Wallper13UpdateManager::isUpdating;
  if ((*(byte *)((long)&pPVar29->unknown + lVar30) & 1) != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x248));
    goto LAB_10022c544;
  }
  *(undefined1 *)((long)&pPVar29->unknown + lVar30) = 1;
  puVar6 = &DAT_10042bb80;
  _swift_getKeyPath(&DAT_10042bb80);
  puVar7 = &DAT_10042bba8;
  _swift_getKeyPath(&DAT_10042bba8);
  *(undefined1 *)(unaff_x22 + 0xed) = 4;
  _swift_retain(pPVar29);
  Combine::Published::_set_subscript(pPVar29,(undefined1 *)(unaff_x22 + 0xed),pPVar29,puVar6,puVar7)
  ;
  puVar6 = &DAT_10042bbc8;
  _swift_getKeyPath(&DAT_10042bbc8);
  puVar7 = &DAT_10042bbf0;
  _swift_getKeyPath(&DAT_10042bbf0);
  Combine::Published::_get_subscript(unaff_x22 + 0xa0,pPVar29,puVar6,puVar7);
  _swift_release(puVar7);
  _swift_release(puVar6);
  lVar30 = *(long *)(unaff_x22 + 0xa8);
  if (lVar30 == 0) {
    _Var31.unknown = *(undefined **)(unaff_x22 + 0x248);
    _swift_release();
  }
  else {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar1 = *(long *)(unaff_x22 + 0x200);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0xb0);
    pvVar9 = *(void **)(unaff_x22 + 0xb8);
    uVar39 = *(undefined8 *)(unaff_x22 + 0xa0);
    _swift_bridgeObjectRetain(pvVar9);
    pvVar23 = pvVar9;
    FUN_10007428c(uVar39,lVar30,uVar40);
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(pvVar9);
    (**(code **)(lVar1 + 0x30))(uVar33,1,uVar27);
    if ((int)uVar33 != 1) {
      uVar27 = *(undefined8 *)(unaff_x22 + 0x238);
      pcVar22 = *(char **)(unaff_x22 + 0x1f8);
      _Var31.unknown = *(undefined **)(unaff_x22 + 0x1f0);
      pcVar24 = *(code **)(*(long *)(unaff_x22 + 0x200) + 0x20);
      *(code **)(unaff_x22 + 0x268) = pcVar24;
      (*pcVar24)(*(undefined8 *)(unaff_x22 + 0x240));
      FUN_10022ef8c(uVar27);
      local_70 = (char *)0x0;
      local_68 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var31);
      UVar12.unknown = local_68;
      _swift_bridgeObjectRelease();
      local_70 = (char *)0xd000000000000014;
      local_68 = (void *)0x80000001004e20e0;
      SVar42 = Foundation::URL::get_absoluteString(UVar12);
      pvVar9 = SVar42.bridgeObject;
      SVar63.bridgeObject = pvVar23;
      SVar63.str = pcVar22;
      Swift::String::append(SVar42,SVar63);
      _swift_bridgeObjectRelease();
      puVar6 = local_68;
      SVar4.bridgeObject = local_68;
      SVar4.str = local_70;
      local_70 = (char *)0x5b;
      local_68 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x118) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x120) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x128) = 0xe100000000000000;
      FUN_100026df4();
      *(void **)(unaff_x22 + 0x270) = pvVar9;
      pcVar22 = (char *)0x0;
      puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar42 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x120,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
      SVar64.bridgeObject = puVar7;
      SVar64.str = pcVar22;
      Swift::String::append(SVar42,SVar64);
      _swift_bridgeObjectRelease(SVar42.bridgeObject);
      SVar49.bridgeObject = (void *)0xe300000000000000;
      SVar49.str = (char *)0x5b205d;
      SVar65.bridgeObject = puVar7;
      SVar65.str = pcVar22;
      Swift::String::append(SVar49,SVar65);
      SVar50.bridgeObject = (void *)0xe600000000000000;
      SVar50.str = (char *)0x657461647075;
      SVar66.bridgeObject = puVar7;
      SVar66.str = pcVar22;
      Swift::String::append(SVar50,SVar66);
      SVar51.bridgeObject = (void *)0xe200000000000000;
      SVar51.str = (char *)0x205d;
      SVar67.bridgeObject = puVar7;
      SVar67.str = pcVar22;
      Swift::String::append(SVar51,SVar67);
      SVar68.bridgeObject = puVar7;
      SVar68.str = pcVar22;
      Swift::String::append(SVar4,SVar68);
      puVar7 = local_68;
      pcVar22 = local_70;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      lVar30 = *(long *)(unaff_x22 + 0x1e0);
      DVar2.unknown = *(undefined **)(unaff_x22 + 0x1e8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x1d0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x1c0);
      lVar1 = *(long *)(unaff_x22 + 0x1c8);
      *(undefined8 *)(unaff_x22 + 0x278) = DAT_100559010;
      puVar13 = &DAT_100533c50;
      _swift_allocObject(&DAT_100533c50,0x30,7);
      *(char **)(puVar13 + 0x10) = pcVar22;
      *(undefined **)(puVar13 + 0x18) = puVar7;
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x68) = puVar13;
      *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x58) = &DAT_100533c68;
      pvVar9 = __Block_copy((void *)(unaff_x22 + 0x40));
      DVar14.unknown = puVar7;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar14);
      *(undefined **)(unaff_x22 + 0x170) = PTR___swiftEmptyArrayStorage_100524190;
      puVar15 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      *(undefined8 **)(unaff_x22 + 0x280) = puVar15;
      puVar13 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      *(undefined **)(unaff_x22 + 0x288) = puVar13;
      puVar16 = puVar13;
      FUN_100077ac0();
      *(undefined **)(unaff_x22 + 0x290) = puVar16;
      Swift::SetAlgebra::_init(uVar27,unaff_x22 + 0x170,puVar13,puVar16,uVar40,puVar15);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
      __Block_release(pvVar9);
      pcVar24 = *(code **)(lVar1 + 8);
      *(code **)(unaff_x22 + 0x298) = pcVar24;
      (*pcVar24)(uVar27,uVar40);
      pcVar24 = *(code **)(lVar30 + 8);
      *(code **)(unaff_x22 + 0x2a0) = pcVar24;
      (*pcVar24)(DVar2.unknown,uVar33);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x198);
      lVar30 = *(long *)(unaff_x22 + 0x1a0);
      uVar40 = uVar27;
      FUN_100099338(uVar27,&DAT_100558f50);
      *(undefined8 *)(unaff_x22 + 0x2a8) = uVar40;
      pcVar24 = *(code **)(lVar30 + 0x10);
      *(code **)(unaff_x22 + 0x2b0) = pcVar24;
      (*pcVar24)(uVar33,uVar40,uVar27);
      uVar5 = (uint)uVar33;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar17.unknown = puVar7;
      _swift_bridgeObjectRetain();
      pOVar10 = os::Logger::get_logObject(LVar17);
      pOVar18 = pOVar10;
      _os_log_type_enabled(pOVar10,uVar5 & 0xff);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x198);
      lVar30 = *(long *)(unaff_x22 + 0x1a0);
      if ((int)pOVar18 == 0) {
        _swift_bridgeObjectRelease_n(puVar7,2);
      }
      else {
        puVar11 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar21 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar11 = 0x8220102;
        local_70 = pcVar21;
        FUN_10012dbb0(pcVar22,puVar7,&local_70);
        *(char **)(puVar11 + 1) = pcVar22;
        _swift_bridgeObjectRelease_n(puVar7,2);
        __os_log_impl(0x100000000,pOVar10,uVar5 & 0xff,"%{public}s",puVar11,0xc);
        FUN_100043f24(pcVar21);
        _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
      }
      pcVar24 = *(code **)(lVar30 + 8);
      (*pcVar24)(uVar40,uVar27);
      _swift_bridgeObjectRelease(puVar6);
      *(code **)(unaff_x22 + 0x2b8) = pcVar24;
      if (DAT_100557848 != -1) {
        _swift_once(&DAT_100557848,FUN_100230284);
      }
      plVar20 = (long *)(ulong)*(uint *)(PTR__download_100520ec0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2c0) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_10022c72c;
      tVar52 = (extension_Foundation)::__C::NSURLSession::_download
                         ((URL)*(undefined **)(unaff_x22 + 0x230));
      return tVar52;
    }
    _Var31.unknown = *(undefined **)(unaff_x22 + 0x1f0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x248));
    FUN_10002a29c(_Var31.unknown,&DAT_100553d90,&DAT_10041bf10);
  }
  FUN_100231e20();
  puVar6 = &DAT_100533dd8;
  pvVar23 = (void *)0x0;
  _swift_allocError(&DAT_100533dd8,_Var31.unknown,0);
  *(undefined8 *)_Var31.unknown = 0;
  *(undefined8 *)((long)_Var31.unknown + 8) = 0;
  *(undefined4 *)((long)_Var31.unknown + 0x10) = 0;
  *(undefined1 *)((long)_Var31.unknown + 0x14) = 5;
  _swift_willThrow();
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var31);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0x1000000000000013;
  local_68 = (void *)0x80000001004e20c0;
  pcVar22 = (char *)(unaff_x22 + 0xc0);
  _swift_getErrorValue(puVar6,unaff_x22 + 0x150);
  SVar42 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar9 = SVar42.bridgeObject;
  SVar53.bridgeObject = pvVar23;
  SVar53.str = pcVar22;
  Swift::String::append(SVar42,SVar53);
  _swift_bridgeObjectRelease(pvVar9);
  puVar7 = local_68;
  SVar42.bridgeObject = local_68;
  SVar42.str = local_70;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x108) = 0xe100000000000000;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar7);
  pcVar21 = (char *)0x0;
  puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar43 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x100,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
  SVar54.bridgeObject = puVar16;
  SVar54.str = pcVar21;
  Swift::String::append(SVar43,SVar54);
  _swift_bridgeObjectRelease(SVar43.bridgeObject);
  SVar43.bridgeObject = (void *)0xe300000000000000;
  SVar43.str = (char *)0x5b205d;
  SVar55.bridgeObject = puVar16;
  SVar55.str = pcVar21;
  Swift::String::append(SVar43,SVar55);
  SVar44.bridgeObject = (void *)0xe600000000000000;
  SVar44.str = (char *)0x657461647075;
  SVar56.bridgeObject = puVar16;
  SVar56.str = pcVar21;
  Swift::String::append(SVar44,SVar56);
  SVar45.bridgeObject = (void *)0xe200000000000000;
  SVar45.str = (char *)0x205d;
  SVar57.bridgeObject = puVar16;
  SVar57.str = pcVar21;
  Swift::String::append(SVar45,SVar57);
  SVar58.bridgeObject = puVar16;
  SVar58.str = pcVar21;
  Swift::String::append(SVar42,SVar58);
  puVar13 = local_68;
  pcVar22 = local_70;
  local_70 = (char *)0x282020;
  local_68 = (undefined *)0xe300000000000000;
  SVar46.bridgeObject = (void *)0xed00002928657461;
  SVar46.str = (char *)0x6470557472617473;
  SVar59.bridgeObject = puVar16;
  SVar59.str = pcVar21;
  Swift::String::append(SVar46,SVar59);
  SVar47.bridgeObject = (void *)0xe100000000000000;
  SVar47.str = (char *)0x3a;
  SVar60.bridgeObject = puVar16;
  SVar60.str = pcVar21;
  Swift::String::append(SVar47,SVar60);
  *(undefined8 *)(unaff_x22 + 0x158) = 0x3a;
  SVar42 = Swift::CustomStringConvertible::get_description();
  SVar61.bridgeObject = puVar16;
  SVar61.str = pcVar21;
  Swift::String::append(SVar42,SVar61);
  _swift_bridgeObjectRelease(SVar42.bridgeObject);
  SVar48.bridgeObject = (void *)0xe100000000000000;
  SVar48.str = (char *)0x29;
  SVar62.bridgeObject = puVar16;
  SVar62.str = pcVar21;
  Swift::String::append(SVar48,SVar62);
  puVar16 = local_68;
  pcVar21 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar30 = *(long *)(unaff_x22 + 0x1e0);
  DVar2.unknown = *(undefined **)(unaff_x22 + 0x1e8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar1 = *(long *)(unaff_x22 + 0x1c8);
  puVar8 = &DAT_100533c00;
  _swift_allocObject(&DAT_100533c00,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar22;
  *(undefined **)(puVar8 + 0x18) = puVar13;
  *(char **)(puVar8 + 0x20) = pcVar21;
  *(undefined **)(puVar8 + 0x28) = puVar16;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar8;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100533c18;
  pvVar9 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar14.unknown = puVar13;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar14);
  *(undefined **)(unaff_x22 + 0x160) = PTR___swiftEmptyArrayStorage_100524190;
  puVar15 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar16 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = puVar16;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar27,unaff_x22 + 0x160,puVar16,puVar8,uVar40,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
  __Block_release(pvVar9);
  (**(code **)(lVar1 + 8))(uVar27,uVar40);
  (**(code **)(lVar30 + 8))(DVar2.unknown,uVar33);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar30 = *(long *)(unaff_x22 + 0x1a0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar40 = uVar33;
  FUN_100099338(uVar33,&DAT_100558f50);
  (**(code **)(lVar30 + 0x10))(uVar27,uVar40,uVar33);
  uVar5 = (uint)uVar27;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar17.unknown = puVar13;
  _swift_bridgeObjectRetain();
  pOVar10 = os::Logger::get_logObject(LVar17);
  pOVar18 = pOVar10;
  _os_log_type_enabled(pOVar10,uVar5 & 0xff);
  lVar30 = *(long *)(unaff_x22 + 0x1a0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x198);
  if ((int)pOVar18 == 0) {
    _swift_bridgeObjectRelease_n(puVar13,2);
  }
  else {
    puVar11 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar21 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar11 = 0x8220102;
    local_70 = pcVar21;
    FUN_10012dbb0(pcVar22,puVar13,&local_70);
    *(char **)(puVar11 + 1) = pcVar22;
    _swift_bridgeObjectRelease_n(puVar13,2);
    __os_log_impl(0x100000000,pOVar10,uVar5 & 0xff,"%{public}s",puVar11,0xc);
    FUN_100043f24(pcVar21);
    _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar30 + 8))(uVar27,uVar40);
  _swift_bridgeObjectRelease_n(puVar7,2);
  *(undefined **)(unaff_x22 + 0x168) = puVar6;
  _swift_errorRetain(puVar6);
  puVar7 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  lVar30 = unaff_x22 + 0xd8;
  _swift_dynamicCast(lVar30,unaff_x22 + 0x168,puVar7,&DAT_100533dd8,6);
  if ((int)lVar30 == 0) {
LAB_10022c4ec:
    uVar35 = 0;
  }
  else {
    bVar3 = *(byte *)(unaff_x22 + 0xec);
    if (bVar3 < 3) {
      if (bVar3 != 0) {
        if (bVar3 != 1) {
          FUN_100231e80();
        }
        goto LAB_10022c4ec;
      }
      FUN_100231e80();
      uVar35 = 1;
    }
    else if (bVar3 == 3) {
      FUN_100231e80();
      uVar35 = 2;
    }
    else if (bVar3 == 4) {
      FUN_100231e80();
      uVar35 = 3;
    }
    else {
      if (((*(long *)(unaff_x22 + 0xe0) == 0 && *(long *)(unaff_x22 + 0xd8) == 0) &&
          (*(int *)(unaff_x22 + 0xe8) == 0)) ||
         ((*(long *)(unaff_x22 + 0xd8) == 1 &&
          ((*(long *)(unaff_x22 + 0xe0) == 0 && (*(int *)(unaff_x22 + 0xe8) == 0))))))
      goto LAB_10022c4ec;
      uVar35 = 2;
    }
  }
  lVar30 = *(long *)(unaff_x22 + 0x260);
  pPVar29 = *(Published **)(unaff_x22 + 0x180);
  puVar7 = &DAT_10042bb80;
  _swift_getKeyPath(&DAT_10042bb80);
  puVar13 = &DAT_10042bba8;
  _swift_getKeyPath(&DAT_10042bba8);
  *(undefined1 *)(unaff_x22 + 0xee) = uVar35;
  _swift_retain(pPVar29);
  Combine::Published::_set_subscript(pPVar29,unaff_x22 + 0xee,pPVar29,puVar7,puVar13);
  _swift_errorRelease(puVar6);
  *(undefined1 *)((long)&pPVar29->unknown + lVar30) = 0;
LAB_10022c544:
  uVar32 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar25 = *(undefined8 *)(unaff_x22 + 400);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar25);
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
  DVar19.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010022c60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(0);
  tVar52._ = UNRECOVERED_JUMPTABLE;
  tVar52._.unknown = DVar19.unknown;
  return tVar52;
}

