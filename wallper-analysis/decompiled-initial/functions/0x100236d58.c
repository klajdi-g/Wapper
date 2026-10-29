// rea decompile_all
// name: FUN_100236d58
// address: 0x100236d58
// body: available
// range: 0x100236d58-0x100237017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100236d58(long param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  DispatchTime DVar3;
  OS_dispatch_queue *pOVar4;
  DispatchTime DVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar12;
  long extraout_x12;
  undefined8 unaff_x20;
  DispatchWorkItemFlags flags;
  DispatchTime DVar13;
  DispatchQoS qos;
  long lVar14;
  double dVar15;
  undefined1 auStack_c0 [8];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar10 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  flags.unknown = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar14 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  DVar13.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pOVar4 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar5.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
  Dispatch::DispatchTime::now(DVar5);
  dVar15 = 9.0;
  if (param_1 != 0) {
    dVar15 = 3.0;
  }
  Dispatch::__infix(DVar13,dVar15);
  pcVar12 = *(code **)(lVar14 + 8);
  (*pcVar12)(DVar13.unknown,DVar3.unknown);
  puVar6 = &DAT_1005340c8;
  _swift_allocObject(&DAT_1005340c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,unaff_x20);
  puVar7 = &DAT_100535518;
  _swift_allocObject(&DAT_100535518,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(long *)(puVar7 + 0x18) = param_1;
  local_70 = FUN_100259e98;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_100535530;
  local_68 = puVar7;
  aBlock = __Block_copy(&local_90);
  DVar8.unknown = local_68;
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar6 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = puVar6;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(flags.unknown,&local_90,puVar6,puVar7,DVar1.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar13.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(lVar10 + 8))(flags.unknown,DVar1.unknown);
  (**(code **)(lVar11 + 8))(qos.unknown,DVar2.unknown);
  (*pcVar12)(DVar13.unknown + -extraout_x12,DVar3.unknown);
  return;
}

