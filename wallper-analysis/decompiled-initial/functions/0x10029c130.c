// rea decompile_all
// name: FUN_10029c130
// address: 0x10029c130
// body: available
// range: 0x10029c130-0x10029c44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10029c130(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5)

{
  code *pcVar1;
  Index IVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar5 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar10 = 4L << uVar5;
  IVar2.unknown = param_2.unknown;
  if (((ulong)param_2.unknown & 0xc) == uVar10) {
    FUN_10028763c(param_2.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_10029c1d8;
LAB_10029c178:
    uVar9 = (ulong)IVar2.unknown >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_10029c178;
LAB_10029c1d8:
    uVar9 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar9 = param_5 >> 0x38 & 0xf;
    }
    if (uVar9 < (ulong)IVar2.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c44c);
      (*pcVar1)();
    }
    uVar9 = Swift::String::UTF8View::_foreignDistance((Index)0xf,IVar2,param_4);
  }
  if (((ulong)param_2.unknown & 0xc) == uVar10) {
    FUN_10028763c(param_2.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.unknown & 0xc) == uVar10) {
    FUN_10028763c(param_3.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_10029c290;
LAB_10029c194:
    lVar6 = ((ulong)param_3.unknown >> 0x10) - ((ulong)param_2.unknown >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_10029c194;
LAB_10029c290:
    uVar10 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar10 = param_5 >> 0x38 & 0xf;
    }
    if (uVar10 < (ulong)param_2.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c43c);
      (*pcVar1)();
    }
    if (uVar10 < (ulong)param_3.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c440);
      (*pcVar1)();
    }
    lVar6 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  uVar10 = uVar9 + lVar6;
  if (SCARRY8(uVar9,lVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c434);
    (*pcVar1)();
  }
  if ((long)uVar10 < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c438);
    (*pcVar1)();
  }
  pbVar7 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar7 = (byte *)(uVar9 + param_1);
  }
  if (*pbVar7 == 0x2b) {
    if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c448);
      (*pcVar1)();
    }
    if (uVar10 - uVar9 != 1) {
      lVar3 = 0;
      lVar6 = lVar6 + -1;
      do {
        pbVar7 = pbVar7 + 1;
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar10 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 + uVar10, SCARRY8(lVar8,uVar10)))
        goto LAB_10029c408;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      goto LAB_10029c410;
    }
  }
  else if (*pbVar7 == 0x2d) {
    if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10029c444);
      (*pcVar1)();
    }
    if (uVar10 - uVar9 != 1) {
      lVar3 = 0;
      lVar6 = lVar6 + -1;
      do {
        pbVar7 = pbVar7 + 1;
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar10 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 - uVar10, SBORROW8(lVar8,uVar10)))
        goto LAB_10029c408;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      goto LAB_10029c410;
    }
  }
  else if (uVar10 != uVar9) {
    lVar3 = 0;
    if (pbVar7 == (byte *)0x0) {
      uVar4 = 0;
    }
    else {
      do {
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar10 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 + uVar10, SCARRY8(lVar8,uVar10)))
        goto LAB_10029c408;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
    goto LAB_10029c410;
  }
LAB_10029c408:
  lVar3 = 0;
  uVar4 = 1;
LAB_10029c410:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = lVar3;
  return auVar11;
}

