// rea decompile_all
// name: FUN_1000d407c
// address: 0x1000d407c
// body: available
// range: 0x1000d407c-0x1000d433f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d407c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  DispatchWorkItemFlags DVar2;
  undefined *puVar3;
  Animation AVar4;
  OS_dispatch_queue *pOVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  void *unaff_x20;
  undefined1 *puVar9;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  undefined *puStack_1d0;
  long local_1c8;
  State local_1c0;
  undefined8 uStack_1b8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005244a8;
  local_1c8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c8 + 0x40));
  puVar9 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_1d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1d8 = *(long *)(puStack_1d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1d8 + 0x40));
  uStack_1b8 = *(undefined8 *)((long)unaff_x20 + 0x98);
  local_1c0.unknown = *(undefined **)((long)unaff_x20 + 0x90);
  local_a0 = param_1;
  local_98 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar3 = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  AVar4.unknown = (undefined *)&local_a0;
  SwiftUI::State::set_wrappedValue(&local_1c0,AVar4.unknown,puVar3);
  AVar4 = SwiftUI::Animation::linear(0.32,AVar4);
  SwiftUI::_withAnimation();
  _swift_release(AVar4.unknown);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  puVar3 = &DAT_100529c58;
  _swift_allocObject(&DAT_100529c58,0x130,7);
  _memcpy(puVar3 + 0x10,unaff_x20,0x120);
  local_80 = thunk_FUN_1000d6d84;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_100529c70;
  local_78 = puVar3;
  aBlock = __Block_copy(&local_a0);
  DVar6.unknown = local_78;
  FUN_1000d584c();
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_1c0.unknown = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar1,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar3 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(puVar9,&local_1c0,puVar3,puVar8,DVar2.unknown,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,
             (DispatchWorkItemFlags)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  __Block_release(aBlock);
  (**(code **)(local_1c8 + 8))(puVar9,DVar2.unknown);
  (**(code **)(local_1d8 + 8))(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),puStack_1d0);
  return;
}

