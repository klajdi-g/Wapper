// rea decompile_all
// name: FUN_1003f1dac
// address: 0x1003f1dac
// body: available
// range: 0x1003f1dac-0x1003f201b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f1dac(ID *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  ID IVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  DispatchWorkItemFlags qos;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_c0;
  OS_dispatch_queue *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  qos.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  IVar4 = objc_stub::isReadyForDisplay(*param_1);
  if ((int)IVar4 != 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 != 0) {
      plVar1 = (long *)(param_3 + _TtCV7Wallper13VideoLoopView11Coordinator::onFirstFrame);
      lVar11 = *plVar1;
      if (lVar11 != 0) {
        lVar13 = plVar1[1];
        pOVar5 = (OS_dispatch_queue *)0x0;
        local_b0 = param_3;
        FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
        *plVar1 = 0;
        plVar1[1] = 0;
        local_b8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
        puVar6 = &DAT_10053e5d8;
        _swift_allocObject(&DAT_10053e5d8,0x20,7);
        *(long *)(puVar6 + 0x10) = lVar11;
        *(long *)(puVar6 + 0x18) = lVar13;
        local_88 = FUN_10005b020;
        local_a8 = PTR___NSConcreteStackBlock_100521110;
        local_a0 = 0x42000000;
        local_98 = FUN_1000c7e7c;
        puStack_90 = &DAT_10053e5f0;
        local_c0 = lVar13;
        local_80 = puVar6;
        aBlock = __Block_copy(&local_a8);
        DVar7.unknown = local_80;
        _swift_retain(lVar13);
        _swift_release();
        Dispatch::DispatchQoS::get_unspecified(DVar7);
        local_a8 = PTR___swiftEmptyArrayStorage_100524190;
        puVar8 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar6 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar9 = puVar6;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(lVar10,&local_a8,puVar6,puVar9,DVar2.unknown,puVar8);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        FUN_10002f6dc(lVar11,local_c0);
        (**(code **)(lVar14 + 8))(lVar10,DVar2.unknown);
        (**(code **)(lVar12 + 8))(qos.unknown,DVar3.unknown);
      }
    }
  }
  return;
}

