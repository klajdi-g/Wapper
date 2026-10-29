// rea decompile_all
// name: FUN_10027665c
// address: 0x10027665c
// body: available
// range: 0x10027665c-0x100276c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100276be8 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10027665c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar5;
  DispatchWorkItemFlags DVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  Logger LVar11;
  ulong uVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  char *pcVar18;
  long lVar19;
  ID self;
  char *pcVar20;
  long unaff_x22;
  long lVar21;
  undefined8 uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
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
  char *local_70;
  undefined *local_68;
  
  pcVar20 = ((String *)(unaff_x22 + 0x208))->str;
  SVar28 = *(String *)(unaff_x22 + 0x208);
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x21,param_2);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0xd00000000000001f;
  local_68 = (void *)0x80000001004e3390;
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar28,SVar30);
  puVar17 = local_68;
  SVar28.bridgeObject = local_68;
  SVar28.str = local_70;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x180) = 0x4e524157;
  *(undefined8 *)(unaff_x22 + 0x188) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 400) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x198) = 0xe100000000000000;
  FUN_100026df4();
  pcVar18 = (char *)0x0;
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 400,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pcVar20,pcVar20);
  SVar31.bridgeObject = puVar9;
  SVar31.str = pcVar18;
  Swift::String::append(SVar23,SVar31);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  SVar23.bridgeObject = (void *)0xe300000000000000;
  SVar23.str = (char *)0x5b205d;
  SVar32.bridgeObject = puVar9;
  SVar32.str = pcVar18;
  Swift::String::append(SVar23,SVar32);
  SVar24.bridgeObject = (void *)0xe700000000000000;
  SVar24.str = (char *)0x7972617262696c;
  SVar33.bridgeObject = puVar9;
  SVar33.str = pcVar18;
  Swift::String::append(SVar24,SVar33);
  SVar25.bridgeObject = (void *)0xe200000000000000;
  SVar25.str = (char *)0x205d;
  SVar34.bridgeObject = puVar9;
  SVar34.str = pcVar18;
  Swift::String::append(SVar25,SVar34);
  SVar35.bridgeObject = puVar9;
  SVar35.str = pcVar18;
  Swift::String::append(SVar28,SVar35);
  puVar1 = local_68;
  pcVar20 = local_70;
  local_70 = (char *)0x282020;
  local_68 = (undefined *)0xe300000000000000;
  SVar26.bridgeObject = (void *)0x80000001004e33b0;
  SVar26.str = (char *)0xd00000000000002d;
  SVar36.bridgeObject = puVar9;
  SVar36.str = pcVar18;
  Swift::String::append(SVar26,SVar36);
  SVar27.bridgeObject = (void *)0xe100000000000000;
  SVar27.str = (char *)0x3a;
  SVar37.bridgeObject = puVar9;
  SVar37.str = pcVar18;
  Swift::String::append(SVar27,SVar37);
  *(undefined8 *)(unaff_x22 + 0x1d0) = 0x29f;
  SVar28 = Swift::CustomStringConvertible::get_description();
  SVar38.bridgeObject = puVar9;
  SVar38.str = pcVar18;
  Swift::String::append(SVar28,SVar38);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  SVar29.bridgeObject = (void *)0xe100000000000000;
  SVar29.str = (char *)0x29;
  SVar39.bridgeObject = puVar9;
  SVar39.str = pcVar18;
  Swift::String::append(SVar29,SVar39);
  puVar9 = local_68;
  pcVar18 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar3 = &DAT_1005369e8;
  _swift_allocObject(&DAT_1005369e8,0x30,7);
  *(char **)(puVar3 + 0x10) = pcVar20;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar18;
  *(undefined **)(puVar3 + 0x28) = puVar9;
  *(code **)(unaff_x22 + 0xe0) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0xe8) = puVar3;
  *(undefined **)(unaff_x22 + 0xc0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 200) = 0x42000000;
  *(code **)(unaff_x22 + 0xd0) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xd8) = &DAT_100536a00;
  aBlock = __Block_copy((void *)(unaff_x22 + 0xc0));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar19 = *(long *)(DVar4.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar5.unknown = puVar1;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_1005244a8;
  lVar21 = *(long *)(DVar6.unknown + -8);
  uVar7 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  *(undefined **)(unaff_x22 + 0x1d8) = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar9,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar9 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x1d8,puVar9,puVar10,DVar6.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar21 + 8))(uVar7,DVar6.unknown);
  (**(code **)(lVar19 + 8))(qos.unknown,DVar4.unknown);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar11 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar11.unknown,&DAT_100558f50);
  lVar19 = *(long *)(LVar11.unknown + -8);
  uVar12 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  uVar7 = uVar12;
  (**(code **)(lVar19 + 0x10))();
  uVar2 = (uint)uVar7;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar13.unknown = puVar1;
  _swift_bridgeObjectRetain();
  pOVar14 = os::Logger::get_logObject(LVar13);
  pOVar15 = pOVar14;
  _os_log_type_enabled(pOVar14,uVar2 & 0xff);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x288);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  else {
    puVar16 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar18 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar16 = 0x8220102;
    local_70 = pcVar18;
    FUN_10012dbb0(pcVar20,puVar1,&local_70);
    *(char **)(puVar16 + 1) = pcVar20;
    _swift_bridgeObjectRelease_n(puVar1,2);
    __os_log_impl(0x100000000,pOVar14,uVar2 & 0xff,"%{public}s",puVar16,0xc);
    FUN_100043f24(pcVar18);
    _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar19 + 8))(uVar12,LVar11.unknown);
  _swift_bridgeObjectRelease(puVar17);
  _swift_errorRelease(uVar22);
  _swift_task_dealloc(uVar12);
  *(undefined1 *)(unaff_x22 + 0x389) = 1;
  *(undefined8 *)(unaff_x22 + 0x290) = 0;
  self = *(ID *)(unaff_x22 + 0x218);
  uVar22 = *(undefined8 *)PTR__AVMediaTypeVideo_1005212b8;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x1e0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100276c1c;
  lVar19 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar19,1);
  puVar17 = &DAT_100558e70;
  FUN_100002f94(&DAT_100558e70,&DAT_10042ddf0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100521110;
  *(undefined **)(unaff_x22 + 0x88) = puVar17;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10029d4a8;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100536a28;
  *(long *)(unaff_x22 + 0x70) = lVar19;
  objc_stub::loadTracksWithMediaType_completionHandler_(self,uVar22);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

