// rea decompile_all
// name: FUN_10025a80c
// address: 0x10025a80c
// body: available
// range: 0x10025a80c-0x10025ab73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025a80c(long param_1)

{
  undefined *puVar1;
  DispatchQoS qos;
  code *pcVar2;
  DispatchQoS DVar3;
  DispatchTime DVar4;
  ID self;
  ID IVar5;
  OS_dispatch_queue *pOVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  DispatchTime DVar12;
  DispatchWorkItemFlags flags;
  long lVar13;
  long lVar14;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  DispatchTime local_d0;
  undefined *local_c8;
  undefined *local_c0;
  code *pcStack_b8;
  undefined *local_b0;
  DispatchQoS local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_b0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  flags.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  local_a8.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar13 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  DVar12.unknown =
       flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10025ab74);
    (*pcVar2)();
  }
  objc_stub::activate(*(ID *)PTR__NSApp_1005212d0);
  self = *(ID *)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow);
  if (((self != 0) && (IVar5 = objc_stub::isVisible(self), (int)IVar5 != 0)) &&
     (IVar5 = objc_stub::isMiniaturized(self), (IVar5 & 1) == 0)) {
    objc_stub::makeKeyAndOrderFront_(self,0);
  }
  if (param_1 < 3) {
    pOVar6 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    local_c8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
    Dispatch::DispatchTime::now((DispatchTime)local_c8);
    local_d0.unknown = DVar12.unknown + -extraout_x12;
    Dispatch::__infix(DVar12,0.15);
    pcStack_b8 = *(code **)(lVar13 + 8);
    local_c0 = DVar4.unknown;
    (*pcStack_b8)(DVar12.unknown,DVar4.unknown);
    puVar7 = &DAT_100535910;
    _swift_allocObject(&DAT_100535910,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &DAT_1005359b0;
    _swift_allocObject(&DAT_1005359b0,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = param_1;
    local_70 = FUN_10025cd3c;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_1005359c8;
    local_68 = puVar8;
    aBlock = __Block_copy(&local_90);
    DVar9.unknown = puVar7;
    _swift_retain();
    qos.unknown = local_a8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar10 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar1 = local_b0;
    puVar8 = &DAT_100561080;
    local_d8 = DVar3.unknown;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(flags.unknown,&local_98,puVar8,puVar11,puVar1,puVar10);
    DVar4.unknown = local_d0.unknown;
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(local_d0,qos,flags);
    __Block_release(aBlock);
    (**(code **)(lVar14 + 8))(flags.unknown,puVar1);
    (**(code **)(local_a0 + 8))(qos.unknown,local_d8);
    (*pcStack_b8)(DVar4.unknown,local_c0);
    puVar8 = local_68;
    _swift_release(puVar7);
    _swift_release(puVar8);
  }
  return;
}

