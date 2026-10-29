// rea decompile_all
// name: FUN_10007fd7c
// address: 0x10007fd7c
// body: available
// range: 0x10007fd7c-0x100080b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100080370 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100080a3c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007fd7c(void)

{
  undefined1 *puVar1;
  int iVar2;
  String SVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  State SVar9;
  undefined *puVar10;
  Animation AVar11;
  Duration DVar12;
  void *aBlock;
  _StringGuts _Var13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  _StringGuts _Var19;
  Date DVar20;
  long *plVar21;
  _StringGuts _Var22;
  char *pcVar23;
  void *in_x3;
  _StringGuts _Var24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  Date DVar40;
  long unaff_x22;
  undefined8 uVar41;
  undefined8 uVar42;
  String *pSVar43;
  undefined8 uVar44;
  String *pSVar45;
  undefined8 uVar46;
  DispatchWorkItemFlags qos;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
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
  _StringGuts local_78;
  _StringGuts local_70;
  
  lVar36 = *(long *)(unaff_x22 + 0x148);
  lVar8 = 0;
  FUN_100095ec0();
  *(long *)(unaff_x22 + 800) = lVar8;
  if (*(char *)(lVar36 + *(int *)(lVar8 + 0x18)) != '\x01') {
    lVar34 = *(long *)(unaff_x22 + 0x2f0);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x2d0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x308));
    FUN_100029504(lVar36,uVar38,FUN_10009e280);
    (**(code **)(lVar34 + 0x38))(uVar38,0,1,uVar41);
    iVar2 = *(int *)(lVar8 + 0x40);
    FUN_1000087e4(uVar38,uVar25,&DAT_10054c040,&DAT_100420500);
    puVar10 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    SwiftUI::State::set_wrappedValue((State *)(lVar36 + iVar2),uVar25,puVar10);
    FUN_10002a29c(uVar38,&DAT_10054c040,&DAT_100420500);
