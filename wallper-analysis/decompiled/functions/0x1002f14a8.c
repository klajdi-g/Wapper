// rea decompile_all
// name: FUN_1002f14a8
// address: 0x1002f14a8
// body: available
// range: 0x1002f14a8-0x1002f15f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f14a8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  
  puVar2 = &DAT_10055b030;
  FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar3 = 0;
  FUN_1002f58e8();
  if (*(char *)(param_1 + *(int *)(lVar3 + 0x28)) == '\x01') {
    FUN_100029504(param_1,lVar5,FUN_1002f58e8);
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,0,1,lVar3);
    lVar3 = 0;
    FUN_1002f58d4();
    iVar1 = *(int *)(lVar3 + 0x40);
    FUN_1000087e4(lVar5,puVar4,&DAT_10055b030,&DAT_10042f8c0);
    puVar2 = &DAT_10055b0f0;
    FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
    SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),puVar4,puVar2);
    FUN_10002a29c(lVar5,&DAT_10055b030,&DAT_10042f8c0);
  }
  else {
    FUN_1002eda14(param_1);
  }
  return;
}

