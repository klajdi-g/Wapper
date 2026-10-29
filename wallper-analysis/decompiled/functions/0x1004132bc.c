// rea decompile_all
// name: /usr/lib/swift/libswiftCore.dylib::Swift::String::_fromUTF8Repairing
// address: 0x1004132bc
// body: available
// range: 0x1004132bc-0x1004132c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* static Swift.String._fromUTF8Repairing(Swift.UnsafeBufferPointer<Swift.UInt8>) -> (result:
   Swift.String, repairsMade: Swift.Bool) */

tuple2_conflict
Swift::String::_fromUTF8Repairing(UnsafeBufferPointer<__int8> param_1,String param_2)

{
  char *pcVar1;
  void *pvVar2;
  tuple2_conflict tVar3;
  
  pvVar2 = param_2.bridgeObject;
  pcVar1 = param_2.str;
                    /* WARNING: Could not recover jumptable at 0x0001004132c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fromUTF8Repairing_1005239f8)();
  tVar3.result.bridgeObject = pcVar1;
  tVar3.result.str = param_1.unknown;
  tVar3._16_8_ = pvVar2;
  return tVar3;
}

