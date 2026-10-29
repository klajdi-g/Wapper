// rea decompile_all
// name: FUN_1003ab214
// address: 0x1003ab214
// body: available
// range: 0x1003ab214-0x1003ab57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ab214(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  DispatchWorkItemFlags flags;
  undefined *puVar2;
  long lVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  OS_dispatch_queue *pOVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar10;
  long extraout_x12;
  ulong uVar11;
  long lVar12;
  DispatchQoS qos;
  DispatchTime DVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  DispatchWorkItemFlags local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c8 = param_1;
  uStack_c0 = param_2;
  local_b0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  puVar5 = (undefined *)((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_b8.unknown = puVar5;
  puStack_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  qos.unknown = puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1003afcec();
  lVar15 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)qos.unknown - (lVar16 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar3 = *(long *)(DVar4.unknown + -8);
  local_d0 = DVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  DVar13.unknown = (undefined *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
  puVar5 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_3 + 0x68),&local_90,puVar5);
  pOVar6 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  local_e0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
  Dispatch::DispatchTime::now((DispatchTime)local_e0);
  Dispatch::__infix(DVar13,0.12);
  local_d8 = *(code **)(lVar3 + 8);
  (*local_d8)(DVar13.unknown,DVar4.unknown);
  FUN_100029504(param_3,lVar12,FUN_1003afcec);
  uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar11 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  uVar14 = lVar16 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_10053d150;
  _swift_allocObject(&DAT_10053d150,uVar14 + 0x10,uVar10 | 7);
  FUN_100007e64(lVar12,puVar5 + uVar11,FUN_1003afcec);
  uVar1 = uStack_c0;
  *(undefined8 *)(puVar5 + uVar14) = local_c8;
  *(undefined8 *)((long)(puVar5 + uVar14) + 8) = uStack_c0;
  local_70 = FUN_1003b0f6c;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10053d168;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  DVar7.unknown = local_68;
  _swift_bridgeObjectRetain(uVar1);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar2 = local_b0;
  flags.unknown = local_b8.unknown;
  Swift::SetAlgebra::_init(local_b8.unknown,&local_90,puVar5,puVar9,local_b0,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar13.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(flags.unknown,puVar2);
  (**(code **)(local_a8 + 8))(qos.unknown,puStack_a0);
  (*local_d8)(DVar13.unknown + -extraout_x12,local_d0);
  return;
}

