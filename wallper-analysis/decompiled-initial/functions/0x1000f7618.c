// rea decompile_all
// name: FUN_1000f7618
// address: 0x1000f7618
// body: available
// range: 0x1000f7618-0x1000f78e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f7618(undefined8 param_1)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  OS_dispatch_queue *pOVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long lVar10;
  DispatchWorkItemFlags qos;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  OS_dispatch_queue *local_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar10 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  qos.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100552070;
  FUN_100002f94(&DAT_100552070,&DAT_100424340);
  lVar14 = *(long *)(puVar2 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_b0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  (**(code **)(lVar14 + 0x10))((long)qos.unknown - extraout_x8_01,param_1,puVar2);
  uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_10052adf0;
  _swift_allocObject(&DAT_10052adf0,uVar12 + 8,uVar9 | 7);
  (**(code **)(lVar14 + 0x20))(puVar3 + uVar13,(long)qos.unknown - extraout_x8_01,puVar2);
  *(ID *)(puVar3 + uVar12) = IVar4;
  local_70 = FUN_1000f9fe8;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10052ae08;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  DVar6.unknown = local_68;
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar2 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar10,&local_90,puVar2,puVar8,DVar1.unknown,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(lVar10,DVar1.unknown);
  (**(code **)(local_a8 + 8))(qos.unknown,puStack_a0);
  return IVar4;
}

