// rea decompile_all
// name: FUN_1002dadd4
// address: 0x1002dadd4
// body: available
// range: 0x1002dadd4-0x1002dafff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002dadd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  LocalizedStringKey LVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x12;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined1 auStack_a0 [64];
  
  puVar4 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_a8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  local_b0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  uVar7 = 0x80000001004e4d20;
  stringLiteral.bridgeObject = (void *)0x80000001004e4d20;
  stringLiteral.str = (char *)0xd000000000000012;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar10 + -8) = 0x100;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  uVar8 = (ulong)(param_4 & 1);
  puStack_c0 = (undefined *)SwiftUI::Text::_init(LVar5);
  stringLiteral_00.bridgeObject = (void *)0xe800000000000000;
  stringLiteral_00.str = (char *)0x6574617669746341;
  local_c8 = uVar7;
  local_b8 = param_5;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar6 = &DAT_100538a18;
  _swift_allocObject(&DAT_100538a18,0x50,7);
  uVar7 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  uVar7 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar7;
  *(undefined8 *)(puVar6 + 0x48) = uVar12;
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  FUN_1002db56c(param_2,auStack_a0);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar5);
  lVar3 = local_a8;
  puVar2 = local_b0;
  pcVar9 = *(code **)(local_a8 + 0x10);
  (*pcVar9)(local_b0,lVar10,puVar4);
  uVar11 = local_b8;
  puVar1 = puStack_c0;
  uVar7 = local_c8;
  *param_1 = puStack_c0;
  param_1[1] = local_c8;
  *(char *)(param_1 + 2) = (char)uVar8;
  param_1[3] = local_b8;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar6 = &DAT_10055aaa0;
  FUN_100002f94(&DAT_10055aaa0,&DAT_10042fb50);
  (*pcVar9)((long)param_1 + (long)*(int *)(puVar6 + 0x40),puVar2,puVar4);
  FUN_100007b14(puVar1,uVar7,uVar8);
  pcVar9 = *(code **)(lVar3 + 8);
  _swift_bridgeObjectRetain(uVar11);
  (*pcVar9)(lVar10,puVar4);
  (*pcVar9)(puVar2,puVar4);
  FUN_100025b34(puVar1,uVar7,uVar8);
  _swift_bridgeObjectRelease(uVar11);
  return;
}

