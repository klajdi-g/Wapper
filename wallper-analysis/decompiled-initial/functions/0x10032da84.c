// rea decompile_all
// name: FUN_10032da84
// address: 0x10032da84
// body: available
// range: 0x10032da84-0x10032ddeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032da84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar2;
  DispatchTime DVar3;
  Animation AVar4;
  OS_dispatch_queue *pOVar5;
  DispatchTime DVar6;
  undefined *puVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *unaff_x20;
  DispatchTime DVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined auStack_1b0 [8];
  undefined8 local_1a8;
  code *local_1a0;
  undefined *local_198;
  DispatchQoS local_190;
  DispatchWorkItemFlags local_188;
  undefined *local_180;
  long local_178;
  undefined *puStack_170;
  long local_168;
  undefined *local_160 [2];
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  local_1a8 = param_3;
  local_180 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_168 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  puVar7 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_188.unknown = puVar7;
  puStack_170 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_178 = *(long *)(puStack_170 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  local_190.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  DVar6 = DVar3;
  local_198 = DVar3.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  DVar11.unknown =
       puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar4 = SwiftUI::Animation::spring(0.4,0.85,0.0,DVar6.unknown);
  SwiftUI::_withAnimation();
  _swift_release(AVar4.unknown);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar6.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  Dispatch::DispatchTime::now(DVar6);
  Dispatch::__infix(DVar11,3.0);
  local_1a0 = *(code **)(lVar12 + 8);
  (*local_1a0)(DVar11.unknown,DVar3.unknown);
  puVar7 = &DAT_10053b1c0;
  _swift_allocObject(&DAT_10053b1c0,0xe0,7);
  uVar1 = local_1a8;
  uVar13 = unaff_x20[0x10];
  uVar15 = unaff_x20[0x13];
  uVar14 = unaff_x20[0x12];
  *(undefined8 *)(puVar7 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar7 + 0x90) = uVar13;
  *(undefined8 *)(puVar7 + 0xa8) = uVar15;
  *(undefined8 *)(puVar7 + 0xa0) = uVar14;
  uVar13 = unaff_x20[0x14];
  uVar15 = unaff_x20[0x17];
  uVar14 = unaff_x20[0x16];
  *(undefined8 *)(puVar7 + 0xb8) = unaff_x20[0x15];
  *(undefined8 *)(puVar7 + 0xb0) = uVar13;
  *(undefined8 *)(puVar7 + 200) = uVar15;
  *(undefined8 *)(puVar7 + 0xc0) = uVar14;
  uVar13 = unaff_x20[8];
  uVar15 = unaff_x20[0xb];
  uVar14 = unaff_x20[10];
  *(undefined8 *)(puVar7 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar13;
  *(undefined8 *)(puVar7 + 0x68) = uVar15;
  *(undefined8 *)(puVar7 + 0x60) = uVar14;
  uVar13 = unaff_x20[0xc];
  uVar15 = unaff_x20[0xf];
  uVar14 = unaff_x20[0xe];
  *(undefined8 *)(puVar7 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar7 + 0x70) = uVar13;
  *(undefined8 *)(puVar7 + 0x88) = uVar15;
  *(undefined8 *)(puVar7 + 0x80) = uVar14;
  uVar13 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar14 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar13;
  *(undefined8 *)(puVar7 + 0x28) = uVar15;
  *(undefined8 *)(puVar7 + 0x20) = uVar14;
  uVar13 = unaff_x20[4];
  uVar15 = unaff_x20[7];
  uVar14 = unaff_x20[6];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar13;
  *(undefined8 *)(puVar7 + 0x48) = uVar15;
  *(undefined8 *)(puVar7 + 0x40) = uVar14;
  *(undefined8 *)(puVar7 + 0xd0) = param_2;
  *(undefined8 *)(puVar7 + 0xd8) = local_1a8;
  local_80 = FUN_100336ecc;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_10053b1d8;
  local_78 = puVar7;
  aBlock = __Block_copy(&local_a0);
  DVar8.unknown = local_78;
  FUN_100336150();
  _swift_bridgeObjectRetain(uVar1);
  _swift_release();
  qos.unknown = local_190.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_160[0] = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar2 = local_180;
  flags.unknown = local_188.unknown;
  Swift::SetAlgebra::_init(local_188.unknown,local_160,puVar7,puVar10,local_180,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar11.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_168 + 8))(flags.unknown,puVar2);
  (**(code **)(local_178 + 8))(qos.unknown,puStack_170);
  (*local_1a0)(DVar11.unknown + -extraout_x12,local_198);
  return;
}

