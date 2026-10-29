// rea decompile_all
// name: FUN_1003c0bec
// address: 0x1003c0bec
// body: available
// range: 0x1003c0bec-0x1003c1347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c0bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  State *pSVar1;
  int iVar2;
  code *pcVar3;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar4;
  long lVar5;
  State SVar6;
  OS_dispatch_queue *pOVar7;
  void *pvVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  DispatchTime DVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar13;
  long extraout_x8_01;
  long lVar14;
  long extraout_x8_02;
  long extraout_x12;
  long lVar15;
  ulong uVar16;
  long lVar17;
  DispatchTime DVar18;
  DispatchTime deadline;
  undefined *local_160;
  code *local_158;
  ulong local_150;
  undefined *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  code *local_130;
  ulong local_128;
  code *local_120;
  long local_118;
  code *local_110;
  OS_dispatch_queue *local_108;
  code *local_100;
  DispatchQoS local_f8;
  DispatchWorkItemFlags local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  byte local_79;
  
  local_e8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_100 = *(code **)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_100 + 0x40));
  puVar13 = (undefined *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_f0.unknown = puVar13;
  local_c0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_120 = *(code **)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_120 + 0x40));
  puVar13 = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_f8.unknown = puVar13;
  local_d0 = param_2;
  uStack_c8 = param_3;
  FUN_1003cff30(0,param_2,param_3);
  lVar17 = *(long *)(lVar5 + -8);
  local_e0 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(local_e0 + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar13 - extraout_x8_01;
  local_d8 = lVar14;
  local_b8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar15 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  DVar18.unknown = (undefined *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar18.unknown + -extraout_x12;
  iVar2 = *(int *)(lVar5 + 0x5c);
  local_b0._0_1_ = 1;
  SVar6.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),&local_b0,SVar6.unknown);
  pSVar1 = (State *)(param_1 + *(int *)(lVar5 + 0x60));
  local_b0._0_1_ = *(undefined1 *)&pSVar1->unknown;
  local_a8 = pSVar1[1].unknown;
  SwiftUI::State::get_wrappedValue(SVar6);
  if ((local_79 & 1) == 0) {
    local_b0 = (undefined *)CONCAT71(local_b0._1_7_,1);
    SwiftUI::State::set_wrappedValue(pSVar1,&local_b0,SVar6.unknown);
    pOVar7 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_108 = pOVar7;
    local_160 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
    Dispatch::DispatchTime::now((DispatchTime)local_160);
    Dispatch::__infix(DVar18,0.08);
    local_158 = *(code **)(lVar15 + 8);
    (*local_158)(DVar18.unknown,local_b8);
    lVar14 = local_d8;
    local_110 = *(code **)(lVar17 + 0x10);
    local_118 = param_1;
    (*local_110)(local_d8,param_1,lVar5);
    local_128 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar16 = local_128 + 0x20 & (local_128 ^ 0xffffffffffffffff);
    puVar13 = &DAT_10053d9c8;
    local_150 = uVar16;
    _swift_allocObject(&DAT_10053d9c8,uVar16 + local_e0,local_128 | 7);
    *(undefined8 *)(puVar13 + 0x10) = local_d0;
    *(undefined8 *)(puVar13 + 0x18) = uStack_c8;
    local_130 = *(code **)(lVar17 + 0x20);
    (*local_130)(puVar13 + uVar16,lVar14,lVar5);
    local_90 = FUN_1003e3cc4;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10053d9e0;
    local_88 = puVar13;
    pvVar8 = __Block_copy(&local_b0);
    DVar9.unknown = local_88;
    _swift_release();
    qos.unknown = local_f8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar10 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar13 = &DAT_100561080;
    local_140 = puVar10;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = &DAT_100553dc0;
    local_148 = puVar13;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar4 = local_e8;
    flags.unknown = local_f0.unknown;
    local_138 = puVar11;
    Swift::SetAlgebra::_init(local_f0.unknown,&local_b0,puVar13,puVar11,local_e8,puVar10);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar8);
    local_100 = *(code **)((long)local_100 + 8);
    (*local_100)(flags.unknown,puVar4);
    local_120 = *(code **)((long)local_120 + 8);
    (*local_120)(qos.unknown,local_c0);
    puVar13 = local_b8;
    pcVar3 = local_158;
    DVar12.unknown = deadline.unknown;
    (*local_158)(deadline.unknown,local_b8);
    DVar12.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar12.unknown);
    Dispatch::DispatchTime::now(DVar12);
    Dispatch::__infix(DVar18,0.14);
    (*pcVar3)(DVar18.unknown,puVar13);
    lVar14 = local_d8;
    (*local_110)(local_d8,local_118,lVar5);
    uVar16 = local_150;
    puVar13 = &DAT_10053da18;
    _swift_allocObject(&DAT_10053da18,local_150 + local_e0,local_128 | 7);
    *(undefined8 *)(puVar13 + 0x10) = local_d0;
    *(undefined8 *)(puVar13 + 0x18) = uStack_c8;
    (*local_130)(puVar13 + uVar16,lVar14,lVar5);
    local_90 = FUN_1003e3d44;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10053da30;
    local_88 = puVar13;
    pvVar8 = __Block_copy(&local_b0);
    DVar9.unknown = local_88;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(flags.unknown,&local_b0,local_148,local_138,puVar4,local_140);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar8);
    (*local_100)(flags.unknown,puVar4);
    (*local_120)(qos.unknown,local_c0);
    puVar13 = local_b8;
    pcVar3 = local_158;
    DVar12.unknown = deadline.unknown;
    (*local_158)(deadline.unknown,local_b8);
    DVar12.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar12.unknown);
    Dispatch::DispatchTime::now(DVar12);
    Dispatch::__infix(DVar18,0.2);
    (*pcVar3)(DVar18.unknown,puVar13);
    lVar14 = local_d8;
    (*local_110)(local_d8,local_118,lVar5);
    uVar16 = local_150;
    puVar13 = &DAT_10053da68;
    _swift_allocObject(&DAT_10053da68,local_150 + local_e0,local_128 | 7);
    *(undefined8 *)(puVar13 + 0x10) = local_d0;
    *(undefined8 *)(puVar13 + 0x18) = uStack_c8;
    (*local_130)(puVar13 + uVar16,lVar14,lVar5);
    local_90 = FUN_1003e3d4c;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10053da80;
    local_88 = puVar13;
    pvVar8 = __Block_copy(&local_b0);
    DVar9.unknown = local_88;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(flags.unknown,&local_b0,local_148,local_138,puVar4,local_140);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar8);
    (*local_100)(flags.unknown,puVar4);
    (*local_120)(qos.unknown,local_c0);
    (*pcVar3)(deadline.unknown,local_b8);
  }
  return;
}

