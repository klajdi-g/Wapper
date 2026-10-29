// rea decompile_all
// name: FUN_1000f4f24
// address: 0x1000f4f24
// body: available
// range: 0x1000f4f24-0x1000f52a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f4f24(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  LocalizedStringKey LVar11;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  char *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String stringLiteral;
  long alStack_b0 [4];
  
  puVar5 = &DAT_1005525f8;
  alStack_b0[1] = param_1;
  FUN_100002f94(&DAT_1005525f8,&DAT_100424a60);
  lVar14 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100552600;
  FUN_100002f94(&DAT_100552600,&DAT_100424a68);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)alStack_b0 - extraout_x8) - extraout_x8_00;
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100002f94(&DAT_100552608,&DAT_100424a70);
  FUN_1000fc9fc();
  SwiftUI::Button::_init();
  puVar7 = &DAT_100552628;
  FUN_1000087a0(&DAT_100552628,&DAT_1005525f8,&DAT_100424a60,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar13);
  (**(code **)(lVar14 + 8))((long)alStack_b0 - extraout_x8,puVar5);
  cVar2 = unaff_x20[1];
  puVar5 = &DAT_100424a80;
  _swift_getKeyPath();
  puVar8 = &DAT_10052b3b0;
  _swift_allocObject(&DAT_10052b3b0,0x11,7);
  puVar8[0x10] = cVar2;
  puVar9 = &DAT_100552630;
  FUN_100002f94(&DAT_100552630,&DAT_100424ab0);
  puVar1 = (undefined8 *)(lVar13 + *(int *)(puVar9 + 0x24));
  *puVar1 = puVar5;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar8;
  puVar5 = &DAT_10052b3d8;
  _swift_allocObject(&DAT_10052b3d8,0x50,7);
  uVar15 = *(undefined8 *)unaff_x20;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar5 + 0x10) = uVar15;
  *(undefined8 *)(puVar5 + 0x28) = uVar17;
  *(undefined8 *)(puVar5 + 0x20) = uVar16;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar5 + 0x30) = uVar17;
  *(undefined8 *)(puVar5 + 0x48) = uVar16;
  *(undefined8 *)(puVar5 + 0x40) = uVar15;
  iVar4 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(lVar13 + iVar4) = FUN_1000fcab0;
  ((undefined8 *)(lVar13 + iVar4))[1] = puVar5;
  cVar3 = *unaff_x20;
  if (cVar3 == '\x01') {
    FUN_1000fcab8();
    pcVar10 = (char *)0x64206c65636e6143;
    pvVar12 = (void *)0xef64616f6c6e776f;
  }
  else {
    FUN_1000fcab8();
    pcVar10 = (char *)0x64616f6c6e776f44;
    pvVar12 = (void *)0xe800000000000000;
  }
  stringLiteral.bridgeObject = pvVar12;
  stringLiteral.str = pcVar10;
  LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1000fcaec();
  lVar14 = alStack_b0[1];
  (extension_SwiftUI)::SwiftUI::View::_help(LVar11);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(pvVar12);
  FUN_10002a29c(lVar13,&DAT_100552600,&DAT_100424a68);
  puVar5 = &DAT_10052b400;
  _swift_allocObject(&DAT_10052b400,0x50,7);
  uVar15 = *(undefined8 *)unaff_x20;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar5 + 0x10) = uVar15;
  *(undefined8 *)(puVar5 + 0x28) = uVar17;
  *(undefined8 *)(puVar5 + 0x20) = uVar16;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar5 + 0x30) = uVar15;
  *(undefined8 *)(puVar5 + 0x48) = uVar17;
  *(undefined8 *)(puVar5 + 0x40) = uVar16;
  puVar6 = &DAT_100552648;
  FUN_100002f94(&DAT_100552648,&DAT_100424ac0);
  pcVar10 = (char *)(lVar14 + *(int *)(puVar6 + 0x24));
  *pcVar10 = cVar3;
  *(code **)(pcVar10 + 8) = FUN_1000fcc68;
  *(undefined **)(pcVar10 + 0x10) = puVar5;
  puVar5 = &DAT_10052b428;
  _swift_allocObject(&DAT_10052b428,0x50,7);
  uVar15 = *(undefined8 *)unaff_x20;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar5 + 0x10) = uVar15;
  *(undefined8 *)(puVar5 + 0x28) = uVar17;
  *(undefined8 *)(puVar5 + 0x20) = uVar16;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar5 + 0x30) = uVar15;
  *(undefined8 *)(puVar5 + 0x48) = uVar17;
  *(undefined8 *)(puVar5 + 0x40) = uVar16;
  puVar6 = &DAT_100552650;
  FUN_100002f94(&DAT_100552650,&DAT_100424ac8);
  pcVar10 = (char *)(lVar14 + *(int *)(puVar6 + 0x24));
  *pcVar10 = cVar2;
  *(code **)(pcVar10 + 8) = FUN_1000fcc70;
  *(undefined **)(pcVar10 + 0x10) = puVar5;
  FUN_1000fcab8();
  FUN_1000fcab8();
  return;
}

