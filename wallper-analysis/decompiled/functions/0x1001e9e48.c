// rea decompile_all
// name: FUN_1001e9e48
// address: 0x1001e9e48
// body: available
// range: 0x1001e9e48-0x1001ea783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ea568 to 0x1001e48fc FUN_1001e48fc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001ea698 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e9e48(undefined8 param_1,undefined8 param_2,char *param_3)

{
  DispatchWorkItemFlags qos;
  long lVar1;
  String SVar2;
  bool bVar3;
  uint uVar4;
  _StringGuts _Var5;
  ulong uVar6;
  undefined *puVar7;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  Logger LVar10;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  char *pcVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  MainActor *pMVar18;
  UnownedSerialExecutor UVar19;
  undefined8 *puVar20;
  _StringGuts _Var21;
  _StringGuts _Var22;
  char *pcVar23;
  void *pvVar24;
  undefined *puVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ID IVar29;
  long lVar30;
  long unaff_x22;
  undefined8 uVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
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
  char *local_70;
  undefined *puStack_68;
  
  IVar29 = *(ID *)(unaff_x22 + 0x158);
  _swift_dynamicCastObjCClass(IVar29,&_OBJC_CLASS___NSHTTPURLResponse);
  if ((IVar29 == 0) || (IVar29 = objc_stub::statusCode(IVar29), IVar29 != 200)) {
LAB_1001e9f74:
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x148);
    _Var5.unknown = *(undefined **)(unaff_x22 + 0x150);
    FUN_1001ec26c();
    pvVar24 = (void *)0x80000001004ddab0;
    if (_Var21.unknown == (undefined *)0xd000000000000020 &&
        _Var5.unknown == (undefined *)0x80000001004ddab0) {
      _swift_bridgeObjectRelease(_Var5.unknown);
LAB_1001e9fe4:
      SVar2 = *(String *)(unaff_x22 + 0x98);
      local_70 = (char *)0x0;
      puStack_68 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x57,_Var5);
      SVar37.bridgeObject = (void *)0x80000001004e0e50;
      SVar37.str = (char *)0xd000000000000041;
      SVar41.bridgeObject = pvVar24;
      SVar41.str = param_3;
      Swift::String::append(SVar37,SVar41);
      SVar42.bridgeObject = pvVar24;
      SVar42.str = param_3;
      Swift::String::append(SVar2,SVar42);
      uVar27 = 0xd000000000000014;
      SVar36.bridgeObject = (void *)0x80000001004e0ea0;
      SVar36.str = (char *)0xd000000000000014;
      SVar43.bridgeObject = pvVar24;
      SVar43.str = param_3;
      Swift::String::append(SVar36,SVar43);
      puVar17 = puStack_68;
      SVar2.bridgeObject = puStack_68;
      SVar2.str = local_70;
      local_70 = (char *)0x5b;
      puStack_68 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
      FUN_100026df4();
      pcVar23 = (char *)0x0;
      puVar25 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x68,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar27,uVar27);
      SVar44.bridgeObject = puVar25;
      SVar44.str = pcVar23;
      Swift::String::append(SVar37,SVar44);
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      SVar38.bridgeObject = (void *)0xe300000000000000;
      SVar38.str = (char *)0x5b205d;
      SVar45.bridgeObject = puVar25;
      SVar45.str = pcVar23;
      Swift::String::append(SVar38,SVar45);
      SVar39.bridgeObject = (void *)0xe300000000000000;
      SVar39.str = (char *)0x707061;
      SVar46.bridgeObject = puVar25;
      SVar46.str = pcVar23;
      Swift::String::append(SVar39,SVar46);
      SVar40.bridgeObject = (void *)0xe200000000000000;
      SVar40.str = (char *)0x205d;
      SVar47.bridgeObject = puVar25;
      SVar47.str = pcVar23;
      Swift::String::append(SVar40,SVar47);
      SVar48.bridgeObject = puVar25;
      SVar48.str = pcVar23;
      Swift::String::append(SVar2,SVar48);
      puVar25 = puStack_68;
      pcVar23 = local_70;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      lVar30 = *(long *)(unaff_x22 + 0x120);
      qos.unknown = *(undefined **)(unaff_x22 + 0x128);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar15 = *(long *)(unaff_x22 + 0x108);
      puVar7 = &DAT_100531e38;
      _swift_allocObject(&DAT_100531e38,0x30,7);
      *(char **)(puVar7 + 0x10) = pcVar23;
      *(undefined **)(puVar7 + 0x18) = puVar25;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x38) = puVar7;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x28) = &DAT_100531e50;
      pvVar24 = __Block_copy((void *)(unaff_x22 + 0x10));
      DVar8.unknown = puVar25;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      *(undefined **)(unaff_x22 + 0x78) = PTR___swiftEmptyArrayStorage_100524190;
      puVar20 = &DAT_100553db0;
      FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar7 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar9 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar27,unaff_x22 + 0x78,puVar7,puVar9,uVar28,puVar20);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar24);
      (**(code **)(lVar15 + 8))(uVar27,uVar28);
      (**(code **)(lVar30 + 8))(qos.unknown,uVar31);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      lVar30 = *(long *)(unaff_x22 + 0xf0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar31 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar28 = uVar31;
      FUN_100099338(uVar31,&DAT_100558f50);
      (**(code **)(lVar30 + 0x10))(uVar27,uVar28,uVar31);
      uVar4 = (uint)uVar27;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar10.unknown = puVar25;
      _swift_bridgeObjectRetain();
      pOVar11 = os::Logger::get_logObject(LVar10);
      pOVar12 = pOVar11;
      _os_log_type_enabled(pOVar11,uVar4 & 0xff);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar30 = *(long *)(unaff_x22 + 0xf0);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar33 = *(undefined8 *)(unaff_x22 + 0xe8);
      if ((int)pOVar12 == 0) {
        _swift_bridgeObjectRelease_n(puVar25,2);
        (**(code **)(lVar30 + 8))(uVar28,uVar33);
      }
      else {
        puVar13 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar14 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar13 = 0x8220102;
        local_70 = pcVar14;
        FUN_10012dbb0(pcVar23,puVar25,&local_70);
        *(char **)(puVar13 + 1) = pcVar23;
        _swift_bridgeObjectRelease_n(puVar25,2);
        __os_log_impl(0x100000000,pOVar11,uVar4 & 0xff,"%{public}s",puVar13,0xc);
        FUN_100043f24(pcVar14);
        _swift_slowDealloc(pcVar14,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
        (**(code **)(lVar30 + 8))(uVar28,uVar33);
      }
      FUN_100093624(uVar31,uVar27);
      _swift_bridgeObjectRelease(puVar17);
    }
    else {
      param_3 = (char *)0xd000000000000020;
      _Var22.unknown = _Var5.unknown;
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var21,_Var5,(_StringComparisonResult)0x20);
      _swift_bridgeObjectRelease(_Var5.unknown);
      _Var5.unknown = _Var22.unknown;
      if (bVar3) goto LAB_1001e9fe4;
      uVar6 = *(ulong *)(unaff_x22 + 0x148);
      _Var5.unknown = *(undefined **)(unaff_x22 + 0x150);
      FUN_1001ec608();
      if ((uVar6 & 1) != 0) goto LAB_1001e9fe4;
      FUN_100093624(*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x150));
    }
    uVar27 = *(undefined8 *)(unaff_x22 + 0x160);
  }
  else {
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x150);
    uVar4 = (uint)((ulong)_Var21.unknown >> 0x20);
    uVar26 = uVar4 >> 0x1e;
    if (1 < uVar4 >> 0x1e) {
      if ((uVar26 == 2) &&
         (_Var5.unknown = *(undefined **)(unaff_x22 + 0x148),
         *(long *)(_Var5.unknown + 0x10) != *(long *)(_Var5.unknown + 0x18))) goto LAB_1001e9f0c;
      goto LAB_1001e9f74;
    }
    if (uVar26 != 0) {
      _Var5.unknown = *(undefined **)(unaff_x22 + 0x148);
      if ((long)(int)_Var5.unknown != (long)_Var5.unknown >> 0x20) goto LAB_1001e9f0c;
      goto LAB_1001e9f74;
    }
    if (((ulong)_Var21.unknown & 0xff000000000000) == 0) goto LAB_1001e9f74;
    _Var5.unknown = *(undefined **)(unaff_x22 + 0x148);
