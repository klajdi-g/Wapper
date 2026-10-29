// rea decompile_all
// name: FUN_1000da214
// address: 0x1000da214
// body: available
// range: 0x1000da214-0x1000da26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000da214(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  Alignment AVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_3;
  AVar1 = SwiftUI::Alignment::get_top(param_2);
  *param_1 = AVar1.unknown;
  param_1[1] = uVar3;
  puVar2 = &DAT_1005516e0;
  FUN_100002f94(&DAT_1005516e0,&DAT_100423558);
  FUN_1000da270((long)param_1 + (long)*(int *)(puVar2 + 0x2c),param_3,param_2.unknown);
  return;
}

