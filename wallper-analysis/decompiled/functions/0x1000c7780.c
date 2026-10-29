// rea decompile_all
// name: FUN_1000c7780
// address: 0x1000c7780
// body: available
// range: 0x1000c7780-0x1000c7e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c7780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  DispatchTime DVar3;
  bool bVar4;
  DispatchWorkItemFlags DVar5;
  long lVar6;
  Published *pPVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  OS_dispatch_queue *pOVar11;
  DispatchTime DVar12;
  long lVar13;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *puVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar16;
  long unaff_x20;
  DispatchWorkItem *pDVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  DispatchWorkItemFlags flags;
  double dVar21;
  long alStack_110 [5];
  undefined *local_e8;
  long local_e0;
  long local_d8;
  DispatchTime local_d0;
  long local_c8;
  long local_c0;
  DispatchTime local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  alStack_110[3] = param_3;
  alStack_110[4] = param_1;
  local_b0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar14 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054a9c0;
  alStack_110[1] = lVar14;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  local_e8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_00;
  puVar15 = &DAT_10054a9c8;
  local_c0 = lVar14;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_110[2] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  local_e0 = lVar14;
  local_a8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_c8 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  puVar15 = (undefined *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_d0.unknown = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = puVar15 + -extraout_x12_00;
  local_b8.unknown = puVar15;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  flags.unknown = puVar15 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054ac58;
  FUN_100002f94(&DAT_10054ac58,&DAT_10041bf70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar19 = (long)flags.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = _TtC7Wallper19PlaylistToastCenter::dismissWork;
  lVar20 = lVar19 - extraout_x12_01;
  pDVar17 = *(DispatchWorkItem **)(unaff_x20 + _TtC7Wallper19PlaylistToastCenter::dismissWork);
  if (pDVar17 != (DispatchWorkItem *)0x0) {
    _swift_retain(pDVar17);
    Dispatch::DispatchWorkItem::cancel(pDVar17);
    _swift_release(pDVar17);
  }
  lVar6 = 0;
  FUN_1000c8bec();
  FUN_1000087e4(param_5,lVar20 + *(int *)(lVar6 + 0x1c),&DAT_10054a9c8,&DAT_10041bbe0);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  Foundation::UUID::init();
  lVar2 = alStack_110[4];
  puVar8 = (undefined8 *)(lVar20 + *(int *)(lVar6 + 0x14));
  *puVar8 = alStack_110[3];
  puVar8[1] = param_4;
  puVar8 = (undefined8 *)(lVar20 + *(int *)(lVar6 + 0x18));
  *puVar8 = lVar2;
  puVar8[1] = param_2;
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar20,0,1,lVar6);
  pPVar7 = (Published *)&DAT_100422d28;
  _swift_getKeyPath(&DAT_100422d28);
  _swift_getKeyPath(&DAT_100422d50);
  alStack_110[4] = param_5;
  FUN_1000087e4(lVar20,lVar19,&DAT_10054ac58,&DAT_10041bf70);
  _swift_retain();
  Combine::Published::_set_subscript(pPVar7,lVar19);
  FUN_10002a29c(lVar20,&DAT_10054ac58,&DAT_10041bf70);
  puVar15 = &DAT_1005297f0;
  _swift_allocObject(&DAT_1005297f0,0x18,7);
  _swift_weakInit(puVar15 + 0x10);
  local_78 = FUN_1000ccdf4;
  local_98 = PTR___NSConcreteStackBlock_100521110;
  local_90 = 0x42000000;
  local_88 = FUN_1000c7e7c;
  puStack_80 = &DAT_100529808;
  local_70 = puVar15;
  __Block_copy(&local_98);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  _swift_retain(puVar15);
  puVar9 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(flags.unknown,&local_a0,puVar9,puVar10,DVar5.unknown,puVar8);
  pDVar17 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar17,*(undefined4 *)(pDVar17 + 0x30),*(undefined2 *)(pDVar17 + 0x34));
  pDVar17 = Dispatch::DispatchWorkItem::_init(pDVar17,flags);
  puVar9 = local_70;
  _swift_release(puVar15);
  _swift_release(puVar9);
  uVar16 = *(undefined8 *)(unaff_x20 + lVar14);
  *(DispatchWorkItem **)(unaff_x20 + lVar14) = pDVar17;
  _swift_retain(pDVar17);
  _swift_release(uVar16);
  pOVar11 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar12.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar11);
  DVar3.unknown = local_d0.unknown;
  Dispatch::DispatchTime::now(DVar12);
  puVar15 = local_b0;
  lVar2 = local_d8;
  lVar20 = local_e0;
  (**(code **)(local_d8 + 0x38))(local_e0,1,1,local_b0);
  lVar6 = local_c0;
  lVar14 = (long)*(int *)(local_e8 + 0x30);
  FUN_1000087e4(alStack_110[4],local_c0,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar20,lVar6 + lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar18 = *(code **)(lVar2 + 0x30);
  lVar13 = lVar6;
  (*pcVar18)(lVar6,1,puVar15);
  lVar19 = alStack_110[2];
  if ((int)lVar13 == 1) {
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar14 = lVar6 + lVar14;
    (*pcVar18)(lVar14,1,puVar15);
    if ((int)lVar14 == 1) {
      FUN_10002a29c(lVar6,&DAT_10054a9c8,&DAT_10041bbe0);
      dVar21 = 2.5;
      goto LAB_1000c7d58;
    }
LAB_1000c7d3c:
    FUN_10002a29c(lVar6,&DAT_10054a9c0,&DAT_100422d20);
  }
  else {
    FUN_1000087e4(lVar6,alStack_110[2],&DAT_10054a9c8,&DAT_10041bbe0);
    lVar13 = lVar6 + lVar14;
    (*pcVar18)(lVar13,1,puVar15);
    lVar1 = alStack_110[1];
    if ((int)lVar13 == 1) {
      FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar2 + 8))(lVar19,puVar15);
      goto LAB_1000c7d3c;
    }
    (**(code **)(lVar2 + 0x20))(alStack_110[1],lVar6 + lVar14,puVar15);
    puVar9 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar4 = Swift::Equatable::___infix(lVar19,lVar1,puVar15,puVar9);
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,(int)CONCAT71(extraout_var,bVar4));
    pcVar18 = *(code **)(lVar2 + 8);
    (*pcVar18)(lVar1,puVar15);
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar18)(lVar19,puVar15);
    FUN_10002a29c(lVar6,&DAT_10054a9c8,&DAT_10041bbe0);
    dVar21 = 2.5;
    if (((ulong)local_e8 & 1) != 0) goto LAB_1000c7d58;
  }
  dVar21 = 3.5;
LAB_1000c7d58:
  DVar12.unknown = local_b8.unknown;
  Dispatch::__infix(DVar3,dVar21);
  puVar15 = local_a8;
  pcVar18 = *(code **)(local_c8 + 8);
  (*pcVar18)(DVar3.unknown,local_a8);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(DVar12,pDVar17);
  _swift_release(pDVar17);
  (*pcVar18)(DVar12.unknown,puVar15);
  return;
}

