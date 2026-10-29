// rea decompile_all
// name: FUN_1001ee11c
// address: 0x1001ee11c
// body: available
// range: 0x1001ee11c-0x1001ee313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ee11c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  OS_dispatch_queue *pOVar2;
  void *aBlock;
  DispatchQoS DVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  
  local_a8 = param_4;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  pOVar2 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar2);
  _swift_allocObject(param_2,0x20,7);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x18) = unaff_x20;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  uStack_78 = local_a8;
  local_70 = param_3;
  local_68 = param_2;
  aBlock = __Block_copy(&local_90);
  DVar3.unknown = local_68;
  _swift_retain();
  _swift_release();
  DVar3 = Dispatch::DispatchQoS::get_unspecified(DVar3);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar5 = puVar4;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(puVar6,&local_90,puVar4,puVar5,DVar1.unknown,DVar3.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,
             (DispatchWorkItemFlags)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(puVar6,DVar1.unknown);
  (**(code **)(lVar7 + 8))(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_a0);
  return;
}

