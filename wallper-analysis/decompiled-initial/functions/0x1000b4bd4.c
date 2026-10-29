// rea decompile_all
// name: FUN_1000b4bd4
// address: 0x1000b4bd4
// body: available
// range: 0x1000b4bd4-0x1000b4c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b4bd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_1005505e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10054e2c0;
  FUN_100002fe4(&DAT_10054e2c0,&DAT_1004207c0);
  puVar2 = &DAT_1005505f0;
  FUN_1000087a0(&DAT_1005505f0,&DAT_10054e2b8,&DAT_10041f1e0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
  puVar3 = &DAT_10054da50;
  FUN_1000087a0(&DAT_10054da50,&DAT_10054da58,&DAT_10041e7c0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_30);
  DAT_1005505e8 = puVar4;
  return;
}

