// rea decompile_all
// name: FUN_1000d45bc
// address: 0x1000d45bc
// body: available
// range: 0x1000d45bc-0x1000d4633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d45bc(long *param_1,long *param_2)

{
  undefined *puVar1;
  long local_50;
  undefined1 local_48;
  State local_40;
  long lStack_38;
  long local_30;
  
  local_48 = *param_2 == *param_1;
  local_50 = 0;
  if (!(bool)local_48) {
    local_50 = *param_2;
  }
  lStack_38 = param_1[0xb];
  local_40.unknown = (undefined *)param_1[10];
  local_30 = param_1[0xc];
  puVar1 = &DAT_100551460;
  FUN_100002f94(&DAT_100551460,&DAT_100423128);
  SwiftUI::State::set_wrappedValue(&local_40,&local_50,puVar1);
  return;
}

