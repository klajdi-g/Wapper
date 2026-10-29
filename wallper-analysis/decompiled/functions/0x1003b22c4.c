// rea decompile_all
// name: FUN_1003b22c4
// address: 0x1003b22c4
// body: available
// range: 0x1003b22c4-0x1003b239f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b22c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **local_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_10055fb88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055fb80;
  FUN_100002fe4(&DAT_10055fb80,&DAT_100435568);
  puVar2 = &DAT_10054b570;
  FUN_100002fe4(&DAT_10054b570,&DAT_100433140);
  puVar3 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  local_50 = PTR___type_metadata_for_SwiftUI_AnyView_1005234f8;
  local_40 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  ppuVar4 = &local_50;
  puStack_48 = puVar2;
  puStack_38 = puVar3;
  _swift_getOpaqueTypeConformance2
            (ppuVar4,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_tabItem<A_where_A1:_SwiftUI_View>(()__>_A1)__>_some>>_100523118
             ,1);
  puVar2 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598;
  local_58 = ppuVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598,
             puVar1,&local_58);
  DAT_10055fb88 = puVar2;
  return;
}

