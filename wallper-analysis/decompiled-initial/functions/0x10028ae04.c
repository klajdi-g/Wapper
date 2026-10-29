// rea decompile_all
// name: FUN_10028ae04
// address: 0x10028ae04
// body: available
// range: 0x10028ae04-0x10028af43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10028ae04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar3 = param_3;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (param_3,param_1,param_2);
  lVar4 = param_3 + 1;
  if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af2c);
    (*pcVar2)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar4,param_1,param_2);
  lVar5 = param_3 + 2;
  if (SCARRY8(param_3,2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af30);
    (*pcVar2)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar5,param_1,param_2);
  lVar6 = param_3 + 3;
  if (SCARRY8(param_3,3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af34);
    (*pcVar2)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar6,param_1,param_2);
  lVar1 = param_3 + 4;
  if (!SCARRY8(param_3,4)) {
    lVar7 = lVar1;
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (lVar1,param_1,param_2);
    uVar8 = param_3 + 5;
    if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af3c);
      (*pcVar2)();
    }
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
              (uVar8,param_1,param_2);
    uVar9 = param_3 + 6;
    if (!SCARRY8(lVar1,2)) {
      __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                (uVar9,param_1,param_2);
      uVar10 = param_3 + 7;
      if (!SCARRY8(lVar1,3)) {
        __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
                  (uVar10,param_1,param_2);
        return (ulong)(uint)((int)lVar7 << 0x18) | (uVar8 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 |
               uVar10 & 0xff |
               (ulong)((int)lVar3 << 0x18 | ((uint)lVar4 & 0xff) << 0x10 | ((uint)lVar5 & 0xff) << 8
                      | (uint)lVar6 & 0xff) << 0x20;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af44);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af40);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10028af38);
  (*pcVar2)();
}

