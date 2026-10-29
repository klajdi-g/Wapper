// rea decompile_all
// name: FUN_10040fd80
// address: 0x10040fd80
// body: available
// range: 0x10040fd80-0x10040fe7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040fd80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_70 [16];
  
  puVar1 = &DAT_100561b60;
  FUN_100002f94(&DAT_100561b60,&DAT_100437d50);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_100561b68,&DAT_100437d58);
  FUN_10041027c();
  SwiftUI::Settings::_init();
  puVar2 = &DAT_100561c10;
  FUN_1000087a0(&DAT_100561c10,&DAT_100561b60,&DAT_100437d50,
                PTR_SwiftUI__SwiftUI__Settings<undefined>_>SwiftUI__Scene_1005236a0);
  SwiftUI::SceneBuilder::_buildBlock(param_1,auStack_70 + -extraout_x8,puVar1,puVar2);
  (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  return;
}

