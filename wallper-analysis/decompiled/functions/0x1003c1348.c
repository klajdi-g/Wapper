// rea decompile_all
// name: FUN_1003c1348
// address: 0x1003c1348
// body: available
// range: 0x1003c1348-0x1003c13f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c1348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  State SVar4;
  undefined *puVar5;
  char local_41;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar3 = 0;
  FUN_1003cff30();
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar3 + 0x5c));
  local_38 = *(undefined8 *)(puVar1 + 8);
  local_40 = CONCAT71(local_40._1_7_,*puVar1);
  SVar4.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar4);
  if (local_41 == '\x01') {
    iVar2 = *(int *)(lVar3 + 100);
    puVar5 = &DAT_10054ba40;
    local_40 = param_4;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),&local_40,puVar5);
  }
  return;
}

