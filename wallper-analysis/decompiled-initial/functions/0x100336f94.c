// rea decompile_all
// name: FUN_100336f94
// address: 0x100336f94
// body: available
// range: 0x100336f94-0x1003370f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100336f94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  PlainTextFieldStyle PVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  
  if (DAT_10055cc78 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_10055cc68;
  FUN_100002fe4(&DAT_10055cc68,&DAT_1004320a8);
  puVar3 = &DAT_1005515e0;
  FUN_100002fe4(&DAT_1005515e0,&DAT_100432070);
  puVar4 = &DAT_10054def8;
  FUN_100002fe4(&DAT_10054def8,&DAT_10041ed30);
  PVar5 = SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005227c8;
  puVar6 = &DAT_100551538;
  FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
  puVar7 = &DAT_100551540;
  FUN_1000036d0(&DAT_100551540,puVar1,
                PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
  ppuVar8 = &local_70;
  local_70 = puVar4;
  puStack_68 = (undefined8 *)PVar5;
  local_60 = puVar6;
  puStack_58 = puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_textFieldStyle<A_where_A1:_SwiftUI_TextFieldStyle>(A1)__>_some>>_100522f80
             ,1);
  ppuVar9 = &local_70;
  local_70 = puVar3;
  puStack_68 = ppuVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focused(SwiftUI_FocusState<Swift_Bool>_Binding)__>_some>>_1005230c8
             ,1);
  puVar3 = &DAT_100549c88;
  FUN_1000087a0(&DAT_100549c88,&DAT_100549c90,&DAT_10041c5c0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_80 = ppuVar9;
  puStack_78 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar2,&local_80);
  DAT_10055cc78 = puVar4;
  return;
}

