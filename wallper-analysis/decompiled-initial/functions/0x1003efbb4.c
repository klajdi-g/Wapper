// rea decompile_all
// name: thunk_FUN_1003efbb8
// address: 0x1003efbb4
// body: available
// range: 0x1003efbb4-0x1003efbb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1003efbb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  PlainButtonStyle PVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (DAT_100560d00 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100560bf8;
  FUN_100002fe4(&DAT_100560bf8,&DAT_100436888);
  puVar3 = &DAT_100560ba8;
  FUN_100002fe4(&DAT_100560ba8,&DAT_100436858);
  PVar4 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100522380;
  puVar5 = &DAT_100560bf0;
  FUN_1000087a0(&DAT_100560bf0,&DAT_100560ba8,&DAT_100436858,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar6 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar1,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  ppuVar7 = &puStack_60;
  puStack_60 = puVar3;
  puStack_58 = PVar4.unknown;
  puStack_50 = puVar5;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  ppuVar8 = ppuVar7;
  FUN_100003390();
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_70 = ppuVar7;
  puStack_68 = ppuVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar2,&puStack_70);
  DAT_100560d00 = puVar3;
  return;
}

