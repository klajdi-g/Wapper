// rea decompile_all
// name: FUN_100287ba4
// address: 0x100287ba4
// body: available
// range: 0x100287ba4-0x100287c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100287ba4(__DataStorage *param_1,long param_2,code *param_3)

{
  code *pcVar1;
  __DataStorage *p_Var2;
  __DataStorage *p_Var3;
  long lVar4;
  __DataStorage *unaff_x20;
  undefined1 local_70 [32];
  
  p_Var2 = param_1;
  Foundation::__DataStorage::_get__bytes(unaff_x20,param_1);
  if (p_Var2 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100287c50);
    (*pcVar1)();
  }
  p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(unaff_x20,p_Var2);
  if (!SBORROW8((long)param_1,(long)p_Var3)) {
    if (!SBORROW8(param_2,(long)param_1)) {
      lVar4 = Foundation::__DataStorage::get__length(unaff_x20,p_Var3);
      if (param_2 - (long)param_1 <= lVar4) {
        lVar4 = param_2 - (long)param_1;
      }
      (*param_3)(local_70,p_Var2 + ((long)param_1 - (long)p_Var3),
                 p_Var2 + ((long)param_1 - (long)p_Var3) + lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100287c4c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100287c48);
  (*pcVar1)();
}

