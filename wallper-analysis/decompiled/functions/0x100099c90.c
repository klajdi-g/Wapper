// rea decompile_all
// name: FUN_100099c90
// address: 0x100099c90
// body: available
// range: 0x100099c90-0x100099d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099c90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_10054f678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100549d58;
  FUN_100002fe4(&DAT_100549d58,&DAT_100419e78);
  puVar2 = &DAT_10054f680;
  FUN_1000087a0(&DAT_10054f680,&DAT_10054f688,&DAT_100420b28,
                PTR_SwiftUI__SwiftUI__GeometryReader<undefined>_>SwiftUI__View_100522098);
  puVar3 = &DAT_10054f670;
  FUN_1000087a0(&DAT_10054f670,&DAT_10054f360,&DAT_1004208a8,
                PTR_SwiftUI__SwiftUI___ValueActionModifier<undefined>_>SwiftUI__ViewModifier_1005228f0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar1,&local_30);
  DAT_10054f678 = puVar4;
  return;
}

