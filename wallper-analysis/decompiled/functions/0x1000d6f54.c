// rea decompile_all
// name: FUN_1000d6f54
// address: 0x1000d6f54
// body: available
// range: 0x1000d6f54-0x1000d70f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d6f54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined *puStack_48;
  
  if (DAT_1005514e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1005514f0;
  FUN_100002fe4(&DAT_1005514f0,&DAT_1004231c0);
  puVar2 = &DAT_1005514f8;
  FUN_100002fe4(&DAT_1005514f8,&DAT_1004231c8);
  puVar3 = &DAT_100551500;
  FUN_100002fe4(&DAT_100551500,&DAT_1004231d0);
  puVar4 = &DAT_100551508;
  FUN_100002fe4(&DAT_100551508,&DAT_1004231d8);
  puVar5 = &DAT_100551510;
  FUN_100002fe4(&DAT_100551510,&DAT_1004231e0);
  puVar6 = &DAT_100551518;
  FUN_100002fe4(&DAT_100551518,&DAT_1004231e8);
  puVar7 = puVar6;
  FUN_1000d70f4();
  ppuVar8 = &local_60;
  local_60 = puVar6;
  puStack_58 = (undefined8 *)puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focused(SwiftUI_FocusState<Swift_Bool>_Binding)__>_some>>_1005230c8
             ,1);
  ppuVar9 = &local_60;
  local_60 = puVar5;
  puStack_58 = ppuVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onSubmit(of:_SwiftUI_SubmitTriggers,_:_()__>_())__>_some>>_100523168
             ,1);
  ppuVar8 = &local_60;
  local_60 = puVar4;
  puStack_58 = ppuVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onExitCommand(perform:_(()__>_())_)__>_some>>_100522f58
             ,1);
  puVar4 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
  ;
  puStack_58 = (undefined8 *)PTR___type_metadata_for_Swift_String_100523a98;
  puStack_48 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  ppuVar9 = &local_60;
  local_60 = puVar3;
  local_50 = ppuVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
             ,1);
  puStack_58 = (undefined8 *)PTR___type_metadata_for_Swift_Bool_100523b70;
  puStack_48 = PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78;
  ppuVar8 = &local_60;
  local_60 = puVar2;
  local_50 = ppuVar9;
  _swift_getOpaqueTypeConformance2(ppuVar8,puVar4,1);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_1005221a8
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_70 = ppuVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_70);
  DAT_1005514e8 = puVar2;
  return;
}

