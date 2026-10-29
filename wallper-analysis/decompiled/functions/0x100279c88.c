// rea decompile_all
// name: FUN_100279c88
// address: 0x100279c88
// body: available
// range: 0x100279c88-0x10027dcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027dcf8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100279c88(Published *param_1,undefined *param_2,char *param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  Published *pPVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  uint uVar18;
  long lVar19;
  UUID UVar20;
  URL UVar21;
  Logger LVar22;
  DispatchWorkItemFlags DVar23;
  DispatchQoS DVar24;
  Published *pPVar25;
  undefined *puVar26;
  char *pcVar27;
  DispatchQoS DVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  Logger LVar31;
  Logger LVar32;
  OS_os_log *pOVar33;
  OS_os_log *pOVar34;
  undefined4 *puVar35;
  _ArrayBuffer _Var36;
  ulong uVar37;
  Dictionary<undefined,undefined> DVar38;
  NSString *pNVar39;
  undefined8 uVar40;
  char **ppcVar41;
  UUID UVar42;
  char *pcVar43;
  ID IVar44;
  URL UVar45;
  NSURL *pNVar46;
  void *pvVar47;
  char *pcVar48;
  URL UVar49;
  ID IVar50;
  Published *pPVar51;
  undefined8 uVar52;
  undefined *puVar53;
  NSArray *pNVar54;
  Hasher into;
  _StringGuts _Var55;
  _StringGuts _Var56;
  _StringGuts _Var57;
  _StringGuts extraout_x1;
  _StringGuts _Var58;
  _StringGuts extraout_x1_00;
  long *plVar59;
  _StringComparisonResult expecting;
  long extraout_x8;
  long lVar60;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar61;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar62;
  long extraout_x8_04;
  long lVar63;
  long lVar64;
  long extraout_x8_05;
  code *pcVar65;
  code *pcVar66;
  code *pcVar67;
  code *pcVar68;
  ulong uVar69;
  String *pSVar70;
  undefined *puVar71;
  long lVar72;
  String *pSVar73;
  long lVar74;
  undefined *puVar75;
  long lVar76;
  undefined *puVar77;
  long lVar78;
  long lVar79;
  char *pcVar80;
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
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long *unaff_x20;
  long lVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  void *pvVar85;
  code *pcVar86;
  DispatchWorkItemFlags qos;
  undefined8 *puVar87;
  ulong *puVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  String SVar103;
  String SVar104;
  String SVar105;
  String SVar106;
  String SVar107;
  String SVar108;
  String SVar109;
  String SVar110;
  String SVar111;
  String SVar112;
  String SVar113;
  String SVar114;
  String SVar115;
  String SVar116;
  String SVar117;
  String SVar118;
  String SVar119;
  String SVar120;
  String SVar121;
  String SVar122;
  String SVar123;
  String SVar124;
  String SVar125;
  String SVar126;
  String SVar127;
  String SVar128;
  String SVar129;
  String SVar130;
  String SVar131;
  String SVar132;
  String SVar133;
  String SVar134;
  String SVar135;
  String SVar136;
  String SVar137;
  String SVar138;
  String SVar139;
  String SVar140;
  String SVar141;
  String SVar142;
  String SVar143;
  String SVar144;
  String SVar145;
  String SVar146;
  String SVar147;
  String SVar148;
  String SVar149;
  String SVar150;
  String SVar151;
  String SVar152;
  String SVar153;
  String SVar154;
  String SVar155;
  String SVar156;
  String SVar157;
  String SVar158;
  String SVar159;
  String SVar160;
  String SVar161;
  String SVar162;
  String SVar163;
  String SVar164;
  String SVar165;
  String SVar166;
  String SVar167;
  String SVar168;
  String SVar169;
  String SVar170;
  String SVar171;
  String SVar172;
  String SVar173;
  String SVar174;
  String SVar175;
  String SVar176;
  String SVar177;
  String local_3a0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined *local_378;
  char *local_370;
  void *local_368;
  long local_360;
  long local_358;
  long local_350;
  long local_348;
  long local_340;
  long local_338;
  long local_330;
  long local_328;
  void *local_320;
  long local_318;
  undefined *local_310;
  Published *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  long local_2e8;
  String *local_2e0;
  String *local_2d8;
  long local_2d0;
  long local_2c8;
  void *local_2c0;
  long local_2b8;
  char *local_2b0;
  String *local_2a8;
  String *local_2a0;
  long local_298;
  long local_290;
  undefined8 local_288;
  code *local_1c0;
  char *local_190;
  ulong local_160;
  char local_148 [24];
  undefined1 auStack_130 [8];
  char local_128 [24];
  undefined1 auStack_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined *local_98;
  undefined8 uStack_90;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  puVar71 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar71 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = 0;
  local_338 = (long)&local_3a0 - extraout_x8;
  FUN_10040211c();
  lVar60 = *(long *)(lVar19 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar60 + 0x40));
  pSVar70 = (String *)
            (((long)&local_3a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_2d8 = pSVar70;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar71 = (undefined *)((long)pSVar70 - extraout_x12);
  local_2f8 = puVar71;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar72 = (long)puVar71 - extraout_x12_00;
  local_360 = lVar72;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar70 = (String *)(lVar72 - extraout_x12_01);
  local_2e0 = pSVar70;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar71 = (undefined *)((long)pSVar70 - extraout_x12_02);
  local_2f0 = puVar71;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar72 = (long)puVar71 - extraout_x12_03;
  local_350 = lVar72;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar73 = (String *)(lVar72 - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_2a0 = (String *)((long)pSVar73 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar72 = ((long)pSVar73 - extraout_x12_05) - extraout_x12_06;
  local_330 = lVar72;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar72 = lVar72 - extraout_x12_07;
  local_328 = lVar72;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar70 = (String *)(lVar72 - extraout_x12_08);
  local_2a8 = pSVar70;
  UVar20 = Foundation::UUID::typeMetadataAccessor();
  lVar72 = *(long *)(UVar20.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar72 + 0x40));
  lVar81 = (long)pSVar70 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  UVar21 = Foundation::URL::typeMetadataAccessor();
  lVar61 = *(long *)(UVar21.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar61 + 0x40));
  lVar74 = lVar81 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_358 = lVar74;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar74 = lVar74 - extraout_x12_09;
  local_348 = lVar74;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar74 = lVar74 - extraout_x12_10;
  local_290 = lVar74;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar75 = (undefined *)(lVar74 - extraout_x12_11);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_298 = (long)puVar75 - extraout_x12_12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar76 = ((long)puVar75 - extraout_x12_12) - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar74 = lVar76 - extraout_x12_14;
  local_340 = lVar74;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar77 = (undefined *)(lVar74 - extraout_x12_15);
  local_310 = puVar77;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar77 = puVar77 + -extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar78 = (long)puVar77 - extraout_x12_17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_2e8 = lVar78 - extraout_x12_18;
  LVar22 = os::Logger::typeMetadataAccessor();
  lVar74 = *(long *)(LVar22.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar74 + 0x40));
  lVar79 = (lVar78 - extraout_x12_18) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_2c8 = lVar79;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar80 = (char *)(lVar79 - extraout_x12_19);
  local_2b0 = pcVar80;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar79 = (long)pcVar80 - extraout_x12_20;
  local_2d0 = lVar79;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar79 = lVar79 - extraout_x12_21;
  local_2b8 = lVar79;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar79 = lVar79 - extraout_x12_22;
  local_318 = lVar79;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar79 = lVar79 - extraout_x12_23;
  DVar23 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar62 = *(long *)(DVar23.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar62 + 0x40));
  lVar63 = lVar79 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  DVar24 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar64 = *(long *)(DVar24.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar64 + 0x40));
  qos.unknown = (undefined *)(lVar63 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  pPVar25 = param_1;
  _Var57.unknown = param_2;
  FUN_10027f304();
  local_e0 = (char *)0x0;
  local_d8 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x26,_Var57);
  _swift_bridgeObjectRelease(local_d8);
  local_e0 = (char *)0xd00000000000001a;
  local_d8 = (void *)0x80000001004e3250;
  SVar92.bridgeObject = param_2;
  SVar92.str = (char *)param_1;
  SVar124.bridgeObject = param_4;
  SVar124.str = param_3;
  local_308 = param_1;
  local_300 = param_2;
  Swift::String::append(SVar92,SVar124);
  SVar89.bridgeObject = (void *)0xe700000000000000;
  SVar89.str = (char *)0x20656c69662820;
  SVar125.bridgeObject = param_4;
  SVar125.str = param_3;
  Swift::String::append(SVar89,SVar125);
  SVar90.bridgeObject = _Var57.unknown;
  SVar90.str = (char *)pPVar25;
  SVar126.bridgeObject = param_4;
  SVar126.str = param_3;
  Swift::String::append(SVar90,SVar126);
  SVar91.bridgeObject = (void *)0xe100000000000000;
  SVar91.str = (char *)0x29;
  uVar52 = 0x29;
  SVar127.bridgeObject = param_4;
  SVar127.str = param_3;
  Swift::String::append(SVar91,SVar127);
  puVar71 = local_d8;
  SVar97.bridgeObject = local_d8;
  SVar97.str = local_e0;
  local_e0 = (char *)0x5b;
  local_d8 = (undefined *)0xe100000000000000;
  local_98 = (undefined *)0x4f464e49;
  uStack_90 = 0xe400000000000000;
  local_f0 = (char *)0x20;
  local_e8 = 0xe100000000000000;
  FUN_100026df4();
  local_288 = 0;
  pcVar80 = (char *)0x0;
  puVar53 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar92 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_f0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar52,uVar52);
  SVar128.bridgeObject = puVar53;
  SVar128.str = pcVar80;
  Swift::String::append(SVar92,SVar128);
  _swift_bridgeObjectRelease(SVar92.bridgeObject);
  SVar93.bridgeObject = (void *)0xe300000000000000;
  SVar93.str = (char *)0x5b205d;
  SVar129.bridgeObject = puVar53;
  SVar129.str = pcVar80;
  Swift::String::append(SVar93,SVar129);
  SVar94.bridgeObject = (void *)0xe700000000000000;
  SVar94.str = (char *)0x7972617262696c;
  SVar130.bridgeObject = puVar53;
  SVar130.str = pcVar80;
  Swift::String::append(SVar94,SVar130);
  SVar95.bridgeObject = (void *)0xe200000000000000;
  SVar95.str = (char *)0x205d;
  SVar131.bridgeObject = puVar53;
  SVar131.str = pcVar80;
  Swift::String::append(SVar95,SVar131);
  SVar132.bridgeObject = puVar53;
  SVar132.str = pcVar80;
  Swift::String::append(SVar97,SVar132);
  puVar53 = local_d8;
  pcVar80 = local_e0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  SVar12.bridgeObject = _Var57.unknown;
  SVar12.str = (char *)pPVar25;
  puVar26 = &DAT_100536740;
  _swift_allocObject(&DAT_100536740,0x30,7);
  *(char **)(puVar26 + 0x10) = pcVar80;
  *(undefined **)(puVar26 + 0x18) = puVar53;
  *(undefined8 *)(puVar26 + 0x20) = 0;
  *(undefined8 *)(puVar26 + 0x28) = 0xe000000000000000;
  local_c0 = thunk_FUN_100099310;
  local_e0 = PTR___NSConcreteStackBlock_100521110;
  local_d8 = (undefined *)0x42000000;
  local_d0 = FUN_1000c7e7c;
  puStack_c8 = &DAT_100536758;
  local_b8 = puVar26;
  pcVar27 = __Block_copy(&local_e0);
  DVar28.unknown = puVar53;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar28);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  puVar29 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar26 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar30 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar63,&local_98,puVar26,puVar30,DVar23.unknown,puVar29);
  pcVar43 = pcVar27;
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pcVar27);
  pcVar65 = *(code **)(lVar62 + 8);
  (*pcVar65)(lVar63,DVar23.unknown);
  pcVar66 = *(code **)(lVar64 + 8);
  (*pcVar66)(qos.unknown,DVar24.unknown);
  _swift_release(local_b8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar31 = LVar22;
  FUN_100099338(LVar22.unknown,&DAT_100558f50);
  pcVar67 = *(code **)(lVar74 + 0x10);
  lVar62 = lVar79;
  (*pcVar67)(lVar79,LVar31.unknown,LVar22.unknown);
  uVar18 = (uint)lVar62;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar32.unknown = puVar53;
  _swift_bridgeObjectRetain();
  pOVar33 = os::Logger::get_logObject(LVar32);
  pOVar34 = pOVar33;
  _os_log_type_enabled(pOVar33,uVar18 & 0xff);
  if ((int)pOVar34 == 0) {
    _swift_bridgeObjectRelease_n(puVar53,2);
    local_1c0 = *(code **)(lVar74 + 8);
  }
  else {
    puVar35 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar27 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar35 = 0x8220102;
    local_e0 = pcVar27;
    FUN_10012dbb0(pcVar80,puVar53,&local_e0);
    *(char **)(puVar35 + 1) = pcVar80;
    _swift_bridgeObjectRelease_n(puVar53,2);
    pcVar43 = "%{public}s";
    __os_log_impl(0x100000000,pOVar33,uVar18 & 0xff,"%{public}s",puVar35,0xc);
    FUN_100043f24(pcVar27);
    _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
    local_1c0 = *(code **)(lVar74 + 8);
  }
  (*local_1c0)(lVar79,LVar22.unknown);
  _swift_bridgeObjectRelease(puVar71);
  if (DAT_100558870 != -1) {
    _swift_once(&DAT_100558870,FUN_100268dac);
  }
  UVar49 = UVar21;
  FUN_100099338(UVar21.unknown,&DAT_100577d80);
  pcVar68 = *(code **)(lVar61 + 0x10);
  UVar45.unknown = puVar77;
  (*pcVar68)(puVar77,UVar49.unknown,UVar21.unknown);
  Foundation::URL::deletingLastPathComponent(UVar45);
  pcVar86 = *(code **)(lVar61 + 8);
  (*pcVar86)(puVar77,UVar21.unknown);
  SVar96.bridgeObject = (void *)0xe800000000000000;
  SVar96.str = (char *)0x7377656976657250;
  Foundation::URL::appendingPathComponent(SVar96,true,(URL)pcVar43);
  (*pcVar86)(lVar78,UVar21.unknown);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  local_2c0 = (void *)DAT_100577d38;
  _Var36.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var36.unknown >> 0x3e == 0) {
    uVar82 = *(ulong *)(((ulong)_Var36.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var36.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var36.unknown) {
      _Var1.unknown = _Var36.unknown;
    }
    uVar82 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  lVar79 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  local_160 = (ulong)_Var36.unknown & 0xffffffffffffff8;
  _swift_beginAccess((long)local_2c0 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                     &local_98,0,0);
  expecting.value = (__int8)pPVar25;
  if (uVar82 == 0) {
    _swift_bridgeObjectRelease(_Var36.unknown);
  }
  else {
    local_320 = (void *)((ulong)local_320 & 0xffffffff00000000);
    local_368 = (void *)0x80000001004e3290;
    local_370 = "Stopping wallpaper ";
    uStack_388 = 0;
    local_390 = 0x8220102;
    uVar83 = 0;
    pvVar47 = local_2c0;
LAB_10027a908:
    do {
      if (((ulong)_Var36.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(local_160 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
          pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbbc);
          (*pcVar65)();
        }
        uVar37 = *(ulong *)(_Var36.unknown + uVar83 * 8 + 0x20);
      }
      else {
        uVar37 = uVar83;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar83,_Var36);
      }
      uVar84 = uVar83 + 1;
      if (SCARRY8(uVar83,1)) {
                    /* WARNING: Does not return */
        pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbb8);
        (*pcVar65)();
      }
      objc_stub::deviceDescription(uVar37);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar38 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar69 = 0;
      pNVar39 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar38.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar39), (uVar69 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar38.unknown);
LAB_10027aa90:
        UVar42 = Foundation::UUID::init();
        SVar97 = Foundation::UUID::get_uuidString(UVar42);
        (**(code **)(lVar72 + 8))(lVar81,UVar20.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar38.unknown + 0x38) + (long)pNVar39 * 0x20,&local_e0);
        _swift_bridgeObjectRelease(DVar38.unknown);
        uVar40 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        ppcVar41 = &local_f0;
        _swift_dynamicCast(ppcVar41,&local_e0,PTR___type_metadata_for_Any_100524178 + 8,uVar40,6);
        if (((ulong)ppcVar41 & 1) == 0) goto LAB_10027aa90;
        objc_stub::stringValue((ID)local_f0);
        SVar97 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar85 = SVar97.bridgeObject;
      lVar62 = *(long *)((long)pvVar47 + lVar79);
      if (*(long *)(lVar62 + 0x10) == 0) {
        _swift_bridgeObjectRetain(lVar62);
LAB_10027a8dc:
        _swift_bridgeObjectRelease(pvVar85);
        _swift_bridgeObjectRelease(lVar62);
      }
      else {
        _swift_bridgeObjectRetain(lVar62);
        FUN_10000464c(SVar97.str);
        lVar64 = local_340;
        if (((ulong)SVar97.bridgeObject & 1) == 0) goto LAB_10027a8dc;
        (*pcVar68)(local_340,*(long *)(lVar62 + 0x38) + *(long *)(lVar61 + 0x48) * (long)SVar97.str,
                   UVar21.unknown);
        _swift_bridgeObjectRelease(lVar62);
        _swift_bridgeObjectRelease(pvVar85);
        UVar45.unknown = local_310;
        (**(code **)(lVar61 + 0x20))(local_310,lVar64,UVar21.unknown);
        SVar97 = Foundation::URL::get_lastPathComponent(UVar45);
        pvVar47 = SVar97.bridgeObject;
        FUN_10027f304();
        _Var56.unknown = SVar97.bridgeObject;
        _Var58.unknown = _Var56.unknown;
        _swift_bridgeObjectRelease(pvVar47);
        SVar3.bridgeObject = _Var57.unknown;
        SVar3.str = (char *)pPVar25;
        pPVar51 = pPVar25;
        _Var55.unknown = _Var57.unknown;
        if (SVar97 == SVar3) {
          _swift_bridgeObjectRelease(_Var56.unknown);
        }
        else {
          _Var58.unknown = _Var56.unknown;
          bVar17 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar97.str,_Var56,expecting);
          _swift_bridgeObjectRelease(_Var56.unknown);
          if (!bVar17) {
            (*pcVar86)(local_310,UVar21.unknown);
            uVar83 = uVar84;
            pvVar47 = local_2c0;
            if (uVar84 == uVar82) break;
            goto LAB_10027a908;
          }
        }
        local_e0 = (char *)0x0;
        local_d8 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x2e,_Var58);
        _swift_bridgeObjectRelease(local_d8);
        local_e0 = (char *)0xd000000000000013;
        local_d8 = local_368;
        SVar4.bridgeObject = _Var57.unknown;
        SVar4.str = (char *)pPVar25;
        SVar133.bridgeObject = _Var55.unknown;
        SVar133.str = (char *)pPVar51;
        Swift::String::append(SVar4,SVar133);
        SVar98.bridgeObject = (void *)0xe400000000000000;
        SVar98.str = (char *)0x206e6f20;
        SVar134.bridgeObject = _Var55.unknown;
        SVar134.str = (char *)pPVar51;
        Swift::String::append(SVar98,SVar134);
        objc_stub::localizedName(uVar37);
        SVar97 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar135.bridgeObject = _Var55.unknown;
        SVar135.str = (char *)pPVar51;
        Swift::String::append(SVar97,SVar135);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        SVar99.bridgeObject = (void *)((ulong)local_370 | 0x8000000000000000);
        SVar99.str = (char *)0xd000000000000013;
        SVar136.bridgeObject = _Var55.unknown;
        SVar136.str = (char *)pPVar51;
        Swift::String::append(SVar99,SVar136);
        puVar71 = local_d8;
        SVar7.bridgeObject = local_d8;
        SVar7.str = local_e0;
        local_e0 = (char *)0x5b;
        local_d8 = (undefined *)0xe100000000000000;
        local_f8 = 0xe100000000000000;
        local_f0 = (char *)0x4f464e49;
        local_e8 = 0xe400000000000000;
        local_100 = 0x20;
        pcVar80 = (char *)0x0;
        puVar53 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar97 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_100,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar52,uVar52);
        SVar137.bridgeObject = puVar53;
        SVar137.str = pcVar80;
        Swift::String::append(SVar97,SVar137);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        SVar100.bridgeObject = (void *)0xe300000000000000;
        SVar100.str = (char *)0x5b205d;
        SVar138.bridgeObject = puVar53;
        SVar138.str = pcVar80;
        Swift::String::append(SVar100,SVar138);
        SVar101.bridgeObject = (void *)0xe700000000000000;
        SVar101.str = (char *)0x7972617262696c;
        SVar139.bridgeObject = puVar53;
        SVar139.str = pcVar80;
        Swift::String::append(SVar101,SVar139);
        SVar102.bridgeObject = (void *)0xe200000000000000;
        SVar102.str = (char *)0x205d;
        SVar140.bridgeObject = puVar53;
        SVar140.str = pcVar80;
        Swift::String::append(SVar102,SVar140);
        local_3a0.bridgeObject = puVar71;
        SVar141.bridgeObject = puVar53;
        SVar141.str = pcVar80;
        Swift::String::append(SVar7,SVar141);
        DVar28.unknown = local_d8;
        pcVar80 = local_e0;
        puVar71 = &DAT_100536790;
        _swift_allocObject(&DAT_100536790,0x30,7);
        local_3a0.str = pcVar80;
        *(char **)(puVar71 + 0x10) = pcVar80;
        *(undefined **)(puVar71 + 0x18) = DVar28.unknown;
        local_378 = DVar28.unknown;
        *(undefined8 *)(puVar71 + 0x20) = 0;
        *(undefined8 *)(puVar71 + 0x28) = 0xe000000000000000;
        local_c0 = thunk_FUN_100099310;
        local_e0 = PTR___NSConcreteStackBlock_100521110;
        local_d8 = (undefined *)0x42000000;
        local_d0 = FUN_1000c7e7c;
        puStack_c8 = &DAT_1005367a8;
        local_b8 = puVar71;
        local_320 = __Block_copy(&local_e0);
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar28);
        local_f0 = PTR___swiftEmptyArrayStorage_100524190;
        Swift::SetAlgebra::_init(lVar63,&local_f0,puVar26,puVar30,DVar23.unknown,puVar29);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(local_320);
        (*pcVar65)(lVar63,DVar23.unknown);
        (*pcVar66)(qos.unknown,DVar24.unknown);
        _swift_release(local_b8);
        lVar62 = local_318;
        (*pcVar67)(local_318,LVar31.unknown,LVar22.unknown);
        uVar18 = (uint)lVar62;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar32.unknown = local_378;
        _swift_bridgeObjectRetain();
        pOVar33 = os::Logger::get_logObject(LVar32);
        pOVar34 = pOVar33;
        _os_log_type_enabled(pOVar33,uVar18 & 0xff);
        if ((int)pOVar34 == 0) {
          _swift_bridgeObjectRelease_n(local_378,2);
        }
        else {
          puVar35 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar43 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          puVar71 = local_378;
          *puVar35 = (int)local_390;
          pcVar80 = local_3a0.str;
          local_e0 = pcVar43;
          FUN_10012dbb0(local_3a0.str,local_378,&local_e0);
          *(char **)(puVar35 + 1) = pcVar80;
          _swift_bridgeObjectRelease_n(puVar71,2);
          __os_log_impl(0x100000000,pOVar33,uVar18 & 0xff,"%{public}s",puVar35,0xc);
          FUN_100043f24(pcVar43);
          _swift_slowDealloc(pcVar43,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
        }
        (*local_1c0)(local_318,LVar22.unknown);
        _swift_bridgeObjectRelease(local_3a0.bridgeObject);
        pvVar47 = local_2c0;
        local_320 = (void *)CONCAT44(local_320._4_4_,1);
        FUN_10024ef58(uVar83,0,1);
        (*pcVar86)(local_310,UVar21.unknown);
      }
      uVar83 = uVar83 + 1;
    } while (uVar84 != uVar82);
    _swift_bridgeObjectRelease(_Var36.unknown);
    if (((ulong)local_320 & 1) != 0) {
      IVar44 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
      if (DAT_100557aa8 != -1) {
        _swift_once(&DAT_100557aa8,FUN_100255f78);
      }
      NSNotificationCenter::postNotificationName_object_(IVar44,DAT_100577d40,0);
      IVar44 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
      if (DAT_100557a88 != -1) {
        _swift_once(&DAT_100557a88,FUN_100255fac);
      }
      NSNotificationCenter::postNotificationName_object_(IVar44,DAT_100577d48,0);
    }
  }
  local_2c0 = (void *)0x80000001004e3310;
  puVar87 = &DAT_100558bb8;
  lVar72 = 3;
  do {
    pcVar80 = (char *)puVar87[-1];
    pvVar47 = (void *)*puVar87;
    UVar45 = UVar21;
    (*pcVar68)(puVar77,UVar49.unknown);
    _swift_bridgeObjectRetain(pvVar47);
    SVar5.bridgeObject = _Var57.unknown;
    SVar5.str = (char *)pPVar25;
    Foundation::URL::appendingPathComponent(SVar5,UVar45);
    (*pcVar86)(puVar77,UVar21.unknown);
    SVar103.bridgeObject = pvVar47;
    SVar103.str = pcVar80;
    Foundation::URL::appendingPathExtension(SVar103,UVar45);
    _swift_bridgeObjectRelease(pvVar47);
    (*pcVar86)(lVar78,UVar21.unknown);
    UVar45.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar97 = Foundation::URL::get_path(UVar45);
    pNVar39 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar97.bridgeObject);
    IVar44 = NSFileManager::fileExistsAtPath_((ID)UVar45.unknown,pNVar39);
    if ((int)IVar44 != 0) {
      UVar45.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      pNVar46 = Foundation::URL::_bridgeToObjectiveC(UVar45);
      local_e0 = (char *)0x0;
      ppcVar41 = &local_e0;
      IVar44 = NSFileManager::removeItemAtURL_error_((ID)UVar45.unknown);
      if ((int)IVar44 == 0) {
        pcVar27 = local_e0;
        _Var58.unknown = extraout_x1.unknown;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        local_e0 = (char *)0x0;
        local_d8 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x19,_Var58);
        UVar45.unknown = local_d8;
        _swift_bridgeObjectRelease();
        local_e0 = (char *)0xd000000000000017;
        local_d8 = local_2c0;
        SVar97 = Foundation::URL::get_path(UVar45);
        SVar148.bridgeObject = ppcVar41;
        SVar148.str = (char *)pNVar46;
        Swift::String::append(SVar97,SVar148);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        puVar53 = local_d8;
        _swift_errorRetain(pcVar27);
        _swift_bridgeObjectRetain(puVar53);
        SVar107.bridgeObject = (void *)0xa500000000000000;
        SVar107.str = (char *)0x209480e220;
        SVar149.bridgeObject = ppcVar41;
        SVar149.str = (char *)pNVar46;
        Swift::String::append(SVar107,SVar149);
        pcVar80 = local_148;
        _swift_getErrorValue(pcVar27,auStack_130);
        SVar97 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        SVar150.bridgeObject = ppcVar41;
        SVar150.str = pcVar80;
        Swift::String::append(SVar97,SVar150);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        puVar14 = local_d8;
        SVar9.bridgeObject = local_d8;
        SVar9.str = local_e0;
        local_e0 = (char *)0x5b;
        local_d8 = (undefined *)0xe100000000000000;
        local_f8 = 0xe100000000000000;
        local_f0 = (char *)0x524f525245;
        local_e8 = 0xe500000000000000;
        local_100 = 0x20;
        pcVar80 = (char *)0x0;
        puVar71 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar97 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_100,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar52,uVar52);
        SVar151.bridgeObject = puVar71;
        SVar151.str = pcVar80;
        Swift::String::append(SVar97,SVar151);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        SVar108.bridgeObject = (void *)0xe300000000000000;
        SVar108.str = (char *)0x5b205d;
        SVar152.bridgeObject = puVar71;
        SVar152.str = pcVar80;
        Swift::String::append(SVar108,SVar152);
        SVar109.bridgeObject = (void *)0xe700000000000000;
        SVar109.str = (char *)0x7972617262696c;
        SVar153.bridgeObject = puVar71;
        SVar153.str = pcVar80;
        Swift::String::append(SVar109,SVar153);
        SVar110.bridgeObject = (void *)0xe200000000000000;
        SVar110.str = (char *)0x205d;
        SVar154.bridgeObject = puVar71;
        SVar154.str = pcVar80;
        Swift::String::append(SVar110,SVar154);
        SVar155.bridgeObject = puVar71;
        SVar155.str = pcVar80;
        Swift::String::append(SVar9,SVar155);
        puVar15 = local_d8;
        pcVar43 = local_e0;
        local_e0 = (char *)0x282020;
        local_d8 = (undefined *)0xe300000000000000;
        SVar111.bridgeObject = (void *)0x80000001004e3270;
        SVar111.str = (char *)0xd00000000000001f;
        SVar156.bridgeObject = puVar71;
        SVar156.str = pcVar80;
        Swift::String::append(SVar111,SVar156);
        SVar112.bridgeObject = (void *)0xe100000000000000;
        SVar112.str = (char *)0x3a;
        SVar157.bridgeObject = puVar71;
        SVar157.str = pcVar80;
        Swift::String::append(SVar112,SVar157);
        local_f0 = (char *)0x337;
        SVar97 = Swift::CustomStringConvertible::get_description();
        SVar158.bridgeObject = puVar71;
        SVar158.str = pcVar80;
        Swift::String::append(SVar97,SVar158);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        SVar113.bridgeObject = (void *)0xe100000000000000;
        SVar113.str = (char *)0x29;
        SVar159.bridgeObject = puVar71;
        SVar159.str = pcVar80;
        Swift::String::append(SVar113,SVar159);
        puVar16 = local_d8;
        pcVar80 = local_e0;
        puVar71 = &DAT_100536880;
        _swift_allocObject(&DAT_100536880,0x30,7);
        *(char **)(puVar71 + 0x10) = pcVar43;
        *(undefined **)(puVar71 + 0x18) = puVar15;
        *(char **)(puVar71 + 0x20) = pcVar80;
        *(undefined **)(puVar71 + 0x28) = puVar16;
        local_c0 = thunk_FUN_100099310;
        local_e0 = PTR___NSConcreteStackBlock_100521110;
        local_d8 = (undefined *)0x42000000;
        local_d0 = FUN_1000c7e7c;
        puStack_c8 = &DAT_100536898;
        local_b8 = puVar71;
        pvVar47 = __Block_copy(&local_e0);
        DVar28.unknown = puVar15;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar28);
        local_f0 = PTR___swiftEmptyArrayStorage_100524190;
        Swift::SetAlgebra::_init(lVar63,&local_f0,puVar26,puVar30,DVar23.unknown,puVar29);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar47);
        (*pcVar65)(lVar63,DVar23.unknown);
        (*pcVar66)(qos.unknown,DVar24.unknown);
        _swift_release(local_b8);
        pcVar80 = local_2b0;
        pcVar48 = local_2b0;
        (*pcVar67)(local_2b0,LVar31.unknown,LVar22.unknown);
        uVar18 = (uint)pcVar48;
        static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
        LVar32.unknown = puVar15;
        _swift_bridgeObjectRetain();
        pOVar33 = os::Logger::get_logObject(LVar32);
        pOVar34 = pOVar33;
        _os_log_type_enabled(pOVar33,uVar18 & 0xff);
        if ((int)pOVar34 == 0) {
          _swift_bridgeObjectRelease_n(puVar15,2);
        }
        else {
          puVar35 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar48 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar35 = 0x8220102;
          local_e0 = pcVar48;
          FUN_10012dbb0(pcVar43,puVar15,&local_e0);
          *(char **)(puVar35 + 1) = pcVar43;
          _swift_bridgeObjectRelease_n(puVar15,2);
          __os_log_impl(0x100000000,pOVar33,uVar18 & 0xff,"%{public}s",puVar35,0xc);
          FUN_100043f24(pcVar48);
          _swift_slowDealloc(pcVar48,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
        }
        local_1c0 = *(code **)(lVar74 + 8);
        (*local_1c0)(pcVar80,LVar22.unknown);
        _swift_bridgeObjectRelease(puVar14);
        _swift_errorRelease(pcVar27);
        _swift_bridgeObjectRelease(puVar53);
        _swift_errorRelease(pcVar27);
        local_288 = 0;
      }
      else {
        local_e0 = (char *)0x0;
        local_d8 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x10,extraout_x1);
        UVar45.unknown = local_d8;
        _swift_bridgeObjectRelease();
        local_e0 = (char *)0x20646574656c6544;
        local_d8 = (void *)0xee00206f65646976;
        SVar97 = Foundation::URL::get_lastPathComponent(UVar45);
        SVar142.bridgeObject = ppcVar41;
        SVar142.str = (char *)pNVar46;
        Swift::String::append(SVar97,SVar142);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        puVar53 = local_d8;
        SVar8.bridgeObject = local_d8;
        SVar8.str = local_e0;
        local_e0 = (char *)0x5b;
        local_d8 = (undefined *)0xe100000000000000;
        local_f8 = 0xe100000000000000;
        local_f0 = (char *)0x4f464e49;
        local_e8 = 0xe400000000000000;
        local_100 = 0x20;
        pcVar80 = (char *)0x0;
        puVar71 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar97 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_100,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar52,uVar52);
        SVar143.bridgeObject = puVar71;
        SVar143.str = pcVar80;
        Swift::String::append(SVar97,SVar143);
        _swift_bridgeObjectRelease(SVar97.bridgeObject);
        SVar104.bridgeObject = (void *)0xe300000000000000;
        SVar104.str = (char *)0x5b205d;
        SVar144.bridgeObject = puVar71;
        SVar144.str = pcVar80;
        Swift::String::append(SVar104,SVar144);
        SVar105.bridgeObject = (void *)0xe700000000000000;
        SVar105.str = (char *)0x7972617262696c;
        SVar145.bridgeObject = puVar71;
        SVar145.str = pcVar80;
        Swift::String::append(SVar105,SVar145);
        SVar106.bridgeObject = (void *)0xe200000000000000;
        SVar106.str = (char *)0x205d;
        SVar146.bridgeObject = puVar71;
        SVar146.str = pcVar80;
        Swift::String::append(SVar106,SVar146);
        SVar147.bridgeObject = puVar71;
        SVar147.str = pcVar80;
        Swift::String::append(SVar8,SVar147);
        puVar14 = local_d8;
        pcVar80 = local_e0;
        puVar71 = &DAT_1005368d0;
        _swift_allocObject(&DAT_1005368d0,0x30,7);
        *(char **)(puVar71 + 0x10) = pcVar80;
        *(undefined **)(puVar71 + 0x18) = puVar14;
        *(undefined8 *)(puVar71 + 0x20) = 0;
        *(undefined8 *)(puVar71 + 0x28) = 0xe000000000000000;
        local_c0 = thunk_FUN_100099310;
        local_e0 = PTR___NSConcreteStackBlock_100521110;
        local_d8 = (undefined *)0x42000000;
        local_d0 = FUN_1000c7e7c;
        puStack_c8 = &DAT_1005368e8;
        local_b8 = puVar71;
        pvVar47 = __Block_copy(&local_e0);
        DVar28.unknown = puVar14;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar28);
        local_f0 = PTR___swiftEmptyArrayStorage_100524190;
        Swift::SetAlgebra::_init(lVar63,&local_f0,puVar26,puVar30,DVar23.unknown,puVar29);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar47);
        (*pcVar65)(lVar63,DVar23.unknown);
        (*pcVar66)(qos.unknown,DVar24.unknown);
        _swift_release(local_b8);
        lVar79 = local_2b8;
        lVar62 = local_2b8;
        (*pcVar67)(local_2b8,LVar31.unknown,LVar22.unknown);
        uVar18 = (uint)lVar62;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar32.unknown = puVar14;
        _swift_bridgeObjectRetain();
        pOVar33 = os::Logger::get_logObject(LVar32);
        pOVar34 = pOVar33;
        _os_log_type_enabled(pOVar33,uVar18 & 0xff);
        if ((int)pOVar34 == 0) {
          _swift_bridgeObjectRelease_n(puVar14,2);
          (*local_1c0)(lVar79,LVar22.unknown);
          _swift_bridgeObjectRelease(puVar53);
        }
        else {
          puVar35 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar43 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar35 = 0x8220102;
          local_e0 = pcVar43;
          FUN_10012dbb0(pcVar80,puVar14,&local_e0);
          *(char **)(puVar35 + 1) = pcVar80;
          _swift_bridgeObjectRelease_n(puVar14,2);
          __os_log_impl(0x100000000,pOVar33,uVar18 & 0xff,"%{public}s",puVar35,0xc);
          FUN_100043f24(pcVar43);
          _swift_slowDealloc(pcVar43,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
          (*local_1c0)(lVar79,LVar22.unknown);
          _swift_bridgeObjectRelease(puVar53);
        }
      }
    }
    puVar87 = puVar87 + 2;
    (*pcVar86)(lVar76,UVar21.unknown);
    lVar72 = lVar72 + -1;
  } while (lVar72 != 0);
  UVar49.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar46 = Foundation::URL::_bridgeToObjectiveC(UVar49);
  local_e0 = (char *)0x0;
  IVar44 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                     ((ID)UVar49.unknown,pNVar46,0,0,&local_e0);
  if (IVar44 == 0) {
    pcVar80 = local_e0;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(pcVar80);
    local_288 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    uVar82 = *(ulong *)(IVar44 + 0x10);
    if (uVar82 != 0) {
      uVar83 = 0;
      bVar2 = *(byte *)(lVar61 + 0x50);
      local_2b0 = (char *)0xd000000000000010;
      do {
        lVar72 = local_298;
        if (*(ulong *)(IVar44 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
          pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbc0);
          (*pcVar65)();
        }
        (*pcVar68)(local_298,
                   IVar44 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar61 + 0x48) * uVar83,UVar21.unknown);
        UVar49.unknown = puVar75;
        (**(code **)(lVar61 + 0x20))(puVar75,lVar72,UVar21.unknown);
        lVar72 = local_290;
        UVar49 = Foundation::URL::deletingPathExtension(UVar49);
        SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
        _Var58.unknown = SVar97.bridgeObject;
        (*pcVar86)(lVar72,UVar21.unknown);
        SVar6.bridgeObject = _Var57.unknown;
        SVar6.str = (char *)pPVar25;
        if (SVar97 == SVar6) {
          _swift_bridgeObjectRelease(_Var58.unknown);
LAB_10027bdac:
          UVar49.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
          pNVar46 = Foundation::URL::_bridgeToObjectiveC(UVar49);
          local_e0 = (char *)0x0;
          ppcVar41 = &local_e0;
          IVar50 = NSFileManager::removeItemAtURL_error_((ID)UVar49.unknown);
          if ((int)IVar50 == 0) {
            pcVar27 = local_e0;
            _Var58.unknown = extraout_x1_00.unknown;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            local_e0 = (char *)0x0;
            local_d8 = (undefined *)0xe000000000000000;
            Swift::_StringGuts::grow(0x1b,_Var58);
            UVar49.unknown = local_d8;
            _swift_bridgeObjectRelease();
            local_e0 = (char *)0xd000000000000019;
            local_d8 = (void *)0x80000001004e32d0;
            SVar97 = Foundation::URL::get_path(UVar49);
            SVar166.bridgeObject = ppcVar41;
            SVar166.str = (char *)pNVar46;
            Swift::String::append(SVar97,SVar166);
            _swift_bridgeObjectRelease(SVar97.bridgeObject);
            puVar53 = local_d8;
            _swift_errorRetain(pcVar27);
            _swift_bridgeObjectRetain(puVar53);
            SVar117.bridgeObject = (void *)0xa500000000000000;
            SVar117.str = (char *)0x209480e220;
            SVar167.bridgeObject = ppcVar41;
            SVar167.str = (char *)pNVar46;
            Swift::String::append(SVar117,SVar167);
            pcVar80 = local_128;
            _swift_getErrorValue(pcVar27,auStack_110);
            SVar97 = (extension_Foundation)::Swift::Error::get_localizedDescription();
            SVar168.bridgeObject = ppcVar41;
            SVar168.str = pcVar80;
            Swift::String::append(SVar97,SVar168);
            _swift_bridgeObjectRelease(SVar97.bridgeObject);
            puVar77 = local_d8;
            SVar11.bridgeObject = local_d8;
            SVar11.str = local_e0;
            local_e0 = (char *)0x5b;
            local_d8 = (undefined *)0xe100000000000000;
            local_f8 = 0xe100000000000000;
            local_f0 = (char *)0x524f525245;
            local_e8 = 0xe500000000000000;
            local_100 = 0x20;
            pcVar43 = (char *)0x0;
            puVar71 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar97 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_100,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,uVar52,uVar52);
            SVar169.bridgeObject = puVar71;
            SVar169.str = pcVar43;
            Swift::String::append(SVar97,SVar169);
            _swift_bridgeObjectRelease(SVar97.bridgeObject);
            SVar118.bridgeObject = (void *)0xe300000000000000;
            SVar118.str = (char *)0x5b205d;
            SVar170.bridgeObject = puVar71;
            SVar170.str = pcVar43;
            Swift::String::append(SVar118,SVar170);
            SVar119.bridgeObject = (void *)0xe700000000000000;
            SVar119.str = (char *)0x7972617262696c;
            SVar171.bridgeObject = puVar71;
            SVar171.str = pcVar43;
            Swift::String::append(SVar119,SVar171);
            SVar120.bridgeObject = (void *)0xe200000000000000;
            SVar120.str = (char *)0x205d;
            SVar172.bridgeObject = puVar71;
            SVar172.str = pcVar43;
            Swift::String::append(SVar120,SVar172);
            SVar173.bridgeObject = puVar71;
            SVar173.str = pcVar43;
            Swift::String::append(SVar11,SVar173);
            puVar14 = local_d8;
            pcVar80 = local_e0;
            local_e0 = (char *)0x282020;
            local_d8 = (undefined *)0xe300000000000000;
            SVar121.bridgeObject = (void *)0x80000001004e3270;
            SVar121.str = (char *)0xd00000000000001f;
            SVar174.bridgeObject = puVar71;
            SVar174.str = pcVar43;
            Swift::String::append(SVar121,SVar174);
            SVar122.bridgeObject = (void *)0xe100000000000000;
            SVar122.str = (char *)0x3a;
            SVar175.bridgeObject = puVar71;
            SVar175.str = pcVar43;
            Swift::String::append(SVar122,SVar175);
            local_f0 = (char *)0x342;
            SVar97 = Swift::CustomStringConvertible::get_description();
            SVar176.bridgeObject = puVar71;
            SVar176.str = pcVar43;
            Swift::String::append(SVar97,SVar176);
            _swift_bridgeObjectRelease(SVar97.bridgeObject);
            SVar123.bridgeObject = (void *)0xe100000000000000;
            SVar123.str = (char *)0x29;
            SVar177.bridgeObject = puVar71;
            SVar177.str = pcVar43;
            Swift::String::append(SVar123,SVar177);
            puVar15 = local_d8;
            pcVar43 = local_e0;
            puVar71 = &DAT_1005367e0;
            _swift_allocObject(&DAT_1005367e0,0x30,7);
            *(char **)(puVar71 + 0x10) = pcVar80;
            *(undefined **)(puVar71 + 0x18) = puVar14;
            *(char **)(puVar71 + 0x20) = pcVar43;
            *(undefined **)(puVar71 + 0x28) = puVar15;
            local_c0 = thunk_FUN_100099310;
            local_e0 = PTR___NSConcreteStackBlock_100521110;
            local_d8 = (undefined *)0x42000000;
            local_d0 = FUN_1000c7e7c;
            puStack_c8 = &DAT_1005367f8;
            local_b8 = puVar71;
            pvVar47 = __Block_copy(&local_e0);
            DVar28.unknown = puVar14;
            _swift_bridgeObjectRetain();
            Dispatch::DispatchQoS::get_unspecified(DVar28);
            local_f0 = PTR___swiftEmptyArrayStorage_100524190;
            Swift::SetAlgebra::_init(lVar63,&local_f0,puVar26,puVar30,DVar23.unknown,puVar29);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(pvVar47);
            (*pcVar65)(lVar63,DVar23.unknown);
            (*pcVar66)(qos.unknown,DVar24.unknown);
            _swift_release(local_b8);
            lVar72 = local_2c8;
            lVar79 = local_2c8;
            (*pcVar67)(local_2c8,LVar31.unknown,LVar22.unknown);
            uVar18 = (uint)lVar79;
            static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error
                      ();
            LVar32.unknown = puVar14;
            _swift_bridgeObjectRetain();
            pOVar33 = os::Logger::get_logObject(LVar32);
            pOVar34 = pOVar33;
            _os_log_type_enabled(pOVar33,uVar18 & 0xff);
            if ((int)pOVar34 == 0) {
              _swift_bridgeObjectRelease_n(puVar14,2);
            }
            else {
              puVar35 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar43 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar35 = 0x8220102;
              local_e0 = pcVar43;
              FUN_10012dbb0(pcVar80,puVar14,&local_e0);
              *(char **)(puVar35 + 1) = pcVar80;
              _swift_bridgeObjectRelease_n(puVar14,2);
              __os_log_impl(0x100000000,pOVar33,uVar18 & 0xff,"%{public}s",puVar35,0xc);
              FUN_100043f24(pcVar43);
              _swift_slowDealloc(pcVar43,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
            }
            local_1c0 = *(code **)(lVar74 + 8);
            (*local_1c0)(lVar72,LVar22.unknown);
            _swift_bridgeObjectRelease(puVar77);
            _swift_errorRelease(pcVar27);
            _swift_bridgeObjectRelease(puVar53);
            _swift_errorRelease(pcVar27);
            local_288 = 0;
          }
          else {
            local_e0 = (char *)0x0;
            local_d8 = (undefined *)0xe000000000000000;
            Swift::_StringGuts::grow(0x12,extraout_x1_00);
            UVar49.unknown = local_d8;
            _swift_bridgeObjectRelease();
            local_e0 = local_2b0;
            local_d8 = (void *)0x80000001004e32f0;
            SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
            SVar160.bridgeObject = ppcVar41;
            SVar160.str = (char *)pNVar46;
            Swift::String::append(SVar97,SVar160);
            _swift_bridgeObjectRelease(SVar97.bridgeObject);
            puVar53 = local_d8;
            SVar10.bridgeObject = local_d8;
            SVar10.str = local_e0;
            local_e0 = (char *)0x5b;
            local_d8 = (undefined *)0xe100000000000000;
            local_f8 = 0xe100000000000000;
            local_f0 = (char *)0x4f464e49;
            local_e8 = 0xe400000000000000;
            local_100 = 0x20;
            pcVar80 = (char *)0x0;
            puVar71 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar97 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_100,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,uVar52,uVar52);
            SVar161.bridgeObject = puVar71;
            SVar161.str = pcVar80;
            Swift::String::append(SVar97,SVar161);
            _swift_bridgeObjectRelease(SVar97.bridgeObject);
            SVar114.bridgeObject = (void *)0xe300000000000000;
            SVar114.str = (char *)0x5b205d;
            SVar162.bridgeObject = puVar71;
            SVar162.str = pcVar80;
            Swift::String::append(SVar114,SVar162);
            SVar115.bridgeObject = (void *)0xe700000000000000;
            SVar115.str = (char *)0x7972617262696c;
            SVar163.bridgeObject = puVar71;
            SVar163.str = pcVar80;
            Swift::String::append(SVar115,SVar163);
            SVar116.bridgeObject = (void *)0xe200000000000000;
            SVar116.str = (char *)0x205d;
            SVar164.bridgeObject = puVar71;
            SVar164.str = pcVar80;
            Swift::String::append(SVar116,SVar164);
            SVar165.bridgeObject = puVar71;
            SVar165.str = pcVar80;
            Swift::String::append(SVar10,SVar165);
            puVar77 = local_d8;
            pcVar80 = local_e0;
            puVar71 = &DAT_100536830;
            _swift_allocObject(&DAT_100536830,0x30,7);
            *(char **)(puVar71 + 0x10) = pcVar80;
            *(undefined **)(puVar71 + 0x18) = puVar77;
            *(undefined8 *)(puVar71 + 0x20) = 0;
            *(undefined8 *)(puVar71 + 0x28) = 0xe000000000000000;
            local_c0 = thunk_FUN_100099310;
            local_e0 = PTR___NSConcreteStackBlock_100521110;
            local_d8 = (undefined *)0x42000000;
            local_d0 = FUN_1000c7e7c;
            puStack_c8 = &DAT_100536848;
            local_b8 = puVar71;
            pvVar47 = __Block_copy(&local_e0);
            DVar28.unknown = puVar77;
            _swift_bridgeObjectRetain();
            Dispatch::DispatchQoS::get_unspecified(DVar28);
            local_f0 = PTR___swiftEmptyArrayStorage_100524190;
            Swift::SetAlgebra::_init(lVar63,&local_f0,puVar26,puVar30,DVar23.unknown,puVar29);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(pvVar47);
            (*pcVar65)(lVar63,DVar23.unknown);
            (*pcVar66)(qos.unknown,DVar24.unknown);
            _swift_release(local_b8);
            lVar72 = local_2d0;
            lVar79 = local_2d0;
            (*pcVar67)(local_2d0,LVar31.unknown,LVar22.unknown);
            uVar18 = (uint)lVar79;
            static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
            LVar32.unknown = puVar77;
            _swift_bridgeObjectRetain();
            pOVar33 = os::Logger::get_logObject(LVar32);
            pOVar34 = pOVar33;
            _os_log_type_enabled(pOVar33,uVar18 & 0xff);
            if ((int)pOVar34 == 0) {
              _swift_bridgeObjectRelease_n(puVar77,2);
            }
            else {
              puVar35 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar43 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar35 = 0x8220102;
              local_e0 = pcVar43;
              FUN_10012dbb0(pcVar80,puVar77,&local_e0);
              *(char **)(puVar35 + 1) = pcVar80;
              _swift_bridgeObjectRelease_n(puVar77,2);
              __os_log_impl(0x100000000,pOVar33,uVar18 & 0xff,"%{public}s",puVar35,0xc);
              FUN_100043f24(pcVar43);
              _swift_slowDealloc(pcVar43,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
            }
            (*local_1c0)(lVar72,LVar22.unknown);
            _swift_bridgeObjectRelease(puVar53);
          }
        }
        else {
          bVar17 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar97.str,_Var58,expecting);
          _swift_bridgeObjectRelease(_Var58.unknown);
          if (bVar17) goto LAB_10027bdac;
        }
        uVar83 = uVar83 + 1;
        (*pcVar86)(puVar75,UVar21.unknown);
      } while (uVar82 != uVar83);
    }
    _swift_bridgeObjectRelease(IVar44);
  }
  puVar71 = &DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  UVar49.unknown = &DAT_10042d248;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,UVar49.unknown);
  _swift_release(puVar71);
  _swift_release();
  pcVar80 = local_e0;
  puVar88 = (ulong *)(local_e0 + 0x10);
  uVar82 = *puVar88;
  if (uVar82 == 0) {
    uVar83 = 0;
    uVar82 = uVar83;
  }
  else {
    uVar83 = 0;
    uVar84 = (ulong)*(byte *)(lVar60 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar60 + 0x50) ^ 0xffffffffffffffff);
    lVar72 = *(long *)(lVar60 + 0x48);
    uVar37 = uVar84;
    do {
      SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
      pvVar47 = SVar97.bridgeObject;
      uVar69 = (ulong)SVar97.str & 0xffffffffffff;
      if (((ulong)pvVar47 & 0x2000000000000000) != 0) {
        uVar69 = (ulong)pvVar47 >> 0x38 & 0xf;
      }
      if (uVar69 == 0) {
        _swift_bridgeObjectRelease(pvVar47);
        SVar97 = *(String *)(pcVar80 + uVar37);
        _swift_bridgeObjectRetain(((String *)(pcVar80 + uVar37))->bridgeObject);
      }
      pvVar47 = SVar97.bridgeObject;
      FUN_10027f304();
      UVar49.unknown = SVar97.bridgeObject;
      _swift_bridgeObjectRelease(pvVar47);
      if (SVar97 == SVar12) {
LAB_10027c7a4:
        _swift_bridgeObjectRelease(UVar49.unknown);
LAB_10027c7ac:
        uVar82 = uVar83 + 1;
        uVar69 = *puVar88;
        pSVar70 = local_2a8;
        if (uVar69 - 1 == uVar83) goto LAB_10027c7c0;
        goto LAB_10027cda4;
      }
      bVar17 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)SVar97.str,(_StringGuts)UVar49.unknown,expecting);
      _swift_bridgeObjectRelease(UVar49.unknown);
      if (bVar17) goto LAB_10027c7ac;
      _Var58.unknown = *(undefined **)(pcVar80 + uVar37);
      UVar49.unknown = *(undefined **)(pcVar80 + uVar37 + 8);
      FUN_10027f304();
      if (((Published *)_Var58.unknown == pPVar25) && (UVar49.unknown == _Var57.unknown))
      goto LAB_10027c7a4;
      bVar17 = Swift::_stringCompareWithSmolCheck(_Var58,(_StringGuts)UVar49.unknown,expecting);
      _swift_bridgeObjectRelease();
      if (bVar17) goto LAB_10027c7ac;
      uVar83 = uVar83 + 1;
      uVar37 = uVar37 + lVar72;
    } while (uVar82 != uVar83);
    uVar83 = *puVar88;
    uVar82 = uVar83;
  }
  goto LAB_10027c7dc;
  while( true ) {
    bVar17 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar97.str,_Var58,expecting);
    _swift_bridgeObjectRelease(_Var58.unknown);
    lVar79 = local_350;
    lVar60 = local_358;
    lVar62 = local_348;
    if (bVar17) goto LAB_10027d584;
    _Var55.unknown = local_2e0->str;
    _Var58.unknown = local_2e0->bridgeObject;
    FUN_10027f304();
    if (((Published *)_Var55.unknown == pPVar25) && (_Var58.unknown == _Var57.unknown))
    goto LAB_10027d550;
    bVar17 = Swift::_stringCompareWithSmolCheck(_Var55,_Var58,expecting);
    _swift_bridgeObjectRelease(_Var58.unknown);
    pSVar70 = local_2e0;
    lVar79 = local_350;
    lVar60 = local_358;
    lVar62 = local_348;
    if (bVar17) goto LAB_10027d584;
    uVar84 = uVar84 + 1;
    FUN_100029548(local_2e0,FUN_10040211c);
    pcVar43 = pcVar43 + lVar74;
    if (uVar82 == uVar84) break;
