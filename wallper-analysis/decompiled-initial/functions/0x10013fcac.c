// rea decompile_all
// name: thunk_FUN_10013f570
// address: 0x10013fcac
// body: available
// range: 0x10013fcac-0x10013fcaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_10013f570(undefined8 param_1,SEL param_2)

{
  DispatchQoS DVar1;
  DispatchTime DVar2;
  DispatchWorkItemFlags DVar3;
  ID IVar4;
  void *pvVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  DispatchTime DVar8;
  DispatchQoS DVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar12;
  DispatchWorkItem *pDVar13;
  undefined8 uVar14;
  undefined *unaff_x20;
  DispatchTime DVar15;
  DispatchWorkItemFlags flags;
  DispatchTime deadline;
  long lVar16;
  DispatchWorkItemFlags qos;
  long lVar17;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  
  DVar1 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar17 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  qos.unknown = (undefined *)((long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lStack_a0 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lStack_a0 + 0x40));
  DVar15.unknown = qos.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar15.unknown + -extraout_x12;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  flags.unknown = deadline.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,param_2);
  if ((int)IVar4 == 0) {
    pOVar7 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
    pcStack_70 = thunk_FUN_10013f570;
    puStack_90 = PTR___NSConcreteStackBlock_100521110;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_10052e0e8;
    pvVar5 = __Block_copy(&puStack_90);
    DVar9.unknown = unaff_x20;
    _swift_retain();
    DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
    puStack_98 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar10 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar10;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(flags.unknown,&puStack_98,puVar10,puVar11,DVar3.unknown,DVar9.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar5);
    (**(code **)(lVar16 + 8))(flags.unknown,DVar3.unknown);
    (**(code **)(lVar17 + 8))(qos.unknown,DVar1.unknown);
    _swift_release(unaff_x20);
  }
  else if ((unaff_x20[0x30] == '\x01') && ((unaff_x20[0x21] & 1) == 0)) {
    pDVar13 = *(DispatchWorkItem **)(unaff_x20 + 0x28);
    if (pDVar13 != (DispatchWorkItem *)0x0) {
      _swift_retain(pDVar13);
      Dispatch::DispatchWorkItem::cancel(pDVar13);
      _swift_release(pDVar13);
    }
    puVar10 = &DAT_10052e120;
    _swift_allocObject(&DAT_10052e120,0x18,7);
    _swift_weakInit(puVar10 + 0x10);
    pcStack_70 = FUN_10013fcd4;
    puStack_90 = PTR___NSConcreteStackBlock_100521110;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_10052e138;
    pvVar5 = __Block_copy(&puStack_90);
    puStack_98 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    _swift_retain(puVar10);
    puVar11 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar6 = puVar11;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(flags.unknown,&puStack_98,puVar11,puVar6,DVar3.unknown,pvVar5);
    pDVar13 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
    _swift_allocObject(pDVar13,*(undefined4 *)(pDVar13 + 0x30),*(undefined2 *)(pDVar13 + 0x34));
    pDVar13 = Dispatch::DispatchWorkItem::_init(pDVar13,flags);
    _swift_release(puVar10);
    _swift_release(puVar10);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
    *(DispatchWorkItem **)(unaff_x20 + 0x28) = pDVar13;
    _swift_retain(pDVar13);
    _swift_release(uVar14);
    pOVar7 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    DVar8.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
    Dispatch::DispatchTime::now(DVar8);
    Dispatch::__infix(DVar15,2.0);
    pcVar12 = *(code **)(lStack_a0 + 8);
    (*pcVar12)(DVar15.unknown,DVar2.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar13);
    _swift_release(pDVar13);
    (*pcVar12)(deadline.unknown,DVar2.unknown);
  }
  return;
}

