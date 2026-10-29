// rea decompile_all
// name: FUN_100117f38
// address: 0x100117f38
// body: available
// range: 0x100117f38-0x1001185f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011809c to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100117f38(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags qos;
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  State SVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined *puVar17;
  _StringGuts _Var18;
  char *pcVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
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
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  char *local_68;
  undefined *puStack_60;
  
  puVar10 = (undefined8 *)
            (*(long *)(unaff_x22 + 0x188) + (long)*(int *)(*(long *)(unaff_x22 + 0x1e0) + 0x30));
  uVar7 = *puVar10;
  uVar26 = puVar10[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar26;
  SVar5.unknown = &DAT_10054ba40;
  _Var18.unknown = &DAT_100423be0;
  FUN_100002f94();
  *(undefined **)(unaff_x22 + 0x268) = SVar5.unknown;
  SwiftUI::State::get_wrappedValue(SVar5);
  if (1 < *(long *)(unaff_x22 + 0x158)) {
    SVar33 = *(String *)(unaff_x22 + 0x170);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
    local_68 = (char *)0x0;
    puStack_60 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x46,_Var18);
    SVar35.bridgeObject = (void *)0x80000001004ddae0;
    SVar35.str = (char *)0xd000000000000032;
    SVar39.bridgeObject = param_4;
    SVar39.str = param_3;
    Swift::String::append(SVar35,SVar39);
    SVar40.bridgeObject = param_4;
    SVar40.str = param_3;
    Swift::String::append(SVar33,SVar40);
    SVar32.bridgeObject = (void *)0xe700000000000000;
    SVar32.str = (char *)0x20726574666120;
    SVar41.bridgeObject = param_4;
    SVar41.str = param_3;
    Swift::String::append(SVar32,SVar41);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar26;
    SwiftUI::State::get_wrappedValue(SVar5);
    SVar33 = Swift::CustomStringConvertible::get_description();
    SVar42.bridgeObject = param_4;
    SVar42.str = param_3;
    Swift::String::append(SVar33,SVar42);
    _swift_bridgeObjectRelease(SVar33.bridgeObject);
    uVar7 = 0x74706d6574746120;
    SVar34.bridgeObject = (void *)0xe900000000000073;
    SVar34.str = (char *)0x74706d6574746120;
    SVar43.bridgeObject = param_4;
    SVar43.str = param_3;
    Swift::String::append(SVar34,SVar43);
    puVar17 = puStack_60;
    SVar33.bridgeObject = puStack_60;
    SVar33.str = local_68;
    local_68 = (char *)0x5b;
    puStack_60 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 200) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xe100000000000000;
    FUN_100026df4();
    pcVar19 = (char *)0x0;
    puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 0xd0),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar7,uVar7);
    SVar44.bridgeObject = puVar20;
    SVar44.str = pcVar19;
    Swift::String::append(SVar35,SVar44);
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    SVar36.bridgeObject = (void *)0xe300000000000000;
    SVar36.str = (char *)0x5b205d;
    SVar45.bridgeObject = puVar20;
    SVar45.str = pcVar19;
    Swift::String::append(SVar36,SVar45);
    SVar37.bridgeObject = (void *)0xe300000000000000;
    SVar37.str = (char *)0x707061;
    SVar46.bridgeObject = puVar20;
    SVar46.str = pcVar19;
    Swift::String::append(SVar37,SVar46);
    SVar38.bridgeObject = (void *)0xe200000000000000;
    SVar38.str = (char *)0x205d;
    SVar47.bridgeObject = puVar20;
    SVar47.str = pcVar19;
    Swift::String::append(SVar38,SVar47);
    SVar48.bridgeObject = puVar20;
    SVar48.str = pcVar19;
    Swift::String::append(SVar33,SVar48);
    puVar20 = puStack_60;
    pcVar19 = local_68;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar21 = *(long *)(unaff_x22 + 0x1d0);
    qos.unknown = *(undefined **)(unaff_x22 + 0x1d8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar25 = *(long *)(unaff_x22 + 0x1b8);
    puVar8 = &DAT_10052cd40;
    _swift_allocObject(&DAT_10052cd40,0x30,7);
    *(char **)(puVar8 + 0x10) = pcVar19;
    *(undefined **)(puVar8 + 0x18) = puVar20;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x60) = FUN_100099310;
    *(undefined **)(unaff_x22 + 0x68) = puVar8;
    *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x58) = &DAT_10052cd58;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x40));
    DVar9.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
    puVar10 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar8;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x140,puVar8,puVar11,uVar26,puVar10);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar25 + 8))(uVar7,uVar26);
    (**(code **)(lVar21 + 8))(qos.unknown,uVar22);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar21 = *(long *)(unaff_x22 + 0x198);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar22 = *(undefined8 *)(unaff_x22 + 400);
    uVar26 = uVar22;
    FUN_100099338(uVar22,&DAT_100558f50);
    (**(code **)(lVar21 + 0x10))(uVar7,uVar26,uVar22);
    uVar4 = (uint)uVar7;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar12);
    pOVar14 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar4 & 0xff);
    lVar21 = *(long *)(unaff_x22 + 0x198);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 400);
    if ((int)pOVar14 == 0) {
      _swift_bridgeObjectRelease_n(puVar20,2);
    }
    else {
      puVar15 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar16 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar15 = 0x8220102;
      local_68 = pcVar16;
      FUN_10012dbb0(pcVar19,puVar20,&local_68);
      *(char **)(puVar15 + 1) = pcVar19;
      _swift_bridgeObjectRelease_n(puVar20,2);
      __os_log_impl(0x100000000,pOVar13,uVar4 & 0xff,"%{public}s",puVar15,0xc);
      FUN_100043f24(pcVar16);
      _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar21 + 8))(uVar7,uVar26);
    _swift_bridgeObjectRelease(puVar17);
    lVar21 = *(long *)(unaff_x22 + 0x188);
    iVar2 = *(int *)(*(long *)(unaff_x22 + 0x1e0) + 0x28);
    *(undefined1 *)(unaff_x22 + 0x2b0) = 0;
    puVar17 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar21 + iVar2),unaff_x22 + 0x2b0,puVar17);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x0001001185a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar26;
  _swift_retain(uVar26);
  SwiftUI::State::get_wrappedValue(SVar5);
  if (!SCARRY8(*(long *)(unaff_x22 + 0x130),1)) {
    *(undefined8 *)(unaff_x22 + 0x110) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar26;
    *(long *)(unaff_x22 + 0x120) = *(long *)(unaff_x22 + 0x130) + 1;
    SwiftUI::State::set_wrappedValue((State *)(unaff_x22 + 0x110),unaff_x22 + 0x120,SVar5.unknown);
    _swift_release(uVar26);
    if (DAT_100556f80 != -1) {
      _swift_once(&DAT_100556f80,FUN_1001dd604);
    }
    lVar25 = *(long *)(unaff_x22 + 0x1e0);
    lVar21 = *(long *)(unaff_x22 + 0x188);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x270) = DAT_100577cf0;
    FUN_1001dbd0c(uVar7,uVar26,lVar21 + *(int *)(lVar25 + 0x14));
    FUN_100113fec();
    *(undefined8 *)(unaff_x22 + 0x278) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x280) = uVar26;
    puVar10 = (undefined8 *)(lVar21 + *(int *)(lVar25 + 0x1c));
    *(undefined8 *)(unaff_x22 + 0x288) = *puVar10;
    *(undefined1 *)(unaff_x22 + 0x2b3) = *(undefined1 *)(puVar10 + 1);
    *(undefined8 *)(unaff_x22 + 0x290) = 0;
    plVar6 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x298) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1001185f8;
    (extension_Swift)::Swift::Task::_sleep(250000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001185b0);
  (*pcVar3)();
}

