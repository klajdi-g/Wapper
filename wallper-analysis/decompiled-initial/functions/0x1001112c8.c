// rea decompile_all
// name: FUN_1001112c8
// address: 0x1001112c8
// body: available
// range: 0x1001112c8-0x1001118d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001112c8(void)

{
  long lVar1;
  MainActor *pMVar2;
  DispatchWorkItemFlags qos;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  void *pvVar10;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  char *pcVar20;
  TaskPriority TVar21;
  MainActor *this;
  MainActor *pMVar22;
  undefined *puVar23;
  _StringGuts _Var24;
  char *pcVar25;
  void *in_x3;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long unaff_x22;
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
  undefined *local_60;
  undefined8 uVar15;
  
  _Var24.unknown = *(undefined **)(unaff_x22 + 0x110);
  (**(code **)(unaff_x22 + 0x140))(*(undefined8 *)(unaff_x22 + 0x138));
  uVar29 = *(undefined8 *)(unaff_x22 + 0x168);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x2a,_Var24);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0x1000000000000028;
  local_60 = (void *)0x80000001004dda00;
  pcVar20 = (char *)(unaff_x22 + 0x40);
  _swift_getErrorValue(uVar29,unaff_x22 + 0x78);
  SVar32 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar10 = SVar32.bridgeObject;
  SVar39.bridgeObject = in_x3;
  SVar39.str = pcVar20;
  Swift::String::append(SVar32,SVar39);
  _swift_bridgeObjectRelease(pvVar10);
  puVar23 = local_60;
  SVar32.bridgeObject = local_60;
  SVar32.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x4e524157;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
  FUN_100026df4();
  pcVar25 = (char *)0x0;
  puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x68),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar10,pvVar10);
  SVar40.bridgeObject = puVar13;
  SVar40.str = pcVar25;
  Swift::String::append(SVar33,SVar40);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar33.bridgeObject = (void *)0xe300000000000000;
  SVar33.str = (char *)0x5b205d;
  SVar41.bridgeObject = puVar13;
  SVar41.str = pcVar25;
  Swift::String::append(SVar33,SVar41);
  SVar34.bridgeObject = (void *)0xe300000000000000;
  SVar34.str = (char *)0x707061;
  SVar42.bridgeObject = puVar13;
  SVar42.str = pcVar25;
  Swift::String::append(SVar34,SVar42);
  SVar35.bridgeObject = (void *)0xe200000000000000;
  SVar35.str = (char *)0x205d;
  SVar43.bridgeObject = puVar13;
  SVar43.str = pcVar25;
  Swift::String::append(SVar35,SVar43);
  SVar44.bridgeObject = puVar13;
  SVar44.str = pcVar25;
  Swift::String::append(SVar32,SVar44);
  puVar7 = local_60;
  pcVar20 = local_68;
  local_68 = (char *)0x282020;
  local_60 = (undefined *)0xe300000000000000;
  SVar36.bridgeObject = (void *)0x80000001004dda30;
  SVar36.str = (char *)0xd000000000000011;
  SVar45.bridgeObject = puVar13;
  SVar45.str = pcVar25;
  Swift::String::append(SVar36,SVar45);
  SVar37.bridgeObject = (void *)0xe100000000000000;
  SVar37.str = (char *)0x3a;
  SVar46.bridgeObject = puVar13;
  SVar46.str = pcVar25;
  Swift::String::append(SVar37,SVar46);
  *(undefined8 *)(unaff_x22 + 0x80) = 0x27;
  SVar32 = Swift::CustomStringConvertible::get_description();
  SVar47.bridgeObject = puVar13;
  SVar47.str = pcVar25;
  Swift::String::append(SVar32,SVar47);
  _swift_bridgeObjectRelease(SVar32.bridgeObject);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x29;
  SVar48.bridgeObject = puVar13;
  SVar48.str = pcVar25;
  Swift::String::append(SVar38,SVar48);
  puVar13 = local_60;
  pcVar25 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0xe8);
  qos.unknown = *(undefined **)(unaff_x22 + 0xf0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar31 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  puVar9 = &DAT_10052c9f8;
  _swift_allocObject(&DAT_10052c9f8,0x30,7);
  *(char **)(puVar9 + 0x10) = pcVar20;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  *(char **)(puVar9 + 0x20) = pcVar25;
  *(undefined **)(puVar9 + 0x28) = puVar13;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar9;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052ca10;
  pvVar10 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar11.unknown = puVar7;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar11);
  *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
  puVar12 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar13 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar14 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar15,unaff_x22 + 0x88,puVar13,puVar14,uVar31,puVar12);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar10);
  (**(code **)(lVar3 + 8))(uVar15,uVar31);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar31 = uVar30;
  FUN_100099338(uVar30,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar15,uVar31,uVar30);
  uVar8 = (uint)uVar15;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar16.unknown = puVar7;
  _swift_bridgeObjectRetain();
  pOVar17 = os::Logger::get_logObject(LVar16);
  pOVar18 = pOVar17;
  _os_log_type_enabled(pOVar17,uVar8 & 0xff);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0xb0);
  if ((int)pOVar18 == 0) {
    _swift_bridgeObjectRelease_n(puVar7,2);
  }
  else {
    puVar19 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar25 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar19 = 0x8220102;
    local_68 = pcVar25;
    FUN_10012dbb0(pcVar20,puVar7,&local_68);
    *(char **)(puVar19 + 1) = pcVar20;
    _swift_bridgeObjectRelease_n(puVar7,2);
    __os_log_impl(0x100000000,pOVar17,uVar8 & 0xff,"%{public}s",puVar19,0xc);
    FUN_100043f24(pcVar25);
    _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar15,uVar31);
  _swift_bridgeObjectRelease(puVar23);
  _swift_errorRelease(uVar29);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar31 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0xc0);
  pMVar2 = *(MainActor **)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  TVar21 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(uVar5,1,1,TVar21.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar23 = PTR_typeMetadataAccessor_1005246d8;
  pMVar22 = pMVar2;
  FUN_1000939f8(pMVar2,uVar6);
  pMVar22 = Swift::MainActor::get_shared(this,pMVar22);
  puVar12 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar23 = &DAT_10052ca48;
  _swift_allocObject(&DAT_10052ca48,0x30,7);
  *(MainActor **)(puVar23 + 0x10) = pMVar22;
  *(undefined8 **)(puVar23 + 0x18) = puVar12;
  *(MainActor **)(puVar23 + 0x20) = pMVar2;
  *(undefined8 *)(puVar23 + 0x28) = uVar6;
  FUN_1001b2110(0,0,uVar5,&DAT_100425fb0,puVar23);
  _swift_release();
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x0001001118a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

