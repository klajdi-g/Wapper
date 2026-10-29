// rea decompile_all
// name: FUN_1002cee0c
// address: 0x1002cee0c
// body: available
// range: 0x1002cee0c-0x1002cf09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cee0c(long param_1,long param_2)

{
  undefined *puVar1;
  VerticalAlignment VVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_80;
  char local_71;
  undefined8 local_70 [2];
  
  puVar1 = &DAT_10055a8d8;
  FUN_100002f94(&DAT_10055a8d8,&DAT_10042ea90);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar3 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = (undefined8 *)(lVar3 - extraout_x12);
  VVar2.unknown = &DAT_10055a7e0;
  FUN_100002f94(&DAT_10055a7e0,&DAT_10042e9c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar2.unknown + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = (undefined8 *)(lVar5 - extraout_x12_00);
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  *puVar6 = VVar2.unknown;
  puVar6[1] = 0x4020000000000000;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar1 = &DAT_10055a878;
  FUN_100002f94(&DAT_10055a878,&DAT_10042f4f0);
  FUN_1002cf0a0((long)puVar6 + (long)*(int *)(puVar1 + 0x2c),param_2);
  local_70[1] = *(undefined8 *)(param_2 + 0x60);
  local_70[0] = *(undefined8 *)(param_2 + 0x58);
  VVar2.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)VVar2.unknown);
  if (local_71 == '\x01') {
    VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
    *puVar4 = VVar2.unknown;
    puVar4[1] = 0;
    *(undefined1 *)(puVar4 + 2) = 1;
    puVar1 = &DAT_10055a888;
    FUN_100002f94(&DAT_10055a888,&DAT_10042ea28);
    FUN_1002cf460((long)puVar4 + (long)*(int *)(puVar1 + 0x2c));
  }
  puVar1 = &DAT_10055a860;
  FUN_100002f94(&DAT_10055a860,&DAT_10042f230);
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(puVar4,local_71 != '\x01',1,puVar1);
  FUN_1000087e4(puVar6,lVar5,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_1000087e4(puVar4,lVar3,&DAT_10055a8d8,&DAT_10042ea90);
  FUN_1000087e4(lVar5,param_1,&DAT_10055a7e0,&DAT_10042e9c8);
  puVar1 = &DAT_10055a8e0;
  FUN_100002f94(&DAT_10055a8e0,&DAT_10042ea98);
  FUN_1000087e4(lVar3,param_1 + *(int *)(puVar1 + 0x30),&DAT_10055a8d8,&DAT_10042ea90);
  FUN_10002a29c(puVar4,&DAT_10055a8d8,&DAT_10042ea90);
  FUN_10002a29c(puVar6,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_10002a29c(lVar3,&DAT_10055a8d8,&DAT_10042ea90);
  FUN_10002a29c(lVar5,&DAT_10055a7e0,&DAT_10042e9c8);
  return;
}

