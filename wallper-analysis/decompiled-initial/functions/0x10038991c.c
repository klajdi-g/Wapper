// rea decompile_all
// name: FUN_10038991c
// address: 0x10038991c
// body: available
// range: 0x10038991c-0x100389a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038991c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  DefaultGlassEffectShape DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  
  if (DAT_10055e280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055e268;
  FUN_100002fe4(&DAT_10055e268,&DAT_100433c38);
  puVar2 = &DAT_100550ed0;
  FUN_100002fe4(&DAT_100550ed0,&DAT_100422a58);
  DVar3 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
  puVar4 = &DAT_100550ec8;
  FUN_100002fe4(&DAT_100550ec8,&DAT_100422a50);
  puVar5 = &DAT_100550f28;
  FUN_1000087a0(&DAT_100550f28,&DAT_100550ec8,&DAT_100422a50,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar6 = puVar5;
  FUN_100037164();
  puStack_58 = &DAT_100526c68;
  ppuVar7 = &local_60;
  local_60 = puVar4;
  local_50 = (undefined8 *)puVar5;
  puStack_48 = (undefined8 *)puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
             ,1);
  ppuVar8 = ppuVar7;
  FUN_100009808();
  ppuVar9 = &local_60;
  local_60 = puVar2;
  puStack_58 = DVar3.unknown;
  local_50 = ppuVar7;
  puStack_48 = ppuVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
             ,1);
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  local_70 = ppuVar9;
  puStack_68 = ppuVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar1,&local_70);
  DAT_10055e280 = puVar2;
  return;
}

