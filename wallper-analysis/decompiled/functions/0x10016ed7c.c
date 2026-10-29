// rea decompile_all
// name: FUN_10016ed7c
// address: 0x10016ed7c
// body: available
// range: 0x10016ed7c-0x10016f01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016ed7c(double param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  OS_dispatch_queue *pOVar6;
  DispatchTime DVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  DispatchWorkItem *pDVar10;
  undefined8 uVar11;
  DispatchTime deadline;
  DispatchTime DVar12;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  
  local_b0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_b8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  DVar12.unknown = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar12.unknown + -extraout_x12;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar1.unknown + -8) + 0x40));
  lVar8 = *param_2;
  pDVar10 = *(DispatchWorkItem **)(unaff_x20 + lVar8);
  if (pDVar10 != (DispatchWorkItem *)0x0) {
    _swift_retain(pDVar10);
    Dispatch::DispatchWorkItem::cancel(pDVar10);
    _swift_release(pDVar10);
  }
  puVar2 = &DAT_10052fda8;
  _swift_allocObject(&DAT_10052fda8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  uStack_88 = param_4;
  local_80 = param_3;
  local_78 = puVar2;
  __Block_copy(&local_a0);
  local_a8 = PTR___swiftEmptyArrayStorage_100524190;
  puVar3 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  _swift_retain(puVar2);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar5 = puVar4;
  FUN_100077ac0();
  Swift::SetAlgebra::_init
            (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_a8,puVar4,
             puVar5,DVar1.unknown,puVar3);
  pDVar10 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar10,*(undefined4 *)(pDVar10 + 0x30),*(undefined2 *)(pDVar10 + 0x34));
  pDVar10 = Dispatch::DispatchWorkItem::_init
                      (pDVar10,(DispatchWorkItemFlags)
                               (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  puVar4 = local_78;
  _swift_release(puVar2);
  _swift_release(puVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar8);
  *(DispatchWorkItem **)(unaff_x20 + lVar8) = pDVar10;
  _swift_retain(pDVar10);
  _swift_release(uVar11);
  pOVar6 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar7.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
  Dispatch::DispatchTime::now(DVar7);
  Dispatch::__infix(DVar12,param_1);
  puVar2 = local_b0;
  pcVar9 = *(code **)(local_b8 + 8);
  (*pcVar9)(DVar12.unknown,local_b0);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar10);
  _swift_release(pDVar10);
  (*pcVar9)(deadline.unknown,puVar2);
  return;
}

