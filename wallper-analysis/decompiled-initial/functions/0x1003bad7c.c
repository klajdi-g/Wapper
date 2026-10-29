// rea decompile_all
// name: FUN_1003bad7c
// address: 0x1003bad7c
// body: available
// range: 0x1003bad7c-0x1003bade3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bad7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_10055ffa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055ffa8;
  FUN_100002fe4(&DAT_10055ffa8,&DAT_100435a50);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278;
  puStack_18 = PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278;
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar1,&local_20);
  DAT_10055ffa0 = puVar2;
  return;
}