LAB_10027d3ac:
    UVar49.unknown = local_2f0;
    if (*(ulong *)(pcVar80 + 0x10) <= uVar84) {
                    /* WARNING: Does not return */
      pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbd0);
      (*pcVar65)();
    }
    FUN_100029504(pcVar43,local_2f0,FUN_10040211c);
    FUN_100007e64(UVar49.unknown,pSVar70,FUN_10040211c);
    SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
    pvVar47 = SVar97.bridgeObject;
    uVar69 = (ulong)SVar97.str & 0xffffffffffff;
    if (((ulong)pvVar47 & 0x2000000000000000) != 0) {
      uVar69 = (ulong)pvVar47 >> 0x38 & 0xf;
    }
    if (uVar69 == 0) {
      _swift_bridgeObjectRelease(pvVar47);
      SVar97 = *pSVar70;
      _swift_bridgeObjectRetain(pSVar70->bridgeObject);
    }
    pvVar47 = SVar97.bridgeObject;
    FUN_10027f304();
    _Var58.unknown = SVar97.bridgeObject;
    _swift_bridgeObjectRelease(pvVar47);
    if (SVar97 == SVar12) {
LAB_10027d550:
      lVar62 = local_348;
      lVar79 = local_350;
      lVar60 = local_358;
      _swift_bridgeObjectRelease(pcVar80);
      pcVar80 = _Var58.unknown;
LAB_10027d584:
      pSVar70 = local_2e0;
      _swift_bridgeObjectRelease(pcVar80);
      FUN_100007e64(pSVar70,lVar79,FUN_10040211c);
      (*pcVar68)(lVar60,lVar79 + *(int *)(lVar19 + 0x14),UVar21.unknown);
      FUN_100029548(lVar79,FUN_10040211c);
      (**(code **)(lVar61 + 0x20))(lVar62,lVar60,UVar21.unknown);
      puVar71 = &DAT_10042d1d8;
      _swift_getKeyPath(&DAT_10042d1d8);
      puVar53 = &DAT_10042d200;
      _swift_getKeyPath(&DAT_10042d200);
      Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
      _swift_release(puVar71);
      _swift_release(puVar53);
      pcVar80 = local_e0;
      pcVar43 = local_e0;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pcVar43 & 1) == 0) {
        FUN_100287238();
      }
      if (*(ulong *)(pcVar80 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
        pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dcf8);
        (*pcVar65)();
      }
      (**(code **)(lVar61 + 0x18))
                (pcVar80 + (long)*(int *)(lVar19 + 0x14) + lVar72 + uVar37,lVar62,UVar21.unknown);
      pPVar51 = (Published *)&DAT_10042d1d8;
      _swift_getKeyPath(&DAT_10042d1d8);
      puVar71 = &DAT_10042d200;
      _swift_getKeyPath(&DAT_10042d200);
      local_f0 = pcVar80;
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(pPVar51,&local_f0,unaff_x20,pPVar51,puVar71);
      (*pcVar86)(lVar62,UVar21.unknown);
      uVar52 = *puVar29;
      uVar40 = puVar29[1];
      *puVar29 = 0;
      puVar29[1] = 0;
      FUN_10027f5e8(uVar52,uVar40);
      goto LAB_10027d6fc;
    }
  }
