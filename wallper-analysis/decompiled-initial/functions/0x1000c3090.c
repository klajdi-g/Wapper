// rea decompile_all
// name: FUN_1000c3090
// address: 0x1000c3090
// body: available
// range: 0x1000c3090-0x1000c3157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c3090(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  long extraout_x8;
  long extraout_x12;
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = (long)puVar2 - extraout_x12;
  (*param_3)(puVar2);
  pcVar1 = *(code **)(lVar4 + 0x10);
  (*pcVar1)(lVar3,puVar2,param_5);
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(puVar2,param_5);
  (*pcVar1)(param_1,lVar3,param_5);
  (*pcVar5)(lVar3,param_5);
  return;
}

