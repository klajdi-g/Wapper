// rea decompile_all
// name: FUN_1001191c4
// address: 0x1001191c4
// body: available
// range: 0x1001191c4-0x10011984f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001196f8 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001191c4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags qos;
  undefined8 uVar1;
  int iVar2;
  String SVar3;
  uint uVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  char *pcVar13;
  long *plVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  undefined8 uVar25;
  undefined8 uVar26;
  State SVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
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
  char *local_68;
  undefined *puStack_60;
  
  lVar18 = *(long *)(unaff_x22 + 0x138);
  if (lVar18 == 0) {
    lVar18 = *(long *)(unaff_x22 + 0x290) + 1;
    if (lVar18 != 0x14) {
      *(long *)(unaff_x22 + 0x290) = lVar18;
      plVar14 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x298) = plVar14;
      *plVar14 = unaff_x22;
      plVar14[1] = (long)FUN_1001185f8;
      (extension_Swift)::Swift::Task::_sleep(250000000);
      return;
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x250);
    SVar3 = *(String *)(unaff_x22 + 0x170);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x280));
    _swift_release(uVar25);
    local_68 = (char *)0x0;
    puStack_60 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x46,param_2);
    SVar34.bridgeObject = (void *)0x80000001004ddb20;
    SVar34.str = (char *)0xd00000000000002f;
    SVar38.bridgeObject = param_4;
    SVar38.str = param_3;
    Swift::String::append(SVar34,SVar38);
    SVar39.bridgeObject = param_4;
    SVar39.str = param_3;
    Swift::String::append(SVar3,SVar39);
    uVar25 = 0xd000000000000015;
    SVar33.bridgeObject = (void *)0x80000001004ddb50;
    SVar33.str = (char *)0xd000000000000015;
    SVar40.bridgeObject = param_4;
    SVar40.str = param_3;
    Swift::String::append(SVar33,SVar40);
    puVar15 = puStack_60;
    SVar3.bridgeObject = puStack_60;
    SVar3.str = local_68;
    local_68 = (char *)0x5b;
    puStack_60 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0xe100000000000000;
    FUN_100026df4();
    pcVar16 = (char *)0x0;
    puVar17 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar34 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0xe0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar25,uVar25);
    SVar41.bridgeObject = puVar17;
    SVar41.str = pcVar16;
    Swift::String::append(SVar34,SVar41);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    SVar35.bridgeObject = (void *)0xe300000000000000;
    SVar35.str = (char *)0x5b205d;
    SVar42.bridgeObject = puVar17;
    SVar42.str = pcVar16;
    Swift::String::append(SVar35,SVar42);
    SVar36.bridgeObject = (void *)0xe300000000000000;
    SVar36.str = (char *)0x707061;
    SVar43.bridgeObject = puVar17;
    SVar43.str = pcVar16;
    Swift::String::append(SVar36,SVar43);
    SVar37.bridgeObject = (void *)0xe200000000000000;
    SVar37.str = (char *)0x205d;
    SVar44.bridgeObject = puVar17;
    SVar44.str = pcVar16;
    Swift::String::append(SVar37,SVar44);
    SVar45.bridgeObject = puVar17;
    SVar45.str = pcVar16;
    Swift::String::append(SVar3,SVar45);
    puVar17 = puStack_60;
    pcVar16 = local_68;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar18 = *(long *)(unaff_x22 + 0x1d0);
    qos.unknown = *(undefined **)(unaff_x22 + 0x1d8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar28 = *(long *)(unaff_x22 + 0x1b8);
    puVar5 = &DAT_10052cde0;
    _swift_allocObject(&DAT_10052cde0,0x30,7);
    *(char **)(puVar5 + 0x10) = pcVar16;
    *(undefined **)(puVar5 + 0x18) = puVar17;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar5;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052cdf8;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar6.unknown = puVar17;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    *(undefined **)(unaff_x22 + 0x150) = PTR___swiftEmptyArrayStorage_100524190;
    puVar7 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = puVar5;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar25,unaff_x22 + 0x150,puVar5,puVar8,uVar22,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar28 + 8))(uVar25,uVar22);
    (**(code **)(lVar18 + 8))(qos.unknown,uVar21);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar25 = *(undefined8 *)(unaff_x22 + 400);
    lVar18 = *(long *)(unaff_x22 + 0x198);
    uVar22 = uVar25;
    FUN_100099338(uVar25,&DAT_100558f50);
    (**(code **)(lVar18 + 0x10))(uVar21,uVar22,uVar25);
    uVar4 = (uint)uVar21;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar9.unknown = puVar17;
    _swift_bridgeObjectRetain();
    pOVar10 = os::Logger::get_logObject(LVar9);
    pOVar11 = pOVar10;
    _os_log_type_enabled(pOVar10,uVar4 & 0xff);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar25 = *(undefined8 *)(unaff_x22 + 400);
    lVar18 = *(long *)(unaff_x22 + 0x198);
    if ((int)pOVar11 == 0) {
      _swift_bridgeObjectRelease_n(puVar17,2);
    }
    else {
      puVar12 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar13 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar12 = 0x8220102;
      local_68 = pcVar13;
      FUN_10012dbb0(pcVar16,puVar17,&local_68);
      *(char **)(puVar12 + 1) = pcVar16;
      _swift_bridgeObjectRelease_n(puVar17,2);
      __os_log_impl(0x100000000,pOVar10,uVar4 & 0xff,"%{public}s",puVar12,0xc);
      FUN_100043f24(pcVar13);
      _swift_slowDealloc(pcVar13,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar18 + 8))(uVar22,uVar25);
    _swift_bridgeObjectRelease(puVar15);
    lVar18 = *(long *)(unaff_x22 + 0x188);
    iVar2 = *(int *)(*(long *)(unaff_x22 + 0x1e0) + 0x28);
    *(undefined1 *)(unaff_x22 + 0x2b1) = 0;
    puVar15 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar18 + iVar2),unaff_x22 + 0x2b1,puVar15);
  }
  else {
    SVar27.unknown = *(undefined **)(unaff_x22 + 0x268);
    lVar20 = *(long *)(unaff_x22 + 0x1e0);
    lVar28 = *(long *)(unaff_x22 + 0x180);
    lVar30 = *(long *)(unaff_x22 + 0x188);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
    puVar7 = (undefined8 *)(lVar30 + *(int *)(lVar20 + 0x2c));
    uVar25 = *puVar7;
    *(undefined8 *)(unaff_x22 + 0xa8) = puVar7[1];
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar25;
    SwiftUI::State::get_wrappedValue(SVar27);
    if (lVar28 == *(long *)(unaff_x22 + 0x160)) {
      if (DAT_1005528e0 != -1) {
        _swift_once(&DAT_1005528e0,FUN_1000fe734);
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 0x280);
      lVar28 = *(long *)(unaff_x22 + 0x1e0);
      lVar30 = *(long *)(unaff_x22 + 0x188);
      FUN_1000fec60(lVar18,*(undefined8 *)(unaff_x22 + 0x278),uVar25);
      _swift_bridgeObjectRelease(uVar25);
      iVar2 = *(int *)(lVar28 + 0x24);
      *(long *)(unaff_x22 + 0x168) = lVar18;
      puVar15 = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar30 + iVar2),unaff_x22 + 0x168,puVar15);
      iVar2 = *(int *)(lVar28 + 0x28);
      *(undefined1 *)(unaff_x22 + 0x2b2) = 0;
      puVar15 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar30 + iVar2),unaff_x22 + 0x2b2,puVar15);
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x280));
    }
  }
  uVar23 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x000100119804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

