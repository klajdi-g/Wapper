// rea decompile_all
// name: FUN_1000bd274
// address: 0x1000bd274
// body: available
// range: 0x1000bd274-0x1000bd32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bd274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = &DAT_1005507e8;
  FUN_100002fe4(&DAT_1005507e8,&DAT_1004221a0);
  puVar2 = &DAT_10054e178;
  FUN_100002fe4(&DAT_10054e178,&DAT_10042f440);
  puVar3 = puVar2;
  FUN_1000bcbd0();
  puVar4 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_60 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_48 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  local_70 = puVar1;
  puStack_68 = puVar2;
  puStack_58 = puVar3;
  local_50 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
             ,1);
  return;
}

