// rea decompile_all
// name: FUN_10036304c
// address: 0x10036304c
// body: available
// range: 0x10036304c-0x100363507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003633bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036304c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  Material MVar6;
  long lVar7;
  UnitPoint UVar8;
  undefined *puVar9;
  AnyTransition AVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_a0 [3];
  undefined *local_88 [2];
  long local_78;
  
  local_88[1] = (undefined *)param_4;
  local_78 = param_1;
  local_88[0] = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  alStack_a0[2] = *(long *)(local_88[0] + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(alStack_a0[2] + 0x40));
  lVar19 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_a0[1] = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar19 - extraout_x8_00;
  lVar5 = 0;
  FUN_10040211c();
  lVar20 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar14 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055dea0;
  FUN_100002f94(&DAT_10055dea0,&DAT_100433750);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar15 - extraout_x12_00;
  puVar4 = &DAT_10054af90;
  FUN_100002f94(&DAT_10054af90,&DAT_100435190);
  MVar6.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar17 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12_01;
  SwiftUI::Material::get_ultraThin(MVar6);
  *(undefined2 *)(lVar18 + *(int *)(puVar4 + 0x38)) = 0x100;
  FUN_1000087e4(local_88[1],lVar13,&DAT_10054ac40,&DAT_10041ce70);
  lVar7 = lVar13;
  (**(code **)(lVar20 + 0x30))(lVar13,1,lVar5);
  bVar3 = (int)lVar7 != 1;
  if (bVar3) {
    FUN_100007e64(lVar13,lVar14,FUN_10040211c);
    FUN_100029504(lVar14,lVar16,FUN_10040211c);
    puVar4 = &DAT_10055deb8;
    FUN_100002f94(&DAT_10055deb8,&DAT_100433770);
    iVar2 = *(int *)(puVar4 + 0x24);
    *(undefined8 *)(lVar16 + iVar2) = 0x4049000000000000;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar2) + 1) = 0;
    UVar8.unknown = &DAT_10055dec0;
    FUN_100002f94(&DAT_10055dec0,&DAT_100433778);
    *(undefined8 *)(lVar16 + *(int *)(UVar8.unknown + 0x24)) = 0x3fd999999999999a;
    SwiftUI::UnitPoint::get_center(UVar8);
    puVar4 = &DAT_10055dec8;
    puVar11 = &DAT_100433780;
    FUN_100002f94();
    puVar1 = (undefined8 *)(lVar16 + *(int *)(puVar4 + 0x24));
    puVar1[1] = 0x3ff199999999999a;
    *puVar1 = 0x3ff199999999999a;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    FUN_10026ac6c();
    puVar9 = &DAT_10055ded0;
    FUN_100002f94(&DAT_10055ded0,&DAT_100433788);
    iVar2 = *(int *)(puVar9 + 0x34);
    *(undefined8 *)(lVar16 + iVar2) = puVar4;
    ((undefined8 *)(lVar16 + iVar2))[1] = puVar11;
    SwiftUI::OpacityTransition::init();
    puVar11 = local_88[0];
    lVar7 = alStack_a0[2];
    (**(code **)(alStack_a0[2] + 0x10))(alStack_a0[1],lVar19,local_88[0]);
    puVar4 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar10 = SwiftUI::AnyTransition::_init(puVar4,puVar11,puVar4);
    (**(code **)(lVar7 + 8))(lVar19,puVar11);
    FUN_100029548(lVar14,FUN_10040211c);
    puVar4 = &DAT_10055dea8;
    FUN_100002f94(&DAT_10055dea8,&DAT_100433760);
    *(undefined **)(lVar16 + *(int *)(puVar4 + 0x24)) = AVar10.unknown;
    pcVar12 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
  }
  else {
    FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
    puVar4 = &DAT_10055dea8;
    FUN_100002f94(&DAT_10055dea8,&DAT_100433760);
    pcVar12 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
  }
  (*pcVar12)(lVar16,!bVar3,1,puVar4);
  FUN_1000087e4(lVar18,lVar17,&DAT_10054af90,&DAT_100435190);
  FUN_1000087e4(lVar16,lVar15,&DAT_10055dea0,&DAT_100433750);
  lVar7 = local_78;
  FUN_1000087e4(lVar17,local_78,&DAT_10054af90,&DAT_100435190);
  puVar4 = &DAT_10055deb0;
  FUN_100002f94(&DAT_10055deb0,&DAT_100433768);
  FUN_1000087e4(lVar15,lVar7 + *(int *)(puVar4 + 0x30),&DAT_10055dea0,&DAT_100433750);
  FUN_10002a29c(lVar16,&DAT_10055dea0,&DAT_100433750);
  FUN_10002a29c(lVar18,&DAT_10054af90,&DAT_100435190);
  FUN_10002a29c(lVar15,&DAT_10055dea0,&DAT_100433750);
  FUN_10002a29c(lVar17,&DAT_10054af90,&DAT_100435190);
  return;
}

