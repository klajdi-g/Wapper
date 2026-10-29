// rea decompile_all
// name: FUN_1002c7650
// address: 0x1002c7650
// body: available
// range: 0x1002c7650-0x1002c7993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c7650(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  VerticalAlignment VVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long local_80 [4];
  
  puVar2 = &DAT_10055a578;
  local_80[2] = param_7;
  local_80[3] = param_1;
  FUN_100002f94(&DAT_10055a578,&DAT_10042e5c0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar4 = (long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = (undefined8 *)(lVar4 - extraout_x12);
  puVar2 = &DAT_10055a580;
  FUN_100002f94(&DAT_10055a580,&DAT_10042e5c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar9 = (undefined8 *)(lVar7 - extraout_x12_00);
  VVar3.unknown = &DAT_10055a588;
  FUN_100002f94(&DAT_10055a588,&DAT_10042e5d0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar3.unknown + -8) + 0x40));
  lVar5 = (long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = (undefined8 *)(lVar5 - extraout_x12_01);
  VVar3 = SwiftUI::VerticalAlignment::get_center(VVar3);
  *puVar6 = VVar3.unknown;
  puVar6[1] = 0x4024000000000000;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar2 = &DAT_10055a590;
  FUN_100002f94(&DAT_10055a590,&DAT_10042e5d8);
  VVar3.unknown = param_2;
  FUN_1002c7994((long)puVar6 + (long)*(int *)(puVar2 + 0x2c),param_2,param_3,param_4,param_5,param_6
               );
  VVar3 = SwiftUI::VerticalAlignment::get_center(VVar3);
  *puVar9 = VVar3.unknown;
  puVar9[1] = 0x4020000000000000;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar2 = &DAT_10055a598;
  FUN_100002f94(&DAT_10055a598,&DAT_10042e5e0);
  VVar3.unknown = param_6;
  FUN_1002c8758((long)puVar9 + (long)*(int *)(puVar2 + 0x2c),param_6,param_2,param_3,param_4,param_5
                ,local_80[2]);
  VVar3 = SwiftUI::VerticalAlignment::get_center(VVar3);
  *puVar8 = VVar3.unknown;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  puVar2 = &DAT_10055a508;
  FUN_100002f94(&DAT_10055a508,&DAT_10042fb70);
  FUN_1002c8c08((long)puVar8 + (long)*(int *)(puVar2 + 0x2c),param_6);
  local_80[0] = lVar5;
  FUN_1000087e4(puVar6,lVar5,&DAT_10055a588,&DAT_10042e5d0);
  FUN_1002ca85c(puVar9,lVar7);
  lVar4 = local_80[1];
  FUN_1000087e4(puVar8,local_80[1],&DAT_10055a578,&DAT_10042e5c0);
  lVar1 = local_80[3];
  FUN_1000087e4(lVar5,local_80[3],&DAT_10055a588,&DAT_10042e5d0);
  puVar2 = &DAT_10055a5a0;
  FUN_100002f94(&DAT_10055a5a0,&DAT_10042e5f0);
  FUN_1002ca85c(lVar7,lVar1 + *(int *)(puVar2 + 0x30));
  FUN_1000087e4(lVar4,lVar1 + *(int *)(puVar2 + 0x40),&DAT_10055a578,&DAT_10042e5c0);
  FUN_10002a29c(puVar8,&DAT_10055a578,&DAT_10042e5c0);
  FUN_1002ca8ac(puVar9);
  FUN_10002a29c(puVar6,&DAT_10055a588,&DAT_10042e5d0);
  FUN_10002a29c(lVar4,&DAT_10055a578,&DAT_10042e5c0);
  FUN_1002ca8ac(lVar7);
  FUN_10002a29c(local_80[0],&DAT_10055a588,&DAT_10042e5d0);
  return;
}