LAB_10027d508:
  _swift_bridgeObjectRelease(pcVar80);
LAB_10027d6fc:
  puVar71 = &DAT_10042d458;
  _swift_getKeyPath(&DAT_10042d458);
  puVar53 = &DAT_10042d480;
  _swift_getKeyPath(&DAT_10042d480);
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
  _swift_release(puVar71);
  _swift_release(puVar53);
  pcVar80 = local_e0;
  puVar71 = &DAT_10042d3b8;
  _swift_getKeyPath(&DAT_10042d3b8);
  puVar53 = &DAT_10042d3e0;
  _swift_getKeyPath(&DAT_10042d3e0);
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
  _swift_release(puVar71);
  _swift_release(puVar53);
  pcVar43 = local_e0;
  local_e0 = pcVar80;
  FUN_10012f3c8(pcVar43);
  _Var58.unknown = local_e0;
  uVar82 = *(ulong *)(local_e0 + 0x10);
  if (uVar82 != 0) {
    uVar84 = 0;
    pcVar80 = local_e0 + uVar37;
    pSVar70 = local_2d8;
    do {
      UVar49.unknown = local_2f8;
      if (*(ulong *)(_Var58.unknown + 0x10) <= uVar84) {
                    /* WARNING: Does not return */
        pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbd4);
        (*pcVar65)();
      }
      FUN_100029504(pcVar80,local_2f8,FUN_10040211c);
      FUN_100007e64(UVar49.unknown,pSVar70,FUN_10040211c);
      SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
      pvVar47 = SVar97.bridgeObject;
      uVar69 = (ulong)SVar97.str & 0xffffffffffff;
      if (((ulong)pvVar47 & 0x2000000000000000) != 0) {
        uVar69 = (ulong)pvVar47 >> 0x38 & 0xf;
      }
      if (uVar69 == 0) {
        _swift_bridgeObjectRelease(pvVar47);
        SVar97 = *pSVar70;
        _swift_bridgeObjectRetain(pSVar70->bridgeObject);
      }
      pvVar47 = SVar97.bridgeObject;
      FUN_10027f304();
      _Var55.unknown = SVar97.bridgeObject;
      _swift_bridgeObjectRelease(pvVar47);
      if (SVar97 == SVar12) {
LAB_10027d9a8:
        lVar60 = local_338;
        _swift_bridgeObjectRelease(_Var58.unknown);
        _Var58.unknown = _Var57.unknown;
        _Var57.unknown = _Var55.unknown;
LAB_10027d9cc:
        pSVar70 = local_2d8;
        _swift_bridgeObjectRelease(_Var58.unknown);
        _swift_bridgeObjectRelease(_Var57.unknown);
        lVar61 = local_360;
        FUN_100007e64(pSVar70,local_360,FUN_10040211c);
        FUN_1000087e4(lVar61 + *(int *)(lVar19 + 0x18),lVar60,&DAT_100553d90,&DAT_10041bf10);
        FUN_100029548(lVar61,FUN_10040211c);
        goto LAB_10027da30;
      }
      bVar17 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar97.str,_Var55,expecting);
      _swift_bridgeObjectRelease(_Var55.unknown);
      lVar60 = local_338;
      if (bVar17) goto LAB_10027d9cc;
      _Var56.unknown = local_2d8->str;
      _Var55.unknown = local_2d8->bridgeObject;
      FUN_10027f304();
      if (((Published *)_Var56.unknown == pPVar25) && (_Var55.unknown == _Var57.unknown))
      goto LAB_10027d9a8;
      bVar17 = Swift::_stringCompareWithSmolCheck(_Var56,_Var55,expecting);
      _swift_bridgeObjectRelease(_Var55.unknown);
      pSVar70 = local_2d8;
      lVar60 = local_338;
      if (bVar17) goto LAB_10027d9cc;
      uVar84 = uVar84 + 1;
      FUN_100029548(local_2d8,FUN_10040211c);
      pcVar80 = pcVar80 + lVar74;
    } while (uVar82 != uVar84);
  }
  _swift_bridgeObjectRelease(_Var58.unknown);
  _swift_bridgeObjectRelease(_Var57.unknown);
  lVar60 = local_338;
  (**(code **)(lVar61 + 0x38))(local_338,1,1,UVar21.unknown);
