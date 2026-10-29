// rea decompile_all
// name: /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::_allocateBufferUninitialized
// address: 0x100413b38
// body: available
// range: 0x100413b38-0x100413b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* static Swift.ContiguousArray._allocateBufferUninitialized(minimumCapacity: Swift.Int) ->
   Swift._ContiguousArrayBuffer<A> */

_ContiguousArrayBuffer<undefined>
Swift::ContiguousArray::_allocateBufferUninitialized
          (__int64 minimumCapacity,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100413b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allocateBufferUninitialized_100523e08)();
  return (_ContiguousArrayBuffer<undefined>)minimumCapacity;
}

