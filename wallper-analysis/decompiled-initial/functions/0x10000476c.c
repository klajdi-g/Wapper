// rea decompile_all
// name: FUN_10000476c
// address: 0x10000476c
// body: available
// range: 0x10000476c-0x100004803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000476c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  __int64 _Var2;
  
  _Var2 = *(__int64 *)(unaff_x20 + 0x28);
  Foundation::UUID::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100520bd8;
  FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
  _Var2 = Swift::Hashable::_rawHashValue(_Var2);
  FUN_100004d7c(param_1,_Var2,puVar1,&DAT_10054a130,
                PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
  return;
}

