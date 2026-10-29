// rea decompile_all
// name: FUN_1000690b4
// address: 0x1000690b4
// body: available
// range: 0x1000690b4-0x10006919f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000690b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *local_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 *local_40;
  undefined8 *puStack_38;
  
  if (DAT_10054e018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10054e010;
  FUN_100002fe4(&DAT_10054e010,&DAT_10041ef58);
  puVar2 = &DAT_10054e020;
  FUN_100002fe4(&DAT_10054e020,&DAT_10041ef60);
  puVar3 = &DAT_10054e028;
  FUN_100002fe4(&DAT_10054e028,&DAT_10041ef68);
  puVar4 = puVar3;
  FUN_1000691a0();
  ppuVar5 = &local_50;
  local_50 = puVar3;
  puStack_48 = puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onTapGesture(count:_Swift_Int,perform:_()__>_())__>_some>>_100522f30
             ,1);
  ppuVar6 = ppuVar5;
  FUN_100069258();
  puStack_48 = &DAT_100529898;
  ppuVar7 = &local_50;
  local_50 = puVar2;
  local_40 = ppuVar5;
  puStack_38 = ppuVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  puVar2 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598;
  local_58 = ppuVar7;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598,
             puVar1,&local_58);
  DAT_10054e018 = puVar2;
  return;
}