LAB_10027da30:
  puVar71 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar53 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
  _swift_release(puVar71);
  _swift_release(puVar53);
  pcVar80 = local_e0;
  pcVar43 = local_e0;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)pcVar43 & 1) == 0) {
    FUN_100287238();
  }
  if (*(ulong *)(pcVar80 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
    pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dca0);
    (*pcVar65)();
  }
  FUN_10028468c(lVar60,pcVar80 + (long)*(int *)(lVar19 + 0x18) + lVar72 + uVar37);
  pPVar25 = (Published *)&DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar71 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  local_f0 = pcVar80;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar25,&local_f0,unaff_x20,pPVar25,puVar71);
  uVar52 = *puVar29;
  uVar40 = puVar29[1];
  *puVar29 = 0;
  puVar29[1] = 0;
  FUN_10027f5e8(uVar52,uVar40);
  goto LAB_10027db20;
LAB_10027cda4:
  do {
    uVar37 = lVar72 + uVar37;
    if (uVar69 <= uVar82) {
                    /* WARNING: Does not return */
      pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbc8);
      (*pcVar65)();
    }
    UVar49.unknown = pcVar80 + uVar37;
    FUN_100029504(UVar49.unknown,pSVar70,FUN_10040211c);
    SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
    pvVar47 = SVar97.bridgeObject;
    uVar69 = (ulong)SVar97.str & 0xffffffffffff;
    if (((ulong)pvVar47 & 0x2000000000000000) != 0) {
      uVar69 = (ulong)pvVar47 >> 0x38 & 0xf;
    }
    if (uVar69 == 0) {
      _swift_bridgeObjectRelease(pvVar47);
      SVar97 = *pSVar70;
      _swift_bridgeObjectRetain(pSVar70->bridgeObject);
    }
    pvVar47 = SVar97.bridgeObject;
    FUN_10027f304();
    _Var58.unknown = SVar97.bridgeObject;
    _swift_bridgeObjectRelease(pvVar47);
    if (SVar97 == SVar12) {
      _swift_bridgeObjectRelease(_Var58.unknown);
      pSVar70 = local_2a8;
LAB_10027cd80:
      FUN_100029548(pSVar70,FUN_10040211c);
    }
    else {
      bVar17 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar97.str,_Var58,expecting);
      _swift_bridgeObjectRelease(_Var58.unknown);
      pSVar70 = local_2a8;
      if (bVar17) goto LAB_10027cd80;
      _Var58.unknown = local_2a8->str;
      _Var55.unknown = local_2a8->bridgeObject;
      FUN_10027f304();
      if (((Published *)_Var58.unknown == pPVar25) && (_Var55.unknown == _Var57.unknown)) {
        _swift_bridgeObjectRelease(_Var55.unknown);
        goto LAB_10027cd80;
      }
      bVar17 = Swift::_stringCompareWithSmolCheck(_Var58,_Var55,expecting);
      _swift_bridgeObjectRelease(_Var55.unknown);
      FUN_100029548(pSVar70,FUN_10040211c);
      if (!bVar17) {
        if (uVar82 != uVar83) {
          if ((long)uVar83 < 0) {
                    /* WARNING: Does not return */
            pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dcd4);
            (*pcVar65)();
          }
          uVar69 = *puVar88;
          if (uVar69 <= uVar83) {
                    /* WARNING: Does not return */
            pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dcd8);
            (*pcVar65)();
          }
          FUN_100029504(pcVar80 + uVar83 * lVar72 + uVar84,local_328,FUN_10040211c);
          if (uVar69 <= uVar82) {
                    /* WARNING: Does not return */
            pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dcdc);
            (*pcVar65)();
          }
          FUN_100029504(pcVar80 + uVar37,local_330,FUN_10040211c);
          pcVar43 = pcVar80;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pcVar43 & 1) == 0) {
            FUN_100287238();
          }
          if (*(ulong *)(pcVar80 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
            pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dce0);
            (*pcVar65)();
          }
          FUN_10027f714(local_330,pcVar80 + uVar83 * lVar72 + uVar84);
          if (*(ulong *)(pcVar80 + 0x10) <= uVar82) {
                    /* WARNING: Does not return */
            pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dce4);
            (*pcVar65)();
          }
          FUN_10027f714(local_328,pcVar80 + uVar37);
        }
        uVar83 = uVar83 + 1;
      }
    }
    uVar82 = uVar82 + 1;
    puVar88 = (ulong *)(pcVar80 + 0x10);
    uVar69 = *puVar88;
  } while (uVar82 != uVar69);
