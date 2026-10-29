// rea decompile_all
// name: FUN_1002e9dec
// address: 0x1002e9dec
// body: available
// range: 0x1002e9dec-0x1002e9e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e9dec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **local_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_10055ad78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055ad68;
  FUN_100002fe4(&DAT_10055ad68,&DAT_10042f540);
  puVar2 = puVar1;
  FUN_1002e9dac();
  local_40 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_38 = &DAT_100539238;
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  ppuVar3 = &local_40;
  puStack_28 = puVar2;
  _swift_getOpaqueTypeConformance2(ppuVar3,&DAT_100437f4c,1);
  puVar2 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598;
  local_48 = ppuVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598,
             puVar1,&local_48);
  DAT_10055ad78 = puVar2;
  return;
}

