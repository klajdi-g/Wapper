// rea decompile_all
// name: FUN_100254540
// address: 0x100254540
// body: available
// range: 0x100254540-0x100254e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002546e0) */
/* WARNING: Removing unreachable block (ram,0x000100254df4) */
/* WARNING: Removing unreachable block (ram,0x0001002548dc) */
/* WARNING: Removing unreachable block (ram,0x000100254e0c) */
/* WARNING: Removing unreachable block (ram,0x000100254a28) */
/* WARNING: Removing unreachable block (ram,0x000100254d8c) */
/* WARNING: Removing unreachable block (ram,0x000100254a84) */
/* WARNING: Removing unreachable block (ram,0x000100254da0) */

void FUN_100254540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  URL UVar6;
  OS_dispatch_queue *pOVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  OS_dispatch_queue *local_128;
  DispatchWorkItemFlags local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  
  local_148 = param_5;
  local_140 = param_1;
  local_138 = param_6;
  local_118 = param_3;
  local_108 = param_4;
  LVar4 = os::Logger::typeMetadataAccessor();
  local_128 = *(OS_dispatch_queue **)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_128 + 0x40));
  lVar11 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar11;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f0 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar11;
  local_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f8 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  puVar12 = (undefined *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_120.unknown = puVar12;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar6.unknown + -8);
  lVar14 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)puVar12 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar18 - extraout_x12_00;
  FUN_100252c14(lVar18,param_2);
  pcVar15 = *(code **)(lVar20 + 0x20);
  local_150 = lVar11;
  local_100 = DVar5.unknown;
  (*pcVar15)(lVar11,lVar18,UVar6.unknown);
  pOVar7 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_128 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
  (**(code **)(lVar20 + 0x10))(lVar17,lVar11,UVar6.unknown);
  uVar13 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar16 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  uVar19 = lVar14 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar12 = &DAT_1005341b8;
  _swift_allocObject(&DAT_1005341b8,uVar19 + 0x28,uVar13 | 7);
  (*pcVar15)(puVar12 + uVar16,lVar17,UVar6.unknown);
  uVar2 = local_108;
  uVar1 = local_138;
  *(undefined8 *)(puVar12 + uVar19) = local_148;
  *(undefined8 *)(puVar12 + uVar19 + 8) = local_138;
  *(undefined8 *)(puVar12 + uVar19 + 0x10) = local_140;
  *(undefined8 *)(puVar12 + uVar19 + 0x18) = local_118;
  *(undefined8 *)((long)(puVar12 + uVar19 + 0x18) + 8) = local_108;
  local_c0 = FUN_1002581d4;
  local_e0 = PTR___NSConcreteStackBlock_100521110;
  local_d8 = 0x42000000;
  local_d0 = FUN_1000c7e7c;
  puStack_c8 = &DAT_1005341d0;
  local_130 = lVar20;
  local_b8 = puVar12;
  aBlock = __Block_copy(&local_e0);
  DVar8.unknown = local_b8;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_release();
  DVar5.unknown = local_120.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_e0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar12 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar12;
  FUN_100077ac0();
  puVar3 = local_100;
  lVar11 = local_110;
  Swift::SetAlgebra::_init(local_110,&local_e0,puVar12,puVar10,local_100,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
  __Block_release(aBlock);
  (**(code **)(local_f0 + 8))(lVar11,puVar3);
  (**(code **)(local_f8 + 8))(DVar5.unknown,local_e8);
  (**(code **)(local_130 + 8))(local_150,UVar6.unknown);
  return;
}