LAB_10027c7c0:
  if ((long)uVar82 < (long)uVar83) {
                    /* WARNING: Does not return */
    pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dc58);
    (*pcVar65)();
  }
  if ((long)uVar83 < 0) {
                    /* WARNING: Does not return */
    pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dc5c);
    (*pcVar65)();
  }
LAB_10027c7dc:
  if (SCARRY8(uVar82,uVar83 - uVar82)) {
                    /* WARNING: Does not return */
    pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dc60);
    (*pcVar65)();
  }
  pcVar43 = pcVar80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)pcVar43 == 0) ||
     ((long)(*(ulong *)(pcVar80 + 0x18) >> 1) < (long)(uVar82 + (uVar83 - uVar82)))) {
    local_e0 = pcVar80;
    FUN_1001c4344();
    pcVar80 = pcVar43;
  }
  puVar75 = local_300;
  pPVar13 = local_308;
  local_e0 = pcVar80;
  FUN_100288ad0(uVar83,uVar82,0);
  pPVar51 = (Published *)&DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  puVar71 = &DAT_10042d248;
  _swift_getKeyPath(&DAT_10042d248);
  local_f0 = pcVar80;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar51,&local_f0,unaff_x20,pPVar51,puVar71);
  uVar52 = *(undefined8 *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache);
  *(undefined8 *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache) = 0;
  _swift_bridgeObjectRelease(uVar52);
  puVar71 = &DAT_10042d298;
  _swift_getKeyPath(&DAT_10042d298);
  puVar53 = &DAT_10042d2c0;
  _swift_getKeyPath(&DAT_10042d2c0);
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
  _swift_release(puVar71);
  _swift_release(puVar53);
  pcVar80 = local_e0;
  pPVar51 = pPVar13;
  FUN_1002165a4(pPVar13,puVar75,local_e0);
  _swift_bridgeObjectRelease(pcVar80);
  if (((ulong)pPVar51 & 1) != 0) {
    puVar71 = &DAT_10042d298;
    puVar77 = puVar71;
    _swift_getKeyPath(&DAT_10042d298);
    puVar53 = &DAT_10042d2c0;
    puVar26 = puVar53;
    _swift_getKeyPath(&DAT_10042d2c0);
    ppcVar41 = &local_e0;
    Combine::Published::_modify_subscript(pPVar51,ppcVar41,unaff_x20,puVar77,puVar26);
    FUN_100227384(pPVar13,puVar75);
    (*(code *)ppcVar41)(&local_e0,0);
    _swift_release(puVar77);
    _swift_release(puVar26);
    _swift_bridgeObjectRelease(puVar75);
    IVar44 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    _swift_getKeyPath(&DAT_10042d298);
    _swift_getKeyPath(&DAT_10042d2c0);
    Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
    _swift_release(puVar71);
    _swift_release(puVar53);
    pcVar80 = local_e0;
    FUN_10028a144(local_e0);
    pNVar54 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pcVar80);
    pNVar39 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_(IVar44,pNVar54,pNVar39);
    puVar71 = &DAT_10042d1d8;
    _swift_getKeyPath(&DAT_10042d1d8);
    puVar53 = &DAT_10042d200;
    _swift_getKeyPath(&DAT_10042d200);
    Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
    _swift_release(puVar71);
    _swift_release(puVar53);
    pcVar80 = local_e0;
    uVar82 = *(ulong *)(local_e0 + 0x10);
    if (uVar82 == 0) {
      local_190 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      uVar83 = 0;
      local_190 = PTR___swiftEmptyArrayStorage_100524190;
      pSVar70 = local_2a0;
      do {
        if (*(ulong *)(pcVar80 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
          pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbc4);
          (*pcVar65)();
        }
        uVar84 = (ulong)*(byte *)(lVar60 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar60 + 0x50) ^ 0xffffffffffffffff);
        lVar72 = *(long *)(lVar60 + 0x48);
        FUN_100029504(pcVar80 + lVar72 * uVar83 + uVar84,pSVar70,FUN_10040211c);
        puVar71 = &DAT_10042d298;
        _swift_getKeyPath(&DAT_10042d298);
        UVar49.unknown = &DAT_10042d2c0;
        _swift_getKeyPath();
        Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,UVar49.unknown);
        _swift_release(puVar71);
        _swift_release();
        pcVar43 = local_e0;
        SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
        pvVar47 = SVar97.bridgeObject;
        uVar37 = (ulong)SVar97.str & 0xffffffffffff;
        if (((ulong)pvVar47 & 0x2000000000000000) != 0) {
          uVar37 = (ulong)pvVar47 >> 0x38 & 0xf;
        }
        if (uVar37 == 0) {
          _swift_bridgeObjectRelease(pvVar47);
          pvVar47 = pSVar70->bridgeObject;
          SVar97 = *pSVar70;
          _swift_bridgeObjectRetain(pvVar47);
          lVar74 = *(long *)(pcVar43 + 0x10);
        }
        else {
          lVar74 = *(long *)(pcVar43 + 0x10);
        }
        if (lVar74 != 0) {
          pvVar47 = SVar97.bridgeObject;
          Swift::Hasher::init(*(__int64 *)(pcVar43 + 0x28));
          into.unknown = (undefined *)&local_e0;
          Swift::String::hash(into,SVar97);
          uVar37 = Swift::Hasher::_finalize(into);
          uVar69 = -1L << ((ulong)(byte)pcVar43[0x20] & 0x3f);
          uVar37 = uVar37 & (uVar69 ^ 0xffffffffffffffff);
          if ((*(ulong *)(pcVar43 + (uVar37 >> 6) * 8 + 0x38) >> (uVar37 & 0x3f) & 1) != 0) {
            do {
              pSVar70 = (String *)(*(long *)(pcVar43 + 0x30) + uVar37 * 0x10);
              if ((SVar97 == *pSVar70) ||
                 (bVar17 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)pSVar70->str,(_StringGuts)pSVar70->bridgeObject,
                                      (_StringComparisonResult)(__int8)SVar97.str), bVar17)) {
                _swift_bridgeObjectRelease(pvVar47);
                _swift_bridgeObjectRelease(pcVar43);
                pcVar43 = local_190;
                _swift_isUniquelyReferenced_nonNull_native();
                local_f0 = local_190;
                if (((ulong)pcVar43 & 1) == 0) {
                  FUN_1001c5c4c(0,*(long *)(local_190 + 0x10) + 1,1);
                }
                uVar37 = *(ulong *)(local_f0 + 0x10);
                if (*(ulong *)(local_f0 + 0x18) >> 1 <= uVar37) {
                  FUN_1001c5c4c(1 < *(ulong *)(local_f0 + 0x18),uVar37 + 1,1);
                }
                local_190 = local_f0;
                pSVar70 = local_2a0;
                *(ulong *)(local_f0 + 0x10) = uVar37 + 1;
                FUN_100007e64(local_2a0,local_f0 + uVar37 * lVar72 + uVar84,FUN_10040211c);
                goto LAB_10027cb04;
              }
              uVar37 = uVar37 + 1 & ~uVar69;
            } while ((*(ulong *)(pcVar43 + (uVar37 >> 6) * 8 + 0x38) >> (uVar37 & 0x3f) & 1) != 0);
          }
        }
        _swift_bridgeObjectRelease(pvVar47);
        _swift_bridgeObjectRelease(pcVar43);
        pSVar70 = local_2a0;
        FUN_100029548(local_2a0,FUN_10040211c);
