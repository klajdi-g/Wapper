// rea decompile_all
// name: FUN_1000fe8f8
// address: 0x1000fe8f8
// body: available
// range: 0x1000fe8f8-0x1000febdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fe8f8(undefined8 param_1,long param_2)

{
  DispatchTime DVar1;
  DispatchWorkItemFlags DVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  OS_dispatch_queue *pOVar9;
  DispatchTime DVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  DispatchWorkItem *pDVar11;
  DispatchTime deadline;
  DispatchTime DVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar14 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  DVar12.unknown = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar12.unknown + -extraout_x12;
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar2.unknown + -8) + 0x40));
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    pDVar11 = *(DispatchWorkItem **)(param_2 + 0x18);
    if (pDVar11 == (DispatchWorkItem *)0x0) {
      uVar3 = 0;
    }
    else {
      _swift_retain(pDVar11);
      Dispatch::DispatchWorkItem::cancel(pDVar11);
      _swift_release(pDVar11);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    _swift_release(uVar3);
    IVar4 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
    IVar4 = NSApplication::occlusionState(IVar4);
    if (((uint)IVar4 >> 1 & 1) == 0) {
      puVar5 = &DAT_10052b7b8;
      _swift_allocObject(&DAT_10052b7b8,0x18,7);
      _swift_weakInit(puVar5 + 0x10,param_2);
      local_88 = FUN_1000fedc0;
      local_a8 = PTR___NSConcreteStackBlock_100521110;
      local_a0 = 0x42000000;
      local_98 = FUN_1000c7e7c;
      puStack_90 = &DAT_10052b7f8;
      local_80 = puVar5;
      pvVar6 = __Block_copy(&local_a8);
      local_b0 = PTR___swiftEmptyArrayStorage_100524190;
      local_b8 = pvVar6;
      FUN_1000fedc8();
      _swift_retain(puVar5);
      puVar7 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar8 = puVar7;
      FUN_100077ac0();
      Swift::SetAlgebra::_init
                (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_b0,puVar7,
                 puVar8,DVar2.unknown,pvVar6);
      pDVar11 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
      _swift_allocObject(pDVar11,*(undefined4 *)(pDVar11 + 0x30),*(undefined2 *)(pDVar11 + 0x34));
      pDVar11 = Dispatch::DispatchWorkItem::_init
                          (pDVar11,(DispatchWorkItemFlags)
                                   (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)
                                   ));
      puVar7 = local_80;
      _swift_release(puVar5);
      _swift_release(puVar7);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      *(DispatchWorkItem **)(param_2 + 0x18) = pDVar11;
      _swift_retain(pDVar11);
      _swift_release(uVar3);
      pOVar9 = (OS_dispatch_queue *)0x0;
      FUN_10006cc7c();
      DVar10.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar9);
      Dispatch::DispatchTime::now(DVar10);
      Dispatch::__infix(DVar12,120.0);
      pcVar13 = *(code **)(lVar14 + 8);
      (*pcVar13)(DVar12.unknown,DVar1.unknown);
      (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar11);
      _swift_release(param_2);
      _swift_release(pDVar11);
      (*pcVar13)(deadline.unknown,DVar1.unknown);
    }
    else {
      _swift_release(param_2);
    }
  }
  return;
}

