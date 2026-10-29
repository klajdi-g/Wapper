// rea decompile_all
// name: FUN_1003da138
// address: 0x1003da138
// body: available
// range: 0x1003da138-0x1003da653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003da294 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003da138(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  URL UVar9;
  undefined *puVar10;
  Color CVar11;
  AnyView AVar12;
  undefined *puVar13;
  State SVar14;
  Binding BVar15;
  Color CVar16;
  Color CVar17;
  UnitPoint UVar18;
  Gradient gradient;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar19;
  long extraout_x12;
  long lVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long local_f0 [5];
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  byte local_a9;
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  undefined8 uStack_88;
  
  puVar6 = &DAT_100553d90;
  local_c8 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined *)((long)local_f0 - extraout_x8);
  puVar6 = &DAT_100560948;
  puVar13 = &DAT_1004364f8;
  FUN_100002f94();
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar20 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = (undefined8 *)(lVar20 - extraout_x12);
  FUN_1003d92cc();
  lVar8 = 0;
  FUN_10040211c();
  iVar4 = *(int *)(lVar8 + 0x14);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar9.unknown + -8);
  (**(code **)(lVar8 + 0x10))(puVar22,param_2 + iVar4,UVar9.unknown);
  (**(code **)(lVar8 + 0x38))(puVar22,0,1,UVar9.unknown);
  lVar8 = 0;
  FUN_100113f00();
  iVar4 = *(int *)(lVar8 + 0x24);
  local_a8 = (undefined *)0x0;
  puVar10 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init((long)puVar21 + (long)iVar4,puVar10,puVar10);
  local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
  SwiftUI::State::init
            ((long)puVar21 + (long)*(int *)(lVar8 + 0x28),puVar10,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar5 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_a8 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)puVar21 + (long)*(int *)(lVar8 + 0x2c),puVar10,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_a8 = (undefined *)0x0;
  SwiftUI::State::init((long)puVar21 + (long)*(int *)(lVar8 + 0x30),puVar10,puVar5);
  *puVar21 = puVar7;
  puVar21[1] = puVar13;
  CVar11.unknown = puVar22;
  FUN_1000087e4(puVar22,(long)puVar21 + (long)*(int *)(lVar8 + 0x14),&DAT_100553d90,&DAT_10041bf10);
  *(undefined1 *)((long)puVar21 + (long)*(int *)(lVar8 + 0x18)) = 1;
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(lVar8 + 0x1c));
  *puVar1 = 0x140;
  *(undefined1 *)(puVar1 + 1) = 0;
  local_a8 = (undefined *)SwiftUI::Color::get_black(CVar11);
  AVar12 = SwiftUI::AnyView::_init
                     (local_a8,PTR___type_metadata_for_SwiftUI_Color_100523288,
                      PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278
                     );
  FUN_10002a29c(puVar22,&DAT_100553d90,&DAT_10041bf10);
  *(undefined **)((long)puVar21 + (long)*(int *)(lVar8 + 0x20)) = AVar12.unknown;
  puVar13 = &DAT_100551ee8;
  FUN_100002f94(&DAT_100551ee8,&DAT_100423f10);
  iVar4 = *(int *)(puVar13 + 0x24);
  *(undefined8 *)((long)puVar21 + (long)iVar4) = 0x4054000000000000;
  *(undefined1 *)((undefined8 *)((long)puVar21 + (long)iVar4) + 1) = 0;
  lVar8 = 0;
  FUN_1003e437c();
  puVar2 = (undefined1 *)(param_2 + *(int *)(lVar8 + 0x1c));
  uVar3 = *puVar2;
  uVar23 = *(undefined8 *)(puVar2 + 8);
  local_a8 = (undefined *)CONCAT71(local_a8._1_7_,uVar3);
  SVar14.unknown = &DAT_10054ab50;
  local_a0 = uVar23;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar14);
  if ((char)local_c0 == '\x01') {
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
    local_a8 = (undefined *)*puVar1;
    local_a0 = puVar1[1];
    uStack_98 = *(undefined1 *)(puVar1 + 2);
    BVar15.unknown = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue(BVar15);
    if ((local_c0 & 1) == 0) goto LAB_1003da43c;
    uVar19 = 0x3fe999999999999a;
  }
  else {
LAB_1003da43c:
    uVar19 = 0;
  }
  *(undefined8 *)((long)puVar21 + (long)*(int *)(puVar6 + 0x24)) = uVar19;
  CVar11.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x38;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar11.unknown + 0x18) = 6;
  *(undefined8 *)(CVar11.unknown + 0x10) = 3;
  CVar16 = SwiftUI::Color::get_black(CVar11);
  CVar17 = SwiftUI::Color::opacity(0.7,CVar16);
  _swift_release();
  *(undefined **)(CVar11.unknown + 0x20) = CVar17.unknown;
  CVar16 = SwiftUI::Color::get_black(CVar16);
  CVar17 = SwiftUI::Color::opacity(0.5,CVar16);
  _swift_release();
  *(undefined **)(CVar11.unknown + 0x28) = CVar17.unknown;
  UVar18.unknown = (undefined *)SwiftUI::Color::get_black(CVar16);
  CVar17 = SwiftUI::Color::opacity(0.7,(Color)UVar18.unknown);
  _swift_release();
  *(undefined **)(CVar11.unknown + 0x30) = CVar17.unknown;
  UVar18 = SwiftUI::UnitPoint::get_top(UVar18);
  SwiftUI::UnitPoint::get_bottom(UVar18);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  puVar6 = local_a8;
  local_f0[3] = CONCAT71(uStack_97,uStack_98);
  local_f0[1] = uStack_88;
  local_f0[0] = lStack_90;
  local_f0[2] = local_a0;
  local_c0 = CONCAT71(local_c0._1_7_,uVar3);
  local_b8 = uVar23;
  SwiftUI::State::get_wrappedValue(SVar14);
  if (local_a9 == 1) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
    local_c0 = *puVar1;
    local_b8 = puVar1[1];
    local_b0 = *(undefined1 *)(puVar1 + 2);
    BVar15.unknown = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue(BVar15);
    uVar23 = 0x3ff0000000000000;
    if ((local_a9 & 1) != 0) goto LAB_1003da590;
  }
  uVar23 = 0;
LAB_1003da590:
  FUN_1000087e4(puVar21,lVar20,&DAT_100560948,&DAT_1004364f8);
  lVar8 = local_c8;
  FUN_1000087e4(lVar20,local_c8,&DAT_100560948,&DAT_1004364f8);
  puVar13 = &DAT_100560950;
  FUN_100002f94(&DAT_100560950,&DAT_100436500);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar13 + 0x30));
  _swift_bridgeObjectRetain(puVar6);
  FUN_10002a29c(puVar21,&DAT_100560948,&DAT_1004364f8);
  *puVar1 = puVar6;
  puVar1[4] = local_f0[1];
  puVar1[3] = local_f0[0];
  puVar1[2] = local_f0[3];
  puVar1[1] = local_f0[2];
  puVar1[5] = uVar23;
  _swift_bridgeObjectRelease(puVar6);
  FUN_10002a29c(lVar20,&DAT_100560948,&DAT_1004364f8);
  return;
}

