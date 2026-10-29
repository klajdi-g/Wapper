// rea decompile_all
// name: FUN_100241e88
// address: 0x100241e88
// body: available
// range: 0x100241e88-0x1002420eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100241e88(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  DispatchWorkItemFlags DVar1;
  OS_dispatch_queue *pOVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  DispatchWorkItemFlags qos;
  long lVar8;
  undefined8 uVar9;
  long local_c0;
  long local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  qos.unknown = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uVar9 = *param_1;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    pOVar2 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar2);
    puVar3 = &DAT_1005350b8;
    local_c0 = lVar8;
    _swift_allocObject(&DAT_1005350b8,0x38,7);
    *(long *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = uVar9;
    *(undefined8 *)(puVar3 + 0x30) = param_6;
    local_88 = FUN_100259d50;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_1005350d0;
    local_80 = puVar3;
    aBlock = __Block_copy(&local_a8);
    DVar4.unknown = local_80;
    _swift_bridgeObjectRetain(param_5);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar4);
    local_a8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar5 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar3 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar6 = puVar3;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar7,&local_a8,puVar3,puVar6,DVar1.unknown,puVar5);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_c0 + 8))(lVar7,DVar1.unknown);
    (**(code **)(local_b8 + 8))(qos.unknown,puStack_b0);
  }
  return;
}