LAB_10007fed0:
    uVar48 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar49 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar46 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar47 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar38 = *(undefined8 *)(unaff_x22 + 600);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar48);
    _swift_task_dealloc(uVar49);
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar39);
    _swift_task_dealloc(uVar42);
    _swift_task_dealloc(uVar44);
    _swift_task_dealloc(uVar46);
    _swift_task_dealloc(uVar47);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar41);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar38);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar27);
                    /* WARNING: Could not recover jumptable at 0x00010007fff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar36 = *(long *)(unaff_x22 + 0x2f0);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x2e0);
  SVar9.unknown = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  SwiftUI::State::get_wrappedValue(SVar9);
  (**(code **)(lVar36 + 0x30))(uVar41,1,uVar38);
  if ((int)uVar41 == 1) {
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x2e0),&DAT_10054c040,&DAT_100420500);
  }
  else {
    pSVar45 = *(String **)(unaff_x22 + 0x300);
    pSVar43 = *(String **)(unaff_x22 + 0x148);
    pcVar28 = FUN_10009e280;
    FUN_100007e64(*(undefined8 *)(unaff_x22 + 0x2e0),pSVar45);
    local_78.unknown = pSVar45->str;
    local_70.unknown = pSVar45->bridgeObject;
    SVar3 = *pSVar45;
    _swift_bridgeObjectRetain();
    SVar53.bridgeObject = (void *)0xe100000000000000;
    SVar53.str = (char *)0x7c;
    SVar57.bridgeObject = in_x3;
    SVar57.str = (char *)pcVar28;
    Swift::String::append(SVar53,SVar57);
    _Var19.unknown = local_70.unknown;
    SVar53 = pSVar45[1];
    _swift_bridgeObjectRetain(local_70.unknown);
    SVar58.bridgeObject = in_x3;
    SVar58.str = (char *)pcVar28;
    Swift::String::append(SVar53,SVar58);
    _swift_bridgeObjectRelease(_Var19.unknown);
    _Var4.unknown = local_70.unknown;
    _Var19.unknown = local_78.unknown;
    local_78.unknown = pSVar43->str;
    local_70.unknown = pSVar43->bridgeObject;
    SVar57 = *pSVar43;
    _swift_bridgeObjectRetain(local_70.unknown);
    SVar50.bridgeObject = (void *)0xe100000000000000;
    SVar50.str = (char *)0x7c;
    SVar59.bridgeObject = in_x3;
    SVar59.str = (char *)pcVar28;
    Swift::String::append(SVar50,SVar59);
    _Var5.unknown = local_70.unknown;
    SVar53 = pSVar43[1];
    _swift_bridgeObjectRetain(local_70.unknown);
    SVar60.bridgeObject = in_x3;
    SVar60.str = (char *)pcVar28;
    Swift::String::append(SVar53,SVar60);
    _swift_bridgeObjectRelease(_Var5.unknown);
    _Var5.unknown = local_70.unknown;
    if ((_Var19.unknown == local_78.unknown) && (_Var4.unknown == local_70.unknown)) {
      _swift_bridgeObjectRelease(local_70.unknown);
      _swift_bridgeObjectRelease(_Var4.unknown);
    }
    else {
      _Var13.unknown = _Var4.unknown;
      _Var22.unknown = local_78.unknown;
      _Var24.unknown = local_70.unknown;
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var19,_Var4,(_StringComparisonResult)(__int8)local_78.unknown);
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(_Var4.unknown);
      if (!bVar6) {
        local_78.unknown = (undefined *)0x0;
        local_70.unknown = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x18,_Var13);
        _swift_bridgeObjectRelease(local_70.unknown);
        local_78.unknown = (char *)0x6c6261746e727554;
        local_70.unknown = (void *)0xec00000022203a65;
        SVar61.bridgeObject = _Var24.unknown;
        SVar61.str = _Var22.unknown;
        Swift::String::append(SVar3,SVar61);
        SVar51.bridgeObject = (void *)0xa700000000000000;
        SVar51.str = (char *)0x22209286e22022;
        SVar62.bridgeObject = _Var24.unknown;
        SVar62.str = _Var22.unknown;
        Swift::String::append(SVar51,SVar62);
        SVar63.bridgeObject = _Var24.unknown;
        SVar63.str = _Var22.unknown;
        Swift::String::append(SVar57,SVar63);
        SVar52.bridgeObject = (void *)0xe100000000000000;
        SVar52.str = (char *)0x22;
        uVar41 = 0x22;
        SVar64.bridgeObject = _Var24.unknown;
        SVar64.str = _Var22.unknown;
        Swift::String::append(SVar52,SVar64);
        _Var4.unknown = local_70.unknown;
        SVar3.bridgeObject = local_70.unknown;
        SVar3.str = local_78.unknown;
        local_78.unknown = (char *)0x5b;
        local_70.unknown = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x88) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0x90) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0x98) = 0x20;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0xe100000000000000;
        FUN_100026df4();
        pcVar23 = (char *)0x0;
        puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar53 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0x98,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar41,uVar41);
        SVar65.bridgeObject = puVar10;
        SVar65.str = pcVar23;
        Swift::String::append(SVar53,SVar65);
        _swift_bridgeObjectRelease(SVar53.bridgeObject);
        SVar54.bridgeObject = (void *)0xe300000000000000;
        SVar54.str = (char *)0x5b205d;
        SVar66.bridgeObject = puVar10;
        SVar66.str = pcVar23;
        Swift::String::append(SVar54,SVar66);
        SVar55.bridgeObject = (void *)0xe500000000000000;
        SVar55.str = (char *)0x616964656d;
        SVar67.bridgeObject = puVar10;
        SVar67.str = pcVar23;
        Swift::String::append(SVar55,SVar67);
        SVar56.bridgeObject = (void *)0xe200000000000000;
        SVar56.str = (char *)0x205d;
        SVar68.bridgeObject = puVar10;
        SVar68.str = pcVar23;
        Swift::String::append(SVar56,SVar68);
        SVar69.bridgeObject = puVar10;
        SVar69.str = pcVar23;
        Swift::String::append(SVar3,SVar69);
        _Var5.unknown = local_70.unknown;
        _Var19.unknown = local_78.unknown;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        qos.unknown = *(undefined **)(unaff_x22 + 0x2c8);
        lVar34 = *(long *)(unaff_x22 + 0x2c0);
        uVar41 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x2b0);
        lVar36 = *(long *)(unaff_x22 + 0x2a8);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x2a0);
        puVar10 = &DAT_100528528;
        _swift_allocObject(&DAT_100528528,0x30,7);
        *(undefined **)(puVar10 + 0x10) = _Var19.unknown;
        *(undefined **)(puVar10 + 0x18) = _Var5.unknown;
        *(undefined8 *)(puVar10 + 0x20) = 0;
        *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0x48) = FUN_100099310;
        *(undefined **)(unaff_x22 + 0x50) = puVar10;
        *(undefined **)(unaff_x22 + 0x28) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x30) = 0x42000000;
        *(code **)(unaff_x22 + 0x38) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x40) = &DAT_100528540;
        aBlock = __Block_copy((void *)(unaff_x22 + 0x28));
        _Var13.unknown = _Var5.unknown;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified((DispatchQoS)_Var13.unknown);
        *(undefined **)(unaff_x22 + 0x108) = PTR___swiftEmptyArrayStorage_100524190;
        puVar14 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar10 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar15 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(uVar38,unaff_x22 + 0x108,puVar10,puVar15,uVar25,puVar14);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar36 + 8))(uVar38,uVar25);
        (**(code **)(lVar34 + 8))(qos.unknown,uVar41);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        uVar41 = *(undefined8 *)(unaff_x22 + 0x298);
        lVar36 = *(long *)(unaff_x22 + 0x290);
        DVar40.unknown = *(undefined **)(unaff_x22 + 0x288);
        puVar10 = DVar40.unknown;
        FUN_100099338(DVar40.unknown,&DAT_100558f50);
        (**(code **)(lVar36 + 0x10))(uVar41,puVar10);
        uVar7 = (uint)uVar41;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        _Var13.unknown = _Var5.unknown;
        _swift_bridgeObjectRetain();
        pOVar16 = os::Logger::get_logObject((Logger)_Var13.unknown);
        pOVar17 = pOVar16;
        _os_log_type_enabled(pOVar16,uVar7 & 0xff);
        uVar41 = *(undefined8 *)(unaff_x22 + 0x298);
        lVar36 = *(long *)(unaff_x22 + 0x290);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x288);
        if ((int)pOVar17 == 0) {
          _swift_bridgeObjectRelease_n(_Var5.unknown,2);
        }
        else {
          puVar18 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar23 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar18 = 0x8220102;
          local_78.unknown = pcVar23;
          FUN_10012dbb0(_Var19.unknown,_Var5.unknown,&local_78);
          *(undefined **)(puVar18 + 1) = _Var19.unknown;
          _swift_bridgeObjectRelease_n(_Var5.unknown,2);
          __os_log_impl(0x100000000,pOVar16,uVar7 & 0xff,"%{public}s",puVar18,0xc);
          FUN_100043f24(pcVar23);
          _swift_slowDealloc(pcVar23,0xffffffffffffffff,0xffffffffffffffff);
          DVar40.unknown = (undefined *)0xffffffffffffffff;
          _swift_slowDealloc(puVar18,0xffffffffffffffff);
        }
        (**(code **)(lVar36 + 8))(uVar41,uVar38);
        _swift_bridgeObjectRelease(_Var4.unknown);
        lVar36 = *(long *)(unaff_x22 + 0x148);
        iVar2 = *(int *)(lVar8 + 0x30);
        *(undefined1 *)(unaff_x22 + 0x6a) = 1;
        AVar11.unknown = &DAT_10054ab50;
        FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
        SwiftUI::State::set_wrappedValue((State *)(lVar36 + iVar2),unaff_x22 + 0x6a,AVar11.unknown);
        puVar1 = (undefined1 *)(lVar36 + *(int *)(lVar8 + 0x24));
        uVar41 = *(undefined8 *)(puVar1 + 8);
        *(undefined1 *)(unaff_x22 + 0xb8) = *puVar1;
        *(undefined8 *)(unaff_x22 + 0xc0) = uVar41;
        SwiftUI::State::get_wrappedValue((State)AVar11.unknown);
        if (*(char *)(unaff_x22 + 0x6b) == '\x01') {
          uVar41 = *(undefined8 *)(unaff_x22 + 0x148);
          DVar12.unknown = (undefined *)SwiftUI::Animation::easeInOut(0.35,AVar11);
          *(undefined8 *)(unaff_x22 + 0x140) = uVar41;
          pcVar28 = FUN_10009939c;
          SwiftUI::_withAnimation();
          _swift_release();
          DVar12 = Swift::Duration::seconds(0.38,DVar12);
          (extension_Swift)::Swift::Clock::_get_continuous();
          plVar21 = (long *)0x80;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x328) = plVar21;
          *plVar21 = unaff_x22;
          plVar21[1] = (long)FUN_100080ba0;
        }
        else {
          lVar8 = *(long *)(unaff_x22 + 800);
          lVar36 = *(long *)(unaff_x22 + 0x300);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x228);
          lVar34 = *(long *)(unaff_x22 + 0x208);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x1e8);
          DVar20 = Foundation::Date::init();
          Foundation::Date::addingTimeInterval(1.5,DVar20);
          pcVar28 = *(code **)(lVar34 + 8);
          *(code **)(unaff_x22 + 0x368) = pcVar28;
          (*pcVar28)(uVar41,uVar38);
          *(undefined4 *)(unaff_x22 + 0x6c) = *(undefined4 *)(lVar8 + 0x44);
          lVar36 = *(long *)(lVar36 + 0x28);
          *(long *)(unaff_x22 + 0x370) = lVar36;
          AVar11.unknown = *(undefined **)(unaff_x22 + 0x2f8);
          SVar9.unknown = &DAT_10054efb8;
          FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
          SwiftUI::State::get_wrappedValue(SVar9);
          lVar8 = *(long *)(AVar11.unknown + 0x28);
          FUN_100095498();
          if (lVar8 == lVar36) {
            pcVar28 = *(code **)(unaff_x22 + 0x368);
            DVar20.unknown = *(undefined **)(unaff_x22 + 0x230);
            AVar11.unknown = *(undefined **)(unaff_x22 + 0x228);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x1e8);
            Foundation::Date::init();
            bVar6 = Foundation::Date::<_infix((Date)AVar11.unknown,DVar20,DVar40);
            (*pcVar28)(AVar11.unknown,uVar41);
            if (bVar6) {
              (extension_Swift)::Swift::Clock::_get_continuous();
              *(undefined8 *)(unaff_x22 + 0xe0) = 0;
              *(undefined8 *)(unaff_x22 + 0xd8) = 50000000000000000;
              *(undefined8 *)(unaff_x22 + 0x58) = 0;
              *(undefined8 *)(unaff_x22 + 0x60) = 0;
              *(undefined1 *)(unaff_x22 + 0x68) = 1;
              _swift_task_switch(FUN_100081e54,0,0);
              return;
            }
          }
          uVar41 = *(undefined8 *)(unaff_x22 + 0x148);
          AVar11 = SwiftUI::Animation::easeInOut(0.12,AVar11);
          *(undefined8 *)(unaff_x22 + 0x1c0) = uVar41;
          SwiftUI::_withAnimation();
          _swift_release();
          AVar11 = SwiftUI::Animation::easeIn(0.31,AVar11);
          *(undefined8 *)(unaff_x22 + 0x1a0) = uVar41;
          SwiftUI::_withAnimation();
          _swift_release();
          AVar11 = SwiftUI::Animation::easeOut(0.31,AVar11);
          DVar12.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar11);
          _swift_release(AVar11.unknown);
          *(undefined8 *)(unaff_x22 + 0x160) = uVar41;
          pcVar28 = FUN_100099384;
          SwiftUI::_withAnimation();
          _swift_release();
          DVar12 = Swift::Duration::seconds(0.66,DVar12);
          (extension_Swift)::Swift::Clock::_get_continuous();
          plVar21 = (long *)0x80;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x390) = plVar21;
          *plVar21 = unaff_x22;
          plVar21[1] = (long)FUN_1000827b4;
        }
        goto LAB_100080334;
      }
    }
    FUN_100095498(*(undefined8 *)(unaff_x22 + 0x300));
  }
  lVar8 = *(long *)(unaff_x22 + 800);
  lVar36 = *(long *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  SwiftUI::Transaction::set_disablesAnimations((Transaction *)(unaff_x22 + 0x128),true);
  *(undefined **)(unaff_x22 + 0x3a0) = *(undefined **)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x80) = lVar36;
  SwiftUI::_withTransaction((Transaction)*(undefined **)(unaff_x22 + 0x128));
  puVar1 = (undefined1 *)(lVar36 + *(int *)(lVar8 + 0x3c));
  uVar41 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0xf8) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar41;
  DVar12.unknown = &DAT_10054ab50;
  pcVar28 = (code *)&DAT_10041d0f0;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  *(undefined **)(unaff_x22 + 0x3a8) = DVar12.unknown;
  SVar9.unknown = DVar12.unknown;
  SwiftUI::State::get_wrappedValue((State)DVar12.unknown);
  if (*(char *)(unaff_x22 + 0x3f2) == '\x01') {
    uVar41 = *(undefined8 *)(unaff_x22 + 0x148);
    AVar11 = SwiftUI::Animation::easeInOut(0.15,SVar9.unknown);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar41;
    pcVar28 = FUN_1000992c8;
    SwiftUI::_withAnimation();
    _swift_release(AVar11.unknown);
  }
  puVar1 = (undefined1 *)
           (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x24));
  uVar41 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0xe8) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar41;
  SwiftUI::State::get_wrappedValue((State)DVar12.unknown);
  if ((*(byte *)(unaff_x22 + 0x3f1) & 1) == 0) {
    DVar12 = Swift::Duration::seconds(0.25,DVar12);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar21 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3b0) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100083138;
  }
  else {
    AVar11.unknown = *(undefined **)(unaff_x22 + 0x3a8);
    puVar1 = (undefined1 *)
             (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x28));
    uVar41 = *(undefined8 *)(puVar1 + 8);
    *(undefined1 *)(unaff_x22 + 200) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar41;
    SwiftUI::State::get_wrappedValue((State)AVar11.unknown);
    if (*(char *)(unaff_x22 + 0x3f0) != '\x01') {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x308));
      AVar11.unknown = *(undefined **)(unaff_x22 + 0x3a8);
      puVar1 = (undefined1 *)
               (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x2c));
      uVar41 = *(undefined8 *)(puVar1 + 8);
      *(undefined1 *)(unaff_x22 + 0xa8) = *puVar1;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar41;
      SwiftUI::State::get_wrappedValue((State)AVar11.unknown);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
      if (*(char *)(unaff_x22 + 0x69) == '\x01') {
        uVar38 = *(undefined8 *)(unaff_x22 + 0x148);
        AVar11 = SwiftUI::Animation::easeInOut(0.8,AVar11);
        *(undefined8 *)(unaff_x22 + 0x200) = uVar38;
        SwiftUI::_withAnimation();
        _swift_release(AVar11.unknown);
      }
      _swift_release(uVar41);
      goto LAB_10007fed0;
    }
    uVar41 = *(undefined8 *)(unaff_x22 + 0x148);
    DVar12.unknown = (undefined *)SwiftUI::Animation::spring(1.0,0.9,0.0,AVar11);
    *(undefined8 *)(unaff_x22 + 0x220) = uVar41;
    pcVar28 = FUN_1000992ac;
    SwiftUI::_withAnimation();
    _swift_release();
    DVar12 = Swift::Duration::seconds(0.9,DVar12);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar21 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3e0) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100083d2c;
  }
LAB_100080334:
  FUN_100227100(DVar12.unknown,pcVar28,0,0,1);
  return;
}

