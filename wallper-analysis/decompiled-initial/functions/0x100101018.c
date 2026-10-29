// rea decompile_all
// name: thunk_FUN_10010101c
// address: 0x100101018
// body: available
// range: 0x100101018-0x10010101b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10010101c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (DAT_1005529a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1005529b0;
  FUN_100002fe4(&DAT_1005529b0,&DAT_100424f00);
  puVar2 = &DAT_100549c40;
  FUN_100002fe4(&DAT_100549c40,&DAT_100419de0);
  puVar3 = &DAT_100549c48;
  FUN_100002fe4(&DAT_100549c48,&DAT_100419de8);
  puVar4 = puVar3;
  FUN_100003150();
  puVar5 = puVar4;
  FUN_1000033d0();
  ppuVar6 = &puStack_50;
  puStack_50 = puVar2;
  puStack_48 = puVar3;
  puStack_40 = puVar4;
  puStack_38 = puVar5;
  _swift_getOpaqueTypeConformance2(ppuVar6,&DAT_100437e20,1);
  puVar2 = &DAT_1005515d8;
  FUN_1000036d0(&DAT_1005515d8,PTR_typeMetadataAccessor_100522be8,
                PTR_SwiftUI__SwiftUI__AccessibilityAttachmentModifier_>SwiftUI__ViewModifier_100522be0
               );
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_60 = ppuVar6;
  puStack_58 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&puStack_60);
  DAT_1005529a8 = puVar3;
  return;
}

