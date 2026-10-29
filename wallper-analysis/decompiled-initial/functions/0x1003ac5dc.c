// rea decompile_all
// name: FUN_1003ac5dc
// address: 0x1003ac5dc
// body: available
// range: 0x1003ac5dc-0x1003acd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ac870 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ac5dc(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  DispatchTime DVar3;
  undefined *puVar4;
  DispatchTime deadline;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  bool bVar5;
  long lVar6;
  NavigationPath NVar7;
  UUID UVar8;
  UUID UVar9;
  undefined **ppuVar10;
  long lVar11;
  State SVar12;
  State SVar13;
  OS_dispatch_queue *pOVar14;
  void *aBlock;
  DispatchQoS DVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar20;
  long lVar21;
  code *pcVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  undefined auStack_170 [4];
  uint local_16c;
  long local_168;
  code *local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  DispatchTime local_138;
  code *local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  DispatchTime local_100;
  DispatchQoS local_f8;
  long local_f0;
  undefined *puStack_e8;
  DispatchWorkItemFlags local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  local_110 = param_2;
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar27 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  puVar18 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0.unknown = puVar18;
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar6 = 0;
  local_f8.unknown = puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1003afcec();
  local_128 = *(long *)(lVar6 + -8);
  local_148 = (undefined *)lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = (long)(puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_120 = extraout_x12;
  local_118 = lVar6;
  local_d8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_130 = *(code **)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_130 + 0x40));
  puVar18 = (undefined *)(lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_138.unknown = puVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = puVar18 + -extraout_x12_00;
  local_100.unknown = puVar18;
  NVar7 = SwiftUI::NavigationPath::typeMetadataAccessor();
  lVar25 = *(long *)(NVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar19 = (long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_01;
  puVar18 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar19 - extraout_x8_03;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar26 = *(long *)(UVar8.unknown + -8);
  lVar21 = *(long *)(lVar26 + 0x40);
  UVar9 = UVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar20 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar6 - extraout_x12_02;
  Foundation::Notification::_get_userInfo((Notification)UVar9.unknown);
  if ((AppStorage *)UVar9.unknown == (AppStorage *)0x0) {
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    local_a0 = 0x7473696c79616c70;
    uStack_98 = 0xea00000000004449;
    puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
    Swift::AnyHashable::_init
              (&local_d0,UVar9.unknown,PTR___type_metadata_for_Swift_String_100523a98,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
    if (((AppStorage *)((long)UVar9.unknown + 0x10))->unknown == (undefined *)0x0) {
LAB_1003ac8c0:
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(UVar9.unknown);
      ppuVar10 = &local_d0;
      FUN_10000488c(ppuVar10);
      if (((ulong)puVar18 & 1) == 0) {
        _swift_bridgeObjectRelease(UVar9.unknown);
        goto LAB_1003ac8c0;
      }
      FUN_1000280d4(((AppStorage *)((long)UVar9.unknown + 0x38))->unknown + (long)ppuVar10 * 0x20,
                    &local_90);
      _swift_bridgeObjectRelease(UVar9.unknown);
    }
    _swift_bridgeObjectRelease(UVar9.unknown);
    FUN_100007dd4(&local_d0);
    if (local_78 != 0) {
      lVar11 = lVar20;
      _swift_dynamicCast(lVar20,&local_90,PTR___type_metadata_for_Any_100524178 + 8,UVar8.unknown,6)
      ;
      (**(code **)(lVar26 + 0x38))(lVar20,(uint)lVar11 ^ 1,1,UVar8.unknown);
      lVar11 = lVar20;
      (**(code **)(lVar26 + 0x30))(lVar20,1,UVar8.unknown);
      if ((int)lVar11 != 1) {
        local_160 = *(code **)(lVar26 + 0x20);
        local_168 = lVar6;
        (*local_160)(lVar6,lVar20,UVar8.unknown);
        lVar20 = local_110;
        local_d0 = (undefined *)0x3;
        SwiftUI::AppStorage::set_wrappedValue
                  ((AppStorage *)UVar9.unknown,&local_d0,*(undefined8 *)(local_110 + 0x38),
                   PTR___type_metadata_for_Swift_Int_100523bd8);
        local_148 = (undefined *)(long)*(int *)((long)local_148 + 0x34);
        SVar12.unknown = &DAT_10055f708;
        local_158 = lVar27;
        FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
        SVar13.unknown = SVar12.unknown;
        SwiftUI::State::get_wrappedValue(SVar12);
        bVar5 = SwiftUI::NavigationPath::get_isEmpty((NavigationPath)SVar13.unknown);
        local_16c = (uint)CONCAT71((int7)((ulong)SVar13.unknown >> 8),bVar5);
        pcVar22 = *(code **)(lVar25 + 8);
        (*pcVar22)(lVar19,NVar7.unknown);
        SwiftUI::NavigationPath::init();
        lVar6 = local_150;
        (**(code **)(lVar25 + 0x10))(local_150,lVar19,NVar7.unknown);
        SwiftUI::State::set_wrappedValue((State *)(lVar20 + (long)local_148),lVar6,SVar12.unknown);
        (*pcVar22)(lVar19,NVar7.unknown);
        pOVar14 = (OS_dispatch_queue *)0x0;
        FUN_10006cc7c();
        local_148 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar14);
        DVar3.unknown = local_138.unknown;
        Dispatch::DispatchTime::now((DispatchTime)local_148);
        deadline.unknown = local_100.unknown;
        dVar28 = 0.0;
        if ((local_16c & 1) == 0) {
          dVar28 = 0.4;
        }
        Dispatch::__infix(DVar3,dVar28);
        local_130 = *(code **)((long)local_130 + 8);
        (*local_130)(DVar3.unknown,local_d8);
        lVar25 = local_118;
        FUN_100029504(lVar20,local_118,FUN_1003afcec);
        lVar19 = local_140;
        lVar6 = local_168;
        (**(code **)(lVar26 + 0x10))(local_140,local_168,UVar8.unknown);
        bVar1 = *(byte *)(local_128 + 0x50);
        uVar23 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
        bVar2 = *(byte *)(lVar26 + 0x50);
        uVar24 = local_120 + (ulong)bVar2 + uVar23 & ((ulong)bVar2 ^ 0xffffffffffffffff);
        puVar18 = &DAT_10053d088;
        _swift_allocObject(&DAT_10053d088,uVar24 + lVar21,bVar1 | bVar2 | 7);
        FUN_100007e64(lVar25,puVar18 + uVar23,FUN_1003afcec);
        (*local_160)(puVar18 + uVar24,lVar19,UVar8.unknown);
        local_b0 = FUN_1003b0cf4;
        local_d0 = PTR___NSConcreteStackBlock_100521110;
        local_c8 = 0x42000000;
        local_c0 = FUN_1000c7e7c;
        puStack_b8 = &DAT_10053d0a0;
        local_a8 = puVar18;
        aBlock = __Block_copy(&local_d0);
        DVar15.unknown = local_a8;
        _swift_release();
        qos.unknown = local_f8.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar15);
        local_d0 = PTR___swiftEmptyArrayStorage_100524190;
        puVar16 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar18 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar17 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        flags.unknown = local_e0.unknown;
        puVar4 = local_108;
        Swift::SetAlgebra::_init(local_e0.unknown,&local_d0,puVar18,puVar17,local_108,puVar16);
        (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
        __Block_release(aBlock);
        (**(code **)(local_158 + 8))(flags.unknown,puVar4);
        (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
        (*local_130)(deadline.unknown,local_d8);
        (**(code **)(lVar26 + 8))(lVar6,UVar8.unknown);
        return;
      }
      goto LAB_1003acce8;
    }
  }
  FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
  (**(code **)(lVar26 + 0x38))(lVar20,1,1,UVar8.unknown);
LAB_1003acce8:
  FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

