// rea decompile_all
// name: FUN_100335414
// address: 0x100335414
// body: available
// range: 0x100335414-0x1003357eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100335414(void)

{
  DispatchTime DVar1;
  undefined *puVar2;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar3;
  DispatchTime DVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  OS_dispatch_queue *local_1e0;
  DispatchTime local_1d8;
  DispatchTime local_1d0;
  long local_1c8;
  undefined *local_1c0;
  DispatchQoS local_1b8;
  long local_1b0;
  undefined *local_1a8;
  DispatchWorkItemFlags local_1a0;
  long local_198;
  undefined *local_190;
  code *local_188;
  ulong local_180;
  undefined *local_178 [24];
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  
  local_190 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_198 = *(long *)(local_190 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_198 + 0x40));
  puVar8 = (undefined *)((long)&local_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_1a0.unknown = puVar8;
  local_1a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1b0 = *(long *)(local_1a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b0 + 0x40));
  puVar8 = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1b8.unknown = puVar8;
  local_1c0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_1c8 = *(long *)(local_1c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c8 + 0x40));
  local_1d0.unknown = puVar8 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1d8.unknown = puVar8 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  DVar4.unknown = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  qos.unknown = local_1b8.unknown;
  uVar9 = 0;
  local_1e0 = (OS_dispatch_queue *)DVar4.unknown;
  do {
    uVar13 = (&DAT_10055cbd0)[uVar9];
    local_180 = uVar9 + 1;
    DVar4.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar4.unknown);
    DVar1.unknown = local_1d0.unknown;
    Dispatch::DispatchTime::now(DVar4);
    DVar4.unknown = local_1d8.unknown;
    Dispatch::__infix(DVar1,(double)uVar9 * 0.03);
    puVar2 = local_1c0;
    local_188 = *(code **)(local_1c8 + 8);
    (*local_188)(DVar1.unknown,local_1c0);
    puVar8 = &DAT_10053b170;
    _swift_allocObject(&DAT_10053b170,0xd8,7);
    uVar10 = unaff_x20[0x10];
    uVar12 = unaff_x20[0x13];
    uVar11 = unaff_x20[0x12];
    *(undefined8 *)(puVar8 + 0x98) = unaff_x20[0x11];
    *(undefined8 *)(puVar8 + 0x90) = uVar10;
    *(undefined8 *)(puVar8 + 0xa8) = uVar12;
    *(undefined8 *)(puVar8 + 0xa0) = uVar11;
    uVar10 = unaff_x20[0x14];
    uVar12 = unaff_x20[0x17];
    uVar11 = unaff_x20[0x16];
    *(undefined8 *)(puVar8 + 0xb8) = unaff_x20[0x15];
    *(undefined8 *)(puVar8 + 0xb0) = uVar10;
    *(undefined8 *)(puVar8 + 200) = uVar12;
    *(undefined8 *)(puVar8 + 0xc0) = uVar11;
    uVar10 = unaff_x20[8];
    uVar12 = unaff_x20[0xb];
    uVar11 = unaff_x20[10];
    *(undefined8 *)(puVar8 + 0x58) = unaff_x20[9];
    *(undefined8 *)(puVar8 + 0x50) = uVar10;
    *(undefined8 *)(puVar8 + 0x68) = uVar12;
    *(undefined8 *)(puVar8 + 0x60) = uVar11;
    uVar10 = unaff_x20[0xc];
    uVar12 = unaff_x20[0xf];
    uVar11 = unaff_x20[0xe];
    *(undefined8 *)(puVar8 + 0x78) = unaff_x20[0xd];
    *(undefined8 *)(puVar8 + 0x70) = uVar10;
    *(undefined8 *)(puVar8 + 0x88) = uVar12;
    *(undefined8 *)(puVar8 + 0x80) = uVar11;
    uVar10 = *unaff_x20;
    uVar12 = unaff_x20[3];
    uVar11 = unaff_x20[2];
    *(undefined8 *)(puVar8 + 0x18) = unaff_x20[1];
    *(undefined8 *)(puVar8 + 0x10) = uVar10;
    *(undefined8 *)(puVar8 + 0x28) = uVar12;
    *(undefined8 *)(puVar8 + 0x20) = uVar11;
    uVar10 = unaff_x20[4];
    uVar12 = unaff_x20[7];
    uVar11 = unaff_x20[6];
    *(undefined8 *)(puVar8 + 0x38) = unaff_x20[5];
    *(undefined8 *)(puVar8 + 0x30) = uVar10;
    *(undefined8 *)(puVar8 + 0x48) = uVar12;
    *(undefined8 *)(puVar8 + 0x40) = uVar11;
    *(undefined8 *)(puVar8 + 0xd0) = uVar13;
    local_98 = FUN_100336dd4;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = 0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_10053b188;
    local_90 = puVar8;
    aBlock = __Block_copy(&local_b8);
    DVar5.unknown = local_90;
    FUN_100336150();
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar5);
    local_178[0] = PTR___swiftEmptyArrayStorage_100524190;
    puVar6 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar7 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar3 = local_190;
    flags.unknown = local_1a0.unknown;
    Swift::SetAlgebra::_init(local_1a0.unknown,local_178,puVar8,puVar7,local_190,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar4,qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_198 + 8))(flags.unknown,puVar3);
    (**(code **)(local_1b0 + 8))(qos.unknown,local_1a8);
    (*local_188)(DVar4.unknown,puVar2);
    uVar9 = local_180;
  } while (local_180 != 8);
  return;
}

