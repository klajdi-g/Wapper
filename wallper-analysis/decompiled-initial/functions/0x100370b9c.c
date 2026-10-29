// rea decompile_all
// name: FUN_100370b9c
// address: 0x100370b9c
// body: available
// range: 0x100370b9c-0x10037112f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100370b9c(long param_1)

{
  byte bVar1;
  byte bVar2;
  DispatchTime deadline;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  UUID UVar7;
  OS_dispatch_queue *pOVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  DispatchTime DVar19;
  long lVar20;
  long lVar21;
  undefined auStack_110 [8];
  undefined *local_108;
  long local_100;
  code *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  DispatchTime local_d8;
  DispatchQoS local_d0;
  long local_c8;
  undefined *puStack_c0;
  DispatchWorkItemFlags local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_a8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_b0 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  puVar6 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8.unknown = puVar6;
  puStack_c0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar5 = 0;
  local_d0.unknown = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100387eec();
  local_f0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_e8 = extraout_x12;
  local_e0 = lVar12;
  local_a0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_f8 = *(code **)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_f8 + 0x40));
  DVar19.unknown = (undefined *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = 0;
  local_d8.unknown = DVar19.unknown + -extraout_x12_00;
  FUN_1001d537c();
  local_108 = (undefined *)lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar17 = (long)(DVar19.unknown + -extraout_x12_00) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100556aa0;
  FUN_100002f94(&DAT_100556aa0,&DAT_100433070);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar17 - extraout_x8_03;
  lVar12 = 0;
  FUN_100266c2c();
  lVar20 = *(long *)(lVar12 + -8);
  lVar14 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar21 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_01;
  lVar15 = *(long *)(param_1 + *(int *)(lVar5 + 0x28));
  if (lVar15 != 0) {
    (**(code **)(lVar20 + 0x38))(lVar21,1,1,lVar12);
    _swift_retain(lVar15);
    FUN_1001d4644(param_1,lVar15,lVar21);
    _swift_release(lVar15);
    lVar15 = lVar21;
    (**(code **)(lVar20 + 0x30))(lVar21,1,lVar12);
    if ((int)lVar15 == 1) {
      FUN_10002a29c(lVar21,&DAT_100556aa0,&DAT_100433070);
    }
    else {
      FUN_100007e64(lVar21,lVar13);
      pcVar4 = *(code **)(param_1 + *(int *)(lVar5 + 0x24));
      UVar7 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(lVar17,lVar13,UVar7.unknown);
      _swift_storeEnumTagMultiPayload(lVar17,local_108,1);
      (*pcVar4)(lVar17);
      FUN_100029548(lVar17,FUN_1001d537c);
      pOVar8 = (OS_dispatch_queue *)0x0;
      FUN_10006cc7c();
      local_108 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
      Dispatch::DispatchTime::now((DispatchTime)local_108);
      deadline.unknown = local_d8.unknown;
      Dispatch::__infix(DVar19,0.3);
      local_f8 = *(code **)((long)local_f8 + 8);
      (*local_f8)(DVar19.unknown,local_a0);
      lVar12 = local_e0;
      FUN_100029504(param_1,local_e0,FUN_100387eec);
      lVar5 = local_100;
      FUN_100029504(lVar13,local_100,FUN_100266c2c);
      bVar1 = *(byte *)(local_f0 + 0x50);
      uVar16 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
      bVar2 = *(byte *)(lVar20 + 0x50);
      uVar18 = local_e8 + (ulong)bVar2 + uVar16 & ((ulong)bVar2 ^ 0xffffffffffffffff);
      puVar6 = &DAT_10053c2f8;
      _swift_allocObject(&DAT_10053c2f8,uVar18 + lVar14,bVar1 | bVar2 | 7);
      FUN_100007e64(lVar12,puVar6 + uVar16,FUN_100387eec);
      FUN_100007e64(lVar5,puVar6 + uVar18,FUN_100266c2c);
      local_78 = FUN_10038fab8;
      local_98 = PTR___NSConcreteStackBlock_100521110;
      local_90 = 0x42000000;
      local_88 = FUN_1000c7e7c;
      puStack_80 = &DAT_10053c310;
      local_70 = puVar6;
      aBlock = __Block_copy(&local_98);
      DVar9.unknown = local_70;
      _swift_release();
      qos.unknown = local_d0.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar9);
      local_98 = PTR___swiftEmptyArrayStorage_100524190;
      puVar10 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar11 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      puVar3 = local_a8;
      flags.unknown = local_b8.unknown;
      Swift::SetAlgebra::_init(local_b8.unknown,&local_98,puVar6,puVar11,local_a8,puVar10);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
      __Block_release(aBlock);
      (**(code **)(local_b0 + 8))(flags.unknown,puVar3);
      (**(code **)(local_c8 + 8))(qos.unknown,puStack_c0);
      (*local_f8)(deadline.unknown,local_a0);
      FUN_100029548(lVar13,FUN_100266c2c);
    }
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100371130);
  (*pcVar4)();
}

