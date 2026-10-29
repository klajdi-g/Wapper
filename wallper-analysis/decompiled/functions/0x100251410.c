// rea decompile_all
// name: FUN_100251410
// address: 0x100251410
// body: available
// range: 0x100251410-0x10025169f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100251410(void)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  OS_dispatch_queue *pOVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  long lVar9;
  code *pcVar10;
  DispatchQoS qos;
  DispatchTime DVar11;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  flags.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  DVar11.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar4.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  Dispatch::DispatchTime::now(DVar4);
  Dispatch::__infix(DVar11,3.0);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(DVar11.unknown,DVar2.unknown);
  puVar5 = &DAT_1005340c8;
  _swift_allocObject(&DAT_1005340c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  local_70 = FUN_10025932c;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_100534388;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  DVar6.unknown = local_68;
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = puVar5;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(flags.unknown,&local_90,puVar5,puVar8,DVar1.unknown,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar11.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(flags.unknown,DVar1.unknown);
  (**(code **)(local_a8 + 8))(qos.unknown,puStack_a0);
  (*pcVar10)(DVar11.unknown + -extraout_x12,DVar2.unknown);
  return;
}

