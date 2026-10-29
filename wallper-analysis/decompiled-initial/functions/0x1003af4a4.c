// rea decompile_all
// name: FUN_1003af4a4
// address: 0x1003af4a4
// body: available
// range: 0x1003af4a4-0x1003af72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003af4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  ID IVar3;
  OS_dispatch_queue *pOVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  ID unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  long local_b0;
  OS_dispatch_queue *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  IVar3 = objc_stub::window(unaff_x20);
  if ((IVar3 != 0) && (IVar3 = objc_stub::contentView(IVar3), IVar3 != 0)) {
    objc_stub::bounds(IVar3);
    pOVar4 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_a8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
    puVar5 = &DAT_10053cf48;
    _swift_allocObject(&DAT_10053cf48,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar6 = &DAT_10053cf98;
    _swift_allocObject(&DAT_10053cf98,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    local_80 = FUN_1003afd90;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    local_98 = 0x42000000;
    local_90 = FUN_1000c7e7c;
    puStack_88 = &DAT_10053cfb0;
    local_78 = puVar6;
    aBlock = __Block_copy(&local_a0);
    DVar7.unknown = local_78;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar7);
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar8 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    local_b0 = lVar12;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = &DAT_100553dc0;
    local_b8 = DVar2.unknown;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(puVar10,&local_a0,puVar5,puVar9,DVar1.unknown,puVar8);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(puVar10,DVar1.unknown);
    (**(code **)(local_b0 + 8))(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_b8);
  }
  return;
}

