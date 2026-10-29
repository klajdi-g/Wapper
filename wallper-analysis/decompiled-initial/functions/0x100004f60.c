// rea decompile_all
// name: FUN_100004f60
// address: 0x100004f60
// body: available
// range: 0x100004f60-0x100005047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100004f60(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  puVar6 = &local_50;
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar3 = 1;
  FUN_1004107b8(1,0x1a,4,0);
  if (iVar3 == 0) {
    SwiftUI::_TaskModifier::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_100522028;
    MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar5 = &DAT_100549e40;
    FUN_1000036d0(&DAT_100549e40,puVar2,
                  PTR_SwiftUI__SwiftUI___TaskModifier_>SwiftUI__ViewModifier_100522020);
    local_50 = uVar1;
    puStack_48 = puVar5;
  }
  else {
    SwiftUI::_TaskModifier2::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_1005221d0;
    MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar5 = &DAT_100549e38;
    FUN_1000036d0(&DAT_100549e38,puVar2,
                  PTR_SwiftUI__SwiftUI___TaskModifier2_>SwiftUI__ViewModifier_1005221c8);
    puVar6 = &local_40;
    local_40 = uVar1;
    puStack_38 = puVar5;
  }
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar4.unknown,puVar6);
  return;
}

