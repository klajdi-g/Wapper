// rea decompile_all
// name: FUN_1002907b4
// address: 0x1002907b4
// body: available
// range: 0x1002907b4-0x100290d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002907b4(undefined8 param_1,undefined1 param_2)

{
  uint uVar1;
  Logger LVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  void *pvVar6;
  char *pcVar7;
  ID self;
  undefined8 uVar8;
  undefined *puVar9;
  DispatchQoS DVar10;
  undefined *puVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  _StringGuts extraout_x1;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  DispatchWorkItemFlags qos;
  long lVar19;
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
  char *local_100;
  void *local_f8;
  long local_f0;
  char *local_e8;
  long local_e0;
  long lStack_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined *local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar17 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar20 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar18 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar16 = *(long *)(DVar4.unknown + -8);
  DVar10 = DVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  qos.unknown = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    local_f0 = lVar20;
    local_e0 = lVar19;
    lStack_d8 = lVar17;
    local_d0 = LVar2.unknown;
    FUN_100291264();
    *(undefined **)(unaff_x20 + 0x20) = DVar10.unknown;
    *(undefined1 *)(unaff_x20 + 0x28) = param_2;
    puVar5 = &DAT_100536f78;
    _swift_allocObject(&DAT_100536f78,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    local_88 = FUN_100291fbc;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = (undefined *)0x42000000;
    local_98 = FUN_10016802c;
    puStack_90 = &DAT_100536f90;
    local_80 = puVar5;
    pvVar6 = __Block_copy(&local_a8);
    _swift_retain(puVar5);
    pcVar7 = (char *)NSTimer::timerWithTimeInterval_repeats_block_
                               ((ID)&_OBJC_CLASS___NSTimer,0x4008000000000000,1,pvVar6);
    __Block_release(pvVar6);
    puVar9 = local_80;
    _swift_release(puVar5);
    _swift_release(puVar9);
    NSTimer::setTolerance_((ID)pcVar7,0x3fe0000000000000);
    self = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    pvVar6 = *(void **)PTR__NSRunLoopCommonModes_100521578;
    pcVar15 = pcVar7;
    NSRunLoop::addTimer_forMode_(self);
    *(char **)(unaff_x20 + 0x18) = pcVar7;
    local_a8 = (char *)0x0;
    local_a0 = (undefined *)0xe000000000000000;
    local_e8 = pcVar7;
    Swift::_StringGuts::grow(0x23,extraout_x1);
    _swift_bridgeObjectRelease(local_a0);
    local_a8 = (char *)0xd00000000000001f;
    local_a0 = (void *)0x80000001004e3630;
    local_b8 = (undefined *)0x50;
    SVar21 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = pvVar6;
    SVar26.str = pcVar15;
    Swift::String::append(SVar21,SVar26);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar22.bridgeObject = (void *)0xe200000000000000;
    SVar22.str = (char *)0x2925;
    uVar8 = 0x2925;
    SVar27.bridgeObject = pvVar6;
    SVar27.str = pcVar15;
    Swift::String::append(SVar22,SVar27);
    puVar5 = local_a0;
    SVar21.bridgeObject = local_a0;
    SVar21.str = local_a8;
    local_a8 = (char *)0x5b;
    local_a0 = (undefined *)0xe100000000000000;
    local_b8 = (undefined *)0x4f464e49;
    uStack_b0 = 0xe400000000000000;
    local_c8 = 0x20;
    uStack_c0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar15 = (char *)0x0;
    puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_c8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
    SVar28.bridgeObject = puVar9;
    SVar28.str = pcVar15;
    Swift::String::append(SVar22,SVar28);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar23.bridgeObject = (void *)0xe300000000000000;
    SVar23.str = (char *)0x5b205d;
    SVar29.bridgeObject = puVar9;
    SVar29.str = pcVar15;
    Swift::String::append(SVar23,SVar29);
    SVar24.bridgeObject = (void *)0xe800000000000000;
    SVar24.str = (char *)0x6b63616279616c70;
    SVar30.bridgeObject = puVar9;
    SVar30.str = pcVar15;
    Swift::String::append(SVar24,SVar30);
    SVar25.bridgeObject = (void *)0xe200000000000000;
    SVar25.str = (char *)0x205d;
    SVar31.bridgeObject = puVar9;
    SVar31.str = pcVar15;
    Swift::String::append(SVar25,SVar31);
    local_f8 = puVar5;
    SVar32.bridgeObject = puVar9;
    SVar32.str = pcVar15;
    Swift::String::append(SVar21,SVar32);
    puVar5 = local_a0;
    pcVar15 = local_a8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar9 = &DAT_100536fc8;
    _swift_allocObject(&DAT_100536fc8,0x30,7);
    local_100 = pcVar15;
    *(char **)(puVar9 + 0x10) = pcVar15;
    *(undefined **)(puVar9 + 0x18) = puVar5;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
    local_88 = FUN_100099310;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = (undefined *)0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_100536fe0;
    local_80 = puVar9;
    pvVar6 = __Block_copy(&local_a8);
    DVar10.unknown = puVar5;
    _swift_bridgeObjectRetain();
    DVar10 = Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_b8 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar9 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar9;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar18,&local_b8,puVar9,puVar11,DVar3.unknown,DVar10.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar6);
    (**(code **)(local_f0 + 8))(lVar18,DVar3.unknown);
    (**(code **)(lVar16 + 8))(qos.unknown,DVar4.unknown);
    _swift_release(local_80);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar9 = local_d0;
    puVar11 = local_d0;
    FUN_100099338(local_d0,&DAT_100558f50);
    lVar17 = lStack_d8;
    lVar16 = local_e0;
    lVar18 = local_e0;
    (**(code **)(lStack_d8 + 0x10))(local_e0,puVar11,puVar9);
    uVar1 = (uint)lVar18;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar2.unknown = puVar5;
    _swift_bridgeObjectRetain();
    pOVar12 = os::Logger::get_logObject(LVar2);
    pOVar13 = pOVar12;
    _os_log_type_enabled(pOVar12,uVar1 & 0xff);
    if ((int)pOVar13 == 0) {
      _swift_bridgeObjectRelease_n(puVar5,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar7 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      pcVar15 = local_100;
      local_a8 = pcVar7;
      FUN_10012dbb0(local_100,puVar5,&local_a8);
      *(char **)(puVar14 + 1) = pcVar15;
      _swift_bridgeObjectRelease_n(puVar5,2);
      __os_log_impl(0x100000000,pOVar12,uVar1 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar7);
      _swift_slowDealloc(pcVar7,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar17 + 8))(lVar16,puVar9);
    _swift_bridgeObjectRelease(local_f8);
  }
  return;
}

