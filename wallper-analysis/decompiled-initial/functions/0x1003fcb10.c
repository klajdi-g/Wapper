// rea decompile_all
// name: FUN_1003fcb10
// address: 0x1003fcb10
// body: available
// range: 0x1003fcb10-0x1003fcdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fcb10(DispatchQoS param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  DispatchWorkItemFlags flags;
  long lVar8;
  DispatchQoS qos;
  long lVar9;
  DispatchTime DVar10;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  flags.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  DVar10.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (*(long *)(param_1.unknown + 0x10) != 0) {
    pOVar3 = (OS_dispatch_queue *)0x0;
    local_b0 = DVar2.unknown;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    local_a8 = lVar7;
    local_c0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
    Dispatch::DispatchTime::now((DispatchTime)local_c0);
    Dispatch::__infix(DVar10,3.0);
    local_b8 = *(code **)(lVar8 + 8);
    (*local_b8)(DVar10.unknown,DVar2.unknown);
    puVar4 = &DAT_10053e7f0;
    _swift_allocObject(&DAT_10053e7f0,0x18,7);
    *(undefined **)(puVar4 + 0x10) = param_1.unknown;
    local_70 = FUN_1003fcdf4;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_10053e808;
    local_68 = puVar4;
    aBlock = __Block_copy(&local_90);
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(param_1);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar5 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar4 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar6 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(flags.unknown,&local_98,puVar4,puVar6,DVar1.unknown,puVar5);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar10.unknown + -extraout_x12),qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_a8 + 8))(flags.unknown,DVar1.unknown);
    (**(code **)(lVar9 + 8))(qos.unknown,local_a0);
    (*local_b8)(DVar10.unknown + -extraout_x12,local_b0);
    _swift_release(local_68);
  }
  return;
}

