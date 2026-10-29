// rea decompile_all
// name: FUN_100376f2c
// address: 0x100376f2c
// body: available
// range: 0x100376f2c-0x100377487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100376f2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  Set _all;
  Alignment AVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar16;
  Set unaff_x20;
  long lVar17;
  long lVar18;
  HorizontalAlignment HVar19;
  ulong uVar20;
  undefined8 uVar21;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar5 = 0;
  local_b8 = param_1;
  FUN_10034c390();
  local_d0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)&local_e0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100556aa0;
  local_e0 = extraout_x12;
  local_c8 = lVar7;
  FUN_100002f94(&DAT_100556aa0,&DAT_100433070);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar19.unknown = (undefined *)(lVar7 - extraout_x8);
  lVar7 = 0;
  FUN_100266c2c();
  lVar11 = *(long *)(lVar7 + -8);
  lVar18 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)HVar19.unknown - (lVar18 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_00;
  puVar6 = &DAT_10054ac38;
  local_c0 = lVar12;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  lVar8 = 0;
  FUN_10025ee04();
  lVar17 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20.unknown + *(int *)(lVar5 + 0x1c));
  if (lVar5 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100377488);
    (*pcVar4)();
  }
  _swift_retain(lVar5);
  FUN_1001b6e74(lVar12);
  _swift_release(lVar5);
  lVar5 = lVar12;
  (**(code **)(lVar17 + 0x30))(lVar12,1,lVar8);
  if ((int)lVar5 == 1) {
    FUN_10002a29c(lVar12,&DAT_10054ac38,&DAT_10041e8e0);
  }
  else {
    FUN_100007e64(lVar12,lVar13,FUN_10025ee04);
    FUN_100376c98(HVar19.unknown);
    puVar6 = HVar19.unknown;
    (**(code **)(lVar11 + 0x30))(HVar19.unknown,1,lVar7);
    lVar5 = local_c0;
    if ((int)puVar6 != 1) {
      FUN_100007e64(HVar19.unknown,local_c0,FUN_100266c2c);
      HVar19 = SwiftUI::HorizontalAlignment::get_leading(HVar19);
      puVar3 = local_b8;
      *local_b8 = HVar19.unknown;
      local_b8[1] = 0x402c000000000000;
      *(undefined1 *)(local_b8 + 2) = 0;
      puVar6 = &DAT_10055d950;
      FUN_100002f94(&DAT_10055d950,&DAT_100433080);
      FUN_100377488((long)puVar3 + (long)*(int *)(puVar6 + 0x2c));
      _all = SwiftUI::Edge::Set::get_all(unaff_x20);
      uVar21 = 0x4030000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
      AVar9.unknown = &DAT_10055d958;
      FUN_100002f94(&DAT_10055d958,&DAT_100433088);
      puVar1 = (undefined1 *)((long)puVar3 + (long)*(int *)(AVar9.unknown + 0x24));
      *puVar1 = (char)_all.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar21;
      *(undefined8 *)(puVar1 + 0x10) = param_3;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      *(undefined8 *)(puVar1 + 0x20) = param_5;
      puVar1[0x28] = 0;
      SwiftUI::Alignment::get_center(AVar9);
      SwiftUI::_FrameLayout::_init((Alignment)0x406f400000000000);
      puVar6 = &DAT_10055d960;
      FUN_100002f94(&DAT_10055d960,&DAT_100433090);
      lVar8 = local_c8;
      puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(puVar6 + 0x24));
      puVar2[1] = uStack_a8;
      *puVar2 = local_b0;
      puVar2[3] = uStack_98;
      puVar2[2] = uStack_a0;
      puVar2[5] = uStack_88;
      puVar2[4] = local_90;
      FUN_100029504();
      lVar7 = local_d8;
      FUN_100029504(lVar5,local_d8,FUN_100266c2c);
      uVar14 = (ulong)*(byte *)(local_d0 + 0x50);
      uVar20 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
      uVar15 = (ulong)*(byte *)(lVar11 + 0x50);
      uVar16 = uVar20 + local_e0 + uVar15 & (uVar15 ^ 0xffffffffffffffff);
      puVar6 = &DAT_10053bb80;
      local_d0 = lVar13;
      _swift_allocObject(&DAT_10053bb80,uVar16 + lVar18,uVar14 | 7 | uVar15);
      FUN_100007e64(lVar8,puVar6 + uVar20,FUN_10034c390);
      FUN_100007e64(lVar7,puVar6 + uVar16,FUN_100266c2c);
      puVar10 = &DAT_10055d968;
      FUN_100002f94(&DAT_10055d968,&DAT_100433098);
      puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x24));
      *puVar2 = FUN_1003842b8;
      puVar2[1] = puVar6;
      puVar2[2] = 0;
      puVar2[3] = 0;
      FUN_100029504();
      puVar6 = &DAT_10053bba8;
      _swift_allocObject(&DAT_10053bba8,uVar20 + local_e0,uVar14 | 7);
      FUN_100007e64(lVar8,puVar6 + uVar20,FUN_10034c390);
      puVar10 = &DAT_10055d948;
      FUN_100002f94(&DAT_10055d948,&DAT_100433078);
      puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x24));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = FUN_1003842d8;
      puVar2[3] = puVar6;
      (**(code **)(*(long *)(puVar10 + -8) + 0x38))(puVar3,0,1,puVar10);
      FUN_100029548(local_c0,FUN_100266c2c);
      FUN_100029548(local_d0,FUN_10025ee04);
      return;
    }
    FUN_10002a29c(HVar19.unknown,&DAT_100556aa0,&DAT_100433070);
    FUN_100029548(lVar13,FUN_10025ee04);
  }
  puVar6 = &DAT_10055d948;
  FUN_100002f94(&DAT_10055d948,&DAT_100433078);
  (**(code **)(*(long *)(puVar6 + -8) + 0x38))(local_b8,1,1,puVar6);
  return;
}

