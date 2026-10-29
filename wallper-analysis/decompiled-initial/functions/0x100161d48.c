// rea decompile_all
// name: FUN_100161d48
// address: 0x100161d48
// body: available
// range: 0x100161d48-0x100161e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100161d48(__DataStorage *param_1,long param_2,__DataStorage *param_3)

{
  code *pcVar1;
  UnsafeRawBufferPointer bufferPointer;
  __DataStorage *p_Var2;
  
  bufferPointer.unknown = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var2 = (__DataStorage *)0x0;
  if ((__DataStorage *)bufferPointer.unknown != (__DataStorage *)0x0) {
    p_Var2 = (__DataStorage *)
             Foundation::__DataStorage::get__offset(param_3,(__DataStorage *)bufferPointer.unknown);
    if (SBORROW8((long)param_1,(long)p_Var2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100161e0c);
      (*pcVar1)();
    }
    bufferPointer.unknown = bufferPointer.unknown + ((long)param_1 - (long)p_Var2);
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    Foundation::__DataStorage::get__length(param_3,p_Var2);
    CryptoKit::SHA256::typeMetadataAccessor();
    FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                  PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
    CryptoKit::HashFunction::update(bufferPointer);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100161e08);
  (*pcVar1)();
}

