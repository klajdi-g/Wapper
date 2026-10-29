// rea decompile_all
// name: FUN_100201378
// address: 0x100201378
// body: available
// range: 0x100201378-0x1002015df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020145c to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100201378(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  DispatchWorkItemFlags qos;
  undefined8 uVar3;
  Task TVar4;
  OS_dispatch_queue *pOVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ID self;
  long unaff_x22;
  DispatchQoS DVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)(unaff_x22 + 0x78);
  _swift_beginAccess(lVar9 + 0x10,unaff_x22 + 0x40,0,0);
  _swift_beginAccess(lVar9 + 0x10,unaff_x22 + 0x58,0,0);
  lVar9 = lVar9 + 0x10;
  _swift_weakLoadStrong();
  if (lVar9 != 0) {
    objc_stub::lock(*(ID *)(lVar9 + 0x28));
    lVar10 = *(long *)(lVar9 + 0x30);
    *(long *)(unaff_x22 + 0xc0) = lVar10;
    self = *(ID *)(lVar9 + 0x28);
    _swift_retain(lVar10);
    objc_stub::unlock(self);
    _swift_release(lVar9);
    if (lVar10 != 0) {
      TVar4.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 200) = TVar4.unknown;
      *(long *)TVar4.unknown = unaff_x22;
      *(code **)(TVar4.unknown + 8) = FUN_1002015e0;
      (extension_Swift)::Swift::Task::_get_value(TVar4);
      return;
    }
  }
  lVar9 = *(long *)(unaff_x22 + 0xb0);
  qos.unknown = *(undefined **)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar10 = *(long *)(unaff_x22 + 0x98);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar11.unknown = *(undefined **)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100533280;
  aBlock = __Block_copy((undefined8 *)(unaff_x22 + 0x10));
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar11);
  *(undefined8 *)(unaff_x22 + 0x70) = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = puVar7;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar1,(undefined8 *)(unaff_x22 + 0x70),puVar7,puVar8,uVar2,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar10 + 8))(uVar1,uVar2);
  (**(code **)(lVar9 + 8))(qos.unknown,uVar3);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(qos.unknown);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002015dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

