// rea decompile_all
// name: FUN_1002d9220
// address: 0x1002d9220
// body: available
// range: 0x1002d9220-0x1002d951b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d9220(undefined8 *param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  DispatchTime DVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  OS_dispatch_queue *pOVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  long lVar10;
  DispatchQoS qos;
  DispatchTime DVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_110 [8];
  undefined *local_108;
  undefined *local_100;
  code *pcStack_f8;
  long local_f0;
  long local_e8;
  State local_e0;
  undefined8 uStack_d8;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  flags.unknown = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e8 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  DVar4 = DVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  DVar11.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_1002d951c();
  if (((ulong)DVar4.unknown & 1) != 0) {
    uStack_d8 = param_1[7];
    local_e0.unknown = (undefined *)param_1[6];
    local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
    puVar5 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_e0,&local_98,puVar5);
    pOVar6 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_108 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
    Dispatch::DispatchTime::now((DispatchTime)local_108);
    Dispatch::__infix(DVar11,1.0);
    pcStack_f8 = *(code **)(lVar10 + 8);
    local_100 = DVar3.unknown;
    (*pcStack_f8)(DVar11.unknown,DVar3.unknown);
    puVar5 = &DAT_1005389c8;
    _swift_allocObject(&DAT_1005389c8,0x50,7);
    uVar12 = *param_1;
    uVar14 = param_1[3];
    uVar13 = param_1[2];
    *(undefined8 *)(puVar5 + 0x18) = param_1[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar12;
    *(undefined8 *)(puVar5 + 0x28) = uVar14;
    *(undefined8 *)(puVar5 + 0x20) = uVar13;
    uVar12 = param_1[4];
    uVar14 = param_1[7];
    uVar13 = param_1[6];
    *(undefined8 *)(puVar5 + 0x38) = param_1[5];
    *(undefined8 *)(puVar5 + 0x30) = uVar12;
    *(undefined8 *)(puVar5 + 0x48) = uVar14;
    *(undefined8 *)(puVar5 + 0x40) = uVar13;
    local_78 = FUN_10010c310;
    local_98 = PTR___NSConcreteStackBlock_100521110;
    local_90 = 0x42000000;
    local_88 = FUN_1000c7e7c;
    puStack_80 = &DAT_1005389e0;
    local_70 = puVar5;
    aBlock = __Block_copy(&local_98);
    DVar7.unknown = local_70;
    FUN_1002db56c(param_1,&local_e0);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar7);
    local_e0.unknown = PTR___swiftEmptyArrayStorage_100524190;
    puVar8 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(flags.unknown,&local_e0,puVar5,puVar9,DVar1.unknown,puVar8);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar11.unknown + -extraout_x12),qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_f0 + 8))(flags.unknown,DVar1.unknown);
    (**(code **)(local_e8 + 8))(qos.unknown,DVar2.unknown);
    (*pcStack_f8)(DVar11.unknown + -extraout_x12,local_100);
  }
  return;
}

