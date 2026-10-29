// rea decompile_all
// name: FUN_10028af44
// address: 0x10028af44
// body: available
// range: 0x10028af44-0x10028afef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10028af44(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_3;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (param_3,param_1,param_2);
  lVar3 = param_3 + 1;
  if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10028afe8);
    (*pcVar1)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar3,param_1,param_2);
  lVar4 = param_3 + 2;
  if (!SCARRY8(param_3,2)) {
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (lVar4,param_1,param_2);
    lVar5 = param_3 + 3;
    if (!SCARRY8(param_3,3)) {
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                (lVar5,param_1,param_2);
      return (int)lVar2 << 0x18 | ((uint)lVar3 & 0xff) << 0x10 | ((uint)lVar4 & 0xff) << 8 |
             (uint)lVar5 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10028aff0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10028afec);
  (*pcVar1)();
}

