// rea decompile_all
// name: FUN_100365f9c
// address: 0x100365f9c
// body: available
// range: 0x100365f9c-0x10036655b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100365f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  ButtonRole BVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  code *pcVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  undefined1 auStack_110 [8];
  ulong local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  LocalizedStringKey LStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  
  puVar3 = &DAT_10054dee8;
  local_e0 = param_3;
  local_a8 = param_1;
  local_98 = param_2;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c0 = auStack_110 + -extraout_x8;
  local_b0 = (undefined *)SwiftUI::Divider::typeMetadataAccessor();
  local_70 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar11 = (long)(auStack_110 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12;
  lVar4 = 0;
  local_d8 = lVar11;
  FUN_10025ee04();
  lVar18 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100386f18();
  lVar20 = *(long *)(lVar4 + -8);
  lVar4 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar11 - (lVar4 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_78 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar12 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_00;
  local_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_01;
  local_80 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_02;
  local_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_03;
  local_a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_88 = lVar12 - extraout_x12_04;
  uVar8 = 0xa9000000000000a6;
  stringLiteral.bridgeObject = (void *)0xa9000000000000a6;
  stringLiteral.str = (char *)0x80e2656d616e6552;
  LStack_e8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_fc = param_4;
  local_f8 = param_5;
  local_f0 = uVar8;
  FUN_100029504(param_2,lVar15,FUN_100386f18);
  FUN_100029504(local_e0,lVar11,FUN_10025ee04);
  uVar9 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = uVar9 | 7;
  uVar10 = (ulong)*(byte *)(lVar18 + 0x50);
  lVar4 = uVar13 + lVar4;
  uVar19 = lVar4 + uVar10 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053c110;
  local_108 = uVar13;
  local_e0 = lVar4;
  _swift_allocObject(&DAT_10053c110,uVar19 + lVar16,uVar9 | uVar10);
  FUN_100007e64(lVar15,puVar5 + uVar13,FUN_100386f18);
  FUN_100007e64(lVar11,puVar5 + uVar19,FUN_10025ee04);
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_e8);
  stringLiteral_00.bridgeObject = (void *)0xe900000000000065;
  stringLiteral_00.str = (char *)0x746163696c707544;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(local_98,lVar15,FUN_100386f18);
  puVar5 = &DAT_10053c138;
  _swift_allocObject(&DAT_10053c138,lVar4,uVar9);
  uVar10 = local_108;
  FUN_100007e64(lVar15,puVar5 + local_108,FUN_100386f18);
  lVar12 = local_a0;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar6);
  lVar4 = local_d8;
  SwiftUI::Divider::init();
  uVar8 = 0x80000001004e6b00;
  stringLiteral_01.bridgeObject = (void *)0x80000001004e6b00;
  stringLiteral_01.str = (char *)0x1000000000000012;
  LStack_e8 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  puVar1 = local_c0;
  local_f0 = uVar8;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)LStack_e8.unknown);
  BVar7 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar7.unknown + -8) + 0x38))(puVar1,0,1,BVar7.unknown);
  FUN_100029504(local_98,lVar15,FUN_100386f18);
  puVar5 = &DAT_10053c160;
  _swift_allocObject(&DAT_10053c160,local_e0,uVar9);
  FUN_100007e64(lVar15,puVar5 + uVar10,FUN_100386f18);
  lVar16 = local_90;
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_e8);
  lVar18 = local_80;
  pcVar14 = *(code **)(local_78 + 0x10);
  (*pcVar14)(local_80,local_88,puVar3);
  lVar11 = local_d0;
  (*pcVar14)(local_d0,lVar12,puVar3);
  puVar2 = local_b0;
  lVar15 = local_b8;
  pcVar17 = *(code **)(local_70 + 0x10);
  (*pcVar17)(local_b8,lVar4,local_b0);
  lVar12 = local_c8;
  (*pcVar14)(local_c8,lVar16,puVar3);
  lVar16 = local_a8;
  (*pcVar14)(local_a8,lVar18,puVar3);
  puVar5 = &DAT_10055e248;
  FUN_100002f94(&DAT_10055e248,&DAT_100433bf8);
  (*pcVar14)(lVar16 + *(int *)(puVar5 + 0x30),lVar11,puVar3);
  (*pcVar17)(lVar16 + *(int *)(puVar5 + 0x40),lVar15,puVar2);
  (*pcVar14)(lVar16 + *(int *)(puVar5 + 0x50),lVar12,puVar3);
  pcVar14 = *(code **)(local_78 + 8);
  (*pcVar14)(local_90,puVar3);
  pcVar17 = *(code **)(local_70 + 8);
  (*pcVar17)(lVar4,puVar2);
  (*pcVar14)(local_a0,puVar3);
  (*pcVar14)(local_88,puVar3);
  (*pcVar14)(lVar12,puVar3);
  (*pcVar17)(lVar15,puVar2);
  (*pcVar14)(lVar11,puVar3);
  (*pcVar14)(local_80,puVar3);
  return;
}

