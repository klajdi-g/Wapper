// rea decompile_all
// name: FUN_1003eebe0
// address: 0x1003eebe0
// body: available
// range: 0x1003eebe0-0x1003eec77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003eebe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100560b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100560b50;
  FUN_100002fe4(&DAT_100560b50,&DAT_100436828);
  puVar2 = puVar1;
  FUN_1000b2e98();
  puVar3 = &DAT_100560b60;
  FUN_1000087a0(&DAT_100560b60,&DAT_100560b38,&DAT_100436810,
                PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,puVar1,&local_30);
  DAT_100560b58 = puVar4;
  return;
}

