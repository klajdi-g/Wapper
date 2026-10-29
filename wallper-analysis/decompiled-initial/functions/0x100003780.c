// rea decompile_all
// name: FUN_100003780
// address: 0x100003780
// body: available
// range: 0x100003780-0x10000384b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100003780(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  _TaskValueModifier2 _Var3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_60 [2];
  undefined8 local_50 [2];
  
  puVar6 = auStack_60;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = 1;
  FUN_1004107b8(1,0x1a,4,0);
  if (iVar2 == 0) {
    _Var3.unknown = (undefined *)SwiftUI::_TaskValueModifier::typeMetadataAccessor();
    puVar5 = PTR_SwiftUI__SwiftUI___TaskValueModifier<undefined>_>SwiftUI__ViewModifier_1005226d8;
  }
  else {
    _Var3 = SwiftUI::_TaskValueModifier2::typeMetadataAccessor();
    puVar6 = local_50;
    puVar5 = PTR_SwiftUI__SwiftUI___TaskValueModifier2<undefined>_>SwiftUI__ViewModifier_100522850;
  }
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getWitnessTable(puVar5,_Var3.unknown);
  *puVar6 = uVar1;
  puVar6[1] = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar4.unknown,puVar6);
  return;
}

