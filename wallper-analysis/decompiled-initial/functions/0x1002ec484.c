// rea decompile_all
// name: FUN_1002ec484
// address: 0x1002ec484
// body: available
// range: 0x1002ec484-0x1002ec7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ec484(void)

{
  DispatchWorkItemFlags DVar1;
  long lVar2;
  State SVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  DispatchWorkItem *pDVar7;
  OS_dispatch_queue *pOVar8;
  DispatchTime DVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  DispatchTime deadline;
  DispatchTime DVar13;
  code *pcVar14;
  DispatchWorkItemFlags flags;
  long lVar15;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  DispatchWorkItem *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  DispatchWorkItem *local_68;
  
  local_a8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_b0 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  DVar13.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar13.unknown + -extraout_x12;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar1.unknown + -8) + 0x40));
  flags.unknown = deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1002f58d4();
  lVar11 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_b8 = (long)*(int *)(lVar2 + 0x48);
  uStack_98 = ((undefined8 *)(unaff_x20 + local_b8))[1];
  local_a0 = *(DispatchWorkItem **)(unaff_x20 + local_b8);
  SVar3.unknown = &DAT_100552980;
  FUN_100002f94(&DAT_100552980,&DAT_100435dd0);
  local_c0 = SVar3.unknown;
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_68 != (DispatchWorkItem *)0x0) {
    Dispatch::DispatchWorkItem::cancel(local_68);
    _swift_release(local_68);
  }
  FUN_100029504();
  uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1005395c8;
  _swift_allocObject(&DAT_1005395c8,uVar12 + lVar15,uVar10 | 7);
  FUN_100007e64((long)flags.unknown - (lVar15 + 0xfU & 0xfffffffffffffff0),puVar4 + uVar12,
                FUN_1002f58d4);
  local_80 = FUN_1002fa120;
  local_a0 = (DispatchWorkItem *)PTR___NSConcreteStackBlock_100521110;
  uStack_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_1005395e0;
  local_78 = puVar4;
  __Block_copy(&local_a0);
  local_68 = (DispatchWorkItem *)PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar6 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(flags.unknown,&local_68,puVar4,puVar6,DVar1.unknown,puVar5);
  pDVar7 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar7,*(undefined4 *)(pDVar7 + 0x30),*(undefined2 *)(pDVar7 + 0x34));
  pDVar7 = Dispatch::DispatchWorkItem::_init(pDVar7,flags);
  _swift_release(local_78);
  local_a0 = pDVar7;
  _swift_retain(pDVar7);
  SwiftUI::State::set_wrappedValue((State *)(unaff_x20 + local_b8),&local_a0,local_c0);
  pOVar8 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar9.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
  Dispatch::DispatchTime::now(DVar9);
  Dispatch::__infix(DVar13,0.25);
  puVar4 = local_a8;
  pcVar14 = *(code **)(local_b0 + 8);
  (*pcVar14)(DVar13.unknown,local_a8);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar7);
  _swift_release(pDVar7);
  (*pcVar14)(deadline.unknown,puVar4);
  return;
}

