// rea decompile_all
// name: FUN_1002ba460
// address: 0x1002ba460
// body: available
// range: 0x1002ba460-0x1002ba5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ba460(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [15];
  undefined1 local_51;
  
  puVar2 = &DAT_100554ab8;
  FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)puVar4 - extraout_x12;
  FUN_100029504(param_2,lVar5,FUN_100400294);
  lVar3 = 0;
  FUN_100400294();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,0,1,lVar3);
  lVar3 = 0;
  FUN_1002bc1b0();
  iVar1 = *(int *)(lVar3 + 0x20);
  FUN_1000087e4(lVar5,puVar4,&DAT_100554ab8,&DAT_100427d98);
  puVar2 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),puVar4,puVar2);
  FUN_10002a29c(lVar5,&DAT_100554ab8,&DAT_100427d98);
  iVar1 = *(int *)(lVar3 + 0x24);
  local_51 = 1;
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_51,puVar2);
  return;
}

