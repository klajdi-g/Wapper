// rea decompile_all
// name: FUN_1000dbb00
// address: 0x1000dbb00
// body: available
// range: 0x1000dbb00-0x1000dbbd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dbb00(long param_1)

{
  undefined *puVar1;
  ulong local_48;
  State local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  local_40.unknown = *(undefined **)(param_1 + 0x40);
  local_48 = local_48 & 0xffffffffffffff00;
  puVar1 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_40,&local_48,puVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  local_40.unknown = *(undefined **)(param_1 + 0x60);
  local_48 = local_48 & 0xffffffffffffff00;
  SwiftUI::State::set_wrappedValue(&local_40,&local_48,puVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x58);
  local_40.unknown = *(undefined **)(param_1 + 0x50);
  local_48 = local_48 & 0xffffffffffffff00;
  SwiftUI::State::set_wrappedValue(&local_40,&local_48,puVar1);
  local_48 = *(ulong *)(param_1 + 0xc0);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  local_40.unknown = *(undefined **)(param_1 + 0x70);
  puVar1 = &DAT_100550940;
  FUN_100002f94(&DAT_100550940,&DAT_100422368);
  SwiftUI::State::set_wrappedValue(&local_40,&local_48,puVar1);
  return;
}

