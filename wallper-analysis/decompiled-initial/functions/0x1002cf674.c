// rea decompile_all
// name: FUN_1002cf674
// address: 0x1002cf674
// body: available
// range: 0x1002cf674-0x1002cf923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cf674(long param_1,long param_2)

{
  undefined8 *puVar1;
  Binding<bool> isOn;
  long lVar2;
  undefined *puVar3;
  VerticalAlignment VVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined8 auStack_70 [2];
  
  puVar3 = &DAT_10055a908;
  local_80 = param_1;
  FUN_100002f94(&DAT_10055a908,&DAT_10042eaf8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar7 - extraout_x12;
  VVar4.unknown = &DAT_10055a910;
  FUN_100002f94(&DAT_10055a910,&DAT_10042eb00);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar4.unknown + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = (undefined8 *)(lVar9 - extraout_x12_00);
  VVar4 = SwiftUI::VerticalAlignment::get_center(VVar4);
  *puVar10 = VVar4.unknown;
  puVar10[1] = 0x4020000000000000;
  *(undefined1 *)(puVar10 + 2) = 0;
  puVar5 = &DAT_10055a918;
  FUN_100002f94(&DAT_10055a918,&DAT_10042eb08);
  FUN_1002cf924((long)puVar10 + (long)*(int *)(puVar5 + 0x2c),param_2);
  SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(param_2 + 0x30));
  isOn.unknown._1_7_ = uStack_77;
  isOn.unknown._0_1_ = local_78;
  FUN_1002d6a30();
  SwiftUI::Toggle::_init(isOn);
  SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(param_2 + 0x28));
  puVar5 = &DAT_10042ea40;
  _swift_getKeyPath();
  puVar6 = &DAT_100538738;
  _swift_allocObject(&DAT_100538738,0x11,7);
  puVar6[0x10] = (local_78 ^ 0xff) & 1;
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar3 + 0x24));
  *puVar1 = puVar5;
  puVar1[1] = thunk_FUN_10006bca0;
  puVar1[2] = puVar6;
  FUN_1000087e4(puVar10,lVar9,&DAT_10055a910,&DAT_10042eb00);
  FUN_1000087e4(lVar8,lVar7,&DAT_10055a908,&DAT_10042eaf8);
  lVar2 = local_80;
  FUN_1000087e4(lVar9,local_80,&DAT_10055a910,&DAT_10042eb00);
  puVar3 = &DAT_10055a928;
  FUN_100002f94(&DAT_10055a928,&DAT_10042eb10);
  FUN_1000087e4(lVar7,lVar2 + *(int *)(puVar3 + 0x30),&DAT_10055a908,&DAT_10042eaf8);
  FUN_10002a29c(lVar8,&DAT_10055a908,&DAT_10042eaf8);
  FUN_10002a29c(puVar10,&DAT_10055a910,&DAT_10042eb00);
  FUN_10002a29c(lVar7,&DAT_10055a908,&DAT_10042eaf8);
  FUN_10002a29c(lVar9,&DAT_10055a910,&DAT_10042eb00);
  return;
}

