// rea decompile_all
// name: FUN_1002d4440
// address: 0x1002d4440
// body: available
// range: 0x1002d4440-0x1002d46b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d4440(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  DispatchWorkItemFlags DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  DispatchWorkItemFlags qos;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_190;
  undefined *puStack_188;
  long local_180;
  undefined *local_178 [28];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005244a8;
  local_180 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  lVar8 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_188 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_190 = *(long *)(puStack_188 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190 + 0x40));
  qos.unknown = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  puVar4 = &DAT_100538440;
  _swift_allocObject(&DAT_100538440,0xf8,7);
  uVar9 = param_2[0x14];
  uVar11 = param_2[0x17];
  uVar10 = param_2[0x16];
  *(undefined8 *)(puVar4 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar4 + 0xb0) = uVar9;
  *(undefined8 *)(puVar4 + 200) = uVar11;
  *(undefined8 *)(puVar4 + 0xc0) = uVar10;
  uVar9 = param_2[0x18];
  uVar11 = param_2[0x1b];
  uVar10 = param_2[0x1a];
  *(undefined8 *)(puVar4 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar4 + 0xd0) = uVar9;
  *(undefined8 *)(puVar4 + 0xe8) = uVar11;
  *(undefined8 *)(puVar4 + 0xe0) = uVar10;
  uVar9 = param_2[0xc];
  uVar11 = param_2[0xf];
  uVar10 = param_2[0xe];
  *(undefined8 *)(puVar4 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar4 + 0x70) = uVar9;
  *(undefined8 *)(puVar4 + 0x88) = uVar11;
  *(undefined8 *)(puVar4 + 0x80) = uVar10;
  uVar9 = param_2[0x10];
  uVar11 = param_2[0x13];
  uVar10 = param_2[0x12];
  *(undefined8 *)(puVar4 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar4 + 0x90) = uVar9;
  *(undefined8 *)(puVar4 + 0xa8) = uVar11;
  *(undefined8 *)(puVar4 + 0xa0) = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined8 *)(puVar4 + 0x38) = param_2[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar9;
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar10;
  uVar9 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  *(undefined8 *)(puVar4 + 0x58) = param_2[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar9;
  *(undefined8 *)(puVar4 + 0x68) = uVar11;
  *(undefined8 *)(puVar4 + 0x60) = uVar10;
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  *(undefined8 *)(puVar4 + 0x18) = param_2[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined8 *)(puVar4 + 0xf0) = param_1;
  local_78 = FUN_1002d6754;
  local_98 = PTR___NSConcreteStackBlock_100521110;
  local_90 = 0x42000000;
  local_88 = FUN_1000c7e7c;
  puStack_80 = &DAT_100538458;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  DVar5.unknown = local_70;
  FUN_1002d6478(param_2,local_178);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_178[0] = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar1,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar8,local_178,puVar4,puVar7,DVar2.unknown,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_180 + 8))(lVar8,DVar2.unknown);
  (**(code **)(local_190 + 8))(qos.unknown,puStack_188);
  return;
}

