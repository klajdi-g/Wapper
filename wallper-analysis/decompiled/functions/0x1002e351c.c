// rea decompile_all
// name: FUN_1002e351c
// address: 0x1002e351c
// body: available
// range: 0x1002e351c-0x1002e3843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e351c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  LocalizedStringKey LVar7;
  ButtonRole BVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_140 [8];
  LocalizedStringKey local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined1 auStack_108 [168];
  
  puVar6 = &DAT_10054dee8;
  local_110 = param_1;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_140 + -extraout_x8;
  puVar6 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_120 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  lVar10 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  local_128 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  local_130 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_01;
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x6c65636e6143;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar7.unknown);
  BVar8 = SwiftUI::ButtonRole::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(BVar8.unknown + -8) + 0x38);
  (*pcVar11)(puVar12,0,1,BVar8.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar7);
  stringLiteral_00.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_00.str = (char *)0x7465736552;
  local_138 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  SwiftUI::ButtonRole::get_destructive((ButtonRole)local_138.unknown);
  (*pcVar11)(puVar12,0,1,BVar8.unknown);
  puVar9 = &DAT_100538f98;
  _swift_allocObject(&DAT_100538f98,0xb0,7);
  uVar13 = param_2[0xc];
  uVar15 = param_2[0xf];
  uVar14 = param_2[0xe];
  *(undefined8 *)(puVar9 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar9 + 0x70) = uVar13;
  *(undefined8 *)(puVar9 + 0x88) = uVar15;
  *(undefined8 *)(puVar9 + 0x80) = uVar14;
  uVar13 = param_2[0x10];
  uVar15 = param_2[0x13];
  uVar14 = param_2[0x12];
  *(undefined8 *)(puVar9 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar9 + 0x90) = uVar13;
  *(undefined8 *)(puVar9 + 0xa8) = uVar15;
  *(undefined8 *)(puVar9 + 0xa0) = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  *(undefined8 *)(puVar9 + 0x38) = param_2[5];
  *(undefined8 *)(puVar9 + 0x30) = uVar13;
  *(undefined8 *)(puVar9 + 0x48) = uVar15;
  *(undefined8 *)(puVar9 + 0x40) = uVar14;
  uVar13 = param_2[8];
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  *(undefined8 *)(puVar9 + 0x58) = param_2[9];
  *(undefined8 *)(puVar9 + 0x50) = uVar13;
  *(undefined8 *)(puVar9 + 0x68) = uVar15;
  *(undefined8 *)(puVar9 + 0x60) = uVar14;
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  *(undefined8 *)(puVar9 + 0x18) = param_2[1];
  *(undefined8 *)(puVar9 + 0x10) = uVar13;
  *(undefined8 *)(puVar9 + 0x28) = uVar15;
  *(undefined8 *)(puVar9 + 0x20) = uVar14;
  FUN_1002e9be0(param_2,auStack_108);
  lVar1 = local_130;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_138);
  lVar3 = local_120;
  lVar2 = local_128;
  pcVar11 = *(code **)(local_120 + 0x10);
  (*pcVar11)(local_128,lVar10,puVar6);
  lVar4 = local_118;
  (*pcVar11)(local_118,lVar1,puVar6);
  lVar5 = local_110;
  (*pcVar11)(local_110,lVar2,puVar6);
  puVar9 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar11)(lVar5 + *(int *)(puVar9 + 0x30),lVar4,puVar6);
  pcVar11 = *(code **)(lVar3 + 8);
  (*pcVar11)(lVar1,puVar6);
  (*pcVar11)(lVar10,puVar6);
  (*pcVar11)(lVar4,puVar6);
  (*pcVar11)(lVar2,puVar6);
  return;
}

