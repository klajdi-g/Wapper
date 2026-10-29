// rea decompile_all
// name: FUN_100291414
// address: 0x100291414
// body: available
// range: 0x100291414-0x100291997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100291414(double param_1,char param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  code *pcVar3;
  uint uVar4;
  Logger LVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  undefined *puVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  undefined *puVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  char *pcVar15;
  _StringGuts _Var16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar18;
  long lVar19;
  DispatchWorkItemFlags qos;
  long lVar20;
  String SVar21;
  String SVar22;
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
  char *local_e0;
  void *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  long local_80 [2];
  String local_70;
  
  LVar5 = os::Logger::typeMetadataAccessor();
  lVar20 = *(long *)(LVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar19 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar19;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c0 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar19 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x40) = 0;
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    _Var16.unknown = (undefined *)0x0;
    FUN_10023afe8(1);
    local_b0 = (char *)0x0;
    local_a8 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var16);
    _swift_bridgeObjectRelease(local_a8);
    local_b0 = &DAT_d000000000000028;
    local_a8 = (void *)0x80000001004e3680;
    if (param_2 == '\x01') {
      pcVar17 = (char *)0x612f6e;
      pvVar9 = (void *)0xe300000000000000;
    }
    else {
      param_1 = param_1 * 100.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100291990);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100291994);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100291998);
        (*pcVar3)();
      }
      local_80[0] = (long)param_1;
      local_70 = Swift::CustomStringConvertible::get_description();
      SVar22.bridgeObject = (void *)0xe100000000000000;
      SVar22.str = (char *)0x25;
      SVar26.bridgeObject = param_4;
      SVar26.str = param_3;
      Swift::String::append(SVar22,SVar26);
      pcVar17 = local_70.str;
      pvVar9 = local_70.bridgeObject;
    }
    SVar21.bridgeObject = pvVar9;
    SVar21.str = pcVar17;
    SVar27.bridgeObject = param_4;
    SVar27.str = param_3;
    local_d0 = lVar20;
    local_c8 = LVar5.unknown;
    Swift::String::append(SVar21,SVar27);
    _swift_bridgeObjectRelease(pvVar9);
    puVar2 = local_a8;
    SVar1.bridgeObject = local_a8;
    SVar1.str = local_b0;
    local_b0 = (char *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_70.bridgeObject = (void *)0xe400000000000000;
    local_70.str = (char *)0x4f464e49;
    local_80[0] = 0x20;
    local_80[1] = 0xe100000000000000;
    FUN_100026df4();
    pcVar17 = (char *)0x0;
    puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
    SVar28.bridgeObject = puVar8;
    SVar28.str = pcVar17;
    Swift::String::append(SVar22,SVar28);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar23.bridgeObject = (void *)0xe300000000000000;
    SVar23.str = (char *)0x5b205d;
    SVar29.bridgeObject = puVar8;
    SVar29.str = pcVar17;
    Swift::String::append(SVar23,SVar29);
    SVar24.bridgeObject = (void *)0xe800000000000000;
    SVar24.str = (char *)0x6b63616279616c70;
    SVar30.bridgeObject = puVar8;
    SVar30.str = pcVar17;
    Swift::String::append(SVar24,SVar30);
    SVar25.bridgeObject = (void *)0xe200000000000000;
    SVar25.str = (char *)0x205d;
    SVar31.bridgeObject = puVar8;
    SVar31.str = pcVar17;
    Swift::String::append(SVar25,SVar31);
    local_d8 = puVar2;
    SVar32.bridgeObject = puVar8;
    SVar32.str = pcVar17;
    Swift::String::append(SVar1,SVar32);
    puVar2 = local_a8;
    pcVar17 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar8 = &DAT_100537068;
    _swift_allocObject(&DAT_100537068,0x30,7);
    local_e0 = pcVar17;
    *(char **)(puVar8 + 0x10) = pcVar17;
    *(undefined **)(puVar8 + 0x18) = puVar2;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
    local_90 = thunk_FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100537080;
    local_88 = puVar8;
    pvVar9 = __Block_copy(&local_b0);
    DVar10.unknown = puVar2;
    _swift_bridgeObjectRetain();
    DVar10 = Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_70.str = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar8;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar19,&local_70,puVar8,puVar11,DVar6.unknown,DVar10.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar9);
    (**(code **)(local_c0 + 8))(lVar19,DVar6.unknown);
    (**(code **)(lVar18 + 8))(qos.unknown,DVar7.unknown);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar8 = local_c8;
    puVar11 = local_c8;
    FUN_100099338(local_c8,&DAT_100558f50);
    lVar18 = local_b8;
    lVar19 = local_d0;
    lVar20 = local_b8;
    (**(code **)(local_d0 + 0x10))(local_b8,puVar11,puVar8);
    uVar4 = (uint)lVar20;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar5.unknown = puVar2;
    _swift_bridgeObjectRetain();
    pOVar12 = os::Logger::get_logObject(LVar5);
    pOVar13 = pOVar12;
    _os_log_type_enabled(pOVar12,uVar4 & 0xff);
    if ((int)pOVar13 == 0) {
      _swift_bridgeObjectRelease_n(puVar2,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar15 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      pcVar17 = local_e0;
      local_b0 = pcVar15;
      FUN_10012dbb0(local_e0,puVar2,&local_b0);
      *(char **)(puVar14 + 1) = pcVar17;
      _swift_bridgeObjectRelease_n(puVar2,2);
      __os_log_impl(0x100000000,pOVar12,uVar4 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar15);
      _swift_slowDealloc(pcVar15,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar19 + 8))(lVar18,puVar8);
    _swift_bridgeObjectRelease(local_d8);
  }
  return;
}

