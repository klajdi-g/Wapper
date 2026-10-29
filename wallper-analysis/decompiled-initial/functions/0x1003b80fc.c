// rea decompile_all
// name: FUN_1003b80fc
// address: 0x1003b80fc
// body: available
// range: 0x1003b80fc-0x1003b8417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b80fc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  Alignment AVar7;
  undefined *puVar8;
  State SVar9;
  Animation AVar10;
  long extraout_x8;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_a0;
  long local_98 [2];
  char local_81;
  undefined1 local_80;
  undefined8 local_78;
  
  lVar5 = 0;
  local_98[1] = param_1;
  FUN_1003ba110();
  local_98[0] = *(long *)(lVar5 + -8);
  lVar15 = *(long *)(local_98[0] + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)&uStack_a0 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055fef8;
  puVar8 = &DAT_1004359e0;
  FUN_100002f94();
  AVar7.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar14 - extraout_x8);
  AVar7 = SwiftUI::Alignment::get_center(AVar7);
  *puVar13 = AVar7.unknown;
  puVar13[1] = puVar8;
  puVar8 = &DAT_10055ff00;
  FUN_100002f94(&DAT_10055ff00,&DAT_1004359e8);
  FUN_1003b8418((long)puVar13 + (long)*(int *)(puVar8 + 0x2c));
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar5 + 0x18));
  uVar3 = *puVar1;
  uVar16 = *(undefined8 *)(puVar1 + 8);
  SVar9.unknown = &DAT_10054ab50;
  local_80 = uVar3;
  local_78 = uVar16;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar9);
  uVar17 = 0x3ff0000000000000;
  if (local_81 == '\0') {
    uVar17 = 0;
  }
  puVar8 = &DAT_10055ff08;
  FUN_100002f94(&DAT_10055ff08,&DAT_1004359f0);
  *(undefined8 *)((long)puVar13 + (long)*(int *)(puVar8 + 0x24)) = uVar17;
  local_80 = uVar3;
  local_78 = uVar16;
  SwiftUI::State::get_wrappedValue(SVar9);
  uVar17 = 0;
  if (local_81 == '\0') {
    uVar17 = 0x4032000000000000;
  }
  AVar10.unknown = &DAT_10055ff10;
  FUN_100002f94(&DAT_10055ff10,&DAT_1004359f8);
  iVar4 = *(int *)(AVar10.unknown + 0x24);
  *(undefined8 *)((long)puVar13 + (long)iVar4) = uVar17;
  *(undefined1 *)((undefined8 *)((long)puVar13 + (long)iVar4) + 1) = 0;
  AVar10 = SwiftUI::Animation::spring(0.6,0.9,0.0,AVar10);
  local_80 = uVar3;
  local_78 = uVar16;
  SwiftUI::State::get_wrappedValue(SVar9);
  puVar8 = &DAT_10055ff18;
  FUN_100002f94(&DAT_10055ff18,&DAT_100435a00);
  iVar4 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)((long)puVar13 + (long)iVar4) = AVar10.unknown;
  *(char *)((undefined8 *)((long)puVar13 + (long)iVar4) + 1) = local_81;
  FUN_100029504();
  uVar11 = (ulong)*(byte *)(local_98[0] + 0x50);
  uVar12 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053d628;
  _swift_allocObject(&DAT_10053d628,uVar12 + lVar15,uVar11 | 7);
  FUN_1003ba61c(lVar14,puVar8 + uVar12);
  puVar2 = (undefined8 *)((long)puVar13 + (long)*(int *)(puVar6 + 0x24));
  *puVar2 = FUN_1003ba660;
  puVar2[1] = puVar8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_100029504();
  puVar6 = &DAT_10053d650;
  _swift_allocObject(&DAT_10053d650,uVar12 + lVar15,uVar11 | 7);
  FUN_1003ba61c(lVar14,puVar6 + uVar12);
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  FUN_1003ba784();
  FUN_1003ba9a4();
  (extension_SwiftUI)::SwiftUI::View::_onChange(local_98[1]);
  _swift_release(puVar6);
  FUN_10002a29c(puVar13,&DAT_10055fef8,&DAT_1004359e0);
  return;
}