LAB_1001e9f0c:
    FUN_1001ec26c();
    if ((_Var5.unknown == (undefined *)0xd000000000000020) &&
       (_Var21.unknown == (undefined *)0x80000001004ddab0)) {
      _swift_bridgeObjectRelease(0x80000001004ddab0);
      goto LAB_1001e9f74;
    }
    param_3 = (char *)0xd000000000000020;
    bVar3 = Swift::_stringCompareWithSmolCheck(_Var5,_Var21,(_StringComparisonResult)0x20);
    _swift_bridgeObjectRelease(_Var21.unknown);
    if (bVar3) goto LAB_1001e9f74;
    uVar6 = *(ulong *)(unaff_x22 + 0x148);
    FUN_1001ec608(uVar6,*(undefined8 *)(unaff_x22 + 0x150));
    if ((uVar6 & 1) != 0) goto LAB_1001e9f74;
    lVar30 = *(long *)(unaff_x22 + 0x160);
    Foundation::Data::_write
              ((URL)*(undefined **)(unaff_x22 + 0x90),(NSDataWritingOptions)0x1,
               (Data)*(undefined **)(unaff_x22 + 0x148));
    *(long *)(unaff_x22 + 0x168) = lVar30;
    if (lVar30 == 0) {
      pMVar18 = Swift::MainActor::typeMetadataAccessor();
      puVar17 = PTR_typeMetadataAccessor_1005246d8;
      pMVar18 = Swift::MainActor::get_shared(pMVar18,pMVar18);
      *(MainActor **)(unaff_x22 + 0x170) = pMVar18;
      puVar20 = &DAT_100558b80;
      FUN_100047f94(&DAT_100558b80,0xff,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0)
      ;
      UVar19 = Swift::Actor::get_unownedExecutor();
      pcVar32 = FUN_1001ea784;
      goto LAB_1001ea674;
    }
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x150));
    _swift_errorRelease(lVar30);
    uVar27 = 0;
  }
  *(undefined8 *)(unaff_x22 + 0x178) = uVar27;
  uVar28 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar15 = *(long *)(unaff_x22 + 200);
  lVar30 = *(long *)(unaff_x22 + 0xd0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(lVar1 + 0x38))(uVar28,1,1,uVar27);
  lVar35 = (long)*(int *)(lVar15 + 0x30);
  FUN_100077938(uVar31,lVar30);
  FUN_100077938(uVar28,lVar30 + lVar35);
  pcVar32 = *(code **)(lVar1 + 0x30);
  lVar15 = lVar30;
  (*pcVar32)(lVar30,1,uVar27);
  if ((int)lVar15 == 1) {
    uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xe0),&DAT_100553d90,&DAT_10041bf10);
    lVar30 = lVar30 + lVar35;
    (*pcVar32)(lVar30,1,uVar27);
    if ((int)lVar30 != 1) {
LAB_1001ea504:
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xd0),&DAT_10054ea38,&DAT_100426270);
LAB_1001ea51c:
      plVar16 = (long *)0xa0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x180) = plVar16;
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_1001ea8b8;
      FUN_1001e48fc(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0),
                    *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0xa8));
      return;
    }
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xd0),&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_100077938(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
    lVar15 = lVar30 + lVar35;
    (*pcVar32)(lVar15,1,uVar27);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xe0);
    if ((int)lVar15 == 1) {
      uVar31 = *(undefined8 *)(unaff_x22 + 0xb0);
      lVar30 = *(long *)(unaff_x22 + 0xb8);
      FUN_10002a29c(uVar28,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar30 + 8))(uVar27,uVar31);
      goto LAB_1001ea504;
    }
    uVar33 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar15 = *(long *)(unaff_x22 + 0xb8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xb0);
    (**(code **)(lVar15 + 0x20))(uVar31,lVar30 + lVar35,uVar34);
    puVar17 = &DAT_100553da0;
    FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar3 = Swift::Equatable::___infix(uVar27,uVar31,uVar34,puVar17);
    pcVar32 = *(code **)(lVar15 + 8);
    (*pcVar32)(uVar31,uVar34);
    FUN_10002a29c(uVar28,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar32)(uVar27,uVar34);
    FUN_10002a29c(uVar33,&DAT_100553d90,&DAT_10041bf10);
    if (!bVar3) goto LAB_1001ea51c;
  }
  pMVar18 = Swift::MainActor::typeMetadataAccessor();
  puVar17 = PTR_typeMetadataAccessor_1005246d8;
  pMVar18 = Swift::MainActor::get_shared(pMVar18,pMVar18);
  *(MainActor **)(unaff_x22 + 0x188) = pMVar18;
  puVar20 = &DAT_100558b80;
  FUN_100047f94(&DAT_100558b80,0xff,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar19 = Swift::Actor::get_unownedExecutor();
  pcVar32 = FUN_1001ea98c;
LAB_1001ea674:
  _swift_task_switch(pcVar32,UVar19.unknown,puVar20);
  return;
}

