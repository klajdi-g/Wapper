// rea decompile_all
// name: FUN_1002c6b34
// address: 0x1002c6b34
// body: available
// range: 0x1002c6b34-0x1002c6b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c6b34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_10055a378;
  FUN_100002fe4(&DAT_10055a378,&DAT_10042e188);
  puVar2 = puVar1;
  FUN_1002c28b8();
  puStack_38 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puStack_28 = PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78;
  local_40 = puVar1;
  local_30 = puVar2;
  _swift_getOpaqueTypeConformance2
            (&local_40,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  return;
}

