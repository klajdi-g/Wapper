// rea decompile_all
// name: FUN_1000c8d04
// address: 0x1000c8d04
// body: available
// range: 0x1000c8d04-0x1000c92fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c8d04(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  Color CVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar11;
  long extraout_x12;
  long unaff_x20;
  code *pcVar12;
  ulong uVar13;
  Color CVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  
  local_b0 = param_1;
  local_c0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_b8 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  puVar6 = &DAT_10054a9c0;
  local_e8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  local_a8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar6 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12;
  lVar7 = 0;
  FUN_1000ceee8();
  lVar17 = *(long *)(lVar7 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar11 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_1005512c0;
  FUN_100002f94(&DAT_1005512c0,&DAT_100422f50);
  local_c8 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_1005512c8;
  FUN_100002f94(&DAT_1005512c8,&DAT_100422f58);
  local_d8 = *(long *)(puVar8 + -8);
  puStack_d0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar14.unknown = (undefined *)((lVar7 - extraout_x8_02) - extraout_x8_03);
  FUN_100029504();
  local_a0 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar13 = local_a0 + 0x10 & (local_a0 ^ 0xffffffffffffffff);
  puVar8 = &DAT_1005299e0;
  local_90 = lVar16;
  _swift_allocObject(&DAT_1005299e0,uVar13 + lVar16,local_a0 | 7);
  local_98 = uVar13;
  local_88 = lVar7;
  FUN_100007e64(lVar7,puVar8 + uVar13,FUN_1000ceee8);
  FUN_100002f94(&DAT_1005512d0,&DAT_100422f60);
  FUN_1000cefb4();
  puVar8 = local_c0;
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100551330,&DAT_1005512c0,&DAT_100422f50,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  lVar17 = local_b8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(CVar14.unknown);
  (**(code **)(local_c8 + 8))(lVar7 - extraout_x8_02,puVar6);
  lVar4 = local_b0;
  FUN_10035127c(local_b0);
  (**(code **)(local_d8 + 8))(CVar14.unknown,puStack_d0);
  CVar14 = SwiftUI::Color::get_black(CVar14);
  CVar9 = SwiftUI::Color::opacity(0.35,CVar14);
  _swift_release(CVar14.unknown);
  puVar6 = &DAT_100551338;
  FUN_100002f94(&DAT_100551338,&DAT_100422f90);
  puVar1 = (undefined8 *)(lVar4 + *(int *)(puVar6 + 0x24));
  *puVar1 = CVar9.unknown;
  puVar1[2] = 0;
  puVar1[1] = 0x4020000000000000;
  puVar1[3] = 0x4010000000000000;
  lVar7 = 0;
  FUN_1000c8bec();
  iVar2 = *(int *)(lVar7 + 0x1c);
  (**(code **)(lVar17 + 0x38))(lVar11,1,1,puVar8);
  lVar7 = (long)*(int *)(local_a8 + 0x30);
  FUN_1000087e4(unaff_x20 + iVar2,lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar11,lVar15 + lVar7,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar12 = *(code **)(lVar17 + 0x30);
  lVar10 = lVar15;
  (*pcVar12)(lVar15,1,puVar8);
  lVar16 = local_e0;
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar7 = lVar15 + lVar7;
    (*pcVar12)(lVar7,1,puVar8);
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      bVar5 = false;
      goto LAB_1000c9248;
    }
  }
  else {
    FUN_1000087e4(lVar15,local_e0,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar10 = lVar15 + lVar7;
    (*pcVar12)(lVar10,1,puVar8);
    puVar3 = local_e8;
    if ((int)lVar10 != 1) {
      (**(code **)(lVar17 + 0x20))(local_e8,lVar15 + lVar7,puVar8);
      puVar6 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar5 = Swift::Equatable::___infix(lVar16,puVar3,puVar8,puVar6);
      pcVar12 = *(code **)(lVar17 + 8);
      (*pcVar12)(puVar3,puVar8);
      FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar12)(lVar16,puVar8);
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      bVar5 = !bVar5;
      goto LAB_1000c9248;
    }
    FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
    (**(code **)(lVar17 + 8))(lVar16,puVar8);
  }
  FUN_10002a29c(lVar15,&DAT_10054a9c0,&DAT_100422d20);
  bVar5 = true;
LAB_1000c9248:
  puVar6 = &DAT_100551340;
  FUN_100002f94(&DAT_100551340,&DAT_100422f98);
  lVar7 = local_88;
  *(bool *)(lVar4 + *(int *)(puVar6 + 0x24)) = bVar5;
  FUN_100029504();
  uVar13 = local_98;
  puVar6 = &DAT_100529a08;
  _swift_allocObject(&DAT_100529a08,local_98 + local_90,local_a0 | 7);
  FUN_100007e64(lVar7,puVar6 + uVar13,FUN_1000ceee8);
  puVar8 = &DAT_100551348;
  FUN_100002f94(&DAT_100551348,&DAT_100422fa0);
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(lVar4 + iVar2) = FUN_1000cf2ac;
  ((undefined8 *)(lVar4 + iVar2))[1] = puVar6;
  return;
}

