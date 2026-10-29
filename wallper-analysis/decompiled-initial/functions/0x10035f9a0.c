// rea decompile_all
// name: FUN_10035f9a0
// address: 0x10035f9a0
// body: available
// range: 0x10035f9a0-0x1003600ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035f9a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  State SVar3;
  code *pcVar4;
  DispatchQoS DVar5;
  long lVar6;
  DispatchTime DVar7;
  State SVar8;
  OS_dispatch_queue *pOVar9;
  undefined *puVar10;
  void *pvVar11;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  DispatchTime DVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  ulong uVar17;
  long extraout_x12;
  ulong uVar18;
  long unaff_x20;
  DispatchTime deadline;
  long lVar19;
  DispatchWorkItemFlags flags;
  DispatchQoS qos;
  DispatchTime DVar20;
  undefined1 auStack_150 [8];
  undefined *local_148;
  undefined *local_140;
  code *local_138;
  undefined8 *local_130;
  code *local_128;
  code *local_120;
  undefined *local_118;
  undefined8 *local_110;
  ulong local_108;
  ulong local_100;
  undefined *local_f8;
  OS_dispatch_queue *local_f0;
  long local_e8;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  State local_90;
  undefined8 uStack_88;
  long local_80;
  
  local_140 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_120 = *(code **)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_120 + 0x40));
  flags.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(code **)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_128 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_100386f18();
  local_100 = *(long *)(lVar6 + -8);
  lVar19 = *(long *)(local_100 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)qos.unknown - (lVar19 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar16;
  DVar7 = Dispatch::DispatchTime::typeMetadataAccessor();
  local_108 = *(ulong *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  DVar20.unknown = (undefined *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar20.unknown + -extraout_x12;
  puVar13 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x44));
  puVar10 = (undefined *)*puVar13;
  uVar1 = puVar13[1];
  local_c8 = puVar10;
  local_c0 = uVar1;
  _swift_retain(uVar1);
  SVar8.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar8);
  local_98 = local_80 + 1;
  if (!SCARRY8(local_80,1)) {
    local_90.unknown = puVar10;
    uStack_88 = uVar1;
    SwiftUI::State::set_wrappedValue(&local_90,&local_98,SVar8.unknown);
    _swift_release(uVar1);
    local_c8 = puVar10;
    local_c0 = uVar1;
    SwiftUI::State::get_wrappedValue(SVar8);
    SVar3.unknown = local_90.unknown;
    local_f8 = local_90.unknown;
    local_c8 = (undefined *)0x0;
    SwiftUI::State::set_wrappedValue
              ((State *)(unaff_x20 + *(int *)(lVar6 + 0x40)),&local_c8,SVar8.unknown);
    pOVar9 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_f0 = pOVar9;
    local_148 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar9);
    Dispatch::DispatchTime::now((DispatchTime)local_148);
    Dispatch::__infix(DVar20,0.08);
    local_138 = *(code **)(local_108 + 8);
    (*local_138)(DVar20.unknown,DVar7.unknown);
    lVar6 = local_e8;
    FUN_100029504(unaff_x20,local_e8,FUN_100386f18);
    local_108 = (ulong)*(byte *)(local_100 + 0x50);
    uVar17 = local_108 + 0x18 & (local_108 ^ 0xffffffffffffffff);
    uVar18 = lVar19 + uVar17 + 7 & 0xfffffffffffffff8;
    puVar10 = &DAT_10053bd78;
    local_100 = uVar17;
    _swift_allocObject(&DAT_10053bd78,uVar18 + 8,local_108 | 7);
    *(undefined **)(puVar10 + 0x10) = SVar3.unknown;
    FUN_100007e64(lVar6,puVar10 + uVar17,FUN_100386f18);
    *(undefined8 *)(puVar10 + uVar18) = 1;
    local_a8 = thunk_FUN_100387618;
    local_c8 = PTR___NSConcreteStackBlock_100521110;
    local_c0 = 0x42000000;
    local_b8 = FUN_1000c7e7c;
    puStack_b0 = &DAT_10053bd90;
    local_a0 = puVar10;
    pvVar11 = __Block_copy(&local_c8);
    DVar12.unknown = local_a0;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_c8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar13 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar10 = &DAT_100561080;
    local_110 = puVar13;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar14 = &DAT_100553dc0;
    local_118 = puVar10;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar2 = local_140;
    local_130 = puVar14;
    Swift::SetAlgebra::_init(flags.unknown,&local_c8,puVar10,puVar14,local_140,puVar13);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar11);
    local_120 = *(code **)((long)local_120 + 8);
    (*local_120)(flags.unknown,puVar2);
    local_128 = *(code **)((long)local_128 + 8);
    (*local_128)(qos.unknown,DVar5.unknown);
    pcVar4 = local_138;
    DVar15.unknown = deadline.unknown;
    (*local_138)(deadline.unknown,DVar7.unknown);
    DVar15.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar15.unknown);
    Dispatch::DispatchTime::now(DVar15);
    Dispatch::__infix(DVar20,0.18);
    (*pcVar4)(DVar20.unknown,DVar7.unknown);
    lVar6 = local_e8;
    FUN_100029504(unaff_x20,local_e8,FUN_100386f18);
    puVar10 = &DAT_10053bdc8;
    _swift_allocObject(&DAT_10053bdc8,uVar18 + 8,local_108 | 7);
    *(undefined **)(puVar10 + 0x10) = local_f8;
    FUN_100007e64(lVar6,puVar10 + local_100,FUN_100386f18);
    *(undefined8 *)(puVar10 + uVar18) = 2;
    local_a8 = thunk_FUN_100387618;
    local_c8 = PTR___NSConcreteStackBlock_100521110;
    local_c0 = 0x42000000;
    local_b8 = FUN_1000c7e7c;
    puStack_b0 = &DAT_10053bde0;
    local_a0 = puVar10;
    pvVar11 = __Block_copy(&local_c8);
    DVar12.unknown = local_a0;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_c8 = PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(flags.unknown,&local_c8,local_118,local_130,puVar2,local_110);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar11);
    (*local_120)(flags.unknown,puVar2);
    (*local_128)(qos.unknown,DVar5.unknown);
    pcVar4 = local_138;
    DVar15.unknown = deadline.unknown;
    (*local_138)(deadline.unknown,DVar7.unknown);
    DVar15.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar15.unknown);
    Dispatch::DispatchTime::now(DVar15);
    Dispatch::__infix(DVar20,0.28);
    (*pcVar4)(DVar20.unknown,DVar7.unknown);
    lVar6 = local_e8;
    FUN_100029504(unaff_x20,local_e8,FUN_100386f18);
    puVar10 = &DAT_10053be18;
    _swift_allocObject(&DAT_10053be18,uVar18 + 8,local_108 | 7);
    *(undefined **)(puVar10 + 0x10) = local_f8;
    FUN_100007e64(lVar6,puVar10 + local_100,FUN_100386f18);
    *(undefined8 *)(puVar10 + uVar18) = 3;
    local_a8 = thunk_FUN_100387618;
    local_c8 = PTR___NSConcreteStackBlock_100521110;
    local_c0 = 0x42000000;
    local_b8 = FUN_1000c7e7c;
    puStack_b0 = &DAT_10053be30;
    local_a0 = puVar10;
    pvVar11 = __Block_copy(&local_c8);
    DVar12.unknown = local_a0;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_c8 = PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(flags.unknown,&local_c8,local_118,local_130,puVar2,local_110);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar11);
    (*local_120)(flags.unknown,puVar2);
    (*local_128)(qos.unknown,DVar5.unknown);
    (*pcVar4)(deadline.unknown,DVar7.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003600f0);
  (*pcVar4)();
}

