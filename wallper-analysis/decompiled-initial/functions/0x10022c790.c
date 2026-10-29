// rea decompile_all
// name: FUN_10022c790
// address: 0x10022c790
// body: available
// range: 0x10022c790-0x10022d10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022cf6c to 0x1004134fc /usr/lib/swift/libswift_Concurrency.dylib::Swift::Task::get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022c790(void)

{
  DispatchWorkItemFlags qos;
  byte bVar1;
  uint uVar2;
  ID IVar3;
  TaskPriority TVar4;
  ID *pIVar5;
  undefined *puVar6;
  void *pvVar7;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  Logger LVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined *puVar16;
  long *plVar17;
  undefined *puVar18;
  _StringGuts _Var19;
  char *pcVar20;
  void *in_x3;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ID self;
  code *pcVar27;
  ID *pIVar28;
  Published *pPVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long unaff_x22;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 uVar36;
  undefined8 uVar37;
  ulong uVar38;
  long lVar39;
  undefined8 uVar40;
  code *pcVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  undefined8 uVar45;
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
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  char *local_70;
  undefined *local_68;
  
  self = *(ID *)(unaff_x22 + 0x2c8);
  _swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSHTTPURLResponse);
  if (self == 0) {
    pIVar5 = *(ID **)(unaff_x22 + 0x248);
    _swift_release();
    pIVar28 = (ID *)0x0;
LAB_10022c888:
    uVar24 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x230);
    _Var19.unknown = *(undefined **)(unaff_x22 + 0x1f8);
    lVar39 = *(long *)(unaff_x22 + 0x200);
    FUN_100231e20();
    puVar31 = &DAT_100533dd8;
    in_x3 = (void *)0x0;
    _swift_allocError(&DAT_100533dd8,pIVar5,0);
    *pIVar5 = (ID)pIVar28;
    pIVar5[1] = 0;
    *(undefined4 *)(pIVar5 + 2) = 0;
    *(undefined1 *)((long)pIVar5 + 0x14) = 1;
    _swift_willThrow();
    pcVar27 = *(code **)(lVar39 + 8);
    (*pcVar27)(uVar34,_Var19.unknown);
    (*pcVar27)(uVar32,_Var19.unknown);
  }
  else {
    IVar3 = objc_stub::statusCode(self);
    if (99 < IVar3 - 200) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x248));
      pIVar5 = (ID *)objc_stub::statusCode(self);
      pIVar28 = pIVar5;
      goto LAB_10022c888;
    }
    puVar31 = *(undefined **)(unaff_x22 + 0x2d0);
    TVar4.unknown = *(undefined **)(unaff_x22 + 0x230);
    FUN_10022f1f8(*(undefined8 *)(unaff_x22 + 0x228));
    if (puVar31 == (undefined *)0x0) {
      pcVar27 = *(code **)(unaff_x22 + 0x268);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x218);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar44 = *(long *)(unaff_x22 + 0x208);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x1f8);
      lVar39 = *(long *)(unaff_x22 + 0x200);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar34 = *(undefined8 *)(unaff_x22 + 400);
      Swift::TaskPriority::get_userInitiated(TVar4);
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(uVar34,0,1,TVar4.unknown);
      pcVar41 = *(code **)(lVar39 + 0x10);
      (*pcVar41)(uVar22,uVar26,uVar24);
      (*pcVar41)(uVar25,uVar23,uVar24);
      uVar21 = (ulong)*(byte *)(lVar39 + 0x50);
      uVar38 = uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff);
      uVar42 = lVar44 + uVar21 + uVar38 & (uVar21 ^ 0xffffffffffffffff);
      uVar43 = lVar44 + uVar42 + 7 & 0xfffffffffffffff8;
      puVar31 = &DAT_100533ca0;
      _swift_allocObject(&DAT_100533ca0,uVar43 + 8,uVar21 | 7);
      *(undefined8 *)(puVar31 + 0x10) = 0;
      *(undefined8 *)(puVar31 + 0x18) = 0;
      (*pcVar27)(puVar31 + uVar38,uVar22,uVar24);
      (*pcVar27)(puVar31 + uVar42,uVar25,uVar24);
      *(undefined8 *)(puVar31 + uVar43) = uVar32;
      uVar24 = 0;
      FUN_100230058(0,0,uVar34,&DAT_10042bc18,puVar31);
      *(undefined8 *)(unaff_x22 + 0x2d8) = uVar24;
      FUN_10002a29c(uVar34,&DAT_100561090,&DAT_10041c870);
      plVar17 = (long *)(ulong)*(uint *)(PTR__get_value_100524720 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2e0) = plVar17;
      FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
      *plVar17 = unaff_x22;
      plVar17[1] = (long)FUN_10022d10c;
      Swift::Task::get_value((Task)*(undefined **)(unaff_x22 + 0x220));
      return;
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x230);
    _Var19.unknown = *(undefined **)(unaff_x22 + 0x1f8);
    lVar39 = *(long *)(unaff_x22 + 0x200);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x248));
    pcVar27 = *(code **)(lVar39 + 8);
    (*pcVar27)(uVar34,_Var19.unknown);
    (*pcVar27)(uVar32,_Var19.unknown);
  }
  (*pcVar27)(uVar24);
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var19);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0x1000000000000013;
  local_68 = (void *)0x80000001004e20c0;
  pcVar15 = (char *)(unaff_x22 + 0xc0);
  _swift_getErrorValue(puVar31,unaff_x22 + 0x150);
  SVar46 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar7 = SVar46.bridgeObject;
  SVar53.bridgeObject = in_x3;
  SVar53.str = pcVar15;
  Swift::String::append(SVar46,SVar53);
  _swift_bridgeObjectRelease(pvVar7);
  puVar16 = local_68;
  SVar46.bridgeObject = local_68;
  SVar46.str = local_70;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x108) = 0xe100000000000000;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar16);
  pcVar20 = (char *)0x0;
  puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar47 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x100,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar7,pvVar7);
  SVar54.bridgeObject = puVar10;
  SVar54.str = pcVar20;
  Swift::String::append(SVar47,SVar54);
  _swift_bridgeObjectRelease(SVar47.bridgeObject);
  SVar47.bridgeObject = (void *)0xe300000000000000;
  SVar47.str = (char *)0x5b205d;
  SVar55.bridgeObject = puVar10;
  SVar55.str = pcVar20;
  Swift::String::append(SVar47,SVar55);
  SVar48.bridgeObject = (void *)0xe600000000000000;
  SVar48.str = (char *)0x657461647075;
  SVar56.bridgeObject = puVar10;
  SVar56.str = pcVar20;
  Swift::String::append(SVar48,SVar56);
  SVar49.bridgeObject = (void *)0xe200000000000000;
  SVar49.str = (char *)0x205d;
  SVar57.bridgeObject = puVar10;
  SVar57.str = pcVar20;
  Swift::String::append(SVar49,SVar57);
  SVar58.bridgeObject = puVar10;
  SVar58.str = pcVar20;
  Swift::String::append(SVar46,SVar58);
  puVar18 = local_68;
  pcVar15 = local_70;
  local_70 = (char *)0x282020;
  local_68 = (undefined *)0xe300000000000000;
  SVar50.bridgeObject = (void *)0xed00002928657461;
  SVar50.str = (char *)0x6470557472617473;
  SVar59.bridgeObject = puVar10;
  SVar59.str = pcVar20;
  Swift::String::append(SVar50,SVar59);
  SVar51.bridgeObject = (void *)0xe100000000000000;
  SVar51.str = (char *)0x3a;
  SVar60.bridgeObject = puVar10;
  SVar60.str = pcVar20;
  Swift::String::append(SVar51,SVar60);
  *(undefined8 *)(unaff_x22 + 0x158) = 0x3a;
  SVar46 = Swift::CustomStringConvertible::get_description();
  SVar61.bridgeObject = puVar10;
  SVar61.str = pcVar20;
  Swift::String::append(SVar46,SVar61);
  _swift_bridgeObjectRelease(SVar46.bridgeObject);
  SVar52.bridgeObject = (void *)0xe100000000000000;
  SVar52.str = (char *)0x29;
  SVar62.bridgeObject = puVar10;
  SVar62.str = pcVar20;
  Swift::String::append(SVar52,SVar62);
  puVar10 = local_68;
  pcVar20 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar39 = *(long *)(unaff_x22 + 0x1e0);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1e8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar44 = *(long *)(unaff_x22 + 0x1c8);
  puVar6 = &DAT_100533c00;
  _swift_allocObject(&DAT_100533c00,0x30,7);
  *(char **)(puVar6 + 0x10) = pcVar15;
  *(undefined **)(puVar6 + 0x18) = puVar18;
  *(char **)(puVar6 + 0x20) = pcVar20;
  *(undefined **)(puVar6 + 0x28) = puVar10;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100533c18;
  pvVar7 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar8.unknown = puVar18;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  *(undefined **)(unaff_x22 + 0x160) = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar10 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar6 = puVar10;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar24,unaff_x22 + 0x160,puVar10,puVar6,uVar32,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar7);
  (**(code **)(lVar44 + 8))(uVar24,uVar32);
  (**(code **)(lVar39 + 8))(qos.unknown,uVar34);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar39 = *(long *)(unaff_x22 + 0x1a0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar32 = uVar34;
  FUN_100099338(uVar34,&DAT_100558f50);
  (**(code **)(lVar39 + 0x10))(uVar24,uVar32,uVar34);
  uVar2 = (uint)uVar24;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar11.unknown = puVar18;
  _swift_bridgeObjectRetain();
  pOVar12 = os::Logger::get_logObject(LVar11);
  pOVar13 = pOVar12;
  _os_log_type_enabled(pOVar12,uVar2 & 0xff);
  lVar39 = *(long *)(unaff_x22 + 0x1a0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x198);
  if ((int)pOVar13 == 0) {
    _swift_bridgeObjectRelease_n(puVar18,2);
  }
  else {
    puVar14 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar20 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar14 = 0x8220102;
    local_70 = pcVar20;
    FUN_10012dbb0(pcVar15,puVar18,&local_70);
    *(char **)(puVar14 + 1) = pcVar15;
    _swift_bridgeObjectRelease_n(puVar18,2);
    __os_log_impl(0x100000000,pOVar12,uVar2 & 0xff,"%{public}s",puVar14,0xc);
    FUN_100043f24(pcVar20);
    _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar39 + 8))(uVar24,uVar32);
  _swift_bridgeObjectRelease_n(puVar16,2);
  *(undefined **)(unaff_x22 + 0x168) = puVar31;
  _swift_errorRetain(puVar31);
  puVar16 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  lVar39 = unaff_x22 + 0xd8;
  _swift_dynamicCast(lVar39,unaff_x22 + 0x168,puVar16,&DAT_100533dd8,6);
  if ((int)lVar39 != 0) {
    bVar1 = *(byte *)(unaff_x22 + 0xec);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        FUN_100231e80();
        uVar36 = 1;
        goto LAB_10022cfb0;
      }
      if (bVar1 != 1) {
        FUN_100231e80();
      }
    }
    else {
      if (bVar1 == 3) {
        FUN_100231e80();
        uVar36 = 2;
        goto LAB_10022cfb0;
      }
      if (bVar1 == 4) {
        FUN_100231e80();
        uVar36 = 3;
        goto LAB_10022cfb0;
      }
      if (((*(long *)(unaff_x22 + 0xe0) != 0 || *(long *)(unaff_x22 + 0xd8) != 0) ||
          (*(int *)(unaff_x22 + 0xe8) != 0)) &&
         ((*(long *)(unaff_x22 + 0xd8) != 1 ||
          ((*(long *)(unaff_x22 + 0xe0) != 0 || (*(int *)(unaff_x22 + 0xe8) != 0)))))) {
        uVar36 = 2;
        goto LAB_10022cfb0;
      }
    }
  }
  uVar36 = 0;
LAB_10022cfb0:
  lVar39 = *(long *)(unaff_x22 + 0x260);
  pPVar29 = *(Published **)(unaff_x22 + 0x180);
  puVar16 = &DAT_10042bb80;
  _swift_getKeyPath(&DAT_10042bb80);
  puVar18 = &DAT_10042bba8;
  _swift_getKeyPath(&DAT_10042bba8);
  *(undefined1 *)(unaff_x22 + 0xee) = uVar36;
  _swift_retain(pPVar29);
  Combine::Published::_set_subscript
            (pPVar29,(undefined1 *)(unaff_x22 + 0xee),pPVar29,puVar16,puVar18);
  _swift_errorRelease(puVar31);
  *(undefined1 *)((long)&pPVar29->unknown + lVar39) = 0;
  uVar30 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar45 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 400);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar45);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010022d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}

