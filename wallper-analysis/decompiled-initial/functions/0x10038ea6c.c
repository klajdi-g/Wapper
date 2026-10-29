// rea decompile_all
// name: FUN_10038ea6c
// address: 0x10038ea6c
// body: available
// range: 0x10038ea6c-0x10038ebff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038ea6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  if (DAT_10055e6f8 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_10055de30;
  FUN_100002fe4(&DAT_10055de30,&DAT_100433660);
  puVar3 = &DAT_10055ddb0;
  FUN_100002fe4(&DAT_10055ddb0,&DAT_100433610);
  puVar4 = &DAT_10054e178;
  FUN_100002fe4(&DAT_10054e178,&DAT_10042f440);
  puVar5 = &DAT_10055dda8;
  FUN_100002fe4(&DAT_10055dda8,&DAT_100433608);
  puVar6 = &DAT_10054de90;
  FUN_100002fe4(&DAT_10054de90,&DAT_10041ed08);
  puVar7 = puVar6;
  FUN_1003870ec();
  puVar1 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0;
  puVar8 = &DAT_10054dee0;
  FUN_1000087a0(&DAT_10054dee0,&DAT_10054de90,&DAT_10041ed08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  ppuVar9 = &local_90;
  local_90 = puVar5;
  puStack_88 = puVar6;
  local_80 = puVar7;
  puStack_78 = (undefined8 *)puVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1)__>_some>>_100523090
             ,1);
  puVar5 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,puVar1);
  local_80 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_68 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  ppuVar10 = &local_90;
  local_90 = puVar3;
  puStack_88 = puVar4;
  puStack_78 = ppuVar9;
  local_70 = puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_Text,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523080
             ,1);
  puStack_98 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_a0 = ppuVar10;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar2,&local_a0);
  DAT_10055e6f8 = puVar3;
  return;
}

