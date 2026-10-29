// rea decompile_all
// name: FUN_1002e1a38
// address: 0x1002e1a38
// body: available
// range: 0x1002e1a38-0x1002e1b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e1a38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  GroupedFormStyle GVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_10055ac08 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_10055ab00;
  FUN_100002fe4(&DAT_10055ab00,&DAT_10042f150);
  puVar3 = &DAT_10055aae0;
  FUN_100002fe4(&DAT_10055aae0,&DAT_10042f140);
  GVar4 = SwiftUI::GroupedFormStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100522318;
  puVar5 = &DAT_10055aaf8;
  FUN_1000087a0(&DAT_10055aaf8,&DAT_10055aae0,&DAT_10042f140,
                PTR_SwiftUI__SwiftUI__Form<undefined>_>SwiftUI__View_100522d68);
  puVar6 = &DAT_10055a738;
  FUN_1000036d0(&DAT_10055a738,puVar1,
                PTR_SwiftUI__SwiftUI__GroupedFormStyle_>SwiftUI__FormStyle_100522310);
  ppuVar7 = &local_60;
  local_60 = puVar3;
  puStack_58 = GVar4.unknown;
  local_50 = puVar5;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_formStyle<A_where_A1:_SwiftUI_FormStyle>(A1)__>_some>>_1005231a0
             ,1);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100522420
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_70 = ppuVar7;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar2,&local_70);
  DAT_10055ac08 = puVar3;
  return;
}

