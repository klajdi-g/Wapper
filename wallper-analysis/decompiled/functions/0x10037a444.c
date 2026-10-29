// rea decompile_all
// name: FUN_10037a444
// address: 0x10037a444
// body: available
// range: 0x10037a444-0x10037a597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037a444(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  DefaultGlassEffectShape DVar4;
  undefined *puVar5;
  PlainButtonStyle PVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  
  if (DAT_10055d8a8 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_10055d890;
  FUN_100002fe4(&DAT_10055d890,&DAT_100432f50);
  puVar3 = &DAT_10055d7b0;
  FUN_100002fe4(&DAT_10055d7b0,&DAT_100432ec8);
  DVar4 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
  puVar5 = &DAT_10055d7a8;
  FUN_100002fe4(&DAT_10055d7a8,&DAT_100432ec0);
  PVar6 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100522380;
  puVar7 = &DAT_10055d808;
  FUN_1000087a0(&DAT_10055d808,&DAT_10055d7a8,&DAT_100432ec0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar8 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar1,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  ppuVar9 = &local_70;
  local_70 = puVar5;
  puStack_68 = PVar6.unknown;
  local_60 = (undefined8 *)puVar7;
  puStack_58 = (undefined8 *)puVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  ppuVar10 = ppuVar9;
  FUN_100009808();
  ppuVar11 = &local_70;
  local_70 = puVar3;
  puStack_68 = DVar4.unknown;
  local_60 = ppuVar9;
  puStack_58 = ppuVar10;
  _swift_getOpaqueTypeConformance2
            (ppuVar11,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
             ,1);
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  local_80 = ppuVar11;
  puStack_78 = ppuVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar2,&local_80);
  DAT_10055d8a8 = puVar3;
  return;
}

