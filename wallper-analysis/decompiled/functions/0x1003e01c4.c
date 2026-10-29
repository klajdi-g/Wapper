// rea decompile_all
// name: FUN_1003e01c4
// address: 0x1003e01c4
// body: available
// range: 0x1003e01c4-0x1003e0447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003e01c4(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar5 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_100265268();
    }
    *param_1 = uVar8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar6 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1003e029c;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0430);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar3 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_1003e0300:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0420);
          (*pcVar2)();
        }
        lVar6 = uVar8 + lVar9 * 0x10;
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0428);
          (*pcVar2)();
        }
        lVar10 = lVar9;
        if (lVar6 - lVar4 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar8 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0408);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e040c);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar4 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar4;
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0414);
          (*pcVar2)();
        }
        if (SCARRY8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e041c);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar6 + lVar12 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_1003e029c:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0410);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + uVar5 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0418);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0424);
            (*pcVar2)();
          }
          if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e042c);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar7 + lVar12 < lVar6) goto LAB_1003e0300;
          lVar10 = uVar5 - 2;
          if (lVar12 <= lVar6) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar7 = *plVar1;
          lVar4 = plVar1[1];
          if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0434);
            (*pcVar2)();
          }
          lVar10 = uVar5 - 2;
          if (lVar4 - lVar7 <= lVar6) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e03fc);
        (*pcVar2)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0448);
        (*pcVar2)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar6 = *plVar1;
      lVar7 = plVar1[1];
      lVar4 = 0;
      FUN_10040211c();
      lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
      (*param_4)(lVar9 + lVar4 * lVar12,lVar9 + lVar4 * lVar6,lVar9 + lVar4 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0400);
        (*pcVar2)();
      }
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100265268();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e0404);
        (*pcVar2)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_10026503c(lVar10);
      uVar8 = *param_1;
      uVar5 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}

