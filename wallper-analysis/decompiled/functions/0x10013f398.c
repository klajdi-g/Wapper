// rea decompile_all
// name: FUN_10013f398
// address: 0x10013f398
// body: available
// range: 0x10013f398-0x10013f563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013f398(void)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  OS_dispatch_queue *pOVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  local_70 = thunk_FUN_10013ea78;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10052e160;
  aBlock = __Block_copy(&local_90);
  DVar4.unknown = unaff_x20;
  _swift_retain();
  DVar4 = Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar6 = puVar5;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar5,puVar6,DVar1.unknown,DVar4.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,
             (DispatchWorkItemFlags)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  __Block_release(aBlock);
  (**(code **)(lVar8 + 8))(puVar7,DVar1.unknown);
  (**(code **)(lVar9 + 8))(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(unaff_x20);
  return;
}

