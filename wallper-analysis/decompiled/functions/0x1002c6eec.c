// rea decompile_all
// name: thunk_FUN_1002c6ef0
// address: 0x1002c6eec
// body: available
// range: 0x1002c6eec-0x1002c6eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1002c6ef0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_10055a530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055a538;
  FUN_100002fe4(&DAT_10055a538,&DAT_10042e460);
  puVar2 = &DAT_10055a4e8;
  FUN_1000087a0(&DAT_10055a4e8,&DAT_10055a4e0,&DAT_10042e3f0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puStack_38 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI_EmptyView___SwiftUI_View_in_SwiftUI_100523748;
  puVar3 = PTR__SwiftUI__SwiftUI__Section<undefined,undefined,undefined>_>SwiftUI__View_1005235e0;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__Section<undefined,undefined,undefined>_>SwiftUI__View_1005235e0,
             puVar1,&puStack_38);
  DAT_10055a530 = puVar3;
  return;
}

