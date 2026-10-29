// rea decompile_all
// name: FUN_1002018f8
// address: 0x1002018f8
// body: available
// range: 0x1002018f8-0x100201ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002018f8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  DispatchTime deadline;
  undefined8 uVar1;
  undefined8 uVar2;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  Date DVar6;
  OS_dispatch_queue *pOVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  TaskPriority TVar11;
  undefined *puVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar15;
  long extraout_x12;
  DispatchTime DVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  Date DVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *local_120;
  code *local_118;
  DispatchTime local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  DispatchQoS local_f8;
  long local_f0;
  undefined *puStack_e8;
  DispatchWorkItemFlags local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  Date local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  puVar14 = &DAT_100561090;
  local_c0.unknown = param_3;
  local_b8 = param_5;
  local_b0 = param_4;
  local_a8 = param_6;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)&local_120 - extraout_x8;
  local_d0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  puVar14 = (undefined *)(lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_e0.unknown = puVar14;
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  puVar14 = puVar14 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f8.unknown = puVar14;
  local_c8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar22 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  DVar16.unknown = puVar14 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_110.unknown = DVar16.unknown + -extraout_x12;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar6.unknown + -8);
  lVar18 = *(long *)(lVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar20.unknown = DVar16.unknown + -extraout_x12 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
  Swift::MainActor::typeMetadataAccessor();
  uVar15 = 0;
  pcVar13 = "Wallper/ScreenSaverManager.swift";
  local_108 = param_1;
  uStack_100 = param_2;
  local_90 = (code *)param_1;
  puStack_88 = (undefined *)param_2;
  FUN_100045f18(FUN_100215638,&local_a0,"Wallper/ScreenSaverManager.swift",0x20,2,0x90);
  if ((uVar15 & 1) != 0) {
    Foundation::Date::init();
    bVar5 = Foundation::Date::<_infix(DVar20,local_c0,(Date)pcVar13);
    (**(code **)(lVar21 + 8))(DVar20.unknown,DVar6.unknown);
    if (bVar5) {
      pOVar7 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      local_120 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
      Dispatch::DispatchTime::now((DispatchTime)local_120);
      deadline.unknown = local_110.unknown;
      Dispatch::__infix(DVar16,0.1);
      local_118 = *(code **)(lVar22 + 8);
      (*local_118)(DVar16.unknown,local_c8);
      (**(code **)(lVar21 + 0x10))(DVar20.unknown,local_c0.unknown,DVar6.unknown);
      uVar15 = (ulong)*(byte *)(lVar21 + 0x50);
      uVar17 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
      uVar19 = lVar18 + uVar17 + 7 & 0xfffffffffffffff8;
      puVar14 = &DAT_100533240;
      _swift_allocObject(&DAT_100533240,uVar19 + 0x18,uVar15 | 7);
      uVar2 = uStack_100;
      uVar1 = local_108;
      *(undefined8 *)(puVar14 + 0x10) = local_108;
      *(undefined8 *)(puVar14 + 0x18) = uStack_100;
      (**(code **)(lVar21 + 0x20))(puVar14 + uVar17,DVar20.unknown,DVar6.unknown);
      uVar4 = local_a8;
      uVar3 = local_b0;
      *(undefined8 *)(puVar14 + uVar19) = local_b0;
      *(undefined8 *)(puVar14 + uVar19 + 8) = local_b8;
      *(undefined8 *)((long)(puVar14 + uVar19 + 8) + 8) = local_a8;
      local_80 = thunk_FUN_1002157d0;
      local_a0 = PTR___NSConcreteStackBlock_100521110;
      local_98 = 0x42000000;
      local_90 = FUN_1000c7e7c;
      puStack_88 = &DAT_100533258;
      local_78 = puVar14;
      aBlock = __Block_copy(&local_a0);
      DVar8.unknown = local_78;
      FUN_1000939f8(uVar1,uVar2);
      _swift_retain(uVar3);
      _swift_retain(uVar4);
      _swift_release();
      qos.unknown = local_f8.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      local_a0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar9 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar14 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar10 = puVar14;
      FUN_100077ac0();
      puVar12 = local_d0;
      flags.unknown = local_e0.unknown;
      Swift::SetAlgebra::_init(local_e0.unknown,&local_a0,puVar14,puVar10,local_d0,puVar9);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
      __Block_release(aBlock);
      (**(code **)(local_d8 + 8))(flags.unknown,puVar12);
      (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
      (*local_118)(deadline.unknown,local_c8);
      return;
    }
  }
  TVar11 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(lVar23,1,1,TVar11.unknown);
  puVar14 = &DAT_100532778;
  _swift_allocObject(&DAT_100532778,0x18,7);
  _swift_weakInit(puVar14 + 0x10,local_b0);
  puVar12 = &DAT_100533218;
  _swift_allocObject(&DAT_100533218,0x38,7);
  *(undefined8 *)(puVar12 + 0x10) = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined **)(puVar12 + 0x20) = puVar14;
  *(undefined8 *)(puVar12 + 0x28) = local_b8;
  *(undefined8 *)(puVar12 + 0x30) = local_a8;
  _swift_retain();
  FUN_100176d50(0,0,lVar23,&DAT_10042b228,puVar12);
  _swift_release();
  FUN_10002a29c(lVar23,&DAT_100561090,&DAT_10041c870);
  return;
}

