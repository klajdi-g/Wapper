// rea decompile_all
// name: FUN_1003b1a80
// address: 0x1003b1a80
// body: available
// range: 0x1003b1a80-0x1003b1b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b1a80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_10055fb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055fb70;
  FUN_100002fe4(&DAT_10055fb70,&DAT_1004354f8);
  puVar2 = &DAT_10055fb50;
  FUN_1000087a0(&DAT_10055fb50,&DAT_10055fb48,&DAT_1004354e8,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100522988);
  local_30 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar1,&local_30);
  DAT_10055fb68 = puVar3;
  return;
}

