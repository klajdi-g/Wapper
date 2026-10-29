// rea decompile_all
// name: FUN_1000d1adc
// address: 0x1000d1adc
// body: available
// range: 0x1000d1adc-0x1000d1db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d1adc(void *param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  DispatchWorkItemFlags flags;
  long lVar9;
  DispatchQoS qos;
  DispatchTime DVar10;
  undefined1 auStack_1f0 [8];
  undefined *local_1e8;
  code *local_1e0;
  undefined *local_1d8;
  long local_1d0;
  undefined *local_1c8;
  long lStack_1c0;
  undefined *local_1b8 [36];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  flags.unknown = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lStack_1c0 = *(long *)(local_1c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lStack_1c0 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  DVar10.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if ((*(byte *)((long)param_1 + 9) & 1) != 0) {
    pOVar3 = (OS_dispatch_queue *)0x0;
    local_1d8 = DVar2.unknown;
    FUN_10006cc7c();
    local_1d0 = lVar8;
    local_1e8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
    Dispatch::DispatchTime::now((DispatchTime)local_1e8);
    Dispatch::__infix(DVar10,0.08);
    local_1e0 = *(code **)(lVar9 + 8);
    (*local_1e0)(DVar10.unknown,DVar2.unknown);
    puVar4 = &DAT_100529ca8;
    _swift_allocObject(&DAT_100529ca8,0x130,7);
    _memcpy(puVar4 + 0x10,param_1,0x120);
    local_78 = FUN_1000d6d58;
    local_98 = PTR___NSConcreteStackBlock_100521110;
    local_90 = 0x42000000;
    local_88 = FUN_1000c7e7c;
    puStack_80 = &DAT_100529cc0;
    local_70 = puVar4;
    aBlock = __Block_copy(&local_98);
    DVar5.unknown = local_70;
    FUN_1000d584c(param_1,local_1b8);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar5);
    local_1b8[0] = PTR___swiftEmptyArrayStorage_100524190;
    puVar6 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar4 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar7 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(flags.unknown,local_1b8,puVar4,puVar7,DVar1.unknown,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar10.unknown + -extraout_x12),qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_1d0 + 8))(flags.unknown,DVar1.unknown);
    (**(code **)(lStack_1c0 + 8))(qos.unknown,local_1c8);
    (*local_1e0)(DVar10.unknown + -extraout_x12,local_1d8);
  }
  return;
}

