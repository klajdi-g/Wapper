// rea decompile_all
// name: FUN_1002d3580
// address: 0x1002d3580
// body: available
// range: 0x1002d3580-0x1002d3823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d3580(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
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
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  LocalizedStringKey local_168;
  undefined4 local_15c;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_148 [232];
  undefined8 uVar7;
  
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar9 = *(long *)(puVar3 + -8);
  CVar4.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_150 = (undefined *)SwiftUI::Color::get_blue(CVar4);
  uVar6 = 0xed000074726f7070;
  stringLiteral.bridgeObject = (void *)0xed000074726f7070;
  stringLiteral.str = (char *)0x7573206c69616d45;
  local_158 = (undefined *)SwiftUI::LocalizedStringKey::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_00.str = (char *)0x6574697257;
  uVar7 = 0xe500000000000000;
  local_178 = param_5;
  local_15c = param_4;
  local_168 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar5 = &DAT_100538698;
  local_170 = uVar7;
  _swift_allocObject(&DAT_100538698,0xf0,7);
  uVar7 = param_2[0x14];
  uVar12 = param_2[0x17];
  uVar11 = param_2[0x16];
  *(undefined8 *)(puVar5 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar5 + 0xb0) = uVar7;
  *(undefined8 *)(puVar5 + 200) = uVar12;
  *(undefined8 *)(puVar5 + 0xc0) = uVar11;
  uVar7 = param_2[0x18];
  uVar12 = param_2[0x1b];
  uVar11 = param_2[0x1a];
  *(undefined8 *)(puVar5 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar5 + 0xd0) = uVar7;
  *(undefined8 *)(puVar5 + 0xe8) = uVar12;
  *(undefined8 *)(puVar5 + 0xe0) = uVar11;
  uVar7 = param_2[0xc];
  uVar12 = param_2[0xf];
  uVar11 = param_2[0xe];
  *(undefined8 *)(puVar5 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar5 + 0x70) = uVar7;
  *(undefined8 *)(puVar5 + 0x88) = uVar12;
  *(undefined8 *)(puVar5 + 0x80) = uVar11;
  uVar7 = param_2[0x10];
  uVar12 = param_2[0x13];
  uVar11 = param_2[0x12];
  *(undefined8 *)(puVar5 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar5 + 0x90) = uVar7;
  *(undefined8 *)(puVar5 + 0xa8) = uVar12;
  *(undefined8 *)(puVar5 + 0xa0) = uVar11;
  uVar7 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  *(undefined8 *)(puVar5 + 0x38) = param_2[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  *(undefined8 *)(puVar5 + 0x48) = uVar12;
  *(undefined8 *)(puVar5 + 0x40) = uVar11;
  uVar7 = param_2[8];
  uVar12 = param_2[0xb];
  uVar11 = param_2[10];
  *(undefined8 *)(puVar5 + 0x58) = param_2[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar7;
  *(undefined8 *)(puVar5 + 0x68) = uVar12;
  *(undefined8 *)(puVar5 + 0x60) = uVar11;
  uVar7 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  *(undefined8 *)(puVar5 + 0x18) = param_2[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar12;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  FUN_1002d6478(param_2,auStack_148);
  (extension_SwiftUI)::SwiftUI::Button::_init(local_168);
  bVar1 = (byte)local_15c;
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(puVar8,(long)puVar8 - extraout_x12,puVar3);
  puVar2 = local_150;
  uVar7 = local_178;
  *param_1 = 0x65706f6c65766e65;
  param_1[1] = 0xed00006c6c69662e;
  param_1[2] = local_150;
  param_1[3] = local_158;
  param_1[4] = uVar6;
  *(byte *)(param_1 + 5) = bVar1 & 1;
  param_1[6] = local_178;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  puVar5 = &DAT_10055a8a0;
  FUN_100002f94(&DAT_10055a8a0,&DAT_10042f570);
  (*pcVar10)((long)param_1 + (long)*(int *)(puVar5 + 0x40),puVar8,puVar3);
  pcVar10 = *(code **)(lVar9 + 8);
  _swift_bridgeObjectRetain(0xed00006c6c69662e);
  _swift_retain(puVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  (*pcVar10)((long)puVar8 - extraout_x12,puVar3);
  (*pcVar10)(puVar8,puVar3);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(0xed00006c6c69662e);
  return;
}

