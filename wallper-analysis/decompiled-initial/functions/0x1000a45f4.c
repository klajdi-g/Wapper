// rea decompile_all
// name: FUN_1000a45f4
// address: 0x1000a45f4
// body: available
// range: 0x1000a45f4-0x1000a4a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a4964 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a45f4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  CGFloat param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  Color CVar6;
  Color CVar7;
  ulong uVar8;
  Color CVar9;
  UnitPoint UVar10;
  Gradient gradient;
  AnyTransition AVar11;
  UnitPoint center;
  CGFloat startRadius;
  char cVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  undefined8 uVar19;
  Color CVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  long local_f0 [3];
  undefined *local_d8;
  long local_d0;
  undefined8 *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  local_c8 = param_1;
  local_b0 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_c0 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar13 = (long)local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12;
  puVar5 = &DAT_10054fb40;
  local_f0[2] = lVar13;
  FUN_100002f94(&DAT_10054fb40,&DAT_100421458);
  local_d8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_00;
  CVar6.unknown = (undefined *)0x0;
  FUN_1000aff7c();
  bVar17 = *(byte *)(param_2 + *(int *)(CVar6.unknown + 0x14));
  lVar14 = *(long *)(param_2 + 0x30);
  uVar18 = (uint)bVar17;
  if ((bVar17 == 8) || (*(char *)(param_2 + *(int *)(CVar6.unknown + 0x20)) == '\x02')) {
    CVar20.unknown = (undefined *)0x0;
    local_f0[1] = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar19 = 0;
    uVar21 = 0;
  }
  else {
    CVar7 = SwiftUI::Color::get_black(CVar6);
    if (*(long *)(lVar14 + 0x10) == 0) {
      cVar12 = *(char *)(param_2 + 0x40);
    }
    else {
      cVar12 = '\x01';
    }
    if (bVar17 == 0xb) {
      uVar1 = 0;
      if (cVar12 != '\0') {
        uVar1 = 0xb;
      }
    }
    else {
      uVar1 = uVar18;
      if (uVar18 == 2) {
        uVar1 = (uint)(cVar12 == '\0');
      }
    }
    uVar8 = (ulong)uVar1;
    local_f0[0] = lVar14;
    switchD_100077f1c::caseD_44();
    dVar23 = 0.45;
    if ((uVar8 & 1) == 0) {
      dVar23 = 0.28;
    }
    CVar20 = SwiftUI::Color::opacity(dVar23,CVar7);
    _swift_release(CVar7.unknown);
    CVar7.unknown = &DAT_10054af98;
    FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
    center.unknown = (undefined *)0x30;
    startRadius.unknown = (undefined *)0x7;
    _swift_allocObject();
    *(undefined8 *)(CVar7.unknown + 0x18) = 4;
    *(undefined8 *)(CVar7.unknown + 0x10) = 2;
    CVar9 = SwiftUI::Color::get_clear(CVar7);
    *(undefined **)(CVar7.unknown + 0x20) = CVar9.unknown;
    UVar10.unknown = (undefined *)SwiftUI::Color::get_black(CVar9);
    CVar9 = SwiftUI::Color::opacity(0.35,(Color)UVar10.unknown);
    _swift_release();
    *(undefined **)(CVar7.unknown + 0x28) = CVar9.unknown;
    SwiftUI::UnitPoint::get_center(UVar10);
    dVar22 = *(double *)(param_2 + *(int *)(CVar6.unknown + 0x18));
    dVar23 = ((double *)(param_2 + *(int *)(CVar6.unknown + 0x18)))[1];
    if (dVar23 < dVar22) {
      dVar23 = dVar22;
    }
    gradient = SwiftUI::Gradient::init(dVar23,0x3fe6666666666666);
    SwiftUI::RadialGradient::init(gradient,center,startRadius,param_5);
    local_f0[1] = local_88;
    _swift_retain(CVar20.unknown);
    _swift_bridgeObjectRetain(local_a8);
    lVar14 = local_f0[0];
    uVar15 = local_98;
    uVar16 = local_a8;
    uVar19 = uStack_a0;
    uVar21 = uStack_90;
  }
  FUN_1000a4a90(lVar13,param_2);
  if (*(long *)(lVar14 + 0x10) == 0) {
    cVar12 = *(char *)(param_2 + 0x40);
    if (uVar18 == 0xb) goto LAB_1000a48e4;
LAB_1000a48c4:
    if (uVar18 != 2) goto LAB_1000a48f0;
    bVar17 = 1;
  }
  else {
    cVar12 = '\x01';
    if (uVar18 != 0xb) goto LAB_1000a48c4;
LAB_1000a48e4:
    bVar17 = 10;
  }
  if (cVar12 != '\0') {
    bVar17 = bVar17 + 1;
  }
LAB_1000a48f0:
  puVar5 = &DAT_10054fb48;
  FUN_100002f94(&DAT_10054fb48,&DAT_100421460);
  *(byte *)(lVar13 + *(int *)(puVar5 + 0x34)) = bVar17;
  lVar14 = local_f0[2];
  SwiftUI::OpacityTransition::init();
  puVar4 = local_b0;
  lVar3 = local_c0;
  (**(code **)(local_c0 + 0x10))(local_d0,lVar14,local_b0);
  puVar5 = &DAT_10054ae80;
  FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
  AVar11 = SwiftUI::AnyTransition::_init(puVar5,puVar4,puVar5);
  (**(code **)(lVar3 + 8))(lVar14,puVar4);
  *(undefined **)(lVar13 + *(int *)(local_d8 + 0x24)) = AVar11.unknown;
  lVar3 = local_b8;
  FUN_1000087e4(lVar13,local_b8,&DAT_10054fb40,&DAT_100421458);
  puVar2 = local_c8;
  lVar14 = local_f0[1];
  *local_c8 = CVar20.unknown;
  local_c8[1] = uVar16;
  local_c8[2] = uVar19;
  local_c8[3] = uVar15;
  local_c8[4] = uVar21;
  local_c8[5] = local_f0[1];
  puVar5 = &DAT_10054fb50;
  FUN_100002f94(&DAT_10054fb50,&DAT_100421468);
  FUN_1000087e4(lVar3,(long)puVar2 + (long)*(int *)(puVar5 + 0x30),&DAT_10054fb40,&DAT_100421458);
  FUN_1000b0f54(CVar20.unknown,uVar16,uVar19,uVar15,uVar21,lVar14);
  FUN_1000b0f80(CVar20.unknown,uVar16,uVar19,uVar15,uVar21,lVar14);
  FUN_10002a29c(lVar13,&DAT_10054fb40,&DAT_100421458);
  FUN_10002a29c(lVar3,&DAT_10054fb40,&DAT_100421458);
  FUN_1000b0f80(CVar20.unknown,uVar16,uVar19,uVar15,uVar21,lVar14);
  return;
}

