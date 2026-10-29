// rea decompile_all
// name: FUN_1002d3824
// address: 0x1002d3824
// body: available
// range: 0x1002d3824-0x1002d3ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d3824(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  Color CVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_190 [8];
  long local_188;
  undefined8 local_180;
  LocalizedStringKey local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined1 auStack_148 [232];
  undefined8 uVar6;
  
  puVar2 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar8 = *(long *)(puVar2 + -8);
  CVar3.unknown = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_150 = 0x80000001004e4840;
  local_158 = (undefined *)SwiftUI::Color::get_indigo(CVar3);
  uVar5 = 0x80000001004e4870;
  stringLiteral.bridgeObject = (void *)0x80000001004e4870;
  stringLiteral.str = (char *)0xd000000000000011;
  local_160 = (undefined *)SwiftUI::LocalizedStringKey::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xe400000000000000;
  stringLiteral_00.str = (char *)0x6e65704f;
  uVar6 = 0xe400000000000000;
  local_170 = param_5;
  local_168 = uVar5;
  local_178 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar4 = &DAT_100538670;
  local_180 = uVar6;
  _swift_allocObject(&DAT_100538670,0xf0,7);
  uVar5 = param_2[0x14];
  uVar10 = param_2[0x17];
  uVar6 = param_2[0x16];
  *(undefined8 *)(puVar4 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar4 + 0xb0) = uVar5;
  *(undefined8 *)(puVar4 + 200) = uVar10;
  *(undefined8 *)(puVar4 + 0xc0) = uVar6;
  uVar5 = param_2[0x18];
  uVar10 = param_2[0x1b];
  uVar6 = param_2[0x1a];
  *(undefined8 *)(puVar4 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar4 + 0xd0) = uVar5;
  *(undefined8 *)(puVar4 + 0xe8) = uVar10;
  *(undefined8 *)(puVar4 + 0xe0) = uVar6;
  uVar5 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar6 = param_2[0xe];
  *(undefined8 *)(puVar4 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar4 + 0x70) = uVar5;
  *(undefined8 *)(puVar4 + 0x88) = uVar10;
  *(undefined8 *)(puVar4 + 0x80) = uVar6;
  uVar5 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar6 = param_2[0x12];
  *(undefined8 *)(puVar4 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar4 + 0x90) = uVar5;
  *(undefined8 *)(puVar4 + 0xa8) = uVar10;
  *(undefined8 *)(puVar4 + 0xa0) = uVar6;
  uVar5 = param_2[4];
  uVar10 = param_2[7];
  uVar6 = param_2[6];
  *(undefined8 *)(puVar4 + 0x38) = param_2[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  *(undefined8 *)(puVar4 + 0x48) = uVar10;
  *(undefined8 *)(puVar4 + 0x40) = uVar6;
  uVar5 = param_2[8];
  uVar10 = param_2[0xb];
  uVar6 = param_2[10];
  *(undefined8 *)(puVar4 + 0x58) = param_2[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar5;
  *(undefined8 *)(puVar4 + 0x68) = uVar10;
  *(undefined8 *)(puVar4 + 0x60) = uVar6;
  uVar5 = *param_2;
  uVar10 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(puVar4 + 0x18) = param_2[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar10;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  FUN_1002d6478(param_2,auStack_148);
  local_188 = (long)puVar7 - extraout_x12;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_178);
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)(puVar7,(long)puVar7 - extraout_x12,puVar2);
  uVar10 = local_150;
  puVar1 = local_158;
  uVar6 = local_168;
  uVar5 = local_170;
  *param_1 = 0xd000000000000021;
  param_1[1] = local_150;
  param_1[2] = local_158;
  param_1[3] = local_160;
  param_1[4] = local_168;
  *(byte *)(param_1 + 5) = param_4 & 1;
  param_1[6] = local_170;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  puVar4 = &DAT_10055a8a0;
  FUN_100002f94(&DAT_10055a8a0,&DAT_10042f570);
  (*pcVar9)((long)param_1 + (long)*(int *)(puVar4 + 0x40),puVar7,puVar2);
  pcVar9 = *(code **)(lVar8 + 8);
  _swift_bridgeObjectRetain(uVar10);
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar9)(local_188,puVar2);
  (*pcVar9)(puVar7,puVar2);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(uVar10);
  return;
}

