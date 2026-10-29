// rea decompile_all
// name: FUN_1003069f8
// address: 0x1003069f8
// body: available
// range: 0x1003069f8-0x100306ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003069f8(undefined8 param_1,undefined8 param_2)

{
  DispatchWorkItemFlags DVar1;
  URL UVar2;
  NSURL *pNVar3;
  OS_dispatch_queue *pOVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  DispatchWorkItemFlags qos;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_b0 [8];
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
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  qos.unknown = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar2.unknown = (undefined *)0x0;
  FUN_10030a830();
  lVar11 = *(long *)(UVar2.unknown + -8);
  lVar14 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)qos.unknown - (lVar14 + 0xfU & 0xfffffffffffffff0);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  _CGImageSourceCreateWithURL(pNVar3,0);
  if (pNVar3 == (NSURL *)0x0) {
    pNVar3 = (NSURL *)0x0;
  }
  else {
    FUN_10010f93c(pNVar3,0x500);
  }
  pOVar4 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
  FUN_100029504(param_2,lVar13,FUN_10030a830);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar15 = lVar14 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100539fd0;
  _swift_allocObject(&DAT_100539fd0,uVar15 + 8,uVar9 | 7);
  FUN_100007e64(lVar13,puVar5 + uVar12,FUN_10030a830);
  *(NSURL **)(puVar5 + uVar15) = pNVar3;
  local_70 = FUN_10030c6a0;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_100539fe8;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  DVar6.unknown = local_68;
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(puVar10,&local_90,puVar5,puVar8,DVar1.unknown,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(puVar10,DVar1.unknown);
  (**(code **)(local_a8 + 8))(qos.unknown,puStack_a0);
  return;
}

