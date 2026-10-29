// rea decompile_all
// name: FUN_10025a508
// address: 0x10025a508
// body: available
// range: 0x10025a508-0x10025a7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10025a7a4 to 0x10025a80c FUN_10025a80c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025a508(void)

{
  code *pcVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  ID IVar4;
  ID self;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  DispatchWorkItemFlags qos;
  long lVar12;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar6 = PTR__NSApp_1005212d0;
  qos.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10025a7ac);
    (*pcVar1)();
  }
  IVar4 = objc_stub::activationPolicy(*(ID *)PTR__NSApp_1005212d0);
  self = *(ID *)puVar6;
  if (IVar4 == 0) {
    if (self == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10025a7b4);
      (*pcVar1)();
    }
    IVar4 = objc_stub::isActive(self);
    if ((IVar4 & 1) == 0) {
      FUN_10025a80c(0);
      return;
    }
  }
  else {
    local_b0 = lVar12;
    puStack_a8 = DVar3.unknown;
    local_a0 = lVar11;
    if (self == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10025a7b0);
      (*pcVar1)();
    }
    objc_stub::setActivationPolicy_(self,0);
    pOVar5 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
    puVar6 = &DAT_100535910;
    _swift_allocObject(&DAT_100535910,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    local_70 = FUN_10025cd44;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_1005359f0;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    DVar3.unknown = puVar6;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar3);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar7 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar10,&local_98,puVar8,puVar9,DVar2.unknown,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_a0 + 8))(lVar10,DVar2.unknown);
    (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
    puVar8 = local_68;
    _swift_release(puVar6);
    _swift_release(puVar8);
  }
  return;
}

