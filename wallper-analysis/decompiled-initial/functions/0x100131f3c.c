// rea decompile_all
// name: FUN_100131f3c
// address: 0x100131f3c
// body: available
// range: 0x100131f3c-0x1001321bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100131f3c(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  DispatchWorkItem *pDVar6;
  DispatchTime DVar7;
  DispatchTime deadline;
  code *pcVar8;
  DispatchTime DVar9;
  void *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_a0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_a8 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  DVar9.unknown = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar9.unknown + -extraout_x12;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar1.unknown + -8) + 0x40));
  pDVar6 = *(DispatchWorkItem **)(unaff_x20 + 0x28);
  if (pDVar6 != (DispatchWorkItem *)0x0) {
    _swift_retain(pDVar6);
    Dispatch::DispatchWorkItem::cancel(pDVar6);
    _swift_release(pDVar6);
  }
  puVar2 = &DAT_10052d6b0;
  _swift_allocObject(&DAT_10052d6b0,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  local_70 = FUN_100132508;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10052d768;
  local_68 = puVar2;
  local_b0 = __Block_copy(&local_90);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  puVar3 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  _swift_retain(puVar2);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar5 = &DAT_100553dc0;
  FUN_100132684(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90);
  Swift::SetAlgebra::_init
            (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_98,puVar4,
             puVar5,DVar1.unknown,puVar3);
  pDVar6 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar6,*(undefined4 *)(pDVar6 + 0x30),*(undefined2 *)(pDVar6 + 0x34));
  pDVar6 = Dispatch::DispatchWorkItem::_init
                     (pDVar6,(DispatchWorkItemFlags)
                             (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  puVar4 = local_68;
  _swift_release(puVar2);
  _swift_release(puVar4);
  DVar7.unknown = *(undefined **)(unaff_x20 + 0x28);
  *(DispatchWorkItem **)(unaff_x20 + 0x28) = pDVar6;
  _swift_retain(pDVar6);
  _swift_release();
  Dispatch::DispatchTime::now(DVar7);
  Dispatch::__infix(DVar9,1.5);
  puVar2 = local_a0;
  pcVar8 = *(code **)(local_a8 + 8);
  (*pcVar8)(DVar9.unknown,local_a0);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar6);
  _swift_release(pDVar6);
  (*pcVar8)(deadline.unknown,puVar2);
  return;
}

