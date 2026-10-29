// rea decompile_all
// name: FUN_100100668
// address: 0x100100668
// body: available
// range: 0x100100668-0x100100a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100100668(ulong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  DispatchTime DVar2;
  DispatchWorkItemFlags DVar3;
  State SVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  DispatchWorkItem *pDVar9;
  OS_dispatch_queue *pOVar10;
  DispatchTime DVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar12;
  DispatchTime deadline;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *local_110;
  undefined *local_108;
  DispatchTime local_100;
  long local_f8;
  State local_f0;
  undefined8 uStack_e8;
  undefined *local_b0;
  DispatchWorkItem *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *apuStack_70 [2];
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  local_f8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  puVar5 = (undefined *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_100.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = puVar5 + -extraout_x12;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  puVar5 = (undefined *)param_2[6];
  uVar1 = param_2[7];
  local_f0.unknown = puVar5;
  uStack_e8 = uVar1;
  local_78 = uVar1;
  apuStack_70[0] = puVar5;
  FUN_1000087e4(apuStack_70,&local_a8,&DAT_100552970,&DAT_10042f240);
  FUN_1000087e4(&local_78,&local_a8,&DAT_100552978,&DAT_100424ef0);
  SVar4.unknown = &DAT_100552980;
  FUN_100002f94(&DAT_100552980,&DAT_100435dd0);
  SwiftUI::State::get_wrappedValue(SVar4);
  if (local_a8 != (DispatchWorkItem *)0x0) {
    pDVar9 = local_a8;
    Dispatch::DispatchWorkItem::cancel(local_a8);
    _swift_release(pDVar9);
  }
  if ((param_1 & 1) == 0) {
    puVar6 = &DAT_10052ba18;
    _swift_allocObject(&DAT_10052ba18,0x50,7);
    uVar13 = *param_2;
    uVar15 = param_2[3];
    uVar14 = param_2[2];
    *(undefined8 *)(puVar6 + 0x18) = param_2[1];
    *(undefined8 *)(puVar6 + 0x10) = uVar13;
    *(undefined8 *)(puVar6 + 0x28) = uVar15;
    *(undefined8 *)(puVar6 + 0x20) = uVar14;
    uVar13 = param_2[4];
    uVar15 = param_2[7];
    uVar14 = param_2[6];
    *(undefined8 *)(puVar6 + 0x38) = param_2[5];
    *(undefined8 *)(puVar6 + 0x30) = uVar13;
    *(undefined8 *)(puVar6 + 0x48) = uVar15;
    *(undefined8 *)(puVar6 + 0x40) = uVar14;
    local_88 = FUN_1000fccac;
    local_a8 = (DispatchWorkItem *)PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_10052ba30;
    local_80 = puVar6;
    local_110 = __Block_copy(&local_a8);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100100eac(param_2,&local_f0);
    puVar7 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar6 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = &DAT_100553dc0;
    local_108 = DVar2.unknown;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init
              (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_b0,puVar6,
               puVar8,DVar3.unknown,puVar7);
    pDVar9 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
    _swift_allocObject(pDVar9,*(undefined4 *)(pDVar9 + 0x30),*(undefined2 *)(pDVar9 + 0x34));
    pDVar9 = Dispatch::DispatchWorkItem::_init
                       (pDVar9,(DispatchWorkItemFlags)
                               (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    _swift_release(local_80);
    local_f0.unknown = puVar5;
    uStack_e8 = uVar1;
    local_a8 = pDVar9;
    _swift_retain(pDVar9);
    SwiftUI::State::set_wrappedValue(&local_f0,&local_a8,SVar4.unknown);
    FUN_10002a29c(apuStack_70,&DAT_100552970,&DAT_10042f240);
    FUN_10002a29c(&local_78,&DAT_100552978,&DAT_100424ef0);
    pOVar10 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    DVar11.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
    DVar2.unknown = local_100.unknown;
    Dispatch::DispatchTime::now(DVar11);
    Dispatch::__infix(DVar2,0.1);
    puVar5 = local_108;
    pcVar12 = *(code **)(local_f8 + 8);
    (*pcVar12)(DVar2.unknown,local_108);
    (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar9);
    _swift_release(pDVar9);
    (*pcVar12)(deadline.unknown,puVar5);
  }
  else {
    FUN_10002a29c(apuStack_70,&DAT_100552970,&DAT_10042f240);
    FUN_10002a29c(&local_78,&DAT_100552978,&DAT_100424ef0);
    uStack_e8 = param_2[5];
    local_f0.unknown = (undefined *)param_2[4];
    local_a8 = (DispatchWorkItem *)CONCAT71(local_a8._1_7_,1);
    puVar5 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_f0,&local_a8,puVar5);
  }
  return;
}

