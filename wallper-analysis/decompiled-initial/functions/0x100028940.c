// rea decompile_all
// name: FUN_100028940
// address: 0x100028940
// body: available
// range: 0x100028940-0x1000289f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100028940(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_10054adf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10054adf8;
  FUN_100002fe4(&DAT_10054adf8,&DAT_10041c058);
  puVar2 = &DAT_10054ae00;
  FUN_1000087a0(&DAT_10054ae00,&DAT_10054ae08,&DAT_10041c060,
                PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100523408);
  puVar3 = &DAT_10054ae10;
  FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_30);
  DAT_10054adf0 = puVar4;
  return;
}

