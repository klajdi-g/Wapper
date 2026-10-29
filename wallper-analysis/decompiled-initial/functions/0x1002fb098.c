// rea decompile_all
// name: FUN_1002fb098
// address: 0x1002fb098
// body: available
// range: 0x1002fb098-0x1002fb24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fb098(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  puVar3 = &DAT_10055b1e8;
  FUN_100002fe4(&DAT_10055b1e8,&DAT_10042fa08);
  puVar4 = &DAT_10054e178;
  FUN_100002fe4(&DAT_10054e178,&DAT_10042f440);
  uVar5 = 0xff;
  FUN_1002f58e8();
  puVar6 = &DAT_10055b1e0;
  FUN_100002fe4(&DAT_10055b1e0,&DAT_10042fa00);
  puVar7 = &DAT_10055b1d8;
  FUN_100002fe4(&DAT_10055b1d8,&DAT_10042f9f8);
  puVar8 = &DAT_10055b1d0;
  FUN_100002fe4(&DAT_10055b1d0,&DAT_10042f9f0);
  puVar9 = &DAT_10055b218;
  FUN_1000087a0(&DAT_10055b218,&DAT_10055b1d0,&DAT_10042f9f0,
                PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
               );
  puStack_90 = PTR___type_metadata_for_Swift_Int_100523bd8;
  puStack_80 = (undefined8 *)
               PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8;
  ppuVar10 = &local_98;
  local_98 = puVar8;
  local_88 = puVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  puVar8 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar2 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
  ;
  puVar1 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar9 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  local_88 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_70 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  ppuVar11 = &local_98;
  local_98 = puVar7;
  puStack_90 = puVar4;
  puStack_80 = ppuVar10;
  local_78 = (undefined8 *)puVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar11,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
             ,1);
  local_88 = puVar1;
  puStack_70 = puVar9;
  ppuVar10 = &local_98;
  local_98 = puVar6;
  puStack_90 = puVar4;
  puStack_80 = ppuVar11;
  local_78 = (undefined8 *)puVar8;
  _swift_getOpaqueTypeConformance2(ppuVar10,puVar2,1);
  local_88 = puVar1;
  local_68 = puVar9;
  local_98 = puVar3;
  puStack_90 = puVar4;
  puStack_80 = (undefined8 *)uVar5;
  local_78 = ppuVar10;
  puStack_70 = puVar8;
  _swift_getOpaqueTypeConformance2
            (&local_98,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B,C_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,presenting:_C1_,actions:_(C1)__>_A1,message:_(C1)__>_B1___>_some>>_100523060
             ,1);
  return;
}

