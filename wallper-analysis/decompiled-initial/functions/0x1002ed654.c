// rea decompile_all
// name: FUN_1002ed654
// address: 0x1002ed654
// body: available
// range: 0x1002ed654-0x1002eda13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ed654(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  LocalizedStringKey LVar9;
  ButtonRole BVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_e0 [4];
  uint local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  LocalizedStringKey local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined8 uVar12;
  
  lVar7 = 0;
  local_88 = param_3;
  local_78 = param_2;
  local_68 = param_1;
  FUN_1002f58e8();
  local_80 = *(long *)(lVar7 + -8);
  local_70 = *(long *)(local_80 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = 0;
  local_a0 = auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_1002f58d4();
  local_b0 = *(long *)(lVar7 + -8);
  lStack_a8 = *(long *)(local_b0 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)(auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar7 - extraout_x8;
  puVar8 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_98 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar13 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_01;
  local_b8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_02;
  local_c0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_03;
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x6c65636e6143;
  LVar9 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar9.unknown);
  BVar10 = SwiftUI::ButtonRole::typeMetadataAccessor();
  pcVar15 = *(code **)(*(long *)(BVar10.unknown + -8) + 0x38);
  (*pcVar15)(lVar17,0,1,BVar10.unknown);
  param_4 = param_4 & 1;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar9);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6574656c6544;
  uVar12 = 0xe600000000000000;
  local_c8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_dc = param_4;
  local_d8 = param_5;
  local_d0 = uVar12;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)local_c8.unknown);
  (*pcVar15)(lVar17,0,1,BVar10.unknown);
  FUN_100029504(local_88,lVar7,FUN_1002f58d4);
  puVar3 = local_a0;
  FUN_100029504(local_78,local_a0,FUN_1002f58e8);
  bVar1 = *(byte *)(local_b0 + 0x50);
  uVar14 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(local_80 + 0x50);
  uVar16 = lStack_a8 + (ulong)bVar2 + uVar14 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar11 = &DAT_100539488;
  _swift_allocObject(&DAT_100539488,uVar16 + local_70,bVar1 | bVar2 | 7);
  FUN_100007e64(lVar7,puVar11 + uVar14,FUN_1002f58d4);
  FUN_100007e64(puVar3,puVar11 + uVar16,FUN_1002f58e8);
  lVar7 = local_c0;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_c8);
  lVar4 = local_98;
  lVar17 = local_b8;
  pcVar15 = *(code **)(local_98 + 0x10);
  (*pcVar15)(local_b8,lVar13,puVar8);
  lVar5 = local_90;
  (*pcVar15)(local_90,lVar7,puVar8);
  lVar6 = local_68;
  (*pcVar15)(local_68,lVar17,puVar8);
  puVar11 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar15)(lVar6 + *(int *)(puVar11 + 0x30),lVar5,puVar8);
  pcVar15 = *(code **)(lVar4 + 8);
  (*pcVar15)(lVar7,puVar8);
  (*pcVar15)(lVar13,puVar8);
  (*pcVar15)(lVar5,puVar8);
  (*pcVar15)(lVar17,puVar8);
  return;
}

