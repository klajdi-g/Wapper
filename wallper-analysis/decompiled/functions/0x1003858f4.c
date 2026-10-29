// rea decompile_all
// name: FUN_1003858f4
// address: 0x1003858f4
// body: available
// range: 0x1003858f4-0x1003859b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003858f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  DefaultGlassEffectShape DVar3;
  DefaultGlassEffectShape DVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_10055dc50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055dc38;
  FUN_100002fe4(&DAT_10055dc38,&DAT_1004333d0);
  puVar2 = &DAT_10054a840;
  FUN_100002fe4(&DAT_10054a840,&DAT_100422300);
  DVar3 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
  DVar4 = DVar3;
  FUN_1000fbd60();
  puVar5 = DVar4.unknown;
  FUN_100009808();
  ppuVar6 = &local_50;
  local_50 = puVar2;
  puStack_48 = DVar3.unknown;
  local_40 = DVar4.unknown;
  puStack_38 = puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
             ,1);
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  local_60 = ppuVar6;
  puStack_58 = ppuVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar1,&local_60);
  DAT_10055dc50 = puVar2;
  return;
}

