// rea decompile_all
// name: FUN_1002ebf58
// address: 0x1002ebf58
// body: available
// range: 0x1002ebf58-0x1002ec483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ebf58(void)

{
  int iVar1;
  byte bVar2;
  QoSClass QVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  long lVar6;
  undefined7 extraout_var;
  URL UVar8;
  URL UVar9;
  State SVar10;
  undefined *puVar11;
  DispatchQoS aBlock;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  long lVar16;
  long extraout_x8_00;
  DispatchWorkItemFlags qos;
  long lVar17;
  long extraout_x8_01;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long local_130;
  undefined *local_128;
  long local_120;
  OS_dispatch_queue *local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined *local_70 [2];
  long lVar7;
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar16 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  qos.unknown = (undefined *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_1002f58d4();
  local_108 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)qos.unknown - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_100 = extraout_x12;
  QVar3 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,QVar3.value);
  lVar26 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar29 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar8.unknown + -8);
  lVar25 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar29 - (lVar25 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_120 = lVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (lVar18 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar19 - extraout_x12_02;
  iVar1 = *(int *)(lVar6 + 0x14);
  local_130 = (long)*(int *)(lVar6 + 0x18);
  if (DAT_1005552d8 != -1) {
    _swift_once(&DAT_1005552d8,FUN_1001600e0);
  }
  UVar9 = UVar8;
  FUN_100099338(UVar8.unknown,&DAT_100577c80);
  pcVar23 = *(code **)(lVar22 + 0x10);
  local_110 = lVar20;
  (*pcVar23)(lVar20,UVar9.unknown,UVar8.unknown);
  puVar12 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x44));
  local_a0 = (undefined *)*puVar12;
  local_98 = puVar12[1];
  SVar10.unknown = &DAT_10055b228;
  FUN_100002f94(&DAT_10055b228,&DAT_10042fa80);
  SwiftUI::State::get_wrappedValue(SVar10);
  local_128 = local_70[0];
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (**(code **)(lVar26 + 0x68))
            (lVar29,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c8
             ,lVar7);
  local_118 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar29);
  (**(code **)(lVar26 + 8))(lVar29,lVar7);
  (*pcVar23)(lVar19,unaff_x20 + iVar1,UVar8.unknown);
  lVar6 = local_120;
  (*pcVar23)(local_120,unaff_x20 + local_130,UVar8.unknown);
  (*pcVar23)(lVar18,lVar20,UVar8.unknown);
  FUN_100029504(unaff_x20,lVar17,FUN_1002f58d4);
  uVar21 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar24 = uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
  uVar27 = lVar25 + uVar21 + uVar24 & (uVar21 ^ 0xffffffffffffffff);
  uVar28 = lVar25 + uVar21 + uVar27 & (uVar21 ^ 0xffffffffffffffff);
  uVar21 = lVar25 + uVar28 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(local_108 + 0x50);
  uVar30 = bVar2 + uVar21 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar11 = &DAT_100539500;
  _swift_allocObject(&DAT_100539500,uVar30 + local_100,*(byte *)(lVar22 + 0x50) | bVar2 | 7);
  pcVar23 = *(code **)(lVar22 + 0x20);
  (*pcVar23)(puVar11 + uVar24,lVar19,UVar8.unknown);
  (*pcVar23)(puVar11 + uVar27,lVar6,UVar8.unknown);
  (*pcVar23)(puVar11 + uVar28,lVar18,UVar8.unknown);
  *(undefined **)(puVar11 + uVar21) = local_128;
  FUN_100007e64(lVar17,puVar11 + uVar30,FUN_1002f58d4);
  local_80 = FUN_1002f9398;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_100539518;
  local_78 = puVar11;
  aBlock.unknown = __Block_copy(&local_a0);
  Dispatch::DispatchQoS::get_unspecified(aBlock);
  local_70[0] = PTR___swiftEmptyArrayStorage_100524190;
  puVar12 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar13 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar15,local_70,puVar11,puVar13,DVar4.unknown,puVar12);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock.unknown);
  (**(code **)(lVar14 + 8))(lVar15,DVar4.unknown);
  (**(code **)(lVar16 + 8))(qos.unknown,DVar5.unknown);
  (**(code **)(lVar22 + 8))(local_110,UVar8.unknown);
  _swift_release(local_78);
  return;
}

