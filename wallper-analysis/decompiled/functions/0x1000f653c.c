// rea decompile_all
// name: FUN_1000f653c
// address: 0x1000f653c
// body: available
// range: 0x1000f653c-0x1000f6853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f653c(char *param_1,undefined8 *param_2)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  DispatchTime DVar3;
  undefined *puVar4;
  OS_dispatch_queue *pOVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  DispatchWorkItemFlags flags;
  long lVar9;
  DispatchQoS qos;
  DispatchTime DVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_110 [8];
  undefined *local_108;
  code *local_100;
  undefined *local_f8;
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
  lVar9 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  DVar10.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (*param_1 == '\x01') {
    uStack_d8 = param_2[5];
    local_e0.unknown = (undefined *)param_2[4];
    local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
    puVar4 = &DAT_10054ab50;
    local_f8 = DVar3.unknown;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_e0,&local_98,puVar4);
    pOVar5 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    local_108 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
    Dispatch::DispatchTime::now((DispatchTime)local_108);
    Dispatch::__infix(DVar10,0.35);
    local_100 = *(code **)(lVar9 + 8);
    (*local_100)(DVar10.unknown,DVar3.unknown);
    puVar4 = &DAT_10052b450;
    _swift_allocObject(&DAT_10052b450,0x50,7);
    uVar11 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    *(undefined8 *)(puVar4 + 0x18) = param_2[1];
    *(undefined8 *)(puVar4 + 0x10) = uVar11;
    *(undefined8 *)(puVar4 + 0x28) = uVar13;
    *(undefined8 *)(puVar4 + 0x20) = uVar12;
    uVar11 = param_2[4];
    uVar13 = param_2[7];
    uVar12 = param_2[6];
    *(undefined8 *)(puVar4 + 0x38) = param_2[5];
    *(undefined8 *)(puVar4 + 0x30) = uVar11;
    *(undefined8 *)(puVar4 + 0x48) = uVar13;
    *(undefined8 *)(puVar4 + 0x40) = uVar12;
    local_78 = FUN_1000fccac;
    local_98 = PTR___NSConcreteStackBlock_100521110;
    local_90 = 0x42000000;
    local_88 = FUN_1000c7e7c;
    puStack_80 = &DAT_10052b468;
    local_70 = puVar4;
    aBlock = __Block_copy(&local_98);
    DVar6.unknown = local_70;
    FUN_1000fcab8(param_2,&local_e0);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_e0.unknown = PTR___swiftEmptyArrayStorage_100524190;
    puVar7 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar4 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(flags.unknown,&local_e0,puVar4,puVar8,DVar1.unknown,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar10.unknown + -extraout_x12),qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_f0 + 8))(flags.unknown,DVar1.unknown);
    (**(code **)(local_e8 + 8))(qos.unknown,DVar2.unknown);
    (*local_100)(DVar10.unknown + -extraout_x12,local_f8);
  }
  return;
}

