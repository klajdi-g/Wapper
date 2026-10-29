// rea decompile_all
// name: FUN_10033bfec
// address: 0x10033bfec
// body: available
// range: 0x10033bfec-0x10033c2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033bfec(long param_1,Set param_2)

{
  undefined8 *puVar1;
  int iVar2;
  Set SVar3;
  ScrollView<undefined> SVar4;
  Alignment AVar5;
  undefined *puVar6;
  SafeAreaRegions SVar7;
  Set SVar8;
  undefined *puVar9;
  Published PVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_58 [24];
  
  SVar3 = SwiftUI::Axis::Set::get_vertical(param_2);
  FUN_100002f94(&DAT_10055ccc8,&BYTE_1004321e8);
  FUN_10033eeac();
  uVar11 = 1;
  SVar4 = SwiftUI::ScrollView::_init(SVar3,true);
  AVar5 = SwiftUI::Alignment::get_center(SVar4.unknown);
  puVar6 = &DAT_10055cd28;
  FUN_100002f94(&DAT_10055cd28,&BYTE_100432218);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x24));
  *puVar1 = AVar5.unknown;
  puVar1[1] = uVar11;
  puVar6 = &DAT_10055cd30;
  FUN_100002f94(&DAT_10055cd30,&BYTE_100432220);
  SVar7.unknown = (undefined *)unaff_x20;
  FUN_10033ea8c((long)puVar1 + (long)*(int *)(puVar6 + 0x2c));
  SVar7 = SwiftUI::SafeAreaRegions::get_all(SVar7);
  SVar8 = SwiftUI::Edge::Set::get_all(SVar7.unknown);
  AVar5.unknown = &DAT_10055cd38;
  pbVar12 = &BYTE_100432228;
  FUN_100002f94();
  iVar2 = *(int *)(AVar5.unknown + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar2) = SVar7.unknown;
  *(char *)((undefined8 *)((long)puVar1 + (long)iVar2) + 1) = (char)SVar8.unknown;
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  puVar6 = &DAT_10055cd40;
  FUN_100002f94(&DAT_10055cd40,&BYTE_100432230);
  iVar2 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar2) = AVar5.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar2))[1] = pbVar12;
  puVar6 = &DAT_10053b420;
  _swift_allocObject(&DAT_10053b420,0x68,7);
  uVar11 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  *(undefined8 *)(puVar6 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar11;
  *(undefined8 *)(puVar6 + 0x48) = uVar14;
  *(undefined8 *)(puVar6 + 0x40) = uVar13;
  uVar11 = unaff_x20[8];
  *(undefined8 *)(puVar6 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar11;
  *(undefined8 *)(puVar6 + 0x60) = unaff_x20[10];
  uVar11 = *unaff_x20;
  uVar14 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  puVar9 = &DAT_10055cd48;
  FUN_100002f94(&DAT_10055cd48,&BYTE_100432238);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x24));
  *puVar1 = FUN_10033f14c;
  puVar1[1] = puVar6;
  puVar1[2] = 0;
  puVar1[3] = 0;
  _swift_beginAccess(unaff_x20[1] + _TtC7Wallper17NowPlayingManager::_currentTheme,auStack_58,0x21,0
                    );
  puVar6 = &DAT_10055cd50;
  FUN_100002f94(&DAT_10055cd50,&BYTE_100432240);
  FUN_10033f170();
  PVar10.unknown = &DAT_100555e60;
  FUN_100002f94(&DAT_100555e60,&DAT_100429c48);
  Combine::Published::_get_projectedValue(PVar10);
  _swift_endAccess(auStack_58);
  puVar9 = &DAT_10053b448;
  _swift_allocObject(&DAT_10053b448,0x68,7);
  uVar11 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  *(undefined8 *)(puVar9 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar9 + 0x30) = uVar11;
  *(undefined8 *)(puVar9 + 0x48) = uVar14;
  *(undefined8 *)(puVar9 + 0x40) = uVar13;
  uVar11 = unaff_x20[8];
  *(undefined8 *)(puVar9 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar9 + 0x50) = uVar11;
  uVar11 = unaff_x20[9];
  *(undefined8 *)(puVar9 + 0x60) = unaff_x20[10];
  uVar13 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar14 = unaff_x20[2];
  *(undefined8 *)(puVar9 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar9 + 0x10) = uVar13;
  *(undefined8 *)(puVar9 + 0x28) = uVar15;
  *(undefined8 *)(puVar9 + 0x20) = uVar14;
  iVar2 = *(int *)(puVar6 + 0x38);
  *(undefined8 *)(param_1 + iVar2) = FUN_10033f1a4;
  ((undefined8 *)(param_1 + iVar2))[1] = puVar9;
  puVar6 = &DAT_10053b470;
  _swift_allocObject(&DAT_10053b470,0x68,7);
  uVar13 = unaff_x20[4];
  uVar15 = unaff_x20[7];
  uVar14 = unaff_x20[6];
  *(undefined8 *)(puVar6 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar13;
  *(undefined8 *)(puVar6 + 0x48) = uVar15;
  *(undefined8 *)(puVar6 + 0x40) = uVar14;
  uVar13 = unaff_x20[8];
  *(undefined8 *)(puVar6 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar13;
  *(undefined8 *)(puVar6 + 0x60) = unaff_x20[10];
  uVar13 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar14 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar13;
  *(undefined8 *)(puVar6 + 0x28) = uVar15;
  *(undefined8 *)(puVar6 + 0x20) = uVar14;
  puVar9 = &DAT_10055cd58;
  FUN_100002f94(&DAT_10055cd58,&BYTE_100432248);
  *(undefined8 *)(param_1 + *(int *)(puVar9 + 0x34)) = uVar11;
  iVar2 = *(int *)(puVar9 + 0x38);
  *(undefined8 *)(param_1 + iVar2) = FUN_10033f1ac;
  ((undefined8 *)(param_1 + iVar2))[1] = puVar6;
  FUN_10033f170();
  FUN_10033f170();
  _swift_retain(uVar11);
  return;
}

