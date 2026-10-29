// rea decompile_all
// name: FUN_100343e14
// address: 0x100343e14
// body: available
// range: 0x100343e14-0x100343fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100343e14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  PlainButtonStyle PVar5;
  undefined *puVar6;
  ButtonMenuStyle BVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 *local_70;
  undefined *puStack_68;
  
  if (DAT_10055d258 != (undefined *)0x0) {
    return;
  }
  puVar3 = &DAT_10055d260;
  FUN_100002fe4(&DAT_10055d260,&DAT_100432778);
  puVar4 = &DAT_10055d268;
  FUN_100002fe4(&DAT_10055d268,&DAT_100433b70);
  PVar5 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100522380;
  puVar6 = &DAT_10055d270;
  FUN_100002fe4(&DAT_10055d270,&DAT_100432780);
  BVar7 = SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100522210;
  puVar8 = &DAT_10055d278;
  FUN_1000087a0(&DAT_10055d278,&DAT_10055d270,&DAT_100432780,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88);
  puVar9 = &DAT_100550b38;
  FUN_1000036d0(&DAT_100550b38,puVar1,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100522200);
  ppuVar10 = &local_80;
  local_80 = puVar6;
  puStack_78 = BVar7.unknown;
  local_70 = (undefined8 *)puVar8;
  puStack_68 = puVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,1);
  puVar6 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar2,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  ppuVar11 = &local_80;
  local_80 = puVar4;
  puStack_78 = PVar5.unknown;
  local_70 = ppuVar10;
  puStack_68 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar11,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  puVar4 = &DAT_100550b48;
  FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_90 = ppuVar11;
  puStack_88 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar3,&local_90);
  DAT_10055d258 = puVar6;
  return;
}