LAB_10027cb04:
        uVar83 = uVar83 + 1;
      } while (uVar83 != uVar82);
    }
    _swift_bridgeObjectRelease();
    puVar71 = &DAT_10042d328;
    _swift_getKeyPath(&DAT_10042d328);
    pPVar51 = (Published *)&DAT_10042d350;
    _swift_getKeyPath(&DAT_10042d350);
    local_e0 = local_190;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar51,&local_e0,unaff_x20,puVar71,pPVar51);
    puVar71 = &DAT_10042d5e8;
    _swift_getKeyPath(&DAT_10042d5e8);
    puVar53 = &DAT_10042d610;
    _swift_getKeyPath(&DAT_10042d610);
    ppcVar41 = &local_e0;
    plVar59 = unaff_x20;
    Combine::Published::_modify_subscript();
    *plVar59 = *plVar59 + 1;
    (*(code *)ppcVar41)(&local_e0,0);
    _swift_release(puVar71);
    _swift_release(puVar53);
  }
  puVar71 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar53 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
  _swift_release(puVar71);
  _swift_release(puVar53);
  pcVar80 = local_e0;
  uVar82 = *(ulong *)(local_e0 + 0x10);
  if (uVar82 != 0) {
    uVar83 = 0;
    uVar37 = (ulong)*(byte *)(lVar60 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar60 + 0x50) ^ 0xffffffffffffffff);
    do {
      if (*(ulong *)(pcVar80 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
        pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dbcc);
        (*pcVar65)();
      }
      lVar74 = *(long *)(lVar60 + 0x48);
      lVar72 = lVar74 * uVar83;
      UVar49.unknown = pcVar80 + lVar72 + uVar37;
      FUN_100029504(UVar49.unknown,pSVar73,FUN_10040211c);
      SVar97 = Foundation::URL::get_lastPathComponent(UVar49);
      pvVar47 = SVar97.bridgeObject;
      uVar84 = (ulong)SVar97.str & 0xffffffffffff;
      if (((ulong)pvVar47 & 0x2000000000000000) != 0) {
        uVar84 = (ulong)pvVar47 >> 0x38 & 0xf;
      }
      if (uVar84 == 0) {
        _swift_bridgeObjectRelease(pvVar47);
        SVar97 = *pSVar73;
        _swift_bridgeObjectRetain(pSVar73->bridgeObject);
      }
      pvVar47 = SVar97.bridgeObject;
      FUN_10027f304();
      _Var58.unknown = SVar97.bridgeObject;
      _swift_bridgeObjectRelease(pvVar47);
      if (SVar97 == SVar12) {
        _swift_bridgeObjectRelease(_Var58.unknown);
        FUN_100029548(pSVar73,FUN_10040211c);
LAB_10027d1e0:
        _swift_bridgeObjectRelease(pcVar80);
        puVar71 = &DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar53 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
        _swift_release(puVar71);
        _swift_release(puVar53);
        pcVar80 = local_e0;
        pcVar43 = local_e0;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pcVar43 & 1) == 0) {
          FUN_100287238();
        }
        if (*(ulong *)(pcVar80 + 0x10) <= uVar83) {
                    /* WARNING: Does not return */
          pcVar65 = (code *)SoftwareBreakpoint(1,0x10027dc8c);
          (*pcVar65)();
        }
        pcVar80[(long)*(int *)(lVar19 + 0x40) + lVar72 + uVar37] = '\0';
        pPVar51 = (Published *)&DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar71 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        local_f0 = pcVar80;
        _swift_retain(unaff_x20);
        Combine::Published::_set_subscript(pPVar51,&local_f0,unaff_x20,pPVar51,puVar71);
        puVar29 = (undefined8 *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache);
        uVar52 = *puVar29;
        uVar40 = puVar29[1];
        *puVar29 = 0;
        puVar29[1] = 0;
        FUN_10027f5e8(uVar52,uVar40);
        puVar71 = &DAT_10042d458;
        _swift_getKeyPath(&DAT_10042d458);
        puVar53 = &DAT_10042d480;
        _swift_getKeyPath(&DAT_10042d480);
        Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
        _swift_release(puVar71);
        _swift_release(puVar53);
        pcVar80 = local_e0;
        puVar71 = &DAT_10042d3b8;
        _swift_getKeyPath(&DAT_10042d3b8);
        puVar53 = &DAT_10042d3e0;
        _swift_getKeyPath(&DAT_10042d3e0);
        Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar71,puVar53);
        _swift_release(puVar71);
        _swift_release(puVar53);
        pcVar43 = local_e0;
        local_e0 = pcVar80;
        FUN_10012f3c8(pcVar43);
        pcVar80 = local_e0;
        uVar82 = *(ulong *)(local_e0 + 0x10);
        if (uVar82 == 0) goto LAB_10027d508;
        uVar84 = 0;
        pcVar43 = local_e0 + uVar37;
        pSVar70 = local_2e0;
        goto LAB_10027d3ac;
      }
      bVar17 = Swift::_stringCompareWithSmolCheck((_StringGuts)SVar97.str,_Var58,expecting);
      _swift_bridgeObjectRelease(_Var58.unknown);
      FUN_100029548(pSVar73,FUN_10040211c);
      if (bVar17) goto LAB_10027d1e0;
      uVar83 = uVar83 + 1;
    } while (uVar82 != uVar83);
  }
  _swift_bridgeObjectRelease(_Var57.unknown);
  _swift_bridgeObjectRelease(pcVar80);
LAB_10027db20:
  IVar44 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_10055b028 != -1) {
    _swift_once(&DAT_10055b028,FUN_1002f5898);
  }
  NSNotificationCenter::postNotificationName_object_(IVar44,DAT_100577e28,0);
  (*pcVar86)(local_2e8,UVar21.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

