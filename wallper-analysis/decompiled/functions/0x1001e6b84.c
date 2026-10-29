// rea decompile_all
// name: FUN_1001e6b84
// address: 0x1001e6b84
// body: available
// range: 0x1001e6b84-0x1001e7167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e7134 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e6b84(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  uint uVar3;
  MainActor *pMVar4;
  Data DVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar8;
  DispatchWorkItemFlags DVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  ulong uVar14;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  UnownedSerialExecutor UVar20;
  undefined *extraout_x1;
  undefined *puVar21;
  _StringGuts _Var22;
  char *pcVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uVar26;
  Data DVar27;
  MainActor *this;
  long unaff_x22;
  long lVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  char *local_70;
  undefined *local_68;
  
  DVar27.unknown = *(undefined **)(unaff_x22 + 0x3b8);
  pMVar4 = (MainActor *)objc_stub::cancelAllCGImageGeneration(*(ID *)(unaff_x22 + 0x368));
  puVar21 = extraout_x1;
  __objc_autoreleasePoolPush();
  FUN_1001ec970(0x408c200000000000,0x407fa00000000000);
  if ((DVar27.unknown != (undefined *)0x0) && (FUN_1001ecaec(), (ulong)puVar21 >> 0x3c < 0xf)) {
    DVar5.unknown = DVar27.unknown;
    _Var22.unknown = puVar21;
    FUN_1001ec608();
    if (((ulong)DVar5.unknown & 1) == 0) {
      lVar25 = *(long *)(unaff_x22 + 0x3c0);
      Foundation::Data::_write
                ((URL)*(undefined **)(unaff_x22 + 800),(NSDataWritingOptions)0x1,DVar27);
      if (lVar25 != 0) {
        _swift_errorRelease(lVar25);
      }
      FUN_1000a3004(DVar27.unknown,puVar21);
    }
    else {
      local_70 = (char *)0x0;
      SVar1 = *(String *)(unaff_x22 + 0x2c8);
      local_68 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3e,_Var22);
      SVar30.bridgeObject = (void *)0x80000001004e0df0;
      SVar30.str = (char *)0xd000000000000032;
      SVar34.bridgeObject = param_4;
      SVar34.str = param_3;
      Swift::String::append(SVar30,SVar34);
      SVar35.bridgeObject = param_4;
      SVar35.str = param_3;
      Swift::String::append(SVar1,SVar35);
      uVar26 = 0x697070696b73202c;
      SVar29.bridgeObject = (void *)0xea0000000000676e;
      SVar29.str = (char *)0x697070696b73202c;
      SVar36.bridgeObject = param_4;
      SVar36.str = param_3;
      Swift::String::append(SVar29,SVar36);
      puVar2 = local_68;
      SVar1.bridgeObject = local_68;
      SVar1.str = local_70;
      local_70 = (char *)0x5b;
      local_68 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x1c8) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x238) = 0xe100000000000000;
      FUN_100026df4();
      pcVar23 = (char *)0x0;
      puVar24 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar30 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x230,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar26,uVar26);
      SVar37.bridgeObject = puVar24;
      SVar37.str = pcVar23;
      Swift::String::append(SVar30,SVar37);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      SVar31.bridgeObject = (void *)0xe300000000000000;
      SVar31.str = (char *)0x5b205d;
      SVar38.bridgeObject = puVar24;
      SVar38.str = pcVar23;
      Swift::String::append(SVar31,SVar38);
      SVar32.bridgeObject = (void *)0xe300000000000000;
      SVar32.str = (char *)0x707061;
      SVar39.bridgeObject = puVar24;
      SVar39.str = pcVar23;
      Swift::String::append(SVar32,SVar39);
      SVar33.bridgeObject = (void *)0xe200000000000000;
      SVar33.str = (char *)0x205d;
      SVar40.bridgeObject = puVar24;
      SVar40.str = pcVar23;
      Swift::String::append(SVar33,SVar40);
      SVar41.bridgeObject = puVar24;
      SVar41.str = pcVar23;
      Swift::String::append(SVar1,SVar41);
      puVar24 = local_68;
      pcVar23 = local_70;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar6 = &DAT_100531d70;
      _swift_allocObject(&DAT_100531d70,0x30,7);
      *(char **)(puVar6 + 0x10) = pcVar23;
      *(undefined **)(puVar6 + 0x18) = puVar24;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0xe0) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0xe8) = puVar6;
      *(undefined **)(unaff_x22 + 0xc0) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 200) = 0x42000000;
      *(code **)(unaff_x22 + 0xd0) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0xd8) = &DAT_100531d88;
      aBlock = __Block_copy((void *)(unaff_x22 + 0xc0));
      DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar25 = *(long *)(DVar7.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      DVar8.unknown = puVar24;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      DVar9 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar6 = PTR_typeMetadataAccessor_1005244a8;
      lVar28 = *(long *)(DVar9.unknown + -8);
      uVar10 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar10);
      *(undefined **)(unaff_x22 + 0x280) = PTR___swiftEmptyArrayStorage_100524190;
      puVar11 = &DAT_100553db0;
      FUN_100047f94(&DAT_100553db0,0xff,puVar6,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar12 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar10,unaff_x22 + 0x280,puVar6,puVar12,DVar9.unknown,puVar11);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      (**(code **)(lVar28 + 8))(uVar10,DVar9.unknown);
      (**(code **)(lVar25 + 8))(qos.unknown,DVar7.unknown);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar13 = os::Logger::typeMetadataAccessor();
      FUN_100099338(LVar13.unknown,&DAT_100558f50);
      lVar25 = *(long *)(LVar13.unknown + -8);
      uVar14 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar14);
      uVar10 = uVar14;
      (**(code **)(lVar25 + 0x10))();
      uVar3 = (uint)uVar10;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar15.unknown = puVar24;
      _swift_bridgeObjectRetain();
      pOVar16 = os::Logger::get_logObject(LVar15);
      pOVar17 = pOVar16;
      _os_log_type_enabled(pOVar16,uVar3 & 0xff);
      if ((int)pOVar17 == 0) {
        _swift_bridgeObjectRelease_n(puVar24,2);
      }
      else {
        puVar18 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar19 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar18 = 0x8220102;
        local_70 = pcVar19;
        FUN_10012dbb0(pcVar23,puVar24,&local_70);
        *(char **)(puVar18 + 1) = pcVar23;
        _swift_bridgeObjectRelease_n(puVar24,2);
        __os_log_impl(0x100000000,pOVar16,uVar3 & 0xff,"%{public}s",puVar18,0xc);
        FUN_100043f24(pcVar19);
        _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar25 + 8))(uVar14,LVar13.unknown);
      _swift_bridgeObjectRelease(puVar2);
      FUN_1000a3004(DVar27.unknown,puVar21);
      _swift_task_dealloc(uVar14);
    }
  }
  uVar26 = *(undefined8 *)(unaff_x22 + 0x308);
  this = *(MainActor **)(unaff_x22 + 0x2f8);
  __objc_autoreleasePoolPop();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  *(MainActor **)(unaff_x22 + 0x3c8) = pMVar4;
  UVar20 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001e7168,UVar20.unknown,uVar26);
  return;
}

