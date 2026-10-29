// rea decompile_all
// name: FUN_10029bfbc
// address: 0x10029bfbc
// body: available
// range: 0x10029bfbc-0x10029c0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029bfbc(long *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  if (*param_2 == 0x2b) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10029c0f0);
      (*pcVar2)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      lVar3 = 0;
      do {
        param_2 = param_2 + 1;
        if (((9 < *param_2 - 0x30) ||
            (lVar4 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*param_2 - 0x30), lVar3 = lVar4 + uVar1, SCARRY8(lVar4,uVar1)))
        goto LAB_10029c0cc;
        uVar5 = 0;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      goto LAB_10029c0d4;
    }
  }
  else if (*param_2 == 0x2d) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10029c0ec);
      (*pcVar2)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      lVar3 = 0;
      do {
        param_2 = param_2 + 1;
        if (((9 < *param_2 - 0x30) ||
            (lVar4 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*param_2 - 0x30), lVar3 = lVar4 - uVar1, SBORROW8(lVar4,uVar1)))
        goto LAB_10029c0cc;
        uVar5 = 0;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      goto LAB_10029c0d4;
    }
  }
  else if (param_3 != 0) {
    lVar3 = 0;
    if (param_2 == (byte *)0x0) {
      uVar5 = 0;
    }
    else {
      do {
        if (((9 < *param_2 - 0x30) ||
            (lVar4 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*param_2 - 0x30), lVar3 = lVar4 + uVar1, SCARRY8(lVar4,uVar1)))
        goto LAB_10029c0cc;
        uVar5 = 0;
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    goto LAB_10029c0d4;
  }
LAB_10029c0cc:
  lVar3 = 0;
  uVar5 = 1;
LAB_10029c0d4:
  *param_1 = lVar3;
  *(undefined1 *)(param_1 + 1) = uVar5;
  return;
}

