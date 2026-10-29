// rea decompile_all
// name: FUN_1003b90cc
// address: 0x1003b90cc
// body: available
// range: 0x1003b90cc-0x1003b952f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b90cc(void)

{
  byte bVar1;
  byte bVar2;
  QoSClass QVar3;
  bool bVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  long lVar7;
  undefined7 extraout_var;
  URL UVar8;
  URL UVar9;
  undefined *puVar10;
  DispatchQoS aBlock;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8_00;
  DispatchWorkItemFlags qos;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar17;
  long extraout_x12;
  long extraout_x12_00;
  long lVar18;
  undefined8 unaff_x20;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  undefined1 auStack_110 [8];
  OS_dispatch_queue *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar15 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  qos.unknown = puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_1003ba110();
  local_f0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)qos.unknown - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_e8 = extraout_x12;
  local_e0 = lVar16;
  QVar3 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lStack_f8 = CONCAT71(extraout_var,QVar3.value);
  local_100 = *(long *)(lStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar17 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar16 - extraout_x8_02;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar23 = *(long *)(UVar8.unknown + -8);
  lVar22 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar19 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined *)(lVar18 - extraout_x12_00);
  FUN_1000087e4();
  lVar7 = lVar19;
  (**(code **)(lVar23 + 0x30))(lVar19,1,UVar8.unknown);
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    pcVar24 = *(code **)(lVar23 + 0x20);
    UVar9.unknown = puVar17;
    (*pcVar24)(puVar17,lVar19,UVar8.unknown);
    bVar4 = Foundation::URL::get_isFileURL(UVar9);
    if (bVar4) {
      FUN_10006cc7c(0);
      lVar19 = lStack_f8;
      lVar7 = local_100;
      (**(code **)(local_100 + 0x68))
                (lVar16,*(undefined4 *)
                         PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_userInitiated_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c0
                 ,lStack_f8);
      local_108 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar16);
      (**(code **)(lVar7 + 8))(lVar16,lVar19);
      (**(code **)(lVar23 + 0x10))(lVar18,puVar17,UVar8.unknown);
      lVar7 = local_e0;
      FUN_100029504(unaff_x20,local_e0,FUN_1003ba110);
      bVar1 = *(byte *)(lVar23 + 0x50);
      uVar20 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
      bVar2 = *(byte *)(local_f0 + 0x50);
      uVar21 = lVar22 + (ulong)bVar2 + uVar20 & ((ulong)bVar2 ^ 0xffffffffffffffff);
      puVar10 = &DAT_10053d678;
      _swift_allocObject(&DAT_10053d678,uVar21 + local_e8,bVar1 | bVar2 | 7);
      (*pcVar24)(puVar10 + uVar20,lVar18,UVar8.unknown);
      FUN_1003ba61c(lVar7,puVar10 + uVar21);
      local_78 = FUN_1003bab18;
      local_98 = PTR___NSConcreteStackBlock_100521110;
      local_90 = 0x42000000;
      local_88 = FUN_1000c7e7c;
      puStack_80 = &DAT_10053d690;
      local_70 = puVar10;
      aBlock.unknown = __Block_copy(&local_98);
      Dispatch::DispatchQoS::get_unspecified(aBlock);
      local_a0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar11 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar10 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar12 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(puVar14,&local_a0,puVar10,puVar12,DVar5.unknown,puVar11);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock.unknown);
      (**(code **)(lVar13 + 8))(puVar14,DVar5.unknown);
      (**(code **)(lVar15 + 8))(qos.unknown,DVar6.unknown);
      (**(code **)(lVar23 + 8))(puVar17,UVar8.unknown);
      _swift_release(local_70);
    }
    else {
      (**(code **)(lVar23 + 8))(puVar17,UVar8.unknown);
    }
  }
  return;
}

