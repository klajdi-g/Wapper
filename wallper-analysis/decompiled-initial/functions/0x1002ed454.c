// rea decompile_all
// name: FUN_1002ed454
// address: 0x1002ed454
// body: available
// range: 0x1002ed454-0x1002ed533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ed454(undefined8 param_1)

{
  undefined *puVar1;
  State SVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  puVar1 = &DAT_10055b030;
  FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_1002f58d4();
  SVar2.unknown = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  SwiftUI::State::get_wrappedValue(SVar2);
  lVar3 = 0;
  FUN_1002f58e8();
  puVar4 = puVar5;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar5,1,lVar3);
  FUN_10002a29c(puVar5,&DAT_10055b030,&DAT_10042f8c0);
  *(bool *)param_1 = (int)puVar4 != 1;
  return;
}

