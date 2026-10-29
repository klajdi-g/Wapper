// rea decompile_all
// name: FUN_100291998
// address: 0x100291998
// body: available
// range: 0x100291998-0x100291eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100291998(double param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  char *pcVar14;
  _StringGuts _Var15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  DispatchWorkItemFlags qos;
  long lVar20;
  long lVar21;
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
  String SVar33;
  char *local_f0;
  long local_e8;
  void *local_e0;
  long local_d8;
  long lStack_d0;
  undefined *local_c8;
  char *local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar18 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar20 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar21 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar19 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar17 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if ((*(byte *)(unaff_x20 + 0x40) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x40) = 1;
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    _Var15.unknown = (undefined *)0x1;
    FUN_10023afe8(1);
    local_c0 = (char *)0x0;
    local_b8 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var15);
    _swift_bridgeObjectRelease(local_b8);
    local_c0 = (char *)0xd000000000000027;
    local_b8 = (void *)0x80000001004e3650;
    param_1 = param_1 * 100.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100291eb8);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100291ebc);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100291ec0);
      (*pcVar2)();
    }
    local_80 = (undefined *)(long)param_1;
    local_e8 = lVar21;
    local_d8 = lVar20;
    lStack_d0 = lVar18;
    local_c8 = LVar4.unknown;
    SVar22 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = param_5;
    SVar27.str = param_4;
    Swift::String::append(SVar22,SVar27);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar23.bridgeObject = (void *)0xe100000000000000;
    SVar23.str = (char *)0x25;
    uVar7 = 0x25;
    SVar28.bridgeObject = param_5;
    SVar28.str = param_4;
    Swift::String::append(SVar23,SVar28);
    puVar1 = local_b8;
    SVar22.bridgeObject = local_b8;
    SVar22.str = local_c0;
    local_c0 = (char *)0x5b;
    local_b8 = (undefined *)0xe100000000000000;
    local_80 = (undefined *)0x4f464e49;
    uStack_78 = 0xe400000000000000;
    local_90 = 0x20;
    uStack_88 = 0xe100000000000000;
    FUN_100026df4();
    pcVar16 = (char *)0x0;
    puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_90,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar7,uVar7);
    SVar29.bridgeObject = puVar8;
    SVar29.str = pcVar16;
    Swift::String::append(SVar23,SVar29);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar24.bridgeObject = (void *)0xe300000000000000;
    SVar24.str = (char *)0x5b205d;
    SVar30.bridgeObject = puVar8;
    SVar30.str = pcVar16;
    Swift::String::append(SVar24,SVar30);
    SVar25.bridgeObject = (void *)0xe800000000000000;
    SVar25.str = (char *)0x6b63616279616c70;
    SVar31.bridgeObject = puVar8;
    SVar31.str = pcVar16;
    Swift::String::append(SVar25,SVar31);
    SVar26.bridgeObject = (void *)0xe200000000000000;
    SVar26.str = (char *)0x205d;
    SVar32.bridgeObject = puVar8;
    SVar32.str = pcVar16;
    Swift::String::append(SVar26,SVar32);
    local_e0 = puVar1;
    SVar33.bridgeObject = puVar8;
    SVar33.str = pcVar16;
    Swift::String::append(SVar22,SVar33);
    puVar1 = local_b8;
    pcVar16 = local_c0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar8 = &DAT_100537018;
    _swift_allocObject(&DAT_100537018,0x30,7);
    local_f0 = pcVar16;
    *(char **)(puVar8 + 0x10) = pcVar16;
    *(undefined **)(puVar8 + 0x18) = puVar1;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
    local_a0 = thunk_FUN_100099310;
    local_c0 = PTR___NSConcreteStackBlock_100521110;
    local_b8 = (undefined *)0x42000000;
    local_b0 = FUN_1000c7e7c;
    puStack_a8 = &DAT_100537030;
    local_98 = puVar8;
    aBlock = __Block_copy(&local_c0);
    DVar9.unknown = puVar1;
    _swift_bridgeObjectRetain();
    DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_80 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = puVar8;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar19,&local_80,puVar8,puVar10,DVar5.unknown,DVar9.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_e8 + 8))(lVar19,DVar5.unknown);
    (**(code **)(lVar17 + 8))(qos.unknown,DVar6.unknown);
    _swift_release(local_98);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar8 = local_c8;
    puVar10 = local_c8;
    FUN_100099338(local_c8,&DAT_100558f50);
    lVar18 = lStack_d0;
    lVar17 = local_d8;
    lVar19 = local_d8;
    (**(code **)(lStack_d0 + 0x10))(local_d8,puVar10,puVar8);
    uVar3 = (uint)lVar19;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar4.unknown = puVar1;
    _swift_bridgeObjectRetain();
    pOVar11 = os::Logger::get_logObject(LVar4);
    pOVar12 = pOVar11;
    _os_log_type_enabled(pOVar11,uVar3 & 0xff);
    if ((int)pOVar12 == 0) {
      _swift_bridgeObjectRelease_n(puVar1,2);
    }
    else {
      puVar13 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar14 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar13 = 0x8220102;
      pcVar16 = local_f0;
      local_c0 = pcVar14;
      FUN_10012dbb0(local_f0,puVar1,&local_c0);
      *(char **)(puVar13 + 1) = pcVar16;
      _swift_bridgeObjectRelease_n(puVar1,2);
      __os_log_impl(0x100000000,pOVar11,uVar3 & 0xff,"%{public}s",puVar13,0xc);
      FUN_100043f24(pcVar14);
      _swift_slowDealloc(pcVar14,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar18 + 8))(lVar17,puVar8);
    _swift_bridgeObjectRelease(local_e0);
  }
  return;
}

