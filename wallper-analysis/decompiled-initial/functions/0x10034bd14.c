// rea decompile_all
// name: FUN_10034bd14
// address: 0x10034bd14
// body: available
// range: 0x10034bd14-0x10034bdbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034bd14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_10055d668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10055d468;
  FUN_100002fe4(&DAT_10055d468,&DAT_100432b10);
  puVar2 = &DAT_10055d400;
  FUN_100002fe4(&DAT_10055d400,&DAT_100432ad8);
  puVar3 = puVar2;
  FUN_10034b2dc();
  ppuVar4 = &local_30;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getOpaqueTypeConformance2
            (ppuVar4,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onExitCommand(perform:_(()__>_())_)__>_some>>_100522f58
             ,1);
  puStack_38 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_40 = ppuVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_40);
  DAT_10055d668 = puVar2;
  return;
}

