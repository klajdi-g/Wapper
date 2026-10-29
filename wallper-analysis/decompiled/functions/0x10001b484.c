// rea decompile_all
// name: FUN_10001b484
// address: 0x10001b484
// body: available
// range: 0x10001b484-0x10001b4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001b484(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined1 local_21;
  
                    /* WARNING: Load size is inaccurate */
  local_21 = *param_1;
  uVar1 = (uint)(byte)local_21;
  SwiftUI::AppStorage::set_wrappedValue
            (local_21,&local_21,*(undefined8 *)(param_4 + 0xd0),
             PTR___type_metadata_for_Swift_Bool_100523b70);
  if (uVar1 == 1) {
    SwiftUI::AppStorage::set_wrappedValue();
  }
  return;
}

