// rea decompile_all
// name: FUN_100061a10
// address: 0x100061a10
// body: available
// range: 0x100061a10-0x100061e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061a10(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ButtonRole BVar7;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_e0 [12];
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  LocalizedStringKey LStack_c0;
  ulong local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = &DAT_10054dee8;
  local_a8 = param_2;
  local_a0 = param_3;
  local_68 = param_1;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_88 = auStack_e0 + -extraout_x8;
  FUN_10025ee04();
  lVar17 = *(long *)(lVar5 + -8);
  local_98 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)(auStack_e0 + -extraout_x8) - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10006866c();
  lVar13 = *(long *)(lVar5 + -8);
  lVar16 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar11 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_78 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar5 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = lVar5 - extraout_x12_00;
  local_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = lVar5 - extraout_x12_01;
  local_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_b0 = lVar5 - extraout_x12_02;
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x656d616e6552;
  uVar8 = 0xe600000000000000;
  LStack_c0 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_d4 = param_4;
  local_d0 = param_5;
  local_c8 = uVar8;
  FUN_100029504(param_2,lVar15,FUN_10006866c);
  FUN_100029504(param_3,lVar11,FUN_10025ee04);
  lVar5 = local_98;
  bVar1 = *(byte *)(lVar13 + 0x50);
  uVar14 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar17 + 0x50);
  uVar18 = lVar16 + (ulong)bVar2 + uVar14 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  local_b8 = (ulong)(bVar1 | bVar2);
  puVar6 = &DAT_1005273d8;
  _swift_allocObject(&DAT_1005273d8,uVar18 + local_98,local_b8 | 7);
  FUN_100007e64(lVar15,puVar6 + uVar14,FUN_10006866c);
  FUN_100007e64(lVar11,puVar6 + uVar18,FUN_10025ee04);
  uVar10 = local_d4 & 1;
  uVar8 = local_d0;
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_c0);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6574656c6544;
  uVar9 = 0xe600000000000000;
  LStack_c0 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar3 = local_88;
  local_d4 = uVar10;
  local_d0 = uVar8;
  local_c8 = uVar9;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)LStack_c0.unknown);
  BVar7 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar7.unknown + -8) + 0x38))(puVar3,0,1,BVar7.unknown);
  FUN_100029504(local_a8,lVar15,FUN_10006866c);
  FUN_100029504(local_a0,lVar11,FUN_10025ee04);
  puVar6 = &DAT_100527400;
  _swift_allocObject(&DAT_100527400,uVar18 + lVar5,local_b8 | 7);
  FUN_100007e64(lVar15,puVar6 + uVar14,FUN_10006866c);
  FUN_100007e64(lVar11,puVar6 + uVar18,FUN_10025ee04);
  lVar11 = local_90;
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_c0);
  lVar15 = local_78;
  lVar13 = local_80;
  lVar5 = local_b0;
  pcVar12 = *(code **)(local_78 + 0x10);
  (*pcVar12)(local_80,local_b0,puVar4);
  lVar16 = local_70;
  (*pcVar12)(local_70,lVar11,puVar4);
  lVar17 = local_68;
  (*pcVar12)(local_68,lVar13,puVar4);
  puVar6 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar12)(lVar17 + *(int *)(puVar6 + 0x30),lVar16,puVar4);
  pcVar12 = *(code **)(lVar15 + 8);
  (*pcVar12)(lVar11,puVar4);
  (*pcVar12)(lVar5,puVar4);
  (*pcVar12)(lVar16,puVar4);
  (*pcVar12)(lVar13,puVar4);
  return;
}

