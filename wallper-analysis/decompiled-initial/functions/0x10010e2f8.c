// rea decompile_all
// name: FUN_10010e2f8
// address: 0x10010e2f8
// body: available
// range: 0x10010e2f8-0x10010e72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010e2f8(undefined8 param_1,ulong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  ID self;
  State SVar6;
  undefined *puVar7;
  OS_dispatch_queue *pOVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar12;
  undefined8 extraout_x12;
  long extraout_x13;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  State local_110;
  undefined8 uStack_108;
  State local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined *apuStack_70 [2];
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  if (*(ID *)PTR__NSApp_1005212d0 != 0) {
    puVar15 = (undefined *)*param_2;
    local_138 = param_4;
    local_130 = param_5;
    local_128 = extraout_x13;
    local_120 = extraout_x12;
    local_118 = lVar14;
    self = objc_stub::keyWindow(*(ID *)PTR__NSApp_1005212d0);
    if (self != 0) {
      objc_stub::makeFirstResponder_(self,0);
    }
    puVar9 = (undefined *)param_3[5];
    uVar1 = param_3[6];
    local_110.unknown = puVar9;
    uStack_108 = uVar1;
    local_78 = uVar1;
    apuStack_70[0] = puVar9;
    FUN_1000087e4(apuStack_70,&local_b8,&DAT_1005530c8,&DAT_100425d78);
    FUN_1000087e4(&local_78,&local_b8,&DAT_1005530d0,&DAT_100425d80);
    SVar6.unknown = &DAT_1005530d8;
    FUN_100002f94(&DAT_1005530d8,&DAT_100425d88);
    SwiftUI::State::get_wrappedValue(SVar6);
    puVar7 = puVar15;
    FUN_10021668c(puVar15,local_b8.unknown);
    _swift_bridgeObjectRelease(local_b8.unknown);
    if (((ulong)puVar7 & 1) == 0) {
      local_110.unknown = puVar9;
      uStack_108 = uVar1;
      SwiftUI::State::get_wrappedValue(SVar6);
      FUN_1001ca198(auStack_80,puVar15);
      local_b8.unknown = puVar9;
      local_b0 = uVar1;
      SwiftUI::State::set_wrappedValue(&local_b8,auStack_88,SVar6.unknown);
      FUN_10002a29c(apuStack_70,&DAT_1005530c8,&DAT_100425d78);
      FUN_10002a29c(&local_78,&DAT_1005530d0,&DAT_100425d80);
      pOVar8 = (OS_dispatch_queue *)0x0;
      FUN_10006cc7c();
      (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
      puVar9 = &DAT_10052c698;
      _swift_allocObject(&DAT_10052c698,0x80,7);
      uVar2 = local_130;
      uVar1 = local_138;
      *(undefined8 *)(puVar9 + 0x10) = local_138;
      *(undefined8 *)(puVar9 + 0x18) = local_130;
      uVar12 = param_3[4];
      uVar17 = param_3[7];
      uVar16 = param_3[6];
      *(undefined8 *)(puVar9 + 0x48) = param_3[5];
      *(undefined8 *)(puVar9 + 0x40) = uVar12;
      *(undefined8 *)(puVar9 + 0x58) = uVar17;
      *(undefined8 *)(puVar9 + 0x50) = uVar16;
      uVar12 = param_3[8];
      *(undefined8 *)(puVar9 + 0x68) = param_3[9];
      *(undefined8 *)(puVar9 + 0x60) = uVar12;
      uVar12 = param_3[10];
      uVar16 = *param_3;
      uVar18 = param_3[3];
      uVar17 = param_3[2];
      *(undefined8 *)(puVar9 + 0x28) = param_3[1];
      *(undefined8 *)(puVar9 + 0x20) = uVar16;
      *(undefined8 *)(puVar9 + 0x38) = uVar18;
      *(undefined8 *)(puVar9 + 0x30) = uVar17;
      *(undefined8 *)(puVar9 + 0x70) = uVar12;
      *(undefined **)(puVar9 + 0x78) = puVar15;
      local_98 = FUN_10010f4b8;
      local_b8.unknown = PTR___NSConcreteStackBlock_100521110;
      local_b0 = 0x42000000;
      local_a8 = FUN_1000c7e7c;
      puStack_a0 = &DAT_10052c6b0;
      local_90 = puVar9;
      aBlock = __Block_copy(&local_b8);
      DVar5.unknown = local_90;
      lVar14 = 0;
      FUN_10010f404(0,uVar1,uVar2);
      (**(code **)(*(long *)(lVar14 + -8) + 0x10))(&local_110,param_3,lVar14);
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar5);
      local_110.unknown = PTR___swiftEmptyArrayStorage_100524190;
      puVar10 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar15 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar11 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(puVar13,&local_110,puVar15,puVar11,DVar4.unknown,puVar10);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async
                ((DispatchQoS)0x0,
                 (DispatchWorkItemFlags)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
      __Block_release(aBlock);
      (**(code **)(local_118 + 8))(puVar13,DVar4.unknown);
      (**(code **)(local_128 + 8))
                (puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_120);
    }
    else {
      FUN_10002a29c(apuStack_70,&DAT_1005530c8,&DAT_100425d78);
      FUN_10002a29c(&local_78,&DAT_1005530d0,&DAT_100425d80);
      uStack_108 = param_3[8];
      local_110.unknown = (undefined *)param_3[7];
      puVar9 = &DAT_10054ba40;
      local_b8.unknown = puVar15;
      FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
      SwiftUI::State::set_wrappedValue(&local_110,&local_b8,puVar9);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010e730);
  (*pcVar3)();
}

