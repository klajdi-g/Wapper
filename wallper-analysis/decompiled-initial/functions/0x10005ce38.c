// rea decompile_all
// name: FUN_10005ce38
// address: 0x10005ce38
// body: available
// range: 0x10005ce38-0x10005d313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ce38(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  LocalizedStringKey LVar10;
  State SVar11;
  ButtonRole BVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  undefined8 auStack_140 [4];
  undefined1 auStack_120 [8];
  LocalizedStringKey local_118;
  long local_110;
  LocalizedStringKey local_108;
  undefined *local_100;
  long local_f8;
  undefined1 *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Binding<String> text;
  
  puVar8 = &DAT_10054dee8;
  local_c8 = param_1;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_f0 = auStack_120 + -extraout_x8;
  FUN_10006866c();
  local_108.unknown = *(undefined **)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)(auStack_120 + -extraout_x8) - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054def0;
  local_110 = extraout_x12;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_e0 = *(long *)(puVar8 + -8);
  local_d0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar13 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_00;
  local_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_01;
  local_f8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_02;
  puVar8 = &DAT_10054def8;
  local_c0 = lVar13;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_a8 = *(long *)(puVar8 + -8);
  local_100 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_03;
  stringLiteral.bridgeObject = (void *)0xe400000000000000;
  stringLiteral.str = (char *)0x656d614e;
  text.unknown = (undefined *)0xe400000000000000;
  local_b8 = lVar13;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar9 + 0x2c));
  uStack_78 = puVar1[1];
  local_80 = *puVar1;
  local_70 = puVar1[2];
  SVar11.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_projectedValue(SVar11);
  *(code **)(lVar13 + -0x10) = FUN_10002a200;
  *(undefined8 *)(lVar13 + -8) = 0;
  *(code **)(lVar13 + -0x20) = FUN_10002a200;
  *(undefined8 *)(lVar13 + -0x18) = 0;
  (extension_SwiftUI)::SwiftUI::TextField::_init(LVar10,text);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x656d616e6552;
  local_118 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(param_2,lVar18,FUN_10006866c);
  uVar16 = (ulong)*(byte *)((long)local_108.unknown + 0x50);
  uVar14 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100527220;
  _swift_allocObject(&DAT_100527220,uVar14 + extraout_x12,uVar16 | 7);
  FUN_100007e64(lVar18,puVar8 + uVar14,FUN_10006866c);
  lVar4 = local_c0;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_118);
  stringLiteral_01.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_01.str = (char *)0x6c65636e6143;
  local_108 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  puVar3 = local_f0;
  SwiftUI::ButtonRole::get_cancel((ButtonRole)local_108.unknown);
  BVar12 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar12.unknown + -8) + 0x38))(puVar3,0,1,BVar12.unknown);
  FUN_100029504(param_2,lVar18,FUN_10006866c);
  puVar8 = &DAT_100527248;
  _swift_allocObject(&DAT_100527248,uVar14 + local_110,uVar16 | 7);
  FUN_100007e64(lVar18,puVar8 + uVar14,FUN_10006866c);
  lVar9 = local_f8;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_108);
  lVar7 = local_b0;
  puVar2 = local_100;
  pcVar15 = *(code **)(local_a8 + 0x10);
  (*pcVar15)(local_b0,local_b8,local_100);
  puVar5 = local_d0;
  lVar18 = local_e0;
  lVar13 = local_e8;
  pcVar17 = *(code **)(local_e0 + 0x10);
  (*pcVar17)(local_e8,lVar4,local_d0);
  lVar4 = local_d8;
  (*pcVar17)(local_d8,lVar9,puVar5);
  lVar6 = local_c8;
  (*pcVar15)(local_c8,lVar7,puVar2);
  puVar8 = &DAT_10054df00;
  FUN_100002f94(&DAT_10054df00,&DAT_10041ed40);
  (*pcVar17)(lVar6 + *(int *)(puVar8 + 0x30),lVar13,puVar5);
  (*pcVar17)(lVar6 + *(int *)(puVar8 + 0x40),lVar4,puVar5);
  pcVar15 = *(code **)(lVar18 + 8);
  (*pcVar15)(lVar9,puVar5);
  (*pcVar15)(local_c0,puVar5);
  pcVar17 = *(code **)(local_a8 + 8);
  (*pcVar17)(local_b8,puVar2);
  (*pcVar15)(lVar4,puVar5);
  (*pcVar15)(lVar13,puVar5);
  (*pcVar17)(local_b0,puVar2);
  return;
}

