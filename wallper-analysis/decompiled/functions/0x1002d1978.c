// rea decompile_all
// name: FUN_1002d1978
// address: 0x1002d1978
// body: available
// range: 0x1002d1978-0x1002d1d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d1978(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  VerticalAlignment VVar6;
  LocalizedStringKey LVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  String stringLiteral;
  long alStack_b0 [2];
  undefined8 *local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  
  puVar5 = &DAT_10055a860;
  local_70 = param_1;
  FUN_100002f94(&DAT_10055a860,&DAT_10042f230);
  local_90 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar11 = (undefined8 *)((long)alStack_b0 + lVar1);
  puVar5 = &DAT_10055a868;
  FUN_100002f94(&DAT_10055a868,&DAT_10042ea10);
  local_80 = *(long *)(puVar5 + -8);
  local_78 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  lVar9 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  puVar5 = &DAT_10055a870;
  FUN_100002f94(&DAT_10055a870,&DAT_10042ea18);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined8 *)(lVar10 - extraout_x12_00);
  VVar6.unknown = &DAT_10055a7e0;
  FUN_100002f94(&DAT_10055a7e0,&DAT_10042e9c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar6.unknown + -8) + 0x40));
  lVar10 = (long)puVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_68 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = (undefined8 *)(lVar10 - extraout_x12_01);
  VVar6 = SwiftUI::VerticalAlignment::get_center(VVar6);
  *puVar14 = VVar6.unknown;
  puVar14[1] = 0x4020000000000000;
  *(undefined1 *)(puVar14 + 2) = 0;
  puVar5 = &DAT_10055a878;
  FUN_100002f94(&DAT_10055a878,&DAT_10042f4f0);
  VVar6.unknown = param_2;
  FUN_1002d1d98((long)puVar14 + (long)*(int *)(puVar5 + 0x2c));
  VVar6 = SwiftUI::VerticalAlignment::get_center(VVar6);
  *puVar13 = VVar6.unknown;
  puVar13[1] = 0x4020000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar5 = &DAT_10055a880;
  FUN_100002f94(&DAT_10055a880,&DAT_10042ea20);
  VVar6.unknown = param_2;
  local_a0 = puVar13;
  FUN_1002d2274((long)puVar13 + (long)*(int *)(puVar5 + 0x2c));
  VVar6 = SwiftUI::VerticalAlignment::get_center(VVar6);
  *puVar11 = VVar6.unknown;
  *(undefined8 *)((long)alStack_b0 + lVar1 + 8) = 0;
  *(undefined1 *)((long)&local_a0 + lVar1) = 1;
  puVar5 = &DAT_10055a888;
  FUN_100002f94(&DAT_10055a888,&DAT_10042ea28);
  FUN_1002d2738((long)puVar11 + (long)*(int *)(puVar5 + 0x2c),param_2);
  uVar8 = 0x80000001004e4500;
  stringLiteral.bridgeObject = (void *)0x80000001004e4500;
  stringLiteral.str = (char *)0xd000000000000087;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1000087a0(&DAT_10055a890,&DAT_10055a860,&DAT_10042f230,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  alStack_b0[1] = lVar9;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar7);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(uVar8);
  FUN_10002a29c(puVar11,&DAT_10055a860,&DAT_10042f230);
  lVar4 = local_68;
  FUN_1000087e4(puVar14,local_68,&DAT_10055a7e0,&DAT_10042e9c8);
  lVar1 = local_98;
  FUN_1000087e4(puVar13,local_98,&DAT_10055a870,&DAT_10042ea18);
  puVar3 = local_78;
  lVar2 = local_80;
  lVar10 = local_88;
  pcVar12 = *(code **)(local_80 + 0x10);
  (*pcVar12)(local_88,lVar9,local_78);
  lVar9 = local_70;
  FUN_1000087e4(lVar4,local_70,&DAT_10055a7e0,&DAT_10042e9c8);
  puVar5 = &DAT_10055a898;
  FUN_100002f94(&DAT_10055a898,&DAT_10042ea30);
  FUN_1000087e4(lVar1,lVar9 + *(int *)(puVar5 + 0x30),&DAT_10055a870);
  (*pcVar12)(lVar9 + *(int *)(puVar5 + 0x40),lVar10,puVar3);
  pcVar12 = *(code **)(lVar2 + 8);
  (*pcVar12)(alStack_b0[1],puVar3);
  FUN_10002a29c(local_a0,&DAT_10055a870,&DAT_10042ea18);
  FUN_10002a29c(puVar14,&DAT_10055a7e0,&DAT_10042e9c8);
  (*pcVar12)(lVar10,puVar3);
  FUN_10002a29c(lVar1,&DAT_10055a870,&DAT_10042ea18);
  FUN_10002a29c(local_68,&DAT_10055a7e0,&DAT_10042e9c8);
  return;
}

