// rea decompile_all
// name: FUN_1002d3204
// address: 0x1002d3204
// body: available
// range: 0x1002d3204-0x1002d34c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d3204(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  Color CVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_1a0 [8];
  undefined1 *local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  LocalizedStringKey local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_148 [232];
  undefined8 uVar7;
  
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar8 = *(long *)(puVar3 + -8);
  CVar4.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_150 = (undefined *)SwiftUI::Color::get_purple(CVar4);
  uVar6 = 0xec00000072756f74;
  stringLiteral.bridgeObject = (void *)0xec00000072756f74;
  stringLiteral.str = (char *)0x20656d6f636c6557;
  local_158 = (undefined *)SwiftUI::LocalizedStringKey::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xe400000000000000;
  stringLiteral_00.str = (char *)0x776f6853;
  uVar7 = 0xe400000000000000;
  local_16c = param_4;
  local_168 = param_5;
  local_160 = uVar6;
  local_178 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar5 = &DAT_1005386c0;
  local_188 = param_5;
  local_180 = uVar7;
  _swift_allocObject(&DAT_1005386c0,0xf0,7);
  uVar6 = param_2[0x14];
  uVar11 = param_2[0x17];
  uVar7 = param_2[0x16];
  *(undefined8 *)(puVar5 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar5 + 0xb0) = uVar6;
  *(undefined8 *)(puVar5 + 200) = uVar11;
  *(undefined8 *)(puVar5 + 0xc0) = uVar7;
  uVar6 = param_2[0x18];
  uVar11 = param_2[0x1b];
  uVar7 = param_2[0x1a];
  *(undefined8 *)(puVar5 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar5 + 0xd0) = uVar6;
  *(undefined8 *)(puVar5 + 0xe8) = uVar11;
  *(undefined8 *)(puVar5 + 0xe0) = uVar7;
  uVar6 = param_2[0xc];
  uVar11 = param_2[0xf];
  uVar7 = param_2[0xe];
  *(undefined8 *)(puVar5 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar5 + 0x70) = uVar6;
  *(undefined8 *)(puVar5 + 0x88) = uVar11;
  *(undefined8 *)(puVar5 + 0x80) = uVar7;
  uVar6 = param_2[0x10];
  uVar11 = param_2[0x13];
  uVar7 = param_2[0x12];
  *(undefined8 *)(puVar5 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar5 + 0x90) = uVar6;
  *(undefined8 *)(puVar5 + 0xa8) = uVar11;
  *(undefined8 *)(puVar5 + 0xa0) = uVar7;
  uVar6 = param_2[4];
  uVar11 = param_2[7];
  uVar7 = param_2[6];
  *(undefined8 *)(puVar5 + 0x38) = param_2[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar6;
  *(undefined8 *)(puVar5 + 0x48) = uVar11;
  *(undefined8 *)(puVar5 + 0x40) = uVar7;
  uVar6 = param_2[8];
  uVar11 = param_2[0xb];
  uVar7 = param_2[10];
  *(undefined8 *)(puVar5 + 0x58) = param_2[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar6;
  *(undefined8 *)(puVar5 + 0x68) = uVar11;
  *(undefined8 *)(puVar5 + 0x60) = uVar7;
  uVar6 = *param_2;
  uVar11 = param_2[3];
  uVar7 = param_2[2];
  *(undefined8 *)(puVar5 + 0x18) = param_2[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  FUN_1002d6478(param_2,auStack_148);
  local_190 = (long)puVar9 - extraout_x12;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_178);
  bVar1 = (byte)local_16c;
  pcVar10 = *(code **)(lVar8 + 0x10);
  local_198 = puVar9;
  (*pcVar10)(puVar9,(long)puVar9 - extraout_x12,puVar3);
  puVar2 = local_150;
  uVar7 = local_160;
  uVar6 = local_168;
  *param_1 = 0xd000000000000018;
  param_1[1] = 0x80000001004e48f0;
  param_1[2] = local_150;
  param_1[3] = local_158;
  param_1[4] = local_160;
  *(byte *)(param_1 + 5) = bVar1 & 1;
  param_1[6] = local_168;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  puVar5 = &DAT_10055a8a0;
  FUN_100002f94(&DAT_10055a8a0,&DAT_10042f570);
  (*pcVar10)((long)param_1 + (long)*(int *)(puVar5 + 0x40),puVar9,puVar3);
  pcVar10 = *(code **)(lVar8 + 8);
  _swift_bridgeObjectRetain(0x80000001004e48f0);
  _swift_retain(puVar2);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar6);
  (*pcVar10)(local_190,puVar3);
  (*pcVar10)(local_198,puVar3);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar7);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(0x80000001004e48f0);
  return;
}

