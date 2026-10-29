// rea decompile_all
// name: FUN_100346b54
// address: 0x100346b54
// body: available
// range: 0x100346b54-0x100346e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100346b54(undefined8 *param_1)

{
  undefined *puVar1;
  DispatchWorkItemFlags DVar2;
  undefined *puVar3;
  OS_dispatch_queue *pOVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  DispatchWorkItemFlags qos;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_140;
  long local_138;
  State local_130;
  undefined8 uStack_128;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005244a8;
  local_138 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  lVar8 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_140 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  qos.unknown = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uStack_128 = param_1[10];
  local_130.unknown = (undefined *)param_1[9];
  puVar3 = &DAT_10055d470;
  local_98._0_1_ = *(undefined1 *)param_1;
  FUN_100002f94(&DAT_10055d470,&DAT_100432b18);
  SwiftUI::State::set_wrappedValue(&local_130,&local_98,puVar3);
  uStack_128 = param_1[0xe];
  local_130.unknown = (undefined *)param_1[0xd];
  local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue();
  pOVar4 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
  puVar3 = &DAT_10053b8a8;
  _swift_allocObject(&DAT_10053b8a8,0x99,7);
  uVar10 = param_1[0xc];
  uVar12 = param_1[0xf];
  uVar11 = param_1[0xe];
  *(undefined8 *)(puVar3 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar10;
  *(undefined8 *)(puVar3 + 0x88) = uVar12;
  *(undefined8 *)(puVar3 + 0x80) = uVar11;
  uVar10 = *(undefined8 *)((long)param_1 + 0x79);
  *(undefined8 *)(puVar3 + 0x91) = *(undefined8 *)((long)param_1 + 0x81);
  *(undefined8 *)(puVar3 + 0x89) = uVar10;
  uVar10 = param_1[4];
  uVar12 = param_1[7];
  uVar11 = param_1[6];
  *(undefined8 *)(puVar3 + 0x38) = param_1[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  *(undefined8 *)(puVar3 + 0x48) = uVar12;
  *(undefined8 *)(puVar3 + 0x40) = uVar11;
  uVar12 = param_1[8];
  uVar11 = param_1[0xb];
  uVar10 = param_1[10];
  *(undefined8 *)(puVar3 + 0x58) = param_1[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar12;
  *(undefined8 *)(puVar3 + 0x68) = uVar11;
  *(undefined8 *)(puVar3 + 0x60) = uVar10;
  uVar12 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  *(undefined8 *)(puVar3 + 0x18) = param_1[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  *(undefined8 *)(puVar3 + 0x28) = uVar11;
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  local_78 = FUN_10034b5b8;
  local_98 = PTR___NSConcreteStackBlock_100521110;
  local_90 = 0x42000000;
  local_88 = FUN_1000c7e7c;
  puStack_80 = &DAT_10053b8c0;
  local_70 = puVar3;
  aBlock = __Block_copy(&local_98);
  DVar5.unknown = local_70;
  FUN_10034b584(param_1,&local_130);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_130.unknown = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar1,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar3 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar8,&local_130,puVar3,puVar7,DVar2.unknown,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_138 + 8))(lVar8,DVar2.unknown);
  (**(code **)(lVar9 + 8))(qos.unknown,local_140);
  return;
}

