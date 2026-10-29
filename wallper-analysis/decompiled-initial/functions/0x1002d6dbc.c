// rea decompile_all
// name: FUN_1002d6dbc
// address: 0x1002d6dbc
// body: available
// range: 0x1002d6dbc-0x1002d6f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d6dbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  ppuVar11 = &local_90;
  ppuVar12 = &local_90;
  ppuVar13 = &local_90;
  puVar4 = &DAT_10055a718;
  FUN_100002fe4(&DAT_10055a718,&DAT_10042e980);
  puVar5 = &DAT_10054def0;
  FUN_100002fe4(&DAT_10054def0,&DAT_100422df0);
  puVar6 = &DAT_10055a710;
  FUN_100002fe4(&DAT_10055a710,&DAT_10042e978);
  puVar7 = &DAT_10054e178;
  FUN_100002fe4(&DAT_10054e178,&DAT_10042f440);
  puVar8 = &DAT_10055a708;
  FUN_100002fe4(&DAT_10055a708,&DAT_10042e970);
  puVar9 = &DAT_10055a700;
  FUN_100002fe4(&DAT_10055a700,&DAT_10042e968);
  puVar10 = puVar9;
  FUN_1002d64d0();
  puVar3 = PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78;
  puVar2 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar1 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
  ;
  puStack_88 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puStack_78 = PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78;
  local_90 = puVar9;
  local_80 = puVar10;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
             ,1);
  puStack_88 = puVar2;
  puStack_78 = puVar3;
  local_90 = puVar8;
  local_80 = (undefined *)ppuVar11;
  _swift_getOpaqueTypeConformance2(&local_90,puVar1,1);
  puVar8 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar2 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
  ;
  puVar1 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar9 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  local_80 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_68 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  local_90 = puVar6;
  puStack_88 = puVar7;
  puStack_78 = (undefined *)ppuVar12;
  local_70 = puVar8;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
             ,1);
  puVar6 = &DAT_100550838;
  FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  local_80 = puVar1;
  puStack_68 = puVar9;
  local_90 = puVar4;
  puStack_88 = puVar5;
  puStack_78 = (undefined *)ppuVar13;
  local_70 = puVar6;
  _swift_getOpaqueTypeConformance2(&local_90,puVar2,1);
  return;
}

