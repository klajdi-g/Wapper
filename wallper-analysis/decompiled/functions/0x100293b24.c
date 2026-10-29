// rea decompile_all
// name: FUN_100293b24
// address: 0x100293b24
// body: available
// range: 0x100293b24-0x100293dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100293b24(void)

{
  DispatchTime DVar1;
  DispatchWorkItemFlags DVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  DispatchTime DVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  DispatchWorkItem *pDVar9;
  undefined8 uVar10;
  DispatchTime deadline;
  DispatchTime DVar11;
  code *pcVar12;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  DVar11.unknown = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar11.unknown + -extraout_x12;
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar2.unknown + -8) + 0x40));
  pDVar9 = *(DispatchWorkItem **)(unaff_x20 + 0x20);
  if (pDVar9 != (DispatchWorkItem *)0x0) {
    _swift_retain(pDVar9);
    Dispatch::DispatchWorkItem::cancel(pDVar9);
    _swift_release(pDVar9);
  }
  puVar3 = &DAT_100537128;
  _swift_allocObject(&DAT_100537128,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_70 = FUN_100295918;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_100537258;
  local_68 = puVar3;
  __Block_copy(&local_90);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  _swift_retain(puVar3);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar6 = puVar5;
  FUN_100077ac0();
  Swift::SetAlgebra::_init
            (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_98,puVar5,
             puVar6,DVar2.unknown,puVar4);
  pDVar9 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar9,*(undefined4 *)(pDVar9 + 0x30),*(undefined2 *)(pDVar9 + 0x34));
  pDVar9 = Dispatch::DispatchWorkItem::_init
                     (pDVar9,(DispatchWorkItemFlags)
                             (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  puVar5 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  *(DispatchWorkItem **)(unaff_x20 + 0x20) = pDVar9;
  _swift_retain(pDVar9);
  _swift_release(uVar10);
  pOVar7 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar8.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
  Dispatch::DispatchTime::now(DVar8);
  Dispatch::__infix(DVar11,0.3);
  pcVar12 = *(code **)(local_a0 + 8);
  (*pcVar12)(DVar11.unknown,DVar1.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar9);
  _swift_release(pDVar9);
  (*pcVar12)(deadline.unknown,DVar1.unknown);
  return;
}

