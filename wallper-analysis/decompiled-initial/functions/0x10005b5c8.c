// rea decompile_all
// name: FUN_10005b5c8
// address: 0x10005b5c8
// body: available
// range: 0x10005b5c8-0x10005bbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005b5c8(undefined8 param_1)

{
  MainActor MVar1;
  int iVar2;
  Binding<bool> BVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  Alignment AVar7;
  undefined *puVar8;
  Animation AVar9;
  Alignment AVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  MainActor *unaff_x20;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String stringLiteral;
  undefined8 uStack_1b0;
  undefined8 auStack_1a8 [2];
  undefined8 auStack_198 [3];
  undefined8 uStack_180;
  char acStack_178 [4];
  undefined4 local_174;
  long local_170 [2];
  Binding<bool> local_160;
  undefined *local_158;
  LocalizedStringKey local_148;
  long local_140 [2];
  char local_130 [8];
  undefined8 auStack_128 [6];
  MainActor local_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar6 = 0;
  local_140[1] = param_1;
  FUN_10006866c();
  local_148.unknown = *(undefined **)(lVar6 + -8);
  local_140[0] = *(long *)((long)local_148.unknown + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)&uStack_180 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_10054de50;
  local_170[0] = lVar18;
  FUN_100002f94(&DAT_10054de50,&DAT_10041ecc0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(lVar18 - extraout_x8);
  puVar14 = &DAT_10054de58;
  puVar8 = &DAT_10041ecc8;
  FUN_100002f94();
  AVar7.unknown = puVar14;
  local_158 = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar17 - extraout_x8_00;
  AVar7 = SwiftUI::Alignment::get_bottomLeading(AVar7);
  *puVar17 = AVar7.unknown;
  puVar17[1] = puVar8;
  puVar8 = &DAT_10054de60;
  FUN_100002f94(&DAT_10054de60,&DAT_10041ecd0);
  FUN_10005bbfc((long)puVar17 + (long)*(int *)(puVar8 + 0x2c));
  MVar1 = unaff_x20[*(int *)(lVar6 + 0x30)];
  uVar19 = *(undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x30) + 8);
  AVar7.unknown = &DAT_10054ab50;
  local_f8 = MVar1;
  uStack_f0 = uVar19;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)AVar7.unknown);
  cVar5 = local_130[0];
  puVar8 = &DAT_10054de68;
  FUN_100002f94(&DAT_10054de68,&DAT_10041ece0);
  uVar21 = 0x3ff0000000000000;
  if (cVar5 == '\0') {
    uVar21 = 0;
  }
  uVar22 = 0;
  if (cVar5 == '\0') {
    uVar22 = 0x403c000000000000;
  }
  *(undefined8 *)(lVar18 + *(int *)(puVar8 + 0x24)) = uVar21;
  FUN_1000087e4(puVar17,lVar18,&DAT_10054de50,&DAT_10041ecc0);
  AVar9.unknown = &DAT_10054de70;
  FUN_100002f94(&DAT_10054de70,&DAT_10041ece8);
  iVar2 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(lVar18 + iVar2) = 0;
  ((undefined8 *)(lVar18 + iVar2))[1] = uVar22;
  AVar9 = SwiftUI::Animation::spring(0.34,0.86,0.0,AVar9);
  FUN_10002a29c(puVar17,&DAT_10054de50,&DAT_10041ecc0);
  puVar8 = &DAT_10054de78;
  puVar13 = &DAT_10041ecf0;
  FUN_100002f94();
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(lVar18 + iVar2) = AVar9.unknown;
  *(char *)((undefined8 *)(lVar18 + iVar2) + 1) = cVar5;
  local_f8 = MVar1;
  uStack_f0 = uVar19;
  SwiftUI::State::get_wrappedValue((State)AVar7.unknown);
  uVar19 = 0x3ff0000000000000;
  if (local_130[0] == '\0') {
    uVar19 = 0;
  }
  AVar10 = SwiftUI::Alignment::get_center(AVar7);
  AVar7.unknown = &DAT_10054de80;
  puVar8 = &DAT_10041ecf8;
  FUN_100002f94();
  puVar17 = (undefined8 *)(lVar18 + *(int *)(AVar7.unknown + 0x24));
  *puVar17 = uVar19;
  puVar17[1] = AVar10.unknown;
  puVar17[2] = puVar13;
  AVar7 = SwiftUI::Alignment::get_bottom(AVar7);
  *(undefined **)(lVar18 + -0x10) = AVar7.unknown;
  *(undefined **)(lVar18 + -8) = puVar8;
  *(undefined1 *)(lVar18 + -0x18) = 0;
  *(undefined8 *)(lVar18 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar18 + -0x28) = 1;
  *(undefined8 *)(lVar18 + -0x30) = 0;
  uVar21 = 1;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar8 = &DAT_10054de88;
  FUN_100002f94(&DAT_10054de88,&DAT_10041ed00);
  puVar17 = (undefined8 *)(lVar18 + *(int *)(puVar8 + 0x24));
  puVar17[9] = uStack_b0;
  puVar17[8] = local_b8;
  puVar17[0xb] = uStack_a0;
  puVar17[10] = local_a8;
  puVar17[0xd] = uStack_90;
  puVar17[0xc] = local_98;
  uVar19 = CONCAT71(uStack_f7,local_f8);
  puVar17[1] = uStack_f0;
  *puVar17 = uVar19;
  puVar17[3] = uStack_e0;
  puVar17[2] = local_e8;
  lVar6 = local_170[0];
  puVar17[5] = uStack_d0;
  puVar17[4] = local_d8;
  puVar17[7] = uStack_c0;
  puVar17[6] = local_c8;
  uVar15 = 0x6866c;
  FUN_100029504(unaff_x20,local_170[0],FUN_10006866c);
  lVar4 = local_140[0];
  uVar20 = (ulong)*(byte *)((long)local_148.unknown + 0x50);
  uVar16 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
  puVar8 = &DAT_1005271a8;
  _swift_allocObject(&DAT_1005271a8,uVar16 + local_140[0],uVar20 | 7);
  FUN_100007e64(lVar6,puVar8 + uVar16);
  puVar17 = (undefined8 *)(lVar18 + *(int *)(puVar14 + 0x24));
  *puVar17 = FUN_100068790;
  puVar17[1] = puVar8;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar14 = (undefined *)0xef7473696c79616c;
  stringLiteral.bridgeObject = (void *)0xef7473696c79616c;
  stringLiteral.str = (char *)0x5020656d616e6552;
  local_148 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_174 = uVar15;
  local_170[1] = uVar21;
  local_160.unknown = puVar14;
  FUN_100029504(unaff_x20,lVar6,FUN_10006866c);
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_1005246d8;
  pMVar12 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar17 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar16 = uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff);
  puVar14 = &DAT_1005271d0;
  _swift_allocObject(&DAT_1005271d0,uVar16 + lVar4,uVar20 | 7);
  *(MainActor **)(puVar14 + 0x10) = pMVar12;
  *(undefined8 **)(puVar14 + 0x18) = puVar17;
  FUN_100007e64(lVar6,puVar14 + uVar16,FUN_10006866c);
  FUN_100029504(unaff_x20,lVar6,FUN_10006866c);
  pMVar11 = Swift::MainActor::get_shared(pMVar11,unaff_x20);
  puVar14 = &DAT_1005271f8;
  _swift_allocObject(&DAT_1005271f8,uVar16 + lVar4,uVar20 | 7);
  *(MainActor **)(puVar14 + 0x10) = pMVar11;
  *(undefined8 **)(puVar14 + 0x18) = puVar17;
  FUN_100007e64(lVar6,puVar14 + uVar16,FUN_10006866c);
  SwiftUI::Binding::init();
  puVar14 = &DAT_10054de90;
  FUN_100002f94(&DAT_10054de90,&DAT_10041ed08);
  puVar13 = puVar14;
  FUN_100068994();
  puVar8 = &DAT_10054dee0;
  FUN_1000087a0(&DAT_10054dee0,&DAT_10054de90,&DAT_10041ed08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar18 + -0x18) = puVar13;
  *(undefined **)(lVar18 + -0x10) = puVar8;
  *(undefined **)(lVar18 + -0x20) = puVar14;
  puVar14 = local_158;
  *(char **)(lVar18 + -0x30) = local_130;
  *(undefined **)(lVar18 + -0x28) = puVar14;
  BVar3.unknown = local_160.unknown;
  lVar6 = local_170[1];
  (extension_SwiftUI)::SwiftUI::View::_alert(local_148,local_160);
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(BVar3.unknown);
  _swift_release(auStack_128[4]);
  _swift_release(auStack_128[3]);
  FUN_10002a29c(lVar18,&DAT_10054de58,&DAT_10041ecc8);
  return;
}

