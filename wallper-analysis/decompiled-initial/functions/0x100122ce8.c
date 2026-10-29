// rea decompile_all
// name: thunk_FUN_100122cec
// address: 0x100122ce8
// body: available
// range: 0x100122ce8-0x100122ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100122cec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (DAT_1005537e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100553490;
  FUN_100002fe4(&DAT_100553490,&DAT_100426520);
  puVar2 = &DAT_100553460;
  FUN_100002fe4(&DAT_100553460,&DAT_100426508);
  puVar3 = puVar2;
  FUN_100121640();
  puVar4 = puVar3;
  FUN_1001216d8();
  puStack_48 = &DAT_1005297c8;
  ppuVar5 = &puStack_50;
  puStack_50 = puVar2;
  puStack_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  ppuVar6 = ppuVar5;
  FUN_100003390();
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_60 = ppuVar5;
  puStack_58 = ppuVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&puStack_60);
  DAT_1005537e8 = puVar2;
  return;
}

