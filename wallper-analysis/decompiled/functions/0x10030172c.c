// rea decompile_all
// name: FUN_10030172c
// address: 0x10030172c
// body: available
// range: 0x10030172c-0x100301aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030172c(undefined8 param_1)

{
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar1;
  long lVar2;
  DispatchTime DVar3;
  Animation AVar4;
  OS_dispatch_queue *pOVar5;
  DispatchTime DVar6;
  undefined *puVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long extraout_x12;
  code *pcVar12;
  long lVar13;
  DispatchTime DVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined auStack_e0 [8];
  undefined *local_d8;
  DispatchQoS local_d0;
  DispatchWorkItemFlags local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  local_c0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  puVar7 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8.unknown = puVar7;
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar2 = 0;
  local_d0.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1003009dc();
  lVar17 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (lVar13 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar2 = *(long *)(DVar3.unknown + -8);
  DVar6 = DVar3;
  local_d8 = DVar3.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar2 + 0x40));
  DVar14.unknown = (undefined *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar4 = SwiftUI::Animation::interpolatingSpring(1.0,260.0,22.0,0.0,DVar6.unknown);
  local_90 = (code *)param_1;
  SwiftUI::_withAnimation();
  _swift_release(AVar4.unknown);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar6.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  Dispatch::DispatchTime::now(DVar6);
  Dispatch::__infix(DVar14,0.18);
  pcVar12 = *(code **)(lVar2 + 8);
  (*pcVar12)(DVar14.unknown,DVar3.unknown);
  FUN_100029504(param_1,lVar16,FUN_1003009dc);
  uVar11 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100539c40;
  _swift_allocObject(&DAT_100539c40,uVar15 + lVar13,uVar11 | 7);
  FUN_100007e64(lVar16,puVar7 + uVar15,FUN_1003009dc);
  local_80 = FUN_100301f38;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_100539c58;
  local_78 = puVar7;
  aBlock = __Block_copy(&local_a0);
  DVar8.unknown = local_78;
  _swift_release();
  qos.unknown = local_d0.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar1 = local_c0;
  flags.unknown = local_c8.unknown;
  Swift::SetAlgebra::_init(local_c8.unknown,&local_a0,puVar7,puVar10,local_c0,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar14.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(flags.unknown,puVar1);
  (**(code **)(local_b8 + 8))(qos.unknown,puStack_b0);
  (*pcVar12)(DVar14.unknown + -extraout_x12,local_d8);
  return;
}

