// rea decompile_all
// name: FUN_1003a7e2c
// address: 0x1003a7e2c
// body: available
// range: 0x1003a7e2c-0x1003a7efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a7e2c(undefined8 *param_1,Animation param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Animation AVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  AVar1 = SwiftUI::Animation::easeOut(0.18,param_2);
  puVar2 = &DAT_1005568d0;
  FUN_100002f94(&DAT_1005568d0,&DAT_10042a800);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x20) = param_2.unknown;
  puVar3 = puVar2;
  FUN_10026818c();
  _swift_setDeallocating(puVar2);
  *param_1 = param_2.unknown;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = puVar3;
  param_1[6] = 0;
  param_1[7] = param_2.unknown;
  param_1[8] = 0;
  param_1[9] = 0x4030000000000000;
  param_1[10] = AVar1.unknown;
  return;
}

