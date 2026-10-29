// rea decompile_all
// name: FUN_100167328
// address: 0x100167328
// body: available
// range: 0x100167328-0x100167a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10016796c to 0x100093624 FUN_100093624 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100167328(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  DispatchWorkItemFlags qos;
  undefined1 *puVar1;
  uint uVar2;
  Logger LVar3;
  CharacterSet CVar4;
  Encoding EVar5;
  Data DVar6;
  Data DVar7;
  CharacterSet CVar8;
  undefined *puVar9;
  void *pvVar10;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  char *pcVar17;
  ulong extraout_x1;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  undefined *puVar21;
  uint uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  undefined *puVar24;
  long extraout_x8_02;
  CharacterSet in;
  long lVar25;
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
  undefined1 auStack_120 [8];
  char *local_118;
  undefined *local_110;
  void *local_108;
  undefined *local_100;
  long local_f8;
  DispatchWorkItemFlags local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 *puVar13;
  
  LVar3 = os::Logger::typeMetadataAccessor();
  lVar25 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  local_c0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d0 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar23 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar23;
  puStack_e0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  puVar24 = (undefined *)(lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_f0.unknown = puVar24;
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar23 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  in.unknown = puVar24 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  EVar5 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(EVar5.unknown + -8) + 0x40));
  DVar6.unknown = (undefined *)objc_stub::availableData(param_1);
  uVar18 = extraout_x1;
  DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
  uVar2 = (uint)(uVar18 >> 0x20);
  uVar22 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar22 == 0) {
      if ((uVar18 & 0xff000000000000) == 0) {
LAB_100167934:
        objc_stub::setReadabilityHandler_(param_1,0);
        __Block_release((void *)0x0);
        FUN_100093624(DVar6.unknown,uVar18);
        return;
      }
    }
    else if ((long)(int)DVar6.unknown == (long)DVar6.unknown >> 0x20) goto LAB_100167934;
  }
  else if ((uVar22 != 2) || (*(long *)(DVar6.unknown + 0x10) == *(long *)(DVar6.unknown + 0x18)))
  goto LAB_100167934;
  local_f8 = lVar25;
  Encoding::_get_utf8((Encoding)0x0);
  DVar7 = DVar6;
  uVar19 = uVar18;
  (extension_Foundation)::Swift::String::_init((Encoding)DVar6.unknown);
  if (uVar19 != 0) {
    local_100 = LVar3.unknown;
    local_b8 = DVar7.unknown;
    CVar8 = Foundation::CharacterSet::get_whitespacesAndNewlines(DVar7.unknown);
    FUN_100026df4();
    pcVar17 = CVar8.unknown;
    SVar26 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    pvVar10 = SVar26.bridgeObject;
    (**(code **)(lVar23 + 8))(in.unknown);
    _swift_bridgeObjectRelease(uVar19);
    uVar19 = (ulong)SVar26.str & 0xffffffffffff;
    if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
      uVar19 = (ulong)pvVar10 >> 0x38 & 0xf;
    }
    if (uVar19 == 0) {
      FUN_100093624(DVar6.unknown,uVar18);
      _swift_bridgeObjectRelease(pvVar10);
      return;
    }
    local_b8 = (char *)0x0;
    local_b0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x18,(_StringGuts)CVar4.unknown);
    _swift_bridgeObjectRelease(local_b0);
    local_b8 = (char *)0xd000000000000016;
    local_b0 = (void *)0x80000001004deef0;
    SVar33.bridgeObject = param_4;
    SVar33.str = pcVar17;
    Swift::String::append(SVar26,SVar33);
    _swift_bridgeObjectRelease(pvVar10);
    puVar24 = local_b0;
    SVar26.bridgeObject = local_b0;
    SVar26.str = local_b8;
    local_b8 = (char *)0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4e524157;
    uStack_70 = 0xe400000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    pcVar20 = (char *)0x0;
    puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar27 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,CVar8.unknown,CVar8.unknown);
    SVar34.bridgeObject = puVar21;
    SVar34.str = pcVar20;
    Swift::String::append(SVar27,SVar34);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    SVar27.bridgeObject = (void *)0xe300000000000000;
    SVar27.str = (char *)0x5b205d;
    SVar35.bridgeObject = puVar21;
    SVar35.str = pcVar20;
    Swift::String::append(SVar27,SVar35);
    SVar28.bridgeObject = (void *)0xe300000000000000;
    SVar28.str = (char *)0x707061;
    SVar36.bridgeObject = puVar21;
    SVar36.str = pcVar20;
    Swift::String::append(SVar28,SVar36);
    SVar29.bridgeObject = (void *)0xe200000000000000;
    SVar29.str = (char *)0x205d;
    SVar37.bridgeObject = puVar21;
    SVar37.str = pcVar20;
    Swift::String::append(SVar29,SVar37);
    local_108 = puVar24;
    SVar38.bridgeObject = puVar21;
    SVar38.str = pcVar20;
    Swift::String::append(SVar26,SVar38);
    puVar24 = local_b0;
    pcVar17 = local_b8;
    local_b8 = (char *)0x282020;
    local_b0 = (undefined *)0xe300000000000000;
    SVar30.bridgeObject = (void *)0xe700000000000000;
    SVar30.str = (char *)0x29287472617473;
    SVar39.bridgeObject = puVar21;
    SVar39.str = pcVar20;
    Swift::String::append(SVar30,SVar39);
    SVar31.bridgeObject = (void *)0xe100000000000000;
    SVar31.str = (char *)0x3a;
    SVar40.bridgeObject = puVar21;
    SVar40.str = pcVar20;
    Swift::String::append(SVar31,SVar40);
    local_78 = (undefined *)0x65;
    SVar26 = Swift::CustomStringConvertible::get_description();
    SVar41.bridgeObject = puVar21;
    SVar41.str = pcVar20;
    Swift::String::append(SVar26,SVar41);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    SVar32.bridgeObject = (void *)0xe100000000000000;
    SVar32.str = (char *)0x29;
    SVar42.bridgeObject = puVar21;
    SVar42.str = pcVar20;
    Swift::String::append(SVar32,SVar42);
    puVar21 = local_b0;
    pcVar20 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar9 = &DAT_10052f8f0;
    _swift_allocObject(&DAT_10052f8f0,0x30,7);
    local_118 = pcVar17;
    *(char **)(puVar9 + 0x10) = pcVar17;
    *(undefined **)(puVar9 + 0x18) = puVar24;
    *(char **)(puVar9 + 0x20) = pcVar20;
    *(undefined **)(puVar9 + 0x28) = puVar21;
    local_98 = thunk_FUN_100099310;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = (undefined *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_10052f908;
    local_90 = puVar9;
    pvVar10 = __Block_copy(&local_b8);
    DVar11.unknown = puVar24;
    _swift_bridgeObjectRetain();
    qos.unknown = local_f0.unknown;
    local_110 = puVar24;
    DVar11 = Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar24 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar21 = local_c8;
    lVar23 = local_d8;
    Swift::SetAlgebra::_init(local_d8,&local_78,puVar24,puVar12,local_c8,DVar11.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar10);
    (**(code **)(local_d0 + 8))(lVar23,puVar21);
    (**(code **)(local_e8 + 8))(qos.unknown,puStack_e0);
    _swift_release(local_90);
    puVar1 = local_c0;
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar21 = local_100;
    puVar24 = local_100;
    FUN_100099338(local_100,&DAT_100558f50);
    lVar23 = local_f8;
    puVar13 = puVar1;
    (**(code **)(local_f8 + 0x10))(puVar1,puVar24,puVar21);
    uVar2 = (uint)puVar13;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    puVar24 = local_110;
    LVar3.unknown = local_110;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar3);
    pOVar15 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar2 & 0xff);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(puVar24,2);
    }
    else {
      puVar16 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar20 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar16 = 0x8220102;
      pcVar17 = local_118;
      local_b8 = pcVar20;
      FUN_10012dbb0(local_118,puVar24,&local_b8);
      *(char **)(puVar16 + 1) = pcVar17;
      _swift_bridgeObjectRelease_n(puVar24,2);
      __os_log_impl(0x100000000,pOVar14,uVar2 & 0xff,"%{public}s",puVar16,0xc);
      FUN_100043f24(pcVar20);
      _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar23 + 8))(puVar1,puVar21);
    _swift_bridgeObjectRelease(local_108);
  }
  FUN_100093624(DVar6.unknown,uVar18);
  return;
}

