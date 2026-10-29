// rea decompile_all
// name: /usr/lib/swift/libswiftCore.dylib::Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast
// address: 0x100413a0c
// body: available
// range: 0x100413a0c-0x100413a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Swift._stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(Builtin.Word, Builtin.Word, Builtin.Word,
   Builtin.Word, Builtin.Word, Builtin.Word) -> Builtin.Int1 */

__int8 Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast
                 (__int16 param_1,__int16 param_2,__int16 param_3,__int16 param_4,__int16 param_5,
                 __int16 param_6)

{
  ulong uVar1;
  
  uVar1 = (ulong)(ushort)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100413a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stdlib_isOSVersionAtLeastOrVariantVersionAtLeast_100523cb0)
            (uVar1,param_2,param_3,param_4,param_5,param_6);
  return (__int8)uVar1;
}

