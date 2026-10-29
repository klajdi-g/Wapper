// rea decompile_all
// name: FUN_10039a18c
// address: 0x10039a18c
// body: available
// range: 0x10039a18c-0x10039a307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039a18c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  PlainButtonStyle PVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  if (DAT_10055f128 != (undefined *)0x0) {
    return;
  }
  puVar3 = &DAT_10055f120;
  FUN_100002fe4(&DAT_10055f120,&DAT_1004348c0);
  puVar4 = &DAT_10054b7b8;
  FUN_100002fe4(&DAT_10054b7b8,&DAT_1004222a0);
  puVar5 = puVar4;
  FUN_10002c070();
  puVar2 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
  ;
  ppuVar6 = &local_80;
  local_80 = puVar4;
  puStack_78 = (undefined8 *)puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  puVar4 = &DAT_10055f100;
  FUN_100002fe4(&DAT_10055f100,&DAT_1004348a0);
  puVar5 = &DAT_10055f0f8;
  FUN_100002fe4(&DAT_10055f0f8,&DAT_100434898);
  PVar7 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100522380;
  puVar8 = &DAT_10055f130;
  FUN_1000087a0(&DAT_10055f130,&DAT_10055f0f8,&DAT_100434898,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar9 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar1,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  ppuVar10 = &local_80;
  local_80 = puVar5;
  puStack_78 = (undefined8 *)PVar7;
  local_70 = puVar8;
  puStack_68 = puVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  ppuVar11 = &local_80;
  local_80 = puVar4;
  puStack_78 = ppuVar10;
  _swift_getOpaqueTypeConformance2(ppuVar11,puVar2,1);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  local_90 = ppuVar6;
  puStack_88 = ppuVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar3,&local_90);
  DAT_10055f128 = puVar4;
  return;
}

