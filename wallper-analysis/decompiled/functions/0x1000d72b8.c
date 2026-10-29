// rea decompile_all
// name: FUN_1000d72b8
// address: 0x1000d72b8
// body: available
// range: 0x1000d72b8-0x1000d73af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d72b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined8 *puStack_38;
  
  if (DAT_100551558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1005514b8;
  FUN_100002fe4(&DAT_1005514b8,&DAT_1004231a0);
  puVar2 = &DAT_100551560;
  FUN_100002fe4(&DAT_100551560,&DAT_1004231f8);
  puVar3 = &DAT_100551568;
  FUN_100002fe4(&DAT_100551568,&DAT_100423200);
  puVar4 = puVar3;
  FUN_1000d73b0();
  ppuVar5 = &local_40;
  local_40 = puVar3;
  puStack_38 = (undefined8 *)puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  ppuVar6 = &local_40;
  local_40 = puVar2;
  puStack_38 = ppuVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_accessibilityElement(children:_SwiftUI_AccessibilityChildBehavior)__>_some>>_100522ff0
             ,1);
  puVar2 = &DAT_1005515d8;
  FUN_1000036d0(&DAT_1005515d8,PTR_typeMetadataAccessor_100522be8,
                PTR_SwiftUI__SwiftUI__AccessibilityAttachmentModifier_>SwiftUI__ViewModifier_100522be0
               );
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_50 = ppuVar6;
  puStack_48 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_50);
  DAT_100551558 = puVar3;
  return;
}

