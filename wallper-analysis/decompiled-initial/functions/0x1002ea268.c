// rea decompile_all
// name: FUN_1002ea268
// address: 0x1002ea268
// body: available
// range: 0x1002ea268-0x1002ea38f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ea268(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  
  ppuVar5 = &local_80;
  puVar1 = &DAT_10055ac28;
  FUN_100002fe4(&DAT_10055ac28,&DAT_10042f418);
  puVar2 = &DAT_10054e178;
  FUN_100002fe4(&DAT_10054e178,&DAT_10042f440);
  puVar3 = &DAT_10055ac20;
  FUN_100002fe4(&DAT_10055ac20,&DAT_10042f410);
  puVar4 = &DAT_10055ac58;
  FUN_1000087a0(&DAT_10055ac58,&DAT_10055ac20,&DAT_10042f410,
                PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
               );
  puStack_78 = PTR___type_metadata_for_Swift_Double_100523b90;
  puStack_68 = PTR___protocol_witness_table_for_Swift_Double___Swift_Equatable_in_Swift_100523ba0;
  local_80 = puVar3;
  local_70 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  puVar3 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_70 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_58 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  local_80 = puVar1;
  puStack_78 = puVar2;
  puStack_68 = (undefined *)ppuVar5;
  local_60 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
             ,1);
  return;
}

