// rea decompile_all
// name: FUN_10035ed68
// address: 0x10035ed68
// body: available
// range: 0x10035ed68-0x10035f1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035ed68(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  LocalizedStringKey LVar8;
  State SVar9;
  ButtonRole BVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  undefined8 auStack_120 [4];
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Binding<String> text;
  
  puVar5 = &DAT_10054dee8;
  local_b8 = param_1;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_e0 = (long)&local_100 - extraout_x8;
  FUN_100386f18();
  local_f8 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(local_f8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = ((long)&local_100 - extraout_x8) - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_c8 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar12 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12;
  local_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_00;
  local_d8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_01;
  puVar7 = &DAT_10054def8;
  local_b0 = lVar12;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_a8 = *(long *)(puVar7 + -8);
  local_e8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_02;
  stringLiteral.bridgeObject = (void *)0xe400000000000000;
  stringLiteral.str = (char *)0x656d614e;
  text.unknown = (undefined *)0xe400000000000000;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x38));
  uStack_78 = puVar1[1];
  local_80 = *puVar1;
  local_70 = puVar1[2];
  SVar9.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_projectedValue(SVar9);
  *(code **)(lVar12 + -0x10) = FUN_10002a200;
  *(undefined8 *)(lVar12 + -8) = 0;
  *(code **)(lVar12 + -0x20) = FUN_10002a200;
  *(undefined8 *)(lVar12 + -0x18) = 0;
  local_100 = lVar12;
  (extension_SwiftUI)::SwiftUI::TextField::_init(LVar8,text);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x656d616e6552;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(param_2,lVar14,FUN_100386f18);
  uVar11 = (ulong)*(byte *)(local_f8 + 0x50);
  uVar17 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10053be90;
  _swift_allocObject(&DAT_10053be90,uVar17 + lVar16,uVar11 | 7);
  FUN_100007e64(lVar14,puVar7 + uVar17,FUN_100386f18);
  lVar3 = local_b0;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar8);
  stringLiteral_01.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_01.str = (char *)0x6c65636e6143;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  lVar6 = local_e0;
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar8.unknown);
  BVar10 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar10.unknown + -8) + 0x38))(lVar6,0,1,BVar10.unknown);
  lVar14 = local_d8;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar8);
  puVar2 = local_e8;
  lVar6 = local_f0;
  pcVar13 = *(code **)(local_a8 + 0x10);
  (*pcVar13)(local_f0,lVar12,local_e8);
  lVar16 = local_c8;
  lVar12 = local_d0;
  pcVar15 = *(code **)(local_c8 + 0x10);
  (*pcVar15)(local_d0,lVar3,puVar5);
  lVar3 = local_c0;
  (*pcVar15)(local_c0,lVar14,puVar5);
  lVar4 = local_b8;
  (*pcVar13)(local_b8,lVar6,puVar2);
  puVar7 = &DAT_10054df00;
  FUN_100002f94(&DAT_10054df00,&DAT_10041ed40);
  (*pcVar15)(lVar4 + *(int *)(puVar7 + 0x30),lVar12,puVar5);
  (*pcVar15)(lVar4 + *(int *)(puVar7 + 0x40),lVar3,puVar5);
  pcVar13 = *(code **)(lVar16 + 8);
  (*pcVar13)(lVar14,puVar5);
  (*pcVar13)(local_b0,puVar5);
  pcVar15 = *(code **)(local_a8 + 8);
  (*pcVar15)(local_100,puVar2);
  (*pcVar13)(lVar3,puVar5);
  (*pcVar13)(lVar12,puVar5);
  (*pcVar15)(lVar6,puVar2);
  return;
}

