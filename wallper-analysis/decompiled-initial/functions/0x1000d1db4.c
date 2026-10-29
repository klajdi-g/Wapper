// rea decompile_all
// name: FUN_1000d1db4
// address: 0x1000d1db4
// body: available
// range: 0x1000d1db4-0x1000d215b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d1db4(void)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  State SVar3;
  State SVar4;
  undefined *puVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong *unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1f0 [8];
  OS_dispatch_queue *local_1e8;
  undefined *local_1e0;
  long local_1d8;
  State local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  undefined *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  ulong uStack_78;
  ulong local_70 [2];
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar12 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  if ((unaff_x20[1] & 1) != 0) {
    uStack_78 = unaff_x20[0xe];
    local_80 = (undefined *)unaff_x20[0xd];
    uStack_1c8 = unaff_x20[0xe];
    local_1d0.unknown = (undefined *)unaff_x20[0xd];
    local_70[0] = uStack_78;
    FUN_1000087e4(local_70,&local_b0,&DAT_10054b608,&DAT_10041c9a0);
    SVar3.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar3);
    if (((ulong)local_b0 & 1) == 0) {
      uStack_1c8 = unaff_x20[0xb];
      local_1d0.unknown = (undefined *)unaff_x20[10];
      local_1c0 = unaff_x20[0xc];
      SVar4.unknown = &DAT_100551460;
      puVar6 = &DAT_100423128;
      FUN_100002f94();
      SwiftUI::State::get_wrappedValue(SVar4);
      if ((char)local_a8 == '\x01') {
        local_b0 = (undefined *)*unaff_x20;
      }
      local_1e0 = DVar2.unknown;
      local_1d8 = lVar12;
      FUN_10025f020();
      uStack_1c8 = unaff_x20[0x10];
      local_1d0.unknown = (undefined *)unaff_x20[0xf];
      local_1c0 = unaff_x20[0x11];
      puVar5 = &DAT_10054dd08;
      local_a8 = puVar6;
      FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
      SwiftUI::State::set_wrappedValue(&local_1d0,&local_b0,puVar5);
      uStack_1c8 = unaff_x20[0x13];
      local_1d0.unknown = (undefined *)unaff_x20[0x12];
      local_1c0 = unaff_x20[0x14];
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      puVar6 = &DAT_10054ab90;
      FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
      SwiftUI::State::set_wrappedValue(&local_1d0,&local_b0,puVar6);
      uStack_1c8 = uStack_78;
      local_1d0.unknown = local_80;
      local_b0 = (undefined *)CONCAT71(local_b0._1_7_,1);
      SwiftUI::State::set_wrappedValue(&local_1d0,&local_b0,SVar3.unknown);
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      pOVar7 = (OS_dispatch_queue *)0x0;
      FUN_10006cc7c();
      local_1e8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
      puVar6 = &DAT_100529cf8;
      _swift_allocObject(&DAT_100529cf8,0x130,7);
      _memcpy(puVar6 + 0x10,unaff_x20,0x120);
      local_90 = FUN_1000d6d78;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_100529d10;
      local_88 = puVar6;
      aBlock = __Block_copy(&local_b0);
      DVar2.unknown = local_88;
      FUN_1000d584c();
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar2);
      local_1d0.unknown = PTR___swiftEmptyArrayStorage_100524190;
      puVar8 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar9 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(puVar10,&local_1d0,puVar6,puVar9,DVar1.unknown,puVar8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async
                ((DispatchQoS)0x0,
                 (DispatchWorkItemFlags)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
      __Block_release(aBlock);
      (**(code **)(local_1d8 + 8))(puVar10,DVar1.unknown);
      (**(code **)(lVar11 + 8))(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_1e0);
    }
    else {
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
    }
  }
  return;
}

