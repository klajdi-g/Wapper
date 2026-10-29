// rea decompile_all
// name: FUN_1000db518
// address: 0x1000db518
// body: available
// range: 0x1000db518-0x1000db867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000db518(undefined8 *param_1)

{
  undefined *puVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  Animation AVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar10;
  DispatchWorkItemFlags flags;
  DispatchTime DVar11;
  DispatchQoS qos;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  long local_188;
  undefined *puStack_180;
  long local_178;
  undefined *local_170 [2];
  undefined8 *local_160;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  local_190 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_178 = *(long *)(local_190 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  flags.unknown = (undefined *)((long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_180 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_188 = *(long *)(puStack_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  DVar3 = DVar2;
  local_198 = DVar2.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  DVar11.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar4 = SwiftUI::Animation::spring(0.45,0.9,0.0,DVar3.unknown);
  local_160 = param_1;
  SwiftUI::_withAnimation();
  _swift_release(AVar4.unknown);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  local_1a0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  Dispatch::DispatchTime::now((DispatchTime)local_1a0);
  Dispatch::__infix(DVar11,0.06);
  pcVar10 = *(code **)(lVar12 + 8);
  (*pcVar10)(DVar11.unknown,DVar2.unknown);
  puVar6 = &DAT_10052a398;
  _swift_allocObject(&DAT_10052a398,0xd8,7);
  uVar13 = param_1[0x14];
  uVar15 = param_1[0x17];
  uVar14 = param_1[0x16];
  *(undefined8 *)(puVar6 + 0xb8) = param_1[0x15];
  *(undefined8 *)(puVar6 + 0xb0) = uVar13;
  *(undefined8 *)(puVar6 + 200) = uVar15;
  *(undefined8 *)(puVar6 + 0xc0) = uVar14;
  *(undefined8 *)(puVar6 + 0xd0) = param_1[0x18];
  uVar13 = param_1[0xc];
  uVar15 = param_1[0xf];
  uVar14 = param_1[0xe];
  *(undefined8 *)(puVar6 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar13;
  *(undefined8 *)(puVar6 + 0x88) = uVar15;
  *(undefined8 *)(puVar6 + 0x80) = uVar14;
  uVar15 = param_1[0x10];
  uVar14 = param_1[0x13];
  uVar13 = param_1[0x12];
  *(undefined8 *)(puVar6 + 0x98) = param_1[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar15;
  *(undefined8 *)(puVar6 + 0xa8) = uVar14;
  *(undefined8 *)(puVar6 + 0xa0) = uVar13;
  uVar13 = param_1[4];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  *(undefined8 *)(puVar6 + 0x38) = param_1[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar13;
  *(undefined8 *)(puVar6 + 0x48) = uVar15;
  *(undefined8 *)(puVar6 + 0x40) = uVar14;
  uVar15 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  *(undefined8 *)(puVar6 + 0x58) = param_1[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar15;
  *(undefined8 *)(puVar6 + 0x68) = uVar14;
  *(undefined8 *)(puVar6 + 0x60) = uVar13;
  uVar15 = *param_1;
  uVar14 = param_1[3];
  uVar13 = param_1[2];
  *(undefined8 *)(puVar6 + 0x18) = param_1[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  local_80 = FUN_1000e0678;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_10052a3b0;
  local_78 = puVar6;
  aBlock = __Block_copy(&local_a0);
  DVar7.unknown = local_78;
  FUN_1000e0398(param_1,local_170);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_170[0] = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar6 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar1 = local_190;
  Swift::SetAlgebra::_init(flags.unknown,local_170,puVar6,puVar9,local_190,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar11.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_178 + 8))(flags.unknown,puVar1);
  (**(code **)(local_188 + 8))(qos.unknown,puStack_180);
  (*pcVar10)(DVar11.unknown + -extraout_x12,local_198);
  return;
}

