// rea decompile_all
// name: FUN_1003990b8
// address: 0x1003990b8
// body: available
// range: 0x1003990b8-0x1003991ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003990b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_10055ef28;
  FUN_100002fe4(&DAT_10055ef28,&DAT_100434738);
  puVar2 = &DAT_10055ed48;
  FUN_100002fe4(&DAT_10055ed48,&DAT_1004345e0);
  puVar3 = &DAT_10055ee10;
  FUN_1000087a0(&DAT_10055ee10,&DAT_10055ed48,&DAT_1004345e0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar4 = puVar3;
  FUN_10038f698();
  puStack_48 = &DAT_10053c460;
  ppuVar5 = &local_50;
  local_50 = puVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
             ,1);
  puVar2 = &DAT_10055ef48;
  FUN_1000087a0(&DAT_10055ef48,&DAT_10055ef30,&DAT_100434740,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_60 = ppuVar5;
  puStack_58 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_60);
  DAT_10055ef40 = puVar3;
  return;
}

