// rea decompile_all
// name: FUN_1003a4a30
// address: 0x1003a4a30
// body: available
// range: 0x1003a4a30-0x1003a4ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a4a30(long param_1,long param_2)

{
  long lVar1;
  State SVar2;
  undefined8 uVar3;
  
  FUN_100029504(param_2,param_1,FUN_10025ee04);
  lVar1 = 0;
  FUN_1003a67f8();
  uVar3 = *(undefined8 *)(param_2 + *(int *)(lVar1 + 0x14));
  lVar1 = 0;
  FUN_1000c61a0();
  _swift_bridgeObjectRetain(uVar3);
  SVar2.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar2);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14)) = uVar3;
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x18)) = 0x4028000000000000;
  return;
}

