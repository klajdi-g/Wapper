// rea decompile_all
// name: FUN_1003f201c
// address: 0x1003f201c
// body: available
// range: 0x1003f201c-0x1003f2283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f201c(ID *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ID IVar8;
  long lVar9;
  DispatchWorkItemFlags qos;
  long lVar10;
  long lVar11;
  OS_dispatch_queue *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  qos.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  IVar8 = *param_1;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (((param_3 != 0) &&
      (*(char *)(param_3 + _TtCV7Wallper13VideoLoopView11Coordinator::showsSpinner) == '\x01')) &&
     (IVar8 = objc_stub::status(IVar8), IVar8 == 1)) {
    pOVar3 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    local_b0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
    puVar4 = &DAT_10053e588;
    _swift_allocObject(&DAT_10053e588,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    local_88 = thunk_FUN_1003f38f0;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_10053e5a0;
    local_80 = puVar4;
    aBlock = __Block_copy(&local_a8);
    DVar5.unknown = local_80;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar5);
    local_a8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar6 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar4 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar7 = puVar4;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar9,&local_a8,puVar4,puVar7,DVar1.unknown,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(lVar9,DVar1.unknown);
    (**(code **)(lVar10 + 8))(qos.unknown,DVar2.unknown);
  }
  return;
}

