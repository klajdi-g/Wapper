// rea decompile_all
// name: FUN_10036cf24
// address: 0x10036cf24
// body: available
// range: 0x10036cf24-0x10036d2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036cf24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  Date DVar7;
  HorizontalAlignment HVar8;
  Set _all;
  Alignment AVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar11;
  long lVar12;
  Set unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *local_d0;
  long local_c8;
  undefined *puStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_b8 = param_1;
  puStack_c0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar15 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar17 - extraout_x8_01;
  lVar5 = 0;
  FUN_10025ee04();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_10034c884();
  lVar13 = *(long *)(unaff_x20.unknown + *(int *)(lVar6 + 0x1c));
  if (lVar13 != 0) {
    _swift_retain(lVar13);
    FUN_1001b6e74(lVar18);
    _swift_release(lVar13);
    lVar13 = lVar18;
    (**(code **)(lVar12 + 0x30))(lVar18,1,lVar5);
    bVar3 = (int)lVar13 != 1;
    if (bVar3) {
      FUN_100007e64(lVar18,lVar14);
      DVar7 = Foundation::Date::init();
      Foundation::Calendar::get_current((Calendar)DVar7.unknown);
      FUN_1001d84f4(lVar17,lVar15);
      (**(code **)(local_c8 + 8))(lVar15,puStack_c0);
      (**(code **)(lVar16 + 8))(lVar17,local_d0);
      HVar8.unknown = (undefined *)(ulong)(byte)unaff_x20.unknown[*(int *)(lVar6 + 0x14)];
      FUN_1001d9924();
      HVar8 = SwiftUI::HorizontalAlignment::get_center(HVar8);
      puVar10 = local_b8;
      *local_b8 = HVar8.unknown;
      local_b8[1] = 0x402c000000000000;
      *(undefined1 *)(local_b8 + 2) = 0;
      puVar4 = &DAT_10055d8d8;
      FUN_100002f94(&DAT_10055d8d8,&DAT_100433008);
      FUN_10036d2c0((long)puVar10 + (long)*(int *)(puVar4 + 0x2c));
      _all = SwiftUI::Edge::Set::get_all(unaff_x20);
      uVar19 = 0x4030000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
      AVar9.unknown = &DAT_10055d8e0;
      FUN_100002f94(&DAT_10055d8e0,&DAT_100433010);
      puVar1 = (undefined1 *)((long)puVar10 + (long)*(int *)(AVar9.unknown + 0x24));
      *puVar1 = (char)_all.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar19;
      *(undefined8 *)(puVar1 + 0x10) = param_3;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      *(undefined8 *)(puVar1 + 0x20) = param_5;
      puVar1[0x28] = 0;
      SwiftUI::Alignment::get_center(AVar9);
      SwiftUI::_FrameLayout::_init((Alignment)0x406f400000000000);
      FUN_100029548(lVar14,FUN_10025ee04);
      puVar4 = &DAT_10055d8d0;
      FUN_100002f94(&DAT_10055d8d0,&DAT_100433000);
      puVar2 = (undefined8 *)((long)puVar10 + (long)*(int *)(puVar4 + 0x24));
      puVar2[1] = uStack_a8;
      *puVar2 = local_b0;
      puVar2[3] = uStack_98;
      puVar2[2] = uStack_a0;
      puVar2[5] = uStack_88;
      puVar2[4] = local_90;
      pcVar11 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
    }
    else {
      FUN_10002a29c(lVar18,&DAT_10054ac38,&DAT_10041e8e0);
      puVar4 = &DAT_10055d8d0;
      FUN_100002f94(&DAT_10055d8d0,&DAT_100433000);
      pcVar11 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
      puVar10 = local_b8;
    }
    (*pcVar11)(puVar10,!bVar3,1,puVar4);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10036d2c0);
  (*pcVar11)();
}

