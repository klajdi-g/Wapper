// rea decompile_all
// name: thunk_FUN_1003ef75c
// address: 0x1003ef758
// body: available
// range: 0x1003ef758-0x1003ef75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1003ef75c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100560cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100560940;
  FUN_100002fe4(&DAT_100560940,&DAT_1004364e8);
  puVar2 = puVar1;
  FUN_1003ef7d4();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&puStack_30);
  DAT_100560cb8 = puVar3;
  return;
}

