// rea decompile_all
// name: FUN_1003bf708
// address: 0x1003bf708
// body: available
// range: 0x1003bf708-0x1003c00af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bf708(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  DispatchWorkItemFlags flags;
  DispatchTime DVar3;
  long lVar4;
  long lVar5;
  State SVar6;
  State SVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  DispatchWorkItem *pDVar11;
  OS_dispatch_queue *pOVar12;
  DispatchTime DVar13;
  long extraout_x8;
  undefined *puVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x13;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  undefined auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  DispatchWorkItemFlags local_130;
  DispatchTime local_128;
  long local_120;
  DispatchTime local_118;
  undefined *local_110;
  ulong local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  DispatchWorkItem *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  DispatchWorkItem *local_78;
  char local_70;
  
  local_110 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_120 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  puVar14 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_128.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = puVar14 + -extraout_x12;
  local_118.unknown = puVar14;
  local_138 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(local_138 + -8) + 0x40));
  lVar4 = 0;
  local_130.unknown = puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = param_2;
  uStack_f0 = param_3;
  FUN_1003cff30(0,param_2,param_3);
  local_140 = *(long *)(lVar4 + -8);
  local_150 = *(long *)(local_140 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(local_150 + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)(puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_01;
  puVar14 = &DAT_10054b6b8;
  local_148 = lVar15;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  local_e8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_02;
  lVar5 = 0;
  local_e0 = lVar15;
  FUN_10040211c();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_158 = extraout_x13;
  local_100 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_00;
  puVar14 = &DAT_10054ac40;
  local_c0 = lVar15;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  uVar16 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_108 = uVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = uVar16 - extraout_x12_01;
  local_d0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_02;
  local_c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar17 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (lVar19 - extraout_x12_05) - extraout_x12_06;
  SVar6.unknown = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  SwiftUI::State::get_wrappedValue(SVar6);
  FUN_1003e3d70(lVar19 - extraout_x12_05,lVar19);
  pcVar22 = *(code **)(lVar21 + 0x30);
  lVar15 = lVar19;
  (*pcVar22)(lVar19,1,lVar5);
  local_d8 = lVar4;
  if ((int)lVar15 == 1) {
    puVar9 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x80));
    local_b0 = (DispatchWorkItem *)*puVar9;
    local_a0 = (code *)puVar9[2];
    uStack_a8 = CONCAT71(uStack_a8._1_7_,*(undefined1 *)(puVar9 + 1));
    SVar7.unknown = &DAT_100560300;
    FUN_100002f94(&DAT_100560300,&DAT_100435dd8);
    SwiftUI::State::get_wrappedValue(SVar7);
    if (local_70 == '\x01') {
      (**(code **)(lVar21 + 0x38))(lVar18,1,1,lVar5);
    }
    else {
      local_b0 = local_78;
      FUN_1003c00b0(lVar18,&local_b0,param_1,local_f8,uStack_f0);
    }
    lVar4 = local_c8;
    lVar8 = lVar19;
    (*pcVar22)(lVar19,1,lVar5);
    lVar15 = local_d0;
    if ((int)lVar8 != 1) {
      FUN_10002a29c(lVar19,&DAT_10054ac40,&DAT_10041ce70);
    }
  }
  else {
    FUN_100007e64(lVar19,lVar18,FUN_10040211c);
    (**(code **)(lVar21 + 0x38))(lVar18,0,1,lVar5);
    lVar4 = local_c8;
    lVar15 = local_d0;
  }
  FUN_1000087e4(lVar18,lVar17,&DAT_10054ac40,&DAT_10041ce70);
  lVar19 = lVar17;
  (*pcVar22)(lVar17,1,lVar5);
  if ((int)lVar19 == 1) {
    FUN_10002a29c(lVar18,&DAT_10054ac40,&DAT_10041ce70);
    lVar18 = lVar17;
    goto LAB_1003c0078;
  }
  FUN_100007e64(lVar17,local_c0,FUN_10040211c);
  SwiftUI::State::get_wrappedValue(SVar6);
  local_c8 = lVar21;
  (**(code **)(lVar21 + 0x38))(lVar15,1,1,lVar5);
  lVar19 = local_e0;
  lVar17 = (long)*(int *)(local_e8 + 0x30);
  FUN_1000087e4(lVar4,local_e0,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar15,lVar19 + lVar17,&DAT_10054ac40,&DAT_10041ce70);
  lVar21 = lVar19;
  (*pcVar22)(lVar19,1,lVar5);
  uVar16 = local_108;
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar4,&DAT_10054ac40,&DAT_10041ce70);
    lVar17 = lVar19 + lVar17;
    (*pcVar22)(lVar17,1,lVar5);
    if ((int)lVar17 == 1) {
      FUN_10002a29c(lVar19,&DAT_10054ac40,&DAT_10041ce70);
LAB_1003bfdb4:
      lVar15 = local_d8;
      local_e0 = (long)*(int *)(local_d8 + 0x74);
      uStack_a8 = ((undefined8 *)(param_1 + local_e0))[1];
      local_b0 = *(DispatchWorkItem **)(param_1 + local_e0);
      SVar6.unknown = &DAT_100552980;
      local_d0 = lVar18;
      FUN_100002f94(&DAT_100552980,&DAT_100435dd0);
      SwiftUI::State::get_wrappedValue(SVar6);
      if (local_78 != (DispatchWorkItem *)0x0) {
        Dispatch::DispatchWorkItem::cancel(local_78);
        _swift_release(local_78);
      }
      lVar4 = local_140;
      lVar18 = local_148;
      (**(code **)(local_140 + 0x10))(local_148,param_1,lVar15);
      lVar5 = local_100;
      FUN_100029504(local_c0,local_100,FUN_10040211c);
      bVar1 = *(byte *)(lVar4 + 0x50);
      uVar16 = (ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff);
      bVar2 = *(byte *)(local_c8 + 0x50);
      uVar20 = local_150 + (ulong)bVar2 + uVar16 & ((ulong)bVar2 ^ 0xffffffffffffffff);
      puVar14 = &DAT_10053dab8;
      _swift_allocObject(&DAT_10053dab8,uVar20 + local_158,bVar1 | bVar2 | 7);
      *(undefined8 *)(puVar14 + 0x10) = local_f8;
      *(undefined8 *)(puVar14 + 0x18) = uStack_f0;
      (**(code **)(lVar4 + 0x20))(puVar14 + uVar16,lVar18,lVar15);
      FUN_100007e64(lVar5,puVar14 + uVar20,FUN_10040211c);
      local_90 = FUN_1003e42c4;
      local_b0 = (DispatchWorkItem *)PTR___NSConcreteStackBlock_100521110;
      uStack_a8 = 0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_10053dad0;
      local_88 = puVar14;
      __Block_copy(&local_b0);
      local_78 = (DispatchWorkItem *)PTR___swiftEmptyArrayStorage_100524190;
      puVar9 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar14 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar10 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      flags.unknown = local_130.unknown;
      Swift::SetAlgebra::_init(local_130.unknown,&local_78,puVar14,puVar10,local_138,puVar9);
      pDVar11 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
      _swift_allocObject(pDVar11,*(undefined4 *)(pDVar11 + 0x30),*(undefined2 *)(pDVar11 + 0x34));
      pDVar11 = Dispatch::DispatchWorkItem::_init(pDVar11,flags);
      _swift_release(local_88);
      local_b0 = pDVar11;
      _swift_retain(pDVar11);
      SwiftUI::State::set_wrappedValue((State *)(param_1 + local_e0),&local_b0,SVar6.unknown);
      pOVar12 = (OS_dispatch_queue *)0x0;
      FUN_10006cc7c();
      DVar13.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
      DVar3.unknown = local_128.unknown;
      Dispatch::DispatchTime::now(DVar13);
      DVar13.unknown = local_118.unknown;
      Dispatch::__infix(DVar3,0.25);
      puVar14 = local_110;
      pcVar22 = *(code **)(local_120 + 8);
      (*pcVar22)(DVar3.unknown,local_110);
      (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(DVar13,pDVar11);
      _swift_release(pDVar11);
      (*pcVar22)(DVar13.unknown,puVar14);
      FUN_100029548(local_c0,FUN_10040211c);
      lVar18 = local_d0;
      goto LAB_1003c0078;
    }
LAB_1003bfcf8:
    FUN_10002a29c(lVar19,&DAT_10054b6b8,&DAT_10041ca50);
  }
  else {
    FUN_1000087e4(lVar19,local_108,&DAT_10054ac40,&DAT_10041ce70);
    lVar21 = lVar19 + lVar17;
    (*pcVar22)(lVar21,1,lVar5);
    lVar5 = local_100;
    if ((int)lVar21 == 1) {
      FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar4,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(uVar16,FUN_10040211c);
      goto LAB_1003bfcf8;
    }
    FUN_100007e64(lVar19 + lVar17,local_100,FUN_10040211c);
    uVar20 = uVar16;
    FUN_10040a7a0(uVar16,lVar5);
    FUN_100029548(lVar5,FUN_10040211c);
    FUN_10002a29c(lVar15,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar4,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(uVar16,FUN_10040211c);
    FUN_10002a29c(lVar19,&DAT_10054ac40,&DAT_10041ce70);
    if ((uVar20 & 1) != 0) goto LAB_1003bfdb4;
  }
  FUN_100029548(local_c0,FUN_10040211c);
LAB_1003c0078:
  FUN_10002a29c(lVar18,&DAT_10054ac40,&DAT_10041ce70);
  return;
}

