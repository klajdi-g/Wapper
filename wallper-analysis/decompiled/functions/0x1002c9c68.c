// rea decompile_all
// name: FUN_1002c9c68
// address: 0x1002c9c68
// body: available
// range: 0x1002c9c68-0x1002c9fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002c9c68(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  DispatchWorkItemFlags qos;
  QoSClass QVar4;
  undefined *puVar5;
  long lVar6;
  undefined7 extraout_var;
  DispatchQoS aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined8 local_e0;
  OS_dispatch_queue *local_d8;
  undefined8 local_d0;
  DispatchWorkItemFlags local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
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
  
  local_e0 = param_2;
  local_d0 = param_1;
  local_b8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  puVar9 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = puVar9;
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  puVar5 = &DAT_100556a40;
  local_c8.unknown = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar11 = *(long *)(puVar5 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  local_e8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_01;
  lVar6 = 0;
  FUN_1002cb204();
  lVar13 = *(long *)(lVar6 + -8);
  lVar18 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar15 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  QVar4 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,QVar4.value);
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar16 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10006cc7c(0);
  (**(code **)(lVar19 + 0x68))
            (lVar16,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_userInitiated_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c0
             ,lVar6);
  local_d8 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar16);
  (**(code **)(lVar19 + 8))(lVar16,lVar6);
  FUN_100029504(local_e0,lVar17,FUN_1002cb204);
  puVar3 = local_e8;
  (**(code **)(lVar11 + 0x10))(lVar15,local_d0,local_e8);
  bVar1 = *(byte *)(lVar13 + 0x50);
  uVar10 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar14 = lVar18 + (ulong)bVar2 + uVar10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1005380d0;
  _swift_allocObject(&DAT_1005380d0,uVar14 + lVar12,bVar1 | bVar2 | 7);
  FUN_100007e64(lVar17,puVar5 + uVar10,FUN_1002cb204);
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar14,lVar15,puVar3);
  local_70 = FUN_1002cba3c;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_1005380e8;
  local_68 = puVar5;
  aBlock.unknown = __Block_copy(&local_90);
  qos.unknown = local_c8.unknown;
  Dispatch::DispatchQoS::get_unspecified(aBlock);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar3 = local_b8;
  puVar9 = local_c0;
  Swift::SetAlgebra::_init(local_c0,&local_98,puVar5,puVar8,local_b8,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock.unknown);
  (**(code **)(local_a0 + 8))(puVar9,puVar3);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}

