// rea decompile_all
// name: FUN_1002d2e20
// address: 0x1002d2e20
// body: available
// range: 0x1002d2e20-0x1002d3203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d2e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  VerticalAlignment VVar8;
  undefined *puVar9;
  LocalizedStringKey LVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *puVar14;
  code *pcVar15;
  String stringLiteral;
  String stringLiteral_00;
  undefined *apuStack_b0 [3];
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar7 = &DAT_10055a860;
  apuStack_b0[1] = (undefined *)param_2;
  local_70 = param_1;
  FUN_100002f94(&DAT_10055a860,&DAT_10042f230);
  apuStack_b0[2] = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar13 = (long)apuStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = (undefined8 *)(lVar13 - extraout_x12);
  puVar7 = &DAT_10055a868;
  FUN_100002f94(&DAT_10055a868,&DAT_10042ea10);
  local_88 = *(long *)(puVar7 + -8);
  VVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  lVar13 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_00;
  local_90 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_01;
  local_98 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_68 = lVar13 - extraout_x12_02;
  VVar8 = SwiftUI::VerticalAlignment::get_center(VVar8);
  *puVar14 = VVar8.unknown;
  puVar14[1] = 0;
  *(undefined1 *)(puVar14 + 2) = 1;
  puVar9 = &DAT_10055a888;
  FUN_100002f94(&DAT_10055a888,&DAT_10042ea28);
  FUN_1002d3204((long)puVar14 + (long)*(int *)(puVar9 + 0x2c),param_2);
  uVar11 = 0x80000001004e47c0;
  stringLiteral.bridgeObject = (void *)0x80000001004e47c0;
  stringLiteral.str = (char *)0xd000000000000053;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1000087a0(&DAT_10055a890,&DAT_10055a860,&DAT_10042f230,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  uVar12 = param_5;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar10);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(uVar11);
  VVar8.unknown = (undefined *)puVar14;
  FUN_10002a29c(puVar14,&DAT_10055a860,&DAT_10042f230);
  VVar8 = SwiftUI::VerticalAlignment::get_center(VVar8);
  *puVar14 = VVar8.unknown;
  puVar14[1] = 0;
  puVar1 = apuStack_b0[1];
  *(undefined1 *)(puVar14 + 2) = 1;
  FUN_1002d3580((long)puVar14 + (long)*(int *)(puVar9 + 0x2c),apuStack_b0[1]);
  uVar11 = 0x80000001004e4820;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e4820;
  stringLiteral_00.str = (char *)0xd000000000000013;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  lVar13 = local_98;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar10);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar11);
  VVar8.unknown = (undefined *)puVar14;
  FUN_10002a29c(puVar14,&DAT_10055a860,&DAT_10042f230);
  VVar8 = SwiftUI::VerticalAlignment::get_center(VVar8);
  *puVar14 = VVar8.unknown;
  puVar14[1] = 0;
  *(undefined1 *)(puVar14 + 2) = 1;
  FUN_1002d3824((long)puVar14 + (long)*(int *)(puVar9 + 0x2c),puVar1);
  lVar3 = local_88;
  lVar2 = local_90;
  pcVar15 = *(code **)(local_88 + 0x10);
  (*pcVar15)(local_90,local_68,puVar7);
  lVar4 = local_80;
  (*pcVar15)(local_80,lVar13,puVar7);
  lVar5 = local_78;
  FUN_1000087e4(puVar14,local_78,&DAT_10055a860,&DAT_10042f230);
  lVar6 = local_70;
  (*pcVar15)(local_70,lVar2,puVar7);
  puVar9 = &DAT_10055a8d0;
  FUN_100002f94(&DAT_10055a8d0,&DAT_10042ea88);
  (*pcVar15)(lVar6 + *(int *)(puVar9 + 0x30),lVar4,puVar7);
  FUN_1000087e4(lVar5,lVar6 + *(int *)(puVar9 + 0x40),&DAT_10055a860,&DAT_10042f230);
  FUN_10002a29c(puVar14,&DAT_10055a860,&DAT_10042f230);
  pcVar15 = *(code **)(lVar3 + 8);
  (*pcVar15)(lVar13,puVar7);
  (*pcVar15)(local_68,puVar7);
  FUN_10002a29c(lVar5,&DAT_10055a860,&DAT_10042f230);
  (*pcVar15)(lVar4,puVar7);
  (*pcVar15)(lVar2,puVar7);
  return;
}

