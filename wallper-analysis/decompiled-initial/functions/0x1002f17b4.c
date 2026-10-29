// rea decompile_all
// name: FUN_1002f17b4
// address: 0x1002f17b4
// body: available
// range: 0x1002f17b4-0x1002f1d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002f1d20) */

void FUN_1002f17b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  DispatchWorkItemFlags qos;
  code *pcVar2;
  URL UVar3;
  DispatchWorkItemFlags DVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x8_02;
  undefined *puVar12;
  long extraout_x12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined *local_f8;
  DispatchWorkItemFlags local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  long *local_b8;
  long local_b0;
  OS_dispatch_queue *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_100556a80;
  FUN_100002f94(&DAT_100556a80,&DAT_10042ac10);
  local_b0 = *(long *)(puVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = (OS_dispatch_queue *)(lVar15 - extraout_x8_00);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar11 = (lVar15 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar11;
  puStack_e0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  puVar12 = (undefined *)(lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar11 = 0;
  local_f0.unknown = puVar12;
  FUN_1002f58d4();
  local_128 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_100 = (long)puVar12 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_130 = param_1;
  local_120 = extraout_x12;
  FUN_1002f9448();
  local_108 = param_1;
  FUN_1002f9448();
  local_110 = param_2;
  FUN_1002f9448();
  puVar12 = &DAT_100539550;
  local_118 = param_3;
  _swift_allocObject(&DAT_100539550,0x18,7);
  local_b8 = (long *)(puVar12 + 0x10);
  *local_b8 = param_4;
  local_f8 = puVar12;
  _swift_bridgeObjectRetain();
  FUN_1002690dc();
  uVar10 = *(ulong *)(param_4 + 0x10);
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease();
    puVar12 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    local_140 = param_5;
    local_138 = DVar4.unknown;
    local_c0 = uVar10;
    FUN_1001c6004(0,uVar10,0);
    uVar10 = 0;
    local_c8 = param_4 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff));
    uVar13 = local_130;
    puVar12 = local_a0;
    do {
      if (*(ulong *)(param_4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f1d20);
        (*pcVar2)();
      }
      (**(code **)(lVar17 + 0x10))
                (lVar15,local_c8 + *(long *)(lVar17 + 0x48) * uVar10,UVar3.unknown);
      FUN_1002f1d3c(local_a8,lVar15,uVar13,local_b8);
      (**(code **)(lVar17 + 8))(lVar15,UVar3.unknown);
      uVar14 = *(ulong *)(puVar12 + 0x10);
      local_a0 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar14) {
        FUN_1001c6004(1 < *(ulong *)(puVar12 + 0x18),uVar14 + 1,1);
        uVar13 = local_130;
      }
      puVar12 = local_a0;
      uVar10 = uVar10 + 1;
      *(ulong *)(local_a0 + 0x10) = uVar14 + 1;
      FUN_100007e1c(local_a8,local_a0 +
                             *(long *)(local_b0 + 0x48) * uVar14 +
                             ((ulong)*(byte *)(local_b0 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(local_b0 + 0x50) ^ 0xffffffffffffffff)),
                    &DAT_100556a80,&DAT_10042ac10);
    } while (local_c0 != uVar10);
    _swift_bridgeObjectRelease(param_4);
    param_5 = local_140;
    DVar4.unknown = local_138;
  }
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_a8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  lVar11 = local_100;
  FUN_100029504(param_5,local_100,FUN_1002f58d4);
  uVar10 = (ulong)*(byte *)(local_128 + 0x50);
  uVar14 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  uVar16 = local_120 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100539578;
  _swift_allocObject(&DAT_100539578,uVar16 + 0x20,uVar10 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar12;
  FUN_100007e64(lVar11,puVar6 + uVar14,FUN_1002f58d4);
  puVar1 = local_f8;
  *(undefined8 *)(puVar6 + uVar16) = local_108;
  *(undefined8 *)(puVar6 + uVar16 + 8) = local_110;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = local_118;
  *(undefined **)(puVar6 + uVar16 + 0x18) = local_f8;
  local_80 = FUN_1002f9abc;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_100539590;
  local_78 = puVar6;
  aBlock = __Block_copy(&local_a0);
  DVar7.unknown = local_78;
  _swift_retain(puVar1);
  _swift_release();
  qos.unknown = local_f0.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar12 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  lVar11 = local_d8;
  Swift::SetAlgebra::_init(local_d8,&local_a0,puVar12,puVar9,DVar4.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_d0 + 8))(lVar11,DVar4.unknown);
  (**(code **)(local_e8 + 8))(qos.unknown,puStack_e0);
  _swift_release(puVar1);
  return;
}

