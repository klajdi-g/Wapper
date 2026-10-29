// rea decompile_all
// name: FUN_1002365e8
// address: 0x1002365e8
// body: available
// range: 0x1002365e8-0x100236b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002365e8(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  ID IVar5;
  NSString *pNVar6;
  ID IVar7;
  ID IVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Logger LVar12;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  char *pcVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  DispatchWorkItemFlags qos;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  long local_d0;
  undefined *puStack_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 *puVar13;
  
  local_d8 = (undefined *)param_1;
  LVar3 = os::Logger::typeMetadataAccessor();
  local_b8 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  puVar20 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar21 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_c8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d0 = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  qos.unknown = (undefined *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  IVar5 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = NSUserDefaults::arrayForKey_(IVar5,pNVar6);
  IVar5 = 0;
  if (IVar7 != 0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    IVar8 = IVar7;
    FUN_1001f027c();
    _swift_bridgeObjectRelease(IVar7);
    IVar5 = IVar7;
    if ((IVar8 != 0) &&
       (lVar19 = *(long *)(IVar8 + 0x10), _swift_bridgeObjectRelease(IVar8), IVar5 = IVar8,
       lVar19 != 0)) {
      FUN_10024ddc0();
      IVar5 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = NSUserDefaults::boolForKey_(IVar5,pNVar6);
      if ((int)IVar5 == 0) {
        return;
      }
      FUN_100251e70(0);
      return;
    }
  }
  local_b0 = (undefined *)0x5b;
  local_a8 = (undefined *)0xe100000000000000;
  local_70 = (undefined *)0x4f464e49;
  uStack_68 = 0xe400000000000000;
  local_80 = 0x20;
  uStack_78 = 0xe100000000000000;
  FUN_100026df4();
  pcVar18 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,IVar5,IVar5);
  SVar26.bridgeObject = puVar11;
  SVar26.str = pcVar18;
  Swift::String::append(SVar22,SVar26);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar22.bridgeObject = (void *)0xe300000000000000;
  SVar22.str = (char *)0x5b205d;
  SVar27.bridgeObject = puVar11;
  SVar27.str = pcVar18;
  Swift::String::append(SVar22,SVar27);
  SVar23.bridgeObject = (void *)0xe900000000000072;
  SVar23.str = (char *)0x657061706c6c6177;
  SVar28.bridgeObject = puVar11;
  SVar28.str = pcVar18;
  Swift::String::append(SVar23,SVar28);
  SVar24.bridgeObject = (void *)0xe200000000000000;
  SVar24.str = (char *)0x205d;
  SVar29.bridgeObject = puVar11;
  SVar29.str = pcVar18;
  Swift::String::append(SVar24,SVar29);
  SVar25.bridgeObject = (void *)0x80000001004e2b30;
  SVar25.str = (char *)0xd000000000000019;
  SVar30.bridgeObject = puVar11;
  SVar30.str = pcVar18;
  Swift::String::append(SVar25,SVar30);
  puVar1 = local_a8;
  puVar11 = local_b0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar17 = &DAT_100535658;
  _swift_allocObject(&DAT_100535658,0x30,7);
  local_d8 = puVar11;
  *(undefined **)(puVar17 + 0x10) = puVar11;
  *(undefined **)(puVar17 + 0x18) = puVar1;
  *(undefined8 *)(puVar17 + 0x20) = 0;
  *(undefined8 *)(puVar17 + 0x28) = 0xe000000000000000;
  local_90 = thunk_FUN_100099310;
  local_b0 = PTR___NSConcreteStackBlock_100521110;
  local_a8 = (undefined *)0x42000000;
  local_a0 = FUN_1000c7e7c;
  puStack_98 = &DAT_100535670;
  local_88 = puVar17;
  aBlock = __Block_copy(&local_b0);
  DVar9.unknown = puVar1;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar9);
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar17 = puVar11;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar21,&local_70,puVar11,puVar17,DVar4.unknown,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_c0 + 8))(lVar21,DVar4.unknown);
  (**(code **)(local_d0 + 8))(qos.unknown,puStack_c8);
  _swift_release(local_88);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar12 = LVar3;
  FUN_100099338(LVar3.unknown,&DAT_100558f50);
  lVar21 = local_b8;
  puVar13 = puVar20;
  (**(code **)(local_b8 + 0x10))(puVar20,LVar12.unknown,LVar3.unknown);
  uVar2 = (uint)puVar13;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar12.unknown = puVar1;
  _swift_bridgeObjectRetain();
  pOVar14 = os::Logger::get_logObject(LVar12);
  pOVar15 = pOVar14;
  _os_log_type_enabled(pOVar14,uVar2 & 0xff);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  else {
    puVar16 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar17 = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar16 = 0x8220102;
    puVar11 = local_d8;
    local_b0 = puVar17;
    FUN_10012dbb0(local_d8,puVar1,&local_b0);
    *(undefined **)(puVar16 + 1) = puVar11;
    _swift_bridgeObjectRelease_n(puVar1,2);
    __os_log_impl(0x100000000,pOVar14,uVar2 & 0xff,"%{public}s",puVar16,0xc);
    FUN_100043f24(puVar17);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar21 + 8))(puVar20,LVar3.unknown);
  return;
}

