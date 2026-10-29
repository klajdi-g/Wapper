// rea decompile_all
// name: FUN_100139af8
// address: 0x100139af8
// body: available
// range: 0x100139af8-0x10013a157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100139af8(undefined8 param_1,void *param_2)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  _StringGuts _Var21;
  Published *pPVar22;
  long unaff_x22;
  undefined8 uVar23;
  char *pcVar24;
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
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  char *local_68;
  undefined *local_60;
  
  pcVar24 = *(char **)(unaff_x22 + 0x130);
  _Var21.unknown = *(undefined **)(unaff_x22 + 0xb0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  pcVar18 = pcVar24;
  FUN_10013c994();
  puVar5 = &DAT_100427540;
  _swift_getKeyPath(&DAT_100427540);
  puVar6 = &DAT_100427568;
  _swift_getKeyPath(&DAT_100427568);
  *(undefined8 *)(unaff_x22 + 0x68) = pcVar18;
  *(void **)(unaff_x22 + 0x70) = param_2;
  _swift_retain(_Var21.unknown);
  _swift_bridgeObjectRetain(param_2);
  Combine::Published::_set_subscript
            ((Published *)_Var21.unknown,(undefined8 *)(unaff_x22 + 0x68),_Var21.unknown,puVar5,
             puVar6);
  pcVar7 = &DAT_100427590;
  _swift_getKeyPath();
  puVar5 = &DAT_1004275b8;
  _swift_getKeyPath();
  *(undefined1 *)(unaff_x22 + 0x13a) = 0;
  _swift_retain(_Var21.unknown);
  Combine::Published::_set_subscript();
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x20,_Var21);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0x100000000000001e;
  local_60 = (void *)0x80000001004de290;
  SVar27.bridgeObject = param_2;
  SVar27.str = pcVar18;
  SVar34.bridgeObject = puVar5;
  SVar34.str = pcVar7;
  Swift::String::append(SVar27,SVar34);
  _swift_bridgeObjectRelease(param_2);
  puVar6 = local_60;
  _swift_errorRetain(pcVar24);
  _swift_bridgeObjectRetain(puVar6);
  SVar25.bridgeObject = (void *)0xa500000000000000;
  SVar25.str = (char *)0x209480e220;
  SVar35.bridgeObject = puVar5;
  SVar35.str = pcVar7;
  Swift::String::append(SVar25,SVar35);
  pcVar7 = (char *)(unaff_x22 + 0x40);
  _swift_getErrorValue(pcVar24,unaff_x22 + 0x98);
  SVar26 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar9 = SVar26.bridgeObject;
  SVar36.bridgeObject = puVar5;
  SVar36.str = pcVar7;
  Swift::String::append(SVar26,SVar36);
  _swift_bridgeObjectRelease(pvVar9);
  puVar5 = local_60;
  SVar26.bridgeObject = local_60;
  SVar26.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x78) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0x80) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x88) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x90) = 0xe100000000000000;
  FUN_100026df4();
  pcVar18 = (char *)0x0;
  puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar27 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x88),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
  SVar37.bridgeObject = puVar12;
  SVar37.str = pcVar18;
  Swift::String::append(SVar27,SVar37);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar28.bridgeObject = (void *)0xe300000000000000;
  SVar28.str = (char *)0x5b205d;
  SVar38.bridgeObject = puVar12;
  SVar38.str = pcVar18;
  Swift::String::append(SVar28,SVar38);
  SVar29.bridgeObject = (void *)0xe300000000000000;
  SVar29.str = (char *)0x707061;
  SVar39.bridgeObject = puVar12;
  SVar39.str = pcVar18;
  Swift::String::append(SVar29,SVar39);
  SVar30.bridgeObject = (void *)0xe200000000000000;
  SVar30.str = (char *)0x205d;
  SVar40.bridgeObject = puVar12;
  SVar40.str = pcVar18;
  Swift::String::append(SVar30,SVar40);
  SVar41.bridgeObject = puVar12;
  SVar41.str = pcVar18;
  Swift::String::append(SVar26,SVar41);
  puVar3 = local_60;
  pcVar7 = local_68;
  local_68 = (char *)0x282020;
  local_60 = (undefined *)0xe300000000000000;
  SVar31.bridgeObject = (void *)0xe600000000000000;
  SVar31.str = (char *)0x2928636e7973;
  SVar42.bridgeObject = puVar12;
  SVar42.str = pcVar18;
  Swift::String::append(SVar31,SVar42);
  SVar32.bridgeObject = (void *)0xe100000000000000;
  SVar32.str = (char *)0x3a;
  SVar43.bridgeObject = puVar12;
  SVar43.str = pcVar18;
  Swift::String::append(SVar32,SVar43);
  *(undefined8 *)(unaff_x22 + 0xa0) = 0x1f;
  SVar26 = Swift::CustomStringConvertible::get_description();
  SVar44.bridgeObject = puVar12;
  SVar44.str = pcVar18;
  Swift::String::append(SVar26,SVar44);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  SVar33.bridgeObject = (void *)0xe100000000000000;
  SVar33.str = (char *)0x29;
  SVar45.bridgeObject = puVar12;
  SVar45.str = pcVar18;
  Swift::String::append(SVar33,SVar45);
  puVar12 = local_60;
  pcVar18 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0xf0);
  qos.unknown = *(undefined **)(unaff_x22 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  puVar8 = &DAT_10052dd10;
  _swift_allocObject(&DAT_10052dd10,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar7;
  *(undefined **)(puVar8 + 0x18) = puVar3;
  *(char **)(puVar8 + 0x20) = pcVar18;
  *(undefined **)(puVar8 + 0x28) = puVar12;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar8;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052dd28;
  pvVar9 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar10.unknown = puVar3;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar10);
  *(undefined **)(unaff_x22 + 0xa8) = PTR___swiftEmptyArrayStorage_100524190;
  puVar11 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar12 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar13 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar20,unaff_x22 + 0xa8,puVar12,puVar13,uVar23,puVar11);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar9);
  (**(code **)(lVar2 + 8))(uVar20,uVar23);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar19);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar20 = *(undefined8 *)(unaff_x22 + 200);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar23 = uVar19;
  FUN_100099338(uVar19,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar20,uVar23,uVar19);
  uVar4 = (uint)uVar20;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar14.unknown = puVar3;
  _swift_bridgeObjectRetain();
  pOVar15 = os::Logger::get_logObject(LVar14);
  pOVar16 = pOVar15;
  _os_log_type_enabled(pOVar15,uVar4 & 0xff);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar20 = *(undefined8 *)(unaff_x22 + 200);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
  if ((int)pOVar16 == 0) {
    _swift_bridgeObjectRelease_n(puVar3,2);
  }
  else {
    puVar17 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar18 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar17 = 0x8220102;
    local_68 = pcVar18;
    FUN_10012dbb0(pcVar7,puVar3,&local_68);
    *(char **)(puVar17 + 1) = pcVar7;
    _swift_bridgeObjectRelease_n(puVar3,2);
    __os_log_impl(0x100000000,pOVar15,uVar4 & 0xff,"%{public}s",puVar17,0xc);
    FUN_100043f24(pcVar18);
    _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar20,uVar23);
  _swift_bridgeObjectRelease(puVar5);
  _swift_errorRelease(pcVar24);
  _swift_bridgeObjectRelease(puVar6);
  _swift_errorRelease(pcVar24);
  pPVar22 = *(Published **)(unaff_x22 + 0xb0);
  puVar5 = &DAT_1004274f8;
  _swift_getKeyPath(&DAT_1004274f8);
  puVar6 = &DAT_100427520;
  _swift_getKeyPath(&DAT_100427520);
  *(undefined1 *)(unaff_x22 + 0x13b) = 0;
  _swift_retain(pPVar22);
  Combine::Published::_set_subscript(pPVar22,unaff_x22 + 0x13b,pPVar22,puVar5,puVar6);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar20 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010013a124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

