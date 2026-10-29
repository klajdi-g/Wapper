// rea decompile_all
// name: FUN_10038f0fc
// address: 0x10038f0fc
// body: available
// range: 0x10038f0fc-0x10038f183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038f0fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_10055e740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100550ec0;
  FUN_100002fe4(&DAT_100550ec0,&DAT_100422eb0);
  puVar2 = &DAT_100556c10;
  FUN_1000036d0(&DAT_100556c10,FUN_1001d537c,&TargetProtocolConformanceDescriptor_10042acd8);
  puVar3 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100524168
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100524168
             ,puVar1,&local_28);
  DAT_10055e740 = puVar3;
  return;
}

