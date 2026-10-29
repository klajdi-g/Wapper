// rea decompile_all
// name: FUN_1002540c8
// address: 0x1002540c8
// body: available
// range: 0x1002540c8-0x10025453f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002540c8(undefined8 param_1,DispatchQoS param_2)

{
  QoSClass QVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  undefined7 extraout_var;
  UUID UVar5;
  UUID UVar6;
  ID IVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  long extraout_x8_00;
  DispatchWorkItemFlags qos;
  long lVar14;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar16;
  undefined8 unaff_x20;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  String SVar23;
  undefined1 auStack_110 [8];
  undefined *local_108;
  void *local_100;
  char *pcStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  long lVar4;
  
  local_e8 = param_1;
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  qos.unknown = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(local_f0 + -8);
  lVar21 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)qos.unknown - (lVar21 + 0xfU & 0xfffffffffffffff0);
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,QVar1.value);
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar20 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar5.unknown + -8);
  UVar6 = UVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  FUN_100174ed8();
  if (UVar6.unknown == (undefined *)0x0) {
    UVar6 = Foundation::UUID::init();
    SVar23 = Foundation::UUID::get_uuidString(UVar6);
    local_100 = SVar23.bridgeObject;
    pcStack_f8 = SVar23.str;
    (**(code **)(lVar18 + 8))(lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),UVar5.unknown);
    SVar23.bridgeObject = local_100;
    SVar23.str = pcStack_f8;
  }
  else {
    objc_stub::stringValue((ID)UVar6.unknown);
    SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_100 = SVar23.bridgeObject;
  pcStack_f8 = SVar23.str;
  IVar7 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar7 = NSWorkspace::desktopImageOptionsForScreen_(IVar7,param_2.unknown);
  if (IVar7 == 0) {
    puVar8 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005d38();
    local_108 = puVar8;
  }
  else {
    FUN_10000802c(0);
    FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8);
    local_108 = (undefined *)
                (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (**(code **)(lVar22 + 0x68))
            (lVar20,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_userInitiated_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c0
             ,lVar4);
  (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar20);
  (**(code **)(lVar22 + 8))(lVar20,lVar4);
  puVar10 = local_f0;
  (**(code **)(lVar14 + 0x10))(lVar15,local_e8,local_f0);
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar17 = uVar16 + 0x18 & (uVar16 ^ 0xffffffffffffffff);
  uVar19 = lVar21 + uVar17 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_100534118;
  _swift_allocObject(&DAT_100534118,uVar19 + 0x20,uVar16 | 7);
  *(undefined8 *)(puVar8 + 0x10) = unaff_x20;
  (**(code **)(lVar14 + 0x20))(puVar8 + uVar17,lVar15,puVar10);
  *(char **)(puVar8 + uVar19) = pcStack_f8;
  *(void **)((long)(puVar8 + uVar19) + 8) = local_100;
  *(undefined **)(puVar8 + uVar19 + 0x10) = param_2.unknown;
  *(undefined **)(puVar8 + uVar19 + 0x18) = local_108;
  local_78 = FUN_1002580cc;
  local_98 = PTR___NSConcreteStackBlock_100521110;
  local_90 = 0x42000000;
  local_88 = FUN_1000c7e7c;
  puStack_80 = &DAT_100534130;
  local_70 = puVar8;
  aBlock = __Block_copy(&local_98);
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(puVar12,&local_a0,puVar8,puVar10,DVar2.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar11 + 8))(puVar12,DVar2.unknown);
  (**(code **)(lVar13 + 8))(qos.unknown,DVar3.unknown);
  _swift_release(local_70);
  return;
}

