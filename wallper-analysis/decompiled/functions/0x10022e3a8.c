// rea decompile_all
// name: FUN_10022e3a8
// address: 0x10022e3a8
// body: available
// range: 0x10022e3a8-0x10022eacb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022e3a8(void)

{
  DispatchWorkItemFlags qos;
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  _StringGuts _Var16;
  char *pcVar17;
  void *in_x3;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  code *pcVar23;
  Published *pPVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
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
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  char *local_68;
  undefined *local_60;
  
  uVar21 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x228);
  _Var16.unknown = *(undefined **)(unaff_x22 + 0x1f8);
  lVar33 = *(long *)(unaff_x22 + 0x200);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x248));
  pcVar23 = *(code **)(lVar33 + 8);
  (*pcVar23)(uVar31,_Var16.unknown);
  (*pcVar23)(uVar28,_Var16.unknown);
  (*pcVar23)(uVar26,_Var16.unknown);
  (*pcVar23)(uVar21);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2e8);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var16);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0x1000000000000013;
  local_60 = (void *)0x80000001004e20c0;
  pcVar13 = (char *)(unaff_x22 + 0xc0);
  _swift_getErrorValue(uVar21,unaff_x22 + 0x150);
  SVar36 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar5 = SVar36.bridgeObject;
  SVar43.bridgeObject = in_x3;
  SVar43.str = pcVar13;
  Swift::String::append(SVar36,SVar43);
  _swift_bridgeObjectRelease(pvVar5);
  puVar14 = local_60;
  SVar36.bridgeObject = local_60;
  SVar36.str = local_68;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0x524f525245;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x108) = 0xe100000000000000;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar14);
  pcVar17 = (char *)0x0;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x100),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar5,pvVar5);
  SVar44.bridgeObject = puVar8;
  SVar44.str = pcVar17;
  Swift::String::append(SVar37,SVar44);
  _swift_bridgeObjectRelease(SVar37.bridgeObject);
  SVar37.bridgeObject = (void *)0xe300000000000000;
  SVar37.str = (char *)0x5b205d;
  SVar45.bridgeObject = puVar8;
  SVar45.str = pcVar17;
  Swift::String::append(SVar37,SVar45);
  SVar38.bridgeObject = (void *)0xe600000000000000;
  SVar38.str = (char *)0x657461647075;
  SVar46.bridgeObject = puVar8;
  SVar46.str = pcVar17;
  Swift::String::append(SVar38,SVar46);
  SVar39.bridgeObject = (void *)0xe200000000000000;
  SVar39.str = (char *)0x205d;
  SVar47.bridgeObject = puVar8;
  SVar47.str = pcVar17;
  Swift::String::append(SVar39,SVar47);
  SVar48.bridgeObject = puVar8;
  SVar48.str = pcVar17;
  Swift::String::append(SVar36,SVar48);
  puVar15 = local_60;
  pcVar13 = local_68;
  local_68 = (char *)0x282020;
  local_60 = (undefined *)0xe300000000000000;
  SVar40.bridgeObject = (void *)0xed00002928657461;
  SVar40.str = (char *)0x6470557472617473;
  SVar49.bridgeObject = puVar8;
  SVar49.str = pcVar17;
  Swift::String::append(SVar40,SVar49);
  SVar41.bridgeObject = (void *)0xe100000000000000;
  SVar41.str = (char *)0x3a;
  SVar50.bridgeObject = puVar8;
  SVar50.str = pcVar17;
  Swift::String::append(SVar41,SVar50);
  *(undefined8 *)(unaff_x22 + 0x158) = 0x3a;
  SVar36 = Swift::CustomStringConvertible::get_description();
  SVar51.bridgeObject = puVar8;
  SVar51.str = pcVar17;
  Swift::String::append(SVar36,SVar51);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  SVar42.bridgeObject = (void *)0xe100000000000000;
  SVar42.str = (char *)0x29;
  SVar52.bridgeObject = puVar8;
  SVar52.str = pcVar17;
  Swift::String::append(SVar42,SVar52);
  puVar8 = local_60;
  pcVar17 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar18 = unaff_x22 + 0xd8;
  lVar33 = *(long *)(unaff_x22 + 0x1e0);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1e8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar1 = *(long *)(unaff_x22 + 0x1c8);
  puVar4 = &DAT_100533c00;
  _swift_allocObject(&DAT_100533c00,0x30,7);
  *(char **)(puVar4 + 0x10) = pcVar13;
  *(undefined **)(puVar4 + 0x18) = puVar15;
  *(char **)(puVar4 + 0x20) = pcVar17;
  *(undefined **)(puVar4 + 0x28) = puVar8;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100533c18;
  pvVar5 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar6.unknown = puVar15;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  *(undefined **)(unaff_x22 + 0x160) = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar4 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar26,unaff_x22 + 0x160,puVar8,puVar4,uVar28,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar5);
  (**(code **)(lVar1 + 8))(uVar26,uVar28);
  (**(code **)(lVar33 + 8))(qos.unknown,uVar31);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar33 = *(long *)(unaff_x22 + 0x1a0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar28 = uVar31;
  FUN_100099338(uVar31,&DAT_100558f50);
  (**(code **)(lVar33 + 0x10))(uVar26,uVar28,uVar31);
  uVar3 = (uint)uVar26;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar9.unknown = puVar15;
  _swift_bridgeObjectRetain();
  pOVar10 = os::Logger::get_logObject(LVar9);
  pOVar11 = pOVar10;
  _os_log_type_enabled(pOVar10,uVar3 & 0xff);
  lVar33 = *(long *)(unaff_x22 + 0x1a0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x198);
  if ((int)pOVar11 == 0) {
    _swift_bridgeObjectRelease_n(puVar15,2);
  }
  else {
    puVar12 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar17 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar12 = 0x8220102;
    local_68 = pcVar17;
    FUN_10012dbb0(pcVar13,puVar15,&local_68);
    *(char **)(puVar12 + 1) = pcVar13;
    _swift_bridgeObjectRelease_n(puVar15,2);
    __os_log_impl(0x100000000,pOVar10,uVar3 & 0xff,"%{public}s",puVar12,0xc);
    FUN_100043f24(pcVar17);
    _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar33 + 8))(uVar26,uVar28);
  _swift_bridgeObjectRelease_n(puVar14,2);
  *(undefined8 *)(unaff_x22 + 0x168) = uVar21;
  _swift_errorRetain(uVar21);
  puVar14 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  _swift_dynamicCast(lVar18,unaff_x22 + 0x168,puVar14,&DAT_100533dd8,6);
  if ((int)lVar18 != 0) {
    bVar2 = *(byte *)(unaff_x22 + 0xec);
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        FUN_100231e80();
        uVar30 = 1;
        goto LAB_10022e970;
      }
      if (bVar2 != 1) {
        FUN_100231e80();
      }
    }
    else {
      if (bVar2 == 3) {
        FUN_100231e80();
        uVar30 = 2;
        goto LAB_10022e970;
      }
      if (bVar2 == 4) {
        FUN_100231e80();
        uVar30 = 3;
        goto LAB_10022e970;
      }
      if (((*(long *)(unaff_x22 + 0xe0) != 0 || *(long *)(unaff_x22 + 0xd8) != 0) ||
          (*(int *)(unaff_x22 + 0xe8) != 0)) &&
         ((*(long *)(unaff_x22 + 0xd8) != 1 ||
          ((*(long *)(unaff_x22 + 0xe0) != 0 || (*(int *)(unaff_x22 + 0xe8) != 0)))))) {
        uVar30 = 2;
        goto LAB_10022e970;
      }
    }
  }
  uVar30 = 0;
LAB_10022e970:
  lVar33 = *(long *)(unaff_x22 + 0x260);
  pPVar24 = *(Published **)(unaff_x22 + 0x180);
  puVar14 = &DAT_10042bb80;
  _swift_getKeyPath(&DAT_10042bb80);
  puVar15 = &DAT_10042bba8;
  _swift_getKeyPath(&DAT_10042bba8);
  *(undefined1 *)(unaff_x22 + 0xee) = uVar30;
  _swift_retain(pPVar24);
  Combine::Published::_set_subscript
            (pPVar24,(undefined1 *)(unaff_x22 + 0xee),pPVar24,puVar14,puVar15);
  _swift_errorRelease(uVar21);
  *(undefined1 *)((long)&pPVar24->unknown + lVar33) = 0;
  uVar25 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010022ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}

