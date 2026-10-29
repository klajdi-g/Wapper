// rea decompile_all
// name: FUN_1002e86b0
// address: 0x1002e86b0
// body: available
// range: 0x1002e86b0-0x1002e8957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e86b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  Color CVar4;
  LocalizedStringKey LVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_150 [8];
  long local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [168];
  undefined8 uVar8;
  
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar11 = *(long *)(puVar3 + -8);
  CVar4.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_110 = 0x80000001004e5570;
  local_118 = (undefined *)SwiftUI::Color::get_red(CVar4);
  uVar7 = 0x80000001004e5590;
  stringLiteral.bridgeObject = (void *)0x80000001004e5590;
  stringLiteral.str = (char *)0xd000000000000017;
  local_120 = (undefined *)SwiftUI::LocalizedStringKey::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xa800000000000000;
  stringLiteral_00.str = (char *)0xa680e27465736552;
  uVar8 = 0xa800000000000000;
  local_134 = param_4;
  local_130 = param_5;
  local_128 = uVar7;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar6 = &DAT_100539100;
  local_140 = uVar8;
  _swift_allocObject(&DAT_100539100,0xb0,7);
  uVar7 = param_2[0xc];
  uVar12 = param_2[0xf];
  uVar8 = param_2[0xe];
  *(undefined8 *)(puVar6 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar7;
  *(undefined8 *)(puVar6 + 0x88) = uVar12;
  *(undefined8 *)(puVar6 + 0x80) = uVar8;
  uVar7 = param_2[0x10];
  uVar12 = param_2[0x13];
  uVar8 = param_2[0x12];
  *(undefined8 *)(puVar6 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar7;
  *(undefined8 *)(puVar6 + 0xa8) = uVar12;
  *(undefined8 *)(puVar6 + 0xa0) = uVar8;
  uVar7 = param_2[4];
  uVar12 = param_2[7];
  uVar8 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar7;
  *(undefined8 *)(puVar6 + 0x48) = uVar12;
  *(undefined8 *)(puVar6 + 0x40) = uVar8;
  uVar7 = param_2[8];
  uVar12 = param_2[0xb];
  uVar8 = param_2[10];
  *(undefined8 *)(puVar6 + 0x58) = param_2[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar7;
  *(undefined8 *)(puVar6 + 0x68) = uVar12;
  *(undefined8 *)(puVar6 + 0x60) = uVar8;
  uVar7 = *param_2;
  uVar12 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  FUN_1002e9be0(param_2,auStack_108);
  local_148 = (long)puVar9 - extraout_x12;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar5);
  bVar1 = (byte)local_134;
  pcVar10 = *(code **)(lVar11 + 0x10);
  (*pcVar10)(puVar9,(long)puVar9 - extraout_x12,puVar3);
  uVar12 = local_110;
  puVar2 = local_118;
  uVar8 = local_128;
  uVar7 = local_130;
  *param_1 = 0xd000000000000016;
  param_1[1] = local_110;
  param_1[2] = local_118;
  param_1[3] = local_120;
  param_1[4] = local_128;
  *(byte *)(param_1 + 5) = bVar1 & 1;
  param_1[6] = local_130;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  puVar6 = &DAT_10055a8a0;
  FUN_100002f94(&DAT_10055a8a0,&DAT_10042f570);
  (*pcVar10)((long)param_1 + (long)*(int *)(puVar6 + 0x40),puVar9,puVar3);
  pcVar10 = *(code **)(lVar11 + 8);
  _swift_bridgeObjectRetain(uVar12);
  _swift_retain(puVar2);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
  (*pcVar10)(local_148,puVar3);
  (*pcVar10)(puVar9,puVar3);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar8);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(uVar12);
  return;
}

