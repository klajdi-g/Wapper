// rea decompile_all
// name: FUN_100108dd4
// address: 0x100108dd4
// body: available
// range: 0x100108dd4-0x10010936b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100108dd4(byte *param_1,undefined8 *param_2)

{
  code *pcVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  Animation AVar6;
  OS_dispatch_queue *pOVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  DispatchTime DVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 extraout_x13;
  DispatchQoS DVar12;
  long lVar13;
  DispatchWorkItemFlags flags;
  long lVar14;
  DispatchTime DVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  void *local_170;
  DispatchQoS local_168;
  undefined8 *local_160;
  undefined *local_158;
  undefined8 *local_150;
  undefined *local_148;
  code *local_140;
  OS_dispatch_queue *local_138;
  code *local_130;
  undefined8 local_128;
  undefined *local_120;
  code *local_118;
  State local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar13 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  flags.unknown = (undefined *)((long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_118 = *(code **)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_118 + 0x40));
  DVar12.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  DVar15.unknown = DVar12.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar4.unknown = DVar15.unknown + -extraout_x12;
  if ((*param_1 & 1) == 0) {
    uStack_108 = param_2[0xb];
    local_110.unknown = (undefined *)param_2[10];
    local_b0 = (undefined *)((ulong)local_b0._1_7_ << 8);
    puVar5 = &DAT_10054ab50;
    local_128 = extraout_x13;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    AVar6.unknown = (undefined *)&local_b0;
    local_130 = (code *)lVar13;
    SwiftUI::State::set_wrappedValue(&local_110,AVar6.unknown,puVar5);
    AVar6 = SwiftUI::Animation::easeOut(0.35,AVar6);
    local_120 = DVar3.unknown;
    local_100 = param_2;
    SwiftUI::_withAnimation();
    _swift_release(AVar6.unknown);
    uStack_108 = param_2[7];
    local_110.unknown = (undefined *)param_2[6];
    local_b0 = (undefined *)CONCAT71(local_b0._1_7_,1);
    SwiftUI::State::set_wrappedValue(&local_110,&local_b0,puVar5);
    pOVar7 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_138 = pOVar7;
    local_148 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
    Dispatch::DispatchTime::now((DispatchTime)local_148);
    Dispatch::__infix(DVar15,0.35);
    local_140 = *(code **)(lVar14 + 8);
    (*local_140)(DVar15.unknown,local_128);
    puVar5 = &DAT_10052c340;
    _swift_allocObject(&DAT_10052c340,0x70,7);
    uVar16 = param_2[4];
    uVar18 = param_2[7];
    uVar17 = param_2[6];
    *(undefined8 *)(puVar5 + 0x38) = param_2[5];
    *(undefined8 *)(puVar5 + 0x30) = uVar16;
    *(undefined8 *)(puVar5 + 0x48) = uVar18;
    *(undefined8 *)(puVar5 + 0x40) = uVar17;
    uVar16 = param_2[8];
    uVar18 = param_2[0xb];
    uVar17 = param_2[10];
    *(undefined8 *)(puVar5 + 0x58) = param_2[9];
    *(undefined8 *)(puVar5 + 0x50) = uVar16;
    *(undefined8 *)(puVar5 + 0x68) = uVar18;
    *(undefined8 *)(puVar5 + 0x60) = uVar17;
    uVar16 = *param_2;
    uVar18 = param_2[3];
    uVar17 = param_2[2];
    *(undefined8 *)(puVar5 + 0x18) = param_2[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar16;
    *(undefined8 *)(puVar5 + 0x28) = uVar18;
    *(undefined8 *)(puVar5 + 0x20) = uVar17;
    local_90 = FUN_10010c310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10052c358;
    local_88 = puVar5;
    local_170 = __Block_copy(&local_b0);
    DVar3.unknown = local_88;
    FUN_10010c22c(param_2,&local_110);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar3);
    local_110.unknown = PTR___swiftEmptyArrayStorage_100524190;
    puVar8 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    local_150 = puVar8;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = &DAT_100553dc0;
    local_158 = puVar5;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    local_160 = puVar9;
    Swift::SetAlgebra::_init(flags.unknown,&local_110,puVar5,puVar9,DVar2.unknown,puVar8);
    pvVar11 = local_170;
    local_168.unknown = DVar12.unknown;
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar4,DVar12,flags);
    __Block_release(pvVar11);
    local_130 = *(code **)((long)local_130 + 8);
    (*local_130)(flags.unknown,DVar2.unknown);
    local_118 = *(code **)((long)local_118 + 8);
    (*local_118)(DVar12.unknown,local_120);
    pcVar1 = local_140;
    DVar10.unknown = DVar4.unknown;
    (*local_140)(DVar4.unknown,local_128);
    DVar10.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar10.unknown);
    Dispatch::DispatchTime::now(DVar10);
    Dispatch::__infix(DVar15,1.2);
    (*pcVar1)(DVar15.unknown,local_128);
    puVar5 = &DAT_10052c390;
    _swift_allocObject(&DAT_10052c390,0x70,7);
    uVar16 = param_2[4];
    uVar18 = param_2[7];
    uVar17 = param_2[6];
    *(undefined8 *)(puVar5 + 0x38) = param_2[5];
    *(undefined8 *)(puVar5 + 0x30) = uVar16;
    *(undefined8 *)(puVar5 + 0x48) = uVar18;
    *(undefined8 *)(puVar5 + 0x40) = uVar17;
    uVar16 = param_2[8];
    uVar18 = param_2[0xb];
    uVar17 = param_2[10];
    *(undefined8 *)(puVar5 + 0x58) = param_2[9];
    *(undefined8 *)(puVar5 + 0x50) = uVar16;
    *(undefined8 *)(puVar5 + 0x68) = uVar18;
    *(undefined8 *)(puVar5 + 0x60) = uVar17;
    uVar16 = *param_2;
    uVar18 = param_2[3];
    uVar17 = param_2[2];
    *(undefined8 *)(puVar5 + 0x18) = param_2[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar16;
    *(undefined8 *)(puVar5 + 0x28) = uVar18;
    *(undefined8 *)(puVar5 + 0x20) = uVar17;
    local_90 = FUN_10010c3c8;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10052c3a8;
    local_88 = puVar5;
    pvVar11 = __Block_copy(&local_b0);
    DVar12.unknown = local_88;
    FUN_10010c22c(param_2,&local_110);
    _swift_release();
    DVar3.unknown = local_168.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_110.unknown = PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(flags.unknown,&local_110,local_158,local_160,DVar2.unknown,local_150);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar4,DVar3,flags);
    __Block_release(pvVar11);
    (*local_130)(flags.unknown,DVar2.unknown);
    (*local_118)(DVar3.unknown,local_120);
    (*pcVar1)(DVar4.unknown,local_128);
  }
  else {
    uStack_108 = param_2[9];
    local_110.unknown = (undefined *)param_2[8];
    local_b0 = (undefined *)((ulong)local_b0._1_7_ << 8);
    puVar5 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_110,&local_b0,puVar5);
  }
  return;
}

