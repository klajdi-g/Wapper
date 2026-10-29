// rea decompile_all
// name: FUN_1000ab844
// address: 0x1000ab844
// body: available
// range: 0x1000ab844-0x1000abae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ab844(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  Alignment AVar5;
  undefined *puVar6;
  Animation AVar7;
  Alignment AVar8;
  AnyTransition AVar9;
  UnitPoint scale;
  AnyTransition AVar10;
  AnyTransition AVar11;
  undefined8 uVar12;
  UnitPoint anchor;
  char *pcVar13;
  void *pvVar14;
  long extraout_x8;
  long lVar15;
  undefined8 *unaff_x20;
  undefined8 *puVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined *local_a0 [8];
  
  AVar10.unknown = &DAT_1005501a8;
  puVar6 = &DAT_1004219d0;
  puVar4 = AVar10.unknown;
  FUN_100002f94();
  AVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)local_a0 + -extraout_x8);
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  *puVar16 = AVar5.unknown;
  *(undefined **)((long)local_a0 + -extraout_x8 + 8) = puVar6;
  puVar6 = &DAT_1005501b0;
  FUN_100002f94(&DAT_1005501b0,&DAT_1004219d8);
  AVar7.unknown = (undefined *)unaff_x20;
  FUN_1000abae4((long)puVar16 + (long)*(int *)(puVar6 + 0x2c));
  AVar7 = SwiftUI::Animation::easeOut(0.35,AVar7);
  lVar15 = unaff_x20[4];
  puVar6 = &DAT_1005501b8;
  FUN_100002f94(&DAT_1005501b8,&DAT_1004219e0);
  iVar2 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)((long)puVar16 + (long)iVar2) = AVar7.unknown;
  *(bool *)((undefined8 *)((long)puVar16 + (long)iVar2) + 1) = lVar15 == 0;
  AVar8.unknown = (undefined *)0x0;
  FUN_1000b0fd4();
  AVar5.unknown = *(undefined **)((long)unaff_x20 + (long)*(int *)(AVar8.unknown + 0x18));
  pcVar13 = (char *)((undefined8 *)((long)unaff_x20 + (long)*(int *)(AVar8.unknown + 0x18)))[1];
  SwiftUI::Alignment::get_center(AVar8);
  pvVar14 = (void *)0x0;
  SwiftUI::_FrameLayout::_init(AVar5);
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(puVar4 + 0x24));
  puVar1[1] = local_a0[3];
  *puVar1 = local_a0[2];
  puVar1[3] = local_a0[5];
  puVar1[2] = local_a0[4];
  puVar1[5] = local_a0[7];
  puVar1[4] = local_a0[6];
  local_a0[0] = (undefined *)*unaff_x20;
  local_a0[1] = (undefined *)unaff_x20[1];
  _swift_bridgeObjectRetain();
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = (char *)0x7c;
  SVar18.bridgeObject = pvVar14;
  SVar18.str = pcVar13;
  Swift::String::append(SVar17,SVar18);
  AVar5.unknown = local_a0[1];
  uVar12 = unaff_x20[3];
  SVar17 = *(String *)(unaff_x20 + 2);
  _swift_bridgeObjectRetain(local_a0[1]);
  SVar19.bridgeObject = pvVar14;
  SVar19.str = pcVar13;
  Swift::String::append(SVar17,SVar19);
  _swift_bridgeObjectRelease();
  puVar3 = local_a0[1];
  puVar4 = local_a0[0];
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  *param_1 = AVar5.unknown;
  param_1[1] = uVar12;
  puVar6 = &DAT_1005501c0;
  FUN_100002f94(&DAT_1005501c0,&DAT_1004219e8);
  lVar15 = (long)param_1 + (long)*(int *)(puVar6 + 0x2c);
  FUN_1000087e4(puVar16,lVar15,&DAT_1005501a8,&DAT_1004219d0);
  puVar6 = &DAT_1005501c8;
  anchor.unknown = &DAT_1004219f0;
  FUN_100002f94();
  iVar2 = *(int *)(puVar6 + 0x34);
  *(undefined8 *)(lVar15 + iVar2) = puVar4;
  ((undefined8 *)(lVar15 + iVar2))[1] = puVar3;
  AVar9.unknown = puVar3;
  _swift_bridgeObjectRetain();
  AVar9 = SwiftUI::AnyTransition::get_opacity(AVar9);
  scale = SwiftUI::UnitPoint::get_center(AVar9.unknown);
  AVar10 = SwiftUI::AnyTransition::scale(scale.unknown,anchor,AVar10);
  AVar11 = SwiftUI::AnyTransition::combined(AVar10,AVar9);
  _swift_release(AVar9.unknown);
  _swift_release(AVar10.unknown);
  AVar7.unknown = &DAT_1005501d0;
  FUN_100002f94(&DAT_1005501d0,&DAT_1004219f8);
  *(undefined **)(lVar15 + *(int *)(AVar7.unknown + 0x24)) = AVar11.unknown;
  AVar7 = SwiftUI::Animation::easeInOut(0.6,AVar7);
  puVar6 = &DAT_1005501d8;
  FUN_100002f94(&DAT_1005501d8,&DAT_100421a00);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  *param_1 = AVar7.unknown;
  param_1[1] = puVar4;
  param_1[2] = puVar3;
  FUN_10002a29c(puVar16,&DAT_1005501a8,&DAT_1004219d0);
  return;
}

