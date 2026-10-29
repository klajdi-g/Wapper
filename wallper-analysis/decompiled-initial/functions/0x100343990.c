// rea decompile_all
// name: thunk_FUN_100343994
// address: 0x100343990
// body: available
// range: 0x100343990-0x100343993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100343994(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  PlainButtonStyle PVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (DAT_10055d1f8 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_10055d070;
  FUN_100002fe4(&DAT_10055d070,&DAT_100432648);
  puVar3 = &DAT_10055cfb8;
  FUN_100002fe4(&DAT_10055cfb8,&DAT_1004325f0);
  puVar4 = &DAT_10055cfb0;
  FUN_100002fe4(&DAT_10055cfb0,&DAT_1004325e8);
  PVar5 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100522380;
  puVar6 = &DAT_10055d068;
  FUN_1000087a0(&DAT_10055d068,&DAT_10055cfb0,&DAT_1004325e8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar7 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar1,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  ppuVar8 = &puStack_70;
  puStack_70 = puVar4;
  puStack_68 = PVar5.unknown;
  puStack_60 = (undefined8 *)puVar6;
  puStack_58 = (undefined8 *)puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  ppuVar9 = ppuVar8;
  FUN_100026df4();
  puStack_68 = PTR___type_metadata_for_Swift_String_100523a98;
  ppuVar10 = &puStack_70;
  puStack_70 = puVar3;
  puStack_60 = ppuVar8;
  puStack_58 = ppuVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help<A_where_A1:_Swift_StringProtocol>(A1)__>_some>>_100523050
             ,1);
  ppuVar8 = ppuVar10;
  FUN_100003390();
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_80 = ppuVar10;
  puStack_78 = ppuVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar2,&puStack_80);
  DAT_10055d1f8 = puVar3;
  return;
}

