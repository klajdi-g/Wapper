// rea decompile_all
// name: FUN_1002fc76c
// address: 0x1002fc76c
// body: available
// range: 0x1002fc76c-0x1002fca5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fc76c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  DispatchWorkItemFlags DVar2;
  DispatchTime DVar3;
  Animation AVar4;
  OS_dispatch_queue *pOVar5;
  DispatchTime DVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  DispatchQoS qos;
  long lVar10;
  DispatchTime DVar11;
  undefined1 auStack_e0 [8];
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  
  local_c8 = param_1;
  uStack_c0 = param_2;
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  flags.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  DVar6 = DVar3;
  local_d0 = DVar3.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  DVar11.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar4 = SwiftUI::Animation::interpolatingSpring(1.0,260.0,22.0,0.0,DVar6.unknown);
  SwiftUI::_withAnimation();
  _swift_release(AVar4.unknown);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar6.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  Dispatch::DispatchTime::now(DVar6);
  Dispatch::__infix(DVar11,0.18);
  local_d8 = *(code **)(lVar10 + 8);
  (*local_d8)(DVar11.unknown,DVar3.unknown);
  DVar7.unknown = &DAT_100539a58;
  _swift_allocObject(&DAT_100539a58,0x20,7);
  uVar1 = uStack_c0;
  *(undefined8 *)(DVar7.unknown + 0x10) = local_c8;
  *(undefined8 *)(DVar7.unknown + 0x18) = uStack_c0;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  aBlock = __Block_copy(&local_a0);
  _swift_retain(uVar1);
  _swift_release();
  DVar7 = Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(flags.unknown,&local_a0,puVar8,puVar9,DVar2.unknown,DVar7.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar11.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(flags.unknown,DVar2.unknown);
  (**(code **)(local_b8 + 8))(qos.unknown,puStack_b0);
  (*local_d8)(DVar11.unknown + -extraout_x12,local_d0);
  return;
}

