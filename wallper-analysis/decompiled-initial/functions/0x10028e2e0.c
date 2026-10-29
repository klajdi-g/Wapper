// rea decompile_all
// name: FUN_10028e2e0
// address: 0x10028e2e0
// body: available
// range: 0x10028e2e0-0x10028e587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028e2e0(undefined8 param_1,undefined8 param_2,DispatchQoS param_3)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  DispatchWorkItemFlags qos;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100555ea0;
  FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
  lVar9 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100559050 != -1) {
    _swift_once(&DAT_100559050,FUN_10028e100);
  }
  local_b8 = DAT_100559058;
  (**(code **)(lVar9 + 0x10))((long)qos.unknown - extraout_x8_01,param_1,puVar2);
  uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100536dc0;
  _swift_allocObject(&DAT_100536dc0,uVar10 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3.unknown;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar10,(long)qos.unknown - extraout_x8_01,puVar2);
  local_70 = FUN_10028e7d0;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_100536dd8;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(param_3);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar2 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar5 = &DAT_100553dc0;
  FUN_100132684(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90);
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar2,puVar5,DVar1.unknown,puVar4);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}

