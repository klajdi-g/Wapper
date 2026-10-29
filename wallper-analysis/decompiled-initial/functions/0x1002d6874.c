// rea decompile_all
// name: FUN_1002d6874
// address: 0x1002d6874
// body: available
// range: 0x1002d6874-0x1002d6917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d6874(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  if (DAT_10055a858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055a840;
  FUN_100002fe4(&DAT_10055a840,&DAT_10042ea00);
  puVar2 = &DAT_10055a850;
  FUN_1000087a0(&DAT_10055a850,&DAT_10055a848,&DAT_10042ea08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_38 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  local_28 = PTR___protocol_witness_table_for_SwiftUI_EmptyView___SwiftUI_View_in_SwiftUI_100523748;
  puVar3 = PTR__SwiftUI__SwiftUI__Section<undefined,undefined,undefined>_>SwiftUI__View_1005235e0;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__Section<undefined,undefined,undefined>_>SwiftUI__View_1005235e0,
             puVar1,&local_38);
  DAT_10055a858 = puVar3;
  return;
}

