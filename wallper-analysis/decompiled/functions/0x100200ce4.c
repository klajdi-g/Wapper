// rea decompile_all
// name: FUN_100200ce4
// address: 0x100200ce4
// body: available
// range: 0x100200ce4-0x1002012bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100200ce4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  DispatchTime DVar3;
  DispatchQoS DVar4;
  Date DVar5;
  DispatchWorkItemFlags DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  DispatchWorkItem *pDVar10;
  Date DVar11;
  OS_dispatch_queue *pOVar12;
  undefined *puVar13;
  void *pvVar14;
  DispatchQoS DVar15;
  DispatchWorkItemFlags DVar16;
  DispatchTime DVar17;
  long lVar18;
  long extraout_x8;
  DispatchTime deadline;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar20;
  code *pcVar21;
  code *pcVar22;
  DispatchTime DVar23;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar24;
  undefined8 unaff_x20;
  long lVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  DispatchWorkItemFlags flags;
  long lVar29;
  ulong uVar30;
  undefined1 auStack_160 [8];
  DispatchWorkItem *local_158;
  OS_dispatch_queue *local_150;
  OS_dispatch_queue *local_148;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  code *local_120;
  DispatchWorkItemFlags local_118;
  long local_110;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  DispatchWorkItem *local_80;
  
  local_130 = param_2;
  local_128 = param_3;
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar18 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  DVar23.unknown = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar23.unknown + -extraout_x12;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar19 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  local_118.unknown = deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar26 = *(long *)(DVar5.unknown + -8);
  lVar29 = *(long *)(lVar26 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = (long)(deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (lVar29 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar25 - extraout_x12_00;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_1005244a8;
  local_110 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  flags.unknown = (undefined *)(lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_1000c7e7c;
  puStack_90 = &DAT_100533168;
  local_88 = (code *)param_4;
  local_80 = (DispatchWorkItem *)param_5;
  __Block_copy(&local_a8);
  local_b0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  _swift_retain(param_5);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = puVar8;
  FUN_100077ac0();
  local_140 = DVar6.unknown;
  Swift::SetAlgebra::_init(flags.unknown,&local_b0,puVar8,puVar9,DVar6.unknown,puVar7);
  pDVar10 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar10,*(undefined4 *)(pDVar10 + 0x30),*(undefined2 *)(pDVar10 + 0x34));
  pDVar10 = Dispatch::DispatchWorkItem::_init(pDVar10,flags);
  local_158 = pDVar10;
  _swift_release(local_80);
  _swift_retain(pDVar10);
  DVar11 = Foundation::Date::init();
  local_138 = lVar28;
  Foundation::Date::addingTimeInterval(param_1,DVar11);
  local_120 = *(code **)(lVar26 + 8);
  (*local_120)(lVar25,DVar5.unknown);
  pOVar12 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_148 = pOVar12;
  local_150 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
  (**(code **)(lVar26 + 0x10))(lVar25,lVar28,DVar5.unknown);
  uVar20 = (ulong)*(byte *)(lVar26 + 0x50);
  uVar24 = uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff);
  uVar30 = lVar29 + uVar24 + 7 & 0xfffffffffffffff8;
  puVar13 = &DAT_1005331a0;
  _swift_allocObject(&DAT_1005331a0,uVar30 + 0x18,uVar20 | 7);
  uVar2 = local_128;
  uVar1 = local_130;
  *(undefined8 *)(puVar13 + 0x10) = local_130;
  *(undefined8 *)(puVar13 + 0x18) = local_128;
  (**(code **)(lVar26 + 0x20))(puVar13 + uVar24,lVar25,DVar5.unknown);
  pDVar10 = local_158;
  *(undefined8 *)(puVar13 + uVar30) = unaff_x20;
  *(code **)(puVar13 + uVar30 + 8) = FUN_10021562c;
  *(DispatchWorkItem **)((long)(puVar13 + uVar30 + 8) + 8) = local_158;
  local_88 = thunk_FUN_1002157d0;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_1000c7e7c;
  puStack_90 = &DAT_1005331b8;
  local_80 = (DispatchWorkItem *)puVar13;
  pvVar14 = __Block_copy(&local_a8);
  DVar15.unknown = local_80;
  FUN_1000939f8(uVar1,uVar2);
  _swift_retain(unaff_x20);
  _swift_retain(pDVar10);
  _swift_release();
  DVar6.unknown = local_118.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar15);
  puVar13 = local_140;
  local_a8 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init(flags.unknown,&local_a8,puVar8,puVar9,local_140,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
  __Block_release(pvVar14);
  pcVar21 = *(code **)(local_110 + 8);
  (*pcVar21)(flags.unknown,puVar13);
  pcVar22 = *(code **)(lVar19 + 8);
  DVar16.unknown = DVar6.unknown;
  (*pcVar22)(DVar6.unknown,DVar4.unknown);
  DVar17.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar16.unknown);
  Dispatch::DispatchTime::now(DVar17);
  Dispatch::__infix(DVar23,param_1);
  pcVar27 = *(code **)(lVar18 + 8);
  (*pcVar27)(DVar23.unknown,DVar3.unknown);
  local_88 = FUN_10021562c;
  local_80 = pDVar10;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_1000c7e7c;
  puStack_90 = &DAT_1005331e0;
  pvVar14 = __Block_copy(&local_a8);
  DVar15.unknown = local_80;
  _swift_retain(pDVar10);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar15);
  local_a8 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init(flags.unknown,&local_a8,puVar8,puVar9,puVar13,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            (deadline,(DispatchQoS)DVar6.unknown,flags);
  __Block_release(pvVar14);
  _swift_release_n(pDVar10,2);
  (*pcVar21)(flags.unknown,puVar13);
  (*pcVar22)(DVar6.unknown,DVar4.unknown);
  (*pcVar27)(deadline.unknown,DVar3.unknown);
  (*local_120)(local_138,DVar5.unknown);
  return;
}

