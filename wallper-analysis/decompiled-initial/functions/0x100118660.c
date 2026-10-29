// rea decompile_all
// name: FUN_100118660
// address: 0x100118660
// body: available
// range: 0x100118660-0x10011916f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100119088 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001190d8 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100118660(Task param_1)

{
  DispatchWorkItemFlags qos;
  undefined1 uVar1;
  int iVar2;
  String SVar3;
  bool bVar4;
  __uint8 _Var5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  TaskPriority TVar9;
  TaskPriority TVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  void *aBlock;
  DispatchQoS DVar13;
  undefined *puVar14;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  long *plVar20;
  _StringGuts _Var21;
  undefined8 *puVar22;
  char *pcVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  long unaff_x22;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  ulong uVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  char *local_68;
  undefined *puStack_60;
  
  bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar4) {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x280));
    _swift_release(uVar28);
    goto LAB_1001186a0;
  }
  uVar28 = *(undefined8 *)(unaff_x22 + 0x270);
  puVar7 = &DAT_1004262a8;
  _swift_getKeyPath(&DAT_1004262a8);
  puVar8 = &DAT_1004262d0;
  _swift_getKeyPath(&DAT_1004262d0);
  Combine::Published::_get_subscript(unaff_x22 + 0x128,uVar28,puVar7,puVar8);
  _swift_release(puVar8);
  _swift_release(puVar7);
  lVar26 = *(long *)(unaff_x22 + 0x128);
  if (*(long *)(lVar26 + 0x10) == 0) {
LAB_1001187dc:
    uVar28 = 1;
  }
  else {
    lVar30 = *(long *)(unaff_x22 + 0x170);
    uVar24 = *(ulong *)(unaff_x22 + 0x178);
    FUN_10000464c(lVar30);
    if ((uVar24 & 1) == 0) goto LAB_1001187dc;
    (**(code **)(*(long *)(unaff_x22 + 0x218) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x248),
               *(long *)(lVar26 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x218) + 0x48) * lVar30,
               *(undefined8 *)(unaff_x22 + 0x210));
    uVar28 = 0;
  }
  uVar34 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar30 = *(long *)(unaff_x22 + 0x230);
  lVar38 = *(long *)(unaff_x22 + 0x228);
  lVar41 = *(long *)(unaff_x22 + 0x218);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x210);
  _swift_bridgeObjectRelease(lVar26);
  pcVar27 = *(code **)(lVar41 + 0x38);
  (*pcVar27)(uVar34,uVar28,1,uVar37);
  (*pcVar27)(uVar36,1,1,uVar37);
  lVar38 = (long)*(int *)(lVar38 + 0x30);
  puVar7 = &DAT_10041bf10;
  FUN_1000087e4(uVar34,lVar30,&DAT_100553d90,&DAT_10041bf10);
  FUN_1000087e4(uVar36,lVar30 + lVar38,&DAT_100553d90);
  pcVar27 = *(code **)(lVar41 + 0x30);
  lVar26 = lVar30;
  (*pcVar27)(lVar30,1,uVar37);
  if ((int)lVar26 == 1) {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x210);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x240),&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar28,&DAT_100553d90,&DAT_10041bf10);
    lVar30 = lVar30 + lVar38;
    (*pcVar27)(lVar30,1,uVar34);
    if ((int)lVar30 != 1) {
LAB_10011897c:
      TVar9.unknown = *(undefined **)(unaff_x22 + 0x230);
      FUN_10002a29c(TVar9.unknown,&DAT_10054ea38,&DAT_100426270);
LAB_100118994:
      uVar1 = *(undefined1 *)(unaff_x22 + 0x2b3);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x288);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x200);
      lVar26 = *(long *)(unaff_x22 + 0x1e8);
      lVar30 = *(long *)(unaff_x22 + 0x1f0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x178);
      Swift::TaskPriority::get_userInitiated(TVar9);
      TVar10 = Swift::TaskPriority::typeMetadataAccessor();
      lVar38 = *(long *)(TVar10.unknown + -8);
      (**(code **)(lVar38 + 0x38))(uVar33,0,1,TVar10.unknown);
      FUN_100119d34(uVar29,uVar28);
      uVar24 = (ulong)*(byte *)(lVar26 + 0x50);
      uVar31 = uVar24 + 0x38 & (uVar24 ^ 0xffffffffffffffff);
      uVar42 = lVar30 + uVar31 + 7 & 0xfffffffffffffff8;
      puVar7 = &DAT_10052cd90;
      _swift_allocObject(&DAT_10052cd90,uVar42 + 9,uVar24 | 7);
      *(undefined8 *)(puVar7 + 0x10) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 0x20) = uVar32;
      *(undefined8 *)(puVar7 + 0x28) = uVar34;
      *(undefined8 *)(puVar7 + 0x30) = uVar37;
      FUN_100119e80(uVar28,puVar7 + uVar31);
      *(undefined8 *)(puVar7 + uVar42) = uVar25;
      *(undefined1 *)((long)(puVar7 + uVar42) + 8) = uVar1;
      FUN_1000087e4(uVar33,uVar36,&DAT_100561090,&DAT_10041c870);
      (**(code **)(lVar38 + 0x30))(uVar36,1,TVar10.unknown);
      _swift_retain(uVar32);
      _swift_bridgeObjectRetain(uVar37);
      TVar9.unknown = puVar7;
      _swift_retain();
      uVar28 = *(undefined8 *)(unaff_x22 + 0x200);
      if ((int)uVar36 == 1) {
        FUN_10002a29c(uVar28,&DAT_100561090,&DAT_10041c870);
        uVar24 = 0x1000;
      }
      else {
        _Var5 = Swift::TaskPriority::get_rawValue(TVar9);
        (**(code **)(lVar38 + 8))(uVar28,TVar10.unknown);
        uVar24 = (ulong)_Var5 | 0x1000;
      }
      lVar26 = *(long *)(puVar7 + 0x10);
      lVar30 = *(long *)(puVar7 + 0x18);
      _swift_unknownObjectRetain(lVar26);
      _swift_release(puVar7);
      if (lVar26 == 0) {
        UVar11.unknown = (undefined *)0x0;
        lVar30 = 0;
      }
      else {
        _swift_getObjectType(lVar26);
        UVar11 = Swift::Actor::get_unownedExecutor();
        _swift_unknownObjectRelease(lVar26);
      }
      puVar8 = &DAT_10052cdb8;
      _swift_allocObject(&DAT_10052cdb8,0x20,7);
      *(undefined **)(puVar8 + 0x10) = &DAT_100426328;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      puVar7 = &DAT_10054bd30;
      FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
      if (lVar30 == 0 && UVar11.unknown == (undefined *)0x0) {
        puVar22 = (undefined8 *)0x0;
      }
      else {
        puVar22 = (undefined8 *)(unaff_x22 + 0x70);
        *puVar22 = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(undefined **)(unaff_x22 + 0x80) = UVar11.unknown;
        *(long *)(unaff_x22 + 0x88) = lVar30;
      }
      uVar28 = *(undefined8 *)(unaff_x22 + 0x208);
      _swift_task_create(uVar24,puVar22,puVar7,&DAT_100426330,puVar8);
      *(ulong *)(unaff_x22 + 0x2a0) = uVar24;
      FUN_10002a29c(uVar28,&DAT_100561090,&DAT_10041c870);
      plVar20 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2a8) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_100119170;
      (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x138));
      return;
    }
    _Var21.unknown = &DAT_100553d90;
    pcVar23 = &DAT_10041bf10;
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x230));
  }
  else {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x210);
    FUN_1000087e4(*(undefined8 *)(unaff_x22 + 0x230),*(undefined8 *)(unaff_x22 + 0x238),
                  &DAT_100553d90,&DAT_10041bf10);
    lVar26 = lVar30 + lVar38;
    (*pcVar27)(lVar26,1,uVar28);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x238);
    if ((int)lVar26 == 1) {
      lVar26 = *(long *)(unaff_x22 + 0x218);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x210);
      FUN_10002a29c(uVar36,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(uVar34,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar26 + 8))(uVar28,uVar37);
      goto LAB_10011897c;
    }
    TVar9.unknown = *(undefined **)(unaff_x22 + 0x230);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar26 = *(long *)(unaff_x22 + 0x218);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x210);
    (**(code **)(lVar26 + 0x20))(uVar37,lVar30 + lVar38,uVar25);
    puVar7 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar4 = Swift::Equatable::___infix(uVar28,uVar37,uVar25);
    pcVar27 = *(code **)(lVar26 + 8);
    (*pcVar27)(uVar37,uVar25);
    _Var21.unknown = &DAT_100553d90;
    pcVar23 = &DAT_10041bf10;
    FUN_10002a29c(uVar36,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar34,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar27)(uVar28,uVar25);
    FUN_10002a29c();
    if (!bVar4) goto LAB_100118994;
  }
  lVar26 = *(long *)(unaff_x22 + 0x290) + 1;
  if (lVar26 != 0x14) {
    *(long *)(unaff_x22 + 0x290) = lVar26;
    plVar20 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x298) = plVar20;
    *plVar20 = unaff_x22;
    plVar20[1] = (long)FUN_1001185f8;
    (extension_Swift)::Swift::Task::_sleep(250000000);
    return;
  }
  uVar28 = *(undefined8 *)(unaff_x22 + 0x250);
  SVar3 = *(String *)(unaff_x22 + 0x170);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x280));
  _swift_release(uVar28);
  local_68 = (char *)0x0;
  puStack_60 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x46,_Var21);
  SVar44.bridgeObject = (void *)0x80000001004ddb20;
  SVar44.str = (char *)0xd00000000000002f;
  SVar48.bridgeObject = puVar7;
  SVar48.str = pcVar23;
  Swift::String::append(SVar44,SVar48);
  SVar49.bridgeObject = puVar7;
  SVar49.str = pcVar23;
  Swift::String::append(SVar3,SVar49);
  uVar28 = 0xd000000000000015;
  SVar43.bridgeObject = (void *)0x80000001004ddb50;
  SVar43.str = (char *)0xd000000000000015;
  SVar50.bridgeObject = puVar7;
  SVar50.str = pcVar23;
  Swift::String::append(SVar43,SVar50);
  puVar7 = puStack_60;
  SVar3.bridgeObject = puStack_60;
  SVar3.str = local_68;
  local_68 = (char *)0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar23 = (char *)0x0;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0xe0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar28,uVar28);
  SVar51.bridgeObject = puVar8;
  SVar51.str = pcVar23;
  Swift::String::append(SVar44,SVar51);
  _swift_bridgeObjectRelease(SVar44.bridgeObject);
  SVar45.bridgeObject = (void *)0xe300000000000000;
  SVar45.str = (char *)0x5b205d;
  SVar52.bridgeObject = puVar8;
  SVar52.str = pcVar23;
  Swift::String::append(SVar45,SVar52);
  SVar46.bridgeObject = (void *)0xe300000000000000;
  SVar46.str = (char *)0x707061;
  SVar53.bridgeObject = puVar8;
  SVar53.str = pcVar23;
  Swift::String::append(SVar46,SVar53);
  SVar47.bridgeObject = (void *)0xe200000000000000;
  SVar47.str = (char *)0x205d;
  SVar54.bridgeObject = puVar8;
  SVar54.str = pcVar23;
  Swift::String::append(SVar47,SVar54);
  SVar55.bridgeObject = puVar8;
  SVar55.str = pcVar23;
  Swift::String::append(SVar3,SVar55);
  puVar8 = puStack_60;
  pcVar23 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar26 = *(long *)(unaff_x22 + 0x1d0);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1d8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar30 = *(long *)(unaff_x22 + 0x1b8);
  puVar12 = &DAT_10052cde0;
  _swift_allocObject(&DAT_10052cde0,0x30,7);
  *(char **)(puVar12 + 0x10) = pcVar23;
  *(undefined **)(puVar12 + 0x18) = puVar8;
  *(undefined8 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar12;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052cdf8;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar13.unknown = puVar8;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  *(undefined **)(unaff_x22 + 0x150) = PTR___swiftEmptyArrayStorage_100524190;
  puVar22 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar12 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar14 = puVar12;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0x150,puVar12,puVar14,uVar34,puVar22);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar30 + 8))(uVar28,uVar34);
  (**(code **)(lVar26 + 8))(qos.unknown,uVar36);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar36 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 400);
  lVar26 = *(long *)(unaff_x22 + 0x198);
  uVar34 = uVar28;
  FUN_100099338(uVar28,&DAT_100558f50);
  (**(code **)(lVar26 + 0x10))(uVar36,uVar34,uVar28);
  uVar6 = (uint)uVar36;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar15.unknown = puVar8;
  _swift_bridgeObjectRetain();
  pOVar16 = os::Logger::get_logObject(LVar15);
  pOVar17 = pOVar16;
  _os_log_type_enabled(pOVar16,uVar6 & 0xff);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 400);
  lVar26 = *(long *)(unaff_x22 + 0x198);
  if ((int)pOVar17 == 0) {
    _swift_bridgeObjectRelease_n(puVar8,2);
  }
  else {
    puVar18 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar19 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar18 = 0x8220102;
    local_68 = pcVar19;
    FUN_10012dbb0(pcVar23,puVar8,&local_68);
    *(char **)(puVar18 + 1) = pcVar23;
    _swift_bridgeObjectRelease_n(puVar8,2);
    __os_log_impl(0x100000000,pOVar16,uVar6 & 0xff,"%{public}s",puVar18,0xc);
    FUN_100043f24(pcVar19);
    _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar26 + 8))(uVar34,uVar28);
  _swift_bridgeObjectRelease(puVar7);
  lVar26 = *(long *)(unaff_x22 + 0x188);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x1e0) + 0x28);
  *(undefined1 *)(unaff_x22 + 0x2b1) = 0;
  puVar7 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(lVar26 + iVar2),unaff_x22 + 0x2b1,puVar7);
LAB_1001186a0:
  uVar29 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar34);
                    /* WARNING: Could not recover jumptable at 0x000100118748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

