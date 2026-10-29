// rea decompile_all
// name: FUN_1001c257c
// address: 0x1001c257c
// body: available
// range: 0x1001c257c-0x1001c2857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001c257c(void)

{
  DispatchTime DVar1;
  DispatchWorkItemFlags flags;
  DispatchTime deadline;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  OS_dispatch_queue *pOVar6;
  DispatchTime DVar7;
  long lVar8;
  DispatchWorkItem *pDVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0x90);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  _swift_beginAccess(lVar8 + 0x10,unaff_x22 + 0x40,0,0);
  lVar8 = lVar8 + 0x10;
  _swift_weakLoadStrong();
  if (lVar8 != 0) {
    pDVar9 = *(DispatchWorkItem **)(lVar8 + _TtC7Wallper15PlaylistManager::appearanceSettle);
    if (pDVar9 != (DispatchWorkItem *)0x0) {
      _swift_retain(pDVar9);
      _swift_release(lVar8);
      Dispatch::DispatchWorkItem::cancel(pDVar9);
    }
    _swift_release();
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  flags.unknown = *(undefined **)(unaff_x22 + 0xc0);
  lVar13 = *(long *)(unaff_x22 + 0x90);
  puVar2 = &DAT_100531580;
  _swift_allocObject(&DAT_100531580,0x18,7);
  _swift_beginAccess(lVar13 + 0x10,unaff_x22 + 0x58,0,0);
  lVar8 = lVar13 + 0x10;
  _swift_weakLoadStrong(lVar8);
  _swift_weakInit(puVar2 + 0x10,lVar8);
  _swift_release(lVar8);
  *(code **)(unaff_x22 + 0x30) = FUN_1001d4ebc;
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100531818;
  __Block_copy((void *)(unaff_x22 + 0x10));
  *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
  puVar3 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  _swift_retain(puVar2);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar5 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(flags.unknown,unaff_x22 + 0x88,puVar4,puVar5,uVar10,puVar3);
  pDVar9 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar9,*(undefined4 *)(pDVar9 + 0x30),*(undefined2 *)(pDVar9 + 0x34));
  pDVar9 = Dispatch::DispatchWorkItem::_init(pDVar9,flags);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_release(puVar2);
  _swift_beginAccess(lVar13 + 0x10,unaff_x22 + 0x70,0,0);
  lVar13 = lVar13 + 0x10;
  _swift_weakLoadStrong();
  if (lVar13 != 0) {
    uVar10 = *(undefined8 *)(lVar13 + _TtC7Wallper15PlaylistManager::appearanceSettle);
    *(DispatchWorkItem **)(lVar13 + _TtC7Wallper15PlaylistManager::appearanceSettle) = pDVar9;
    _swift_retain(pDVar9);
    _swift_release(uVar10);
    _swift_release(lVar13);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  DVar1.unknown = *(undefined **)(unaff_x22 + 0xa8);
  deadline.unknown = *(undefined **)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  pOVar6 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar7.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
  Dispatch::DispatchTime::now(DVar7);
  Dispatch::__infix(DVar1,0.7);
  pcVar12 = *(code **)(lVar8 + 8);
  (*pcVar12)(DVar1.unknown,uVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar9);
  _swift_release(pDVar9);
  (*pcVar12)(deadline.unknown,uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(deadline.unknown);
  _swift_task_dealloc(DVar1.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001001c2854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

