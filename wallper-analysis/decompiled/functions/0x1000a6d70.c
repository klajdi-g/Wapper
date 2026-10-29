// rea decompile_all
// name: FUN_1000a6d70
// address: 0x1000a6d70
// body: available
// range: 0x1000a6d70-0x1000a7043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a6d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  HorizontalAlignment HVar6;
  long lVar7;
  undefined *puVar8;
  Alignment AVar9;
  AnyTransition AVar10;
  UnitPoint scale;
  AnyTransition AVar11;
  AnyTransition AVar12;
  Animation AVar13;
  Alignment AVar14;
  undefined *puVar15;
  undefined8 uVar16;
  UnitPoint anchor;
  long extraout_x8;
  undefined8 *unaff_x20;
  double dVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 auStack_e0 [2];
  undefined *local_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar15 = &DAT_100550258;
  HVar6.unknown = puVar15;
  FUN_100002f94(&DAT_100550258,&DAT_100421ae8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(HVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  AVar14.unknown = (undefined *)((long)local_d0 + lVar3);
  HVar6 = SwiftUI::HorizontalAlignment::get_leading(HVar6);
  lVar7 = 0;
  FUN_1000b1010();
  dVar17 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x14));
  *(undefined **)AVar14.unknown = HVar6.unknown;
  *(double *)((long)local_d0 + lVar3 + 8) = dVar17 * 1.8;
  *(undefined1 *)((long)&uStack_c0 + lVar3) = 0;
  puVar8 = &DAT_100550260;
  FUN_100002f94(&DAT_100550260,&DAT_100421af0);
  FUN_1000a7044((long)AVar14.unknown + (long)*(int *)(puVar8 + 0x2c));
  local_d0[0] = (undefined *)*unaff_x20;
  local_d0[1] = (undefined *)unaff_x20[1];
  _swift_bridgeObjectRetain();
  SVar18.bridgeObject = (void *)0xe100000000000000;
  SVar18.str = (char *)0x7c;
  SVar19.bridgeObject = param_5;
  SVar19.str = param_4;
  Swift::String::append(SVar18,SVar19);
  AVar9.unknown = local_d0[1];
  uVar16 = unaff_x20[3];
  SVar18 = *(String *)(unaff_x20 + 2);
  _swift_bridgeObjectRetain(local_d0[1]);
  SVar20.bridgeObject = param_5;
  SVar20.str = param_4;
  Swift::String::append(SVar18,SVar20);
  _swift_bridgeObjectRelease();
  puVar5 = local_d0[1];
  puVar4 = local_d0[0];
  AVar9 = SwiftUI::Alignment::get_center(AVar9);
  *param_1 = AVar9.unknown;
  param_1[1] = uVar16;
  puVar8 = &DAT_100550268;
  FUN_100002f94(&DAT_100550268,&DAT_100421af8);
  lVar7 = (long)param_1 + (long)*(int *)(puVar8 + 0x2c);
  AVar11.unknown = puVar15;
  FUN_1000087e4(AVar14.unknown,lVar7,&DAT_100550258,&DAT_100421ae8);
  puVar8 = &DAT_100550270;
  anchor.unknown = &DAT_100421b00;
  FUN_100002f94();
  iVar2 = *(int *)(puVar8 + 0x34);
  *(undefined8 *)(lVar7 + iVar2) = puVar4;
  ((undefined8 *)(lVar7 + iVar2))[1] = puVar5;
  AVar10.unknown = puVar5;
  _swift_bridgeObjectRetain();
  AVar10 = SwiftUI::AnyTransition::get_opacity(AVar10);
  scale = SwiftUI::UnitPoint::get_center(AVar10.unknown);
  AVar11 = SwiftUI::AnyTransition::scale(scale.unknown,anchor,AVar11);
  AVar12 = SwiftUI::AnyTransition::combined(AVar11,AVar10);
  _swift_release(AVar10.unknown);
  _swift_release(AVar11.unknown);
  AVar13.unknown = &DAT_100550278;
  FUN_100002f94(&DAT_100550278,&DAT_100421b08);
  *(undefined **)(lVar7 + *(int *)(AVar13.unknown + 0x24)) = AVar12.unknown;
  AVar13 = SwiftUI::Animation::easeInOut(0.6,AVar13);
  puVar8 = &DAT_100550280;
  FUN_100002f94(&DAT_100550280,&DAT_100421b10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  *puVar1 = AVar13.unknown;
  puVar1[1] = puVar4;
  puVar1[2] = puVar5;
  FUN_10002a29c(AVar14.unknown,&DAT_100550258,&DAT_100421ae8);
  AVar9 = SwiftUI::Alignment::get_center(AVar14);
  *(undefined **)((long)auStack_e0 + lVar3) = AVar9.unknown;
  *(undefined **)((long)auStack_e0 + lVar3 + 8) = puVar15;
  auStack_e8[lVar3] = 0;
  *(undefined8 *)((long)&uStack_f0 + lVar3) = 0x7ff0000000000000;
  auStack_f8[lVar3] = 1;
  *(undefined8 *)((long)&uStack_100 + lVar3) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar15 = &DAT_100550288;
  FUN_100002f94(&DAT_100550288,&DAT_100421b18);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar15 + 0x24));
  param_1[9] = uStack_88;
  param_1[8] = local_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = uStack_68;
  param_1[0xc] = local_70;
  param_1[1] = local_d0[1];
  *param_1 = local_d0[0];
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  return;
}

