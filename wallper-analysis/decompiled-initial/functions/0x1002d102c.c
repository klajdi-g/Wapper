// rea decompile_all
// name: FUN_1002d102c
// address: 0x1002d102c
// body: available
// range: 0x1002d102c-0x1002d12eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d102c(long param_1,long param_2)

{
  undefined *puVar1;
  VerticalAlignment VVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long alStack_80 [2];
  undefined8 local_70 [2];
  
  puVar1 = &DAT_10055a8d8;
  FUN_100002f94(&DAT_10055a8d8,&DAT_10042ea90);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar3 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = (undefined8 *)(lVar3 - extraout_x12);
  VVar2.unknown = &DAT_10055a7e0;
  FUN_100002f94(&DAT_10055a7e0,&DAT_10042e9c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar2.unknown + -8) + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = (undefined8 *)(lVar6 - extraout_x12_00);
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  *puVar7 = VVar2.unknown;
  puVar7[1] = 0x4020000000000000;
  *(undefined1 *)(puVar7 + 2) = 0;
  puVar1 = &DAT_10055a878;
  FUN_100002f94(&DAT_10055a878,&DAT_10042f4f0);
  FUN_1002d12ec((long)puVar7 + (long)*(int *)(puVar1 + 0x2c),param_2);
  SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(param_2 + 0x28));
  if ((char)local_70[0] == '\x01') {
    local_70[1] = *(undefined8 *)(param_2 + 0x70);
    local_70[0] = *(undefined8 *)(param_2 + 0x68);
    VVar2.unknown = &DAT_10055a7a8;
    FUN_100002f94(&DAT_10055a7a8,&DAT_10042e9a0);
    SwiftUI::State::get_wrappedValue((State)VVar2.unknown);
    uVar4 = 1;
    if (alStack_80[1] == 1) {
      VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
      *puVar5 = VVar2.unknown;
      puVar5[1] = 0;
      *(undefined1 *)(puVar5 + 2) = 1;
      puVar1 = &DAT_10055a888;
      FUN_100002f94(&DAT_10055a888,&DAT_10042ea28);
      FUN_1002d16bc((long)puVar5 + (long)*(int *)(puVar1 + 0x2c),param_2);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  puVar1 = &DAT_10055a860;
  FUN_100002f94(&DAT_10055a860,&DAT_10042f230);
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(puVar5,uVar4,1,puVar1);
  FUN_1000087e4(puVar7,lVar6,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_1000087e4(puVar5,lVar3,&DAT_10055a8d8,&DAT_10042ea90);
  FUN_1000087e4(lVar6,param_1,&DAT_10055a7e0,&DAT_10042e9c8);
  puVar1 = &DAT_10055a8e0;
  FUN_100002f94(&DAT_10055a8e0,&DAT_10042ea98);
  FUN_1000087e4(lVar3,param_1 + *(int *)(puVar1 + 0x30),&DAT_10055a8d8,&DAT_10042ea90);
  FUN_10002a29c(puVar5,&DAT_10055a8d8,&DAT_10042ea90);
  FUN_10002a29c(puVar7,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_10002a29c(lVar3,&DAT_10055a8d8,&DAT_10042ea90);
  FUN_10002a29c(lVar6,&DAT_10055a7e0,&DAT_10042e9c8);
  return;
}

