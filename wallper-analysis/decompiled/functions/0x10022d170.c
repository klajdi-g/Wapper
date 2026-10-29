// rea decompile_all
// name: FUN_10022d170
// address: 0x10022d170
// body: available
// range: 0x10022d170-0x10022dcaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10022d170(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  byte bVar2;
  String SVar3;
  uint uVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  OS_os_log *pOVar9;
  undefined4 *puVar10;
  URL UVar11;
  undefined *puVar12;
  DispatchQoS DVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  undefined *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  _StringGuts _Var25;
  undefined8 uVar26;
  Published *pPVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long unaff_x22;
  undefined1 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  code *pcVar38;
  DispatchWorkItemFlags DVar39;
  undefined8 uVar40;
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
  char *local_70;
  undefined *local_68;
  
  lVar29 = *(long *)(unaff_x22 + 0x2e8);
  _Var25.unknown = *(undefined **)(unaff_x22 + 0x238);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x220);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x248));
  FUN_100231628(uVar23);
  if (lVar29 == 0) {
    pcVar38 = *(code **)(unaff_x22 + 0x2b0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x2a8);
    pcVar20 = *(code **)(unaff_x22 + 0x2a0);
    pcVar22 = *(code **)(unaff_x22 + 0x298);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x270);
    DVar39.unknown = *(undefined **)(unaff_x22 + 0x1e8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x198);
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2b,_Var25);
    UVar11.unknown = local_68;
    _swift_bridgeObjectRelease();
    local_70 = (char *)0xd000000000000011;
    local_68 = (void *)0x80000001004e2100;
    SVar41 = Foundation::URL::get_lastPathComponent(UVar11);
    SVar62.bridgeObject = param_4;
    SVar62.str = param_3;
    Swift::String::append(SVar41,SVar62);
    _swift_bridgeObjectRelease(SVar41.bridgeObject);
    SVar48.bridgeObject = (void *)0x80000001004e2120;
    SVar48.str = (char *)0x1000000000000018;
    SVar63.bridgeObject = param_4;
    SVar63.str = param_3;
    Swift::String::append(SVar48,SVar63);
    puVar16 = local_68;
    SVar41.bridgeObject = local_68;
    SVar41.str = local_70;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x130) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x138) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x148) = 0xe100000000000000;
    pcVar18 = (char *)0x0;
    puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar48 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0x140,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar30,uVar30);
    SVar64.bridgeObject = puVar12;
    SVar64.str = pcVar18;
    Swift::String::append(SVar48,SVar64);
    _swift_bridgeObjectRelease(SVar48.bridgeObject);
    SVar49.bridgeObject = (void *)0xe300000000000000;
    SVar49.str = (char *)0x5b205d;
    SVar65.bridgeObject = puVar12;
    SVar65.str = pcVar18;
    Swift::String::append(SVar49,SVar65);
    SVar50.bridgeObject = (void *)0xe600000000000000;
    SVar50.str = (char *)0x657461647075;
    SVar66.bridgeObject = puVar12;
    SVar66.str = pcVar18;
    Swift::String::append(SVar50,SVar66);
    SVar51.bridgeObject = (void *)0xe200000000000000;
    SVar51.str = (char *)0x205d;
    SVar67.bridgeObject = puVar12;
    SVar67.str = pcVar18;
    Swift::String::append(SVar51,SVar67);
    SVar68.bridgeObject = puVar12;
    SVar68.str = pcVar18;
    Swift::String::append(SVar41,SVar68);
    puVar8 = local_68;
    pcVar18 = local_70;
    puVar12 = &DAT_100533cc8;
    _swift_allocObject(&DAT_100533cc8,0x30,7);
    *(undefined8 *)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
    *(char **)(puVar12 + 0x10) = pcVar18;
    *(undefined **)(puVar12 + 0x18) = puVar8;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x98) = puVar12;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
    *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x88) = &DAT_100533ce0;
    pvVar6 = __Block_copy((undefined8 *)(unaff_x22 + 0x70));
    DVar13.unknown = puVar8;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar13);
    *(undefined **)(unaff_x22 + 0x178) = PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(uVar23,unaff_x22 + 0x178,uVar19,uVar24,uVar33,uVar28);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar39);
    __Block_release(pvVar6);
    (*pcVar22)(uVar23,uVar33);
    (*pcVar20)(DVar39.unknown,uVar26);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
    (*pcVar38)(uVar32,uVar40,uVar21);
    uVar4 = (uint)uVar32;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar14.unknown = puVar8;
    _swift_bridgeObjectRetain();
    pOVar9 = os::Logger::get_logObject(LVar14);
    pOVar15 = pOVar9;
    _os_log_type_enabled(pOVar9,uVar4 & 0xff);
    pcVar38 = *(code **)(unaff_x22 + 0x2b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x198);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(puVar8,2);
    }
    else {
      puVar10 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar17 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar10 = 0x8220102;
      local_70 = pcVar17;
      FUN_10012dbb0(pcVar18,puVar8,&local_70);
      *(char **)(puVar10 + 1) = pcVar18;
      _swift_bridgeObjectRelease_n(puVar8,2);
      __os_log_impl(0x100000000,pOVar9,uVar4 & 0xff,"%{public}s",puVar10,0xc);
      FUN_100043f24(pcVar17);
      _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
    }
    (*pcVar38)(uVar23,uVar26);
    _swift_bridgeObjectRelease(puVar16);
    if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
      pcVar38 = (code *)SoftwareBreakpoint(1,0x10022dcb0);
      (*pcVar38)();
    }
    uVar26 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar34 = *(long *)(unaff_x22 + 0x200);
    objc_stub::terminate_(*(ID *)PTR__NSApp_1005212d0,0);
    pcVar38 = *(code **)(lVar34 + 8);
    (*pcVar38)(uVar21,uVar23);
    (*pcVar38)(uVar19,uVar23);
    (*pcVar38)(uVar40,uVar23);
    (*pcVar38)(uVar32,uVar23);
    (*pcVar38)(uVar26,uVar23);
    goto LAB_10022db9c;
  }
  uVar26 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x228);
  _Var25.unknown = *(undefined **)(unaff_x22 + 0x1f8);
  pcVar38 = *(code **)(*(long *)(unaff_x22 + 0x200) + 8);
  (*pcVar38)(*(undefined8 *)(unaff_x22 + 0x220),_Var25.unknown);
  (*pcVar38)(uVar32,_Var25.unknown);
  (*pcVar38)(uVar40,_Var25.unknown);
  (*pcVar38)(uVar23,_Var25.unknown);
  (*pcVar38)(uVar26);
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var25);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0x1000000000000013;
  local_68 = (void *)0x80000001004e20c0;
  pcVar18 = (char *)(unaff_x22 + 0xc0);
  _swift_getErrorValue(lVar29,unaff_x22 + 0x150);
  SVar41 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar6 = SVar41.bridgeObject;
  SVar52.bridgeObject = param_4;
  SVar52.str = pcVar18;
  Swift::String::append(SVar41,SVar52);
  _swift_bridgeObjectRelease(pvVar6);
  puVar12 = local_68;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0x524f525245;
  SVar3.bridgeObject = local_68;
  SVar3.str = local_70;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x108) = 0xe100000000000000;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar12);
  pcVar17 = (char *)0x0;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar41 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x100),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar6,pvVar6);
  SVar53.bridgeObject = puVar8;
  SVar53.str = pcVar17;
  Swift::String::append(SVar41,SVar53);
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  SVar42.bridgeObject = (void *)0xe300000000000000;
  SVar42.str = (char *)0x5b205d;
  SVar54.bridgeObject = puVar8;
  SVar54.str = pcVar17;
  Swift::String::append(SVar42,SVar54);
  SVar43.bridgeObject = (void *)0xe600000000000000;
  SVar43.str = (char *)0x657461647075;
  SVar55.bridgeObject = puVar8;
  SVar55.str = pcVar17;
  Swift::String::append(SVar43,SVar55);
  SVar44.bridgeObject = (void *)0xe200000000000000;
  SVar44.str = (char *)0x205d;
  SVar56.bridgeObject = puVar8;
  SVar56.str = pcVar17;
  Swift::String::append(SVar44,SVar56);
  SVar57.bridgeObject = puVar8;
  SVar57.str = pcVar17;
  Swift::String::append(SVar3,SVar57);
  puVar16 = local_68;
  pcVar18 = local_70;
  local_70 = (char *)0x282020;
  local_68 = (undefined *)0xe300000000000000;
  SVar45.bridgeObject = (void *)0xed00002928657461;
  SVar45.str = (char *)0x6470557472617473;
  SVar58.bridgeObject = puVar8;
  SVar58.str = pcVar17;
  Swift::String::append(SVar45,SVar58);
  SVar46.bridgeObject = (void *)0xe100000000000000;
  SVar46.str = (char *)0x3a;
  SVar59.bridgeObject = puVar8;
  SVar59.str = pcVar17;
  Swift::String::append(SVar46,SVar59);
  *(undefined8 *)(unaff_x22 + 0x158) = 0x3a;
  SVar41 = Swift::CustomStringConvertible::get_description();
  SVar60.bridgeObject = puVar8;
  SVar60.str = pcVar17;
  Swift::String::append(SVar41,SVar60);
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  SVar47.bridgeObject = (void *)0xe100000000000000;
  SVar47.str = (char *)0x29;
  SVar61.bridgeObject = puVar8;
  SVar61.str = pcVar17;
  Swift::String::append(SVar47,SVar61);
  puVar8 = local_68;
  pcVar17 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar34 = *(long *)(unaff_x22 + 0x1e0);
  DVar39.unknown = *(undefined **)(unaff_x22 + 0x1e8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar1 = *(long *)(unaff_x22 + 0x1c8);
  puVar5 = &DAT_100533c00;
  _swift_allocObject(&DAT_100533c00,0x30,7);
  *(char **)(puVar5 + 0x10) = pcVar18;
  *(undefined **)(puVar5 + 0x18) = puVar16;
  *(char **)(puVar5 + 0x20) = pcVar17;
  *(undefined **)(puVar5 + 0x28) = puVar8;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100533c18;
  pvVar6 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar13.unknown = puVar16;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  *(undefined **)(unaff_x22 + 0x160) = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar5 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar23,unaff_x22 + 0x160,puVar8,puVar5,uVar26,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar39);
  __Block_release(pvVar6);
  (**(code **)(lVar1 + 8))(uVar23,uVar26);
  (**(code **)(lVar34 + 8))(DVar39.unknown,uVar32);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar34 = *(long *)(unaff_x22 + 0x1a0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar26 = uVar32;
  FUN_100099338(uVar32,&DAT_100558f50);
  (**(code **)(lVar34 + 0x10))(uVar23,uVar26,uVar32);
  uVar4 = (uint)uVar23;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar14.unknown = puVar16;
  _swift_bridgeObjectRetain();
  pOVar9 = os::Logger::get_logObject(LVar14);
  pOVar15 = pOVar9;
  _os_log_type_enabled(pOVar9,uVar4 & 0xff);
  lVar34 = *(long *)(unaff_x22 + 0x1a0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x198);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar16,2);
  }
  else {
    puVar10 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar17 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar10 = 0x8220102;
    local_70 = pcVar17;
    FUN_10012dbb0(pcVar18,puVar16,&local_70);
    *(char **)(puVar10 + 1) = pcVar18;
    _swift_bridgeObjectRelease_n(puVar16,2);
    __os_log_impl(0x100000000,pOVar9,uVar4 & 0xff,"%{public}s",puVar10,0xc);
    FUN_100043f24(pcVar17);
    _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar34 + 8))(uVar23,uVar26);
  _swift_bridgeObjectRelease_n(puVar12,2);
  *(long *)(unaff_x22 + 0x168) = lVar29;
  _swift_errorRetain(lVar29);
  puVar12 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  lVar34 = unaff_x22 + 0xd8;
  _swift_dynamicCast(lVar34,unaff_x22 + 0x168,puVar12,&DAT_100533dd8,6);
  if ((int)lVar34 == 0) {
LAB_10022db44:
    uVar31 = 0;
  }
  else {
    bVar2 = *(byte *)(unaff_x22 + 0xec);
    if (bVar2 < 3) {
      if (bVar2 != 0) {
        if (bVar2 != 1) {
          FUN_100231e80();
        }
        goto LAB_10022db44;
      }
      FUN_100231e80();
      uVar31 = 1;
    }
    else if (bVar2 == 3) {
      FUN_100231e80();
      uVar31 = 2;
    }
    else if (bVar2 == 4) {
      FUN_100231e80();
      uVar31 = 3;
    }
    else {
      if (((*(long *)(unaff_x22 + 0xe0) == 0 && *(long *)(unaff_x22 + 0xd8) == 0) &&
          (*(int *)(unaff_x22 + 0xe8) == 0)) ||
         ((*(long *)(unaff_x22 + 0xd8) == 1 &&
          ((*(long *)(unaff_x22 + 0xe0) == 0 && (*(int *)(unaff_x22 + 0xe8) == 0))))))
      goto LAB_10022db44;
      uVar31 = 2;
    }
  }
  lVar34 = *(long *)(unaff_x22 + 0x260);
  pPVar27 = *(Published **)(unaff_x22 + 0x180);
  puVar12 = &DAT_10042bb80;
  _swift_getKeyPath(&DAT_10042bb80);
  puVar16 = &DAT_10042bba8;
  _swift_getKeyPath(&DAT_10042bba8);
  *(undefined1 *)(unaff_x22 + 0xee) = uVar31;
  _swift_retain(pPVar27);
  Combine::Published::_set_subscript(pPVar27,unaff_x22 + 0xee,pPVar27,puVar12,puVar16);
  _swift_errorRelease(lVar29);
  *(undefined1 *)((long)&pPVar27->unknown + lVar34) = 0;
LAB_10022db9c:
  uVar24 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010022dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar29 == 0);
  return;
}

