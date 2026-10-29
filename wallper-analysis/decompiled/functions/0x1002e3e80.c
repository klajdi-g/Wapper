// rea decompile_all
// name: FUN_1002e3e80
// address: 0x1002e3e80
// body: available
// range: 0x1002e3e80-0x1002e409b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e3e80(long param_1,undefined *param_2)

{
  undefined *puVar1;
  VerticalAlignment VVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = &DAT_10055a7e0;
  FUN_100002f94(&DAT_10055a7e0,&DAT_10042e9c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = (undefined8 *)(puVar3 + -extraout_x12);
  VVar2.unknown = &DAT_10055adf0;
  FUN_100002f94(&DAT_10055adf0,&DAT_10042f5d8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar2.unknown + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = (undefined8 *)(lVar5 - extraout_x12_00);
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  *puVar6 = VVar2.unknown;
  puVar6[1] = 0x4020000000000000;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar1 = &DAT_10055adf8;
  FUN_100002f94(&DAT_10055adf8,&DAT_10042f5e0);
  VVar2.unknown = param_2;
  FUN_1002e409c((long)puVar6 + (long)*(int *)(puVar1 + 0x2c));
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  *puVar4 = VVar2.unknown;
  puVar4[1] = 0x4020000000000000;
  *(undefined1 *)(puVar4 + 2) = 0;
  puVar1 = &DAT_10055a878;
  FUN_100002f94(&DAT_10055a878,&DAT_10042f4f0);
  FUN_1002e48f4((undefined1 *)((long)puVar4 + (long)*(int *)(puVar1 + 0x2c)),param_2);
  FUN_1000087e4(puVar6,lVar5,&DAT_10055adf0,&DAT_10042f5d8);
  FUN_1000087e4(puVar4,puVar3,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_1000087e4(lVar5,param_1,&DAT_10055adf0,&DAT_10042f5d8);
  puVar1 = &DAT_10055ae00;
  FUN_100002f94(&DAT_10055ae00,&DAT_10042f5e8);
  FUN_1000087e4(puVar3,param_1 + *(int *)(puVar1 + 0x30),&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_10002a29c(puVar4,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_10002a29c(puVar6,&DAT_10055adf0,&DAT_10042f5d8);
  FUN_10002a29c(puVar3,&DAT_10055a7e0,&DAT_10042e9c8);
  FUN_10002a29c(lVar5,&DAT_10055adf0,&DAT_10042f5d8);
  return;
}

