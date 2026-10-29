// rea decompile_all
// name: FUN_10011c3f0
// address: 0x10011c3f0
// body: available
// range: 0x10011c3f0-0x10011c60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011c3f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  HorizontalAlignment HVar5;
  undefined *puVar6;
  Alignment AVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  Alignment unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 auStack_120 [6];
  undefined8 auStack_f0 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  lVar3 = 0;
  FUN_10011c000();
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = (long)auStack_f0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100553460;
  FUN_100002f94(&DAT_100553460,&DAT_100426508);
  HVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar3 - extraout_x8);
  HVar5 = SwiftUI::HorizontalAlignment::get_leading(HVar5);
  *puVar13 = HVar5.unknown;
  puVar13[1] = 0;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar6 = &DAT_100553468;
  puVar8 = &DAT_100426510;
  FUN_100002f94();
  FUN_10011c610((long)puVar13 + (long)*(int *)(puVar6 + 0x2c));
  AVar7 = SwiftUI::Alignment::get_center(unaff_x20);
  puVar13[-2] = AVar7.unknown;
  puVar13[-1] = puVar8;
  *(undefined1 *)(puVar13 + -3) = 1;
  puVar13[-4] = 0;
  *(undefined1 *)(puVar13 + -5) = 1;
  puVar13[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(puVar4 + 0x24));
  puVar1[9] = uStack_88;
  puVar1[8] = local_90;
  puVar1[0xb] = uStack_78;
  puVar1[10] = uStack_80;
  puVar1[0xd] = uStack_68;
  puVar1[0xc] = local_70;
  puVar1[1] = uStack_c8;
  *puVar1 = local_d0;
  puVar1[3] = uStack_b8;
  puVar1[2] = uStack_c0;
  puVar1[5] = uStack_a8;
  puVar1[4] = local_b0;
  puVar1[7] = uStack_98;
  puVar1[6] = uStack_a0;
  FUN_100121640();
  FUN_1001216d8();
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  FUN_10002a29c(puVar13,&DAT_100553460,&DAT_100426508);
  FUN_100029504();
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10052cfb0;
  _swift_allocObject(&DAT_10052cfb0,uVar11 + lVar10,uVar9 | 7);
  FUN_100121718(lVar3,puVar4 + uVar11);
  puVar6 = &DAT_100553490;
  FUN_100002f94(&DAT_100553490,&DAT_100426520);
  iVar2 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = FUN_10012175c;
  ((undefined8 *)(param_1 + iVar2))[1] = puVar4;
  return;
}

