// rea decompile_all
// name: FUN_1003b3ec0
// address: 0x1003b3ec0
// body: available
// range: 0x1003b3ec0-0x1003b4223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b3ec0(undefined8 *param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchTime DVar2;
  Animation AVar3;
  OS_dispatch_queue *pOVar4;
  DispatchTime DVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  long lVar10;
  DispatchQoS qos;
  DispatchTime DVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_150 [8];
  code *local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined *local_120 [2];
  undefined8 *local_110;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_128 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  flags.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_130 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_138 = *(long *)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  DVar5 = DVar2;
  local_140 = DVar2.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  DVar11.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar3 = SwiftUI::Animation::interpolatingSpring(1.0,260.0,22.0,0.0,DVar5.unknown);
  local_110 = param_1;
  SwiftUI::_withAnimation();
  _swift_release(AVar3.unknown);
  pOVar4 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar5.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
  Dispatch::DispatchTime::now(DVar5);
  Dispatch::__infix(DVar11,0.18);
  local_148 = *(code **)(lVar10 + 8);
  (*local_148)(DVar11.unknown,DVar2.unknown);
  puVar6 = &DAT_10053d5d8;
  _swift_allocObject(&DAT_10053d5d8,0x88,7);
  uVar12 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  *(undefined8 *)(puVar6 + 0x58) = param_1[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar12;
  *(undefined8 *)(puVar6 + 0x68) = uVar14;
  *(undefined8 *)(puVar6 + 0x60) = uVar13;
  uVar12 = param_1[0xc];
  *(undefined8 *)(puVar6 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar12;
  *(undefined8 *)(puVar6 + 0x80) = param_1[0xe];
  uVar12 = *param_1;
  uVar14 = param_1[3];
  uVar13 = param_1[2];
  *(undefined8 *)(puVar6 + 0x18) = param_1[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar12;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  uVar12 = param_1[4];
  uVar14 = param_1[7];
  uVar13 = param_1[6];
  *(undefined8 *)(puVar6 + 0x38) = param_1[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar12;
  *(undefined8 *)(puVar6 + 0x48) = uVar14;
  *(undefined8 *)(puVar6 + 0x40) = uVar13;
  local_80 = FUN_1003b9f58;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_10053d5f0;
  local_78 = puVar6;
  aBlock = __Block_copy(&local_a0);
  DVar7.unknown = local_78;
  FUN_10012ea94(param_1,local_120);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_120[0] = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar6 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(flags.unknown,local_120,puVar6,puVar9,DVar1.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar11.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_128 + 8))(flags.unknown,DVar1.unknown);
  (**(code **)(local_138 + 8))(qos.unknown,local_130);
  (*local_148)(DVar11.unknown + -extraout_x12,local_140);
  return;
}

