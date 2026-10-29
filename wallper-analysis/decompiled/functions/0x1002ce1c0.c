// rea decompile_all
// name: FUN_1002ce1c0
// address: 0x1002ce1c0
// body: available
// range: 0x1002ce1c0-0x1002ce4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ce1c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  LocalizedStringKey LVar5;
  ButtonRole BVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String stringLiteral;
  String stringLiteral_00;
  long local_160;
  long local_158;
  long local_150;
  undefined1 auStack_148 [232];
  
  puVar4 = &DAT_10054dee8;
  local_150 = param_1;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_160 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  lVar8 = ((long)&local_160 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x6c65636e6143;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar5.unknown);
  BVar6 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar6.unknown + -8) + 0x38))
            ((long)&local_160 - extraout_x8,0,1,BVar6.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar5);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x726961706552;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar7 = &DAT_100538378;
  _swift_allocObject(&DAT_100538378,0xf0,7);
  uVar11 = param_2[0x14];
  uVar13 = param_2[0x17];
  uVar12 = param_2[0x16];
  *(undefined8 *)(puVar7 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar7 + 0xb0) = uVar11;
  *(undefined8 *)(puVar7 + 200) = uVar13;
  *(undefined8 *)(puVar7 + 0xc0) = uVar12;
  uVar11 = param_2[0x18];
  uVar13 = param_2[0x1b];
  uVar12 = param_2[0x1a];
  *(undefined8 *)(puVar7 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar7 + 0xd0) = uVar11;
  *(undefined8 *)(puVar7 + 0xe8) = uVar13;
  *(undefined8 *)(puVar7 + 0xe0) = uVar12;
  uVar11 = param_2[0xc];
  uVar13 = param_2[0xf];
  uVar12 = param_2[0xe];
  *(undefined8 *)(puVar7 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar7 + 0x70) = uVar11;
  *(undefined8 *)(puVar7 + 0x88) = uVar13;
  *(undefined8 *)(puVar7 + 0x80) = uVar12;
  uVar11 = param_2[0x10];
  uVar13 = param_2[0x13];
  uVar12 = param_2[0x12];
  *(undefined8 *)(puVar7 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar7 + 0x90) = uVar11;
  *(undefined8 *)(puVar7 + 0xa8) = uVar13;
  *(undefined8 *)(puVar7 + 0xa0) = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  *(undefined8 *)(puVar7 + 0x38) = param_2[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar11;
  *(undefined8 *)(puVar7 + 0x48) = uVar13;
  *(undefined8 *)(puVar7 + 0x40) = uVar12;
  uVar11 = param_2[8];
  uVar13 = param_2[0xb];
  uVar12 = param_2[10];
  *(undefined8 *)(puVar7 + 0x58) = param_2[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar11;
  *(undefined8 *)(puVar7 + 0x68) = uVar13;
  *(undefined8 *)(puVar7 + 0x60) = uVar12;
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(puVar7 + 0x18) = param_2[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar13;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  FUN_1002d6478(param_2,auStack_148);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar5);
  lVar1 = local_160;
  pcVar9 = *(code **)(local_160 + 0x10);
  (*pcVar9)(lVar8,lVar10 - extraout_x12_01,puVar4);
  lVar2 = local_158;
  (*pcVar9)(local_158,lVar10,puVar4);
  lVar3 = local_150;
  (*pcVar9)(local_150,lVar8,puVar4);
  puVar7 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar9)(lVar3 + *(int *)(puVar7 + 0x30),lVar2,puVar4);
  pcVar9 = *(code **)(lVar1 + 8);
  (*pcVar9)(lVar10,puVar4);
  (*pcVar9)(lVar10 - extraout_x12_01,puVar4);
  (*pcVar9)(lVar2,puVar4);
  (*pcVar9)(lVar8,puVar4);
  return;
}

