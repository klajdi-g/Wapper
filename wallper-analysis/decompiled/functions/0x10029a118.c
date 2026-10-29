// rea decompile_all
// name: FUN_10029a118
// address: 0x10029a118
// body: available
// range: 0x10029a118-0x10029a397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029a118(undefined8 param_1,undefined *param_2)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  undefined *puVar3;
  OS_dispatch_queue *pOVar4;
  DispatchTime DVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  long lVar8;
  code *pcVar9;
  DispatchQoS qos;
  DispatchTime DVar10;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_b0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  flags.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_b8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c0 = *(long *)(puStack_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  DVar10.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  puVar3 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (puVar3 != (undefined *)0x0) {
    FUN_100299640();
    _swift_release(puVar3);
  }
  pOVar4 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar5.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
  Dispatch::DispatchTime::now(DVar5);
  Dispatch::__infix(DVar10,1.5);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(DVar10.unknown,DVar2.unknown);
  local_88 = FUN_10029ae50;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_1000c7e7c;
  puStack_90 = &DAT_1005375a0;
  local_80 = param_2;
  aBlock = __Block_copy(&local_a8);
  DVar6.unknown = local_80;
  _swift_retain(param_2);
  _swift_release();
  DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_a8 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar3 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = puVar3;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(flags.unknown,&local_a8,puVar3,puVar7,DVar1.unknown,DVar6.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar10.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_b0 + 8))(flags.unknown,DVar1.unknown);
  (**(code **)(local_c0 + 8))(qos.unknown,puStack_b8);
  (*pcVar9)(DVar10.unknown + -extraout_x12,DVar2.unknown);
  return;
}

