// rea decompile_all
// name: FUN_1002b08c8
// address: 0x1002b08c8
// body: available
// range: 0x1002b08c8-0x1002b0b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002b08c8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  uVar9 = *param_1;
  if (1 < *(ulong *)(uVar9 + 0x10)) {
    uVar5 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_100265268();
    }
    *param_1 = uVar9;
    uVar5 = *(ulong *)(uVar9 + 0x10);
    do {
      lVar11 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar9 + 0x28),*(long *)(uVar9 + 0x20));
          lVar7 = *(long *)(uVar9 + 0x28) - *(long *)(uVar9 + 0x20);
          goto LAB_1002b099c;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b3c);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar7 = *plVar1;
        lVar8 = plVar1[1];
        bVar3 = SBORROW8(lVar8,lVar7);
        lVar8 = lVar8 - lVar7;
LAB_1002b0a00:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b2c);
          (*pcVar2)();
        }
        lVar7 = uVar9 + lVar11 * 0x10;
        lVar6 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b34);
          (*pcVar2)();
        }
        lVar12 = lVar11;
        if (lVar7 - lVar6 < lVar8) {
          return 1;
        }
      }
      else {
        lVar8 = uVar9 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b14);
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b18);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar12 = plVar1[1];
        lVar10 = lVar12 - lVar6;
        if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b20);
          (*pcVar2)();
        }
        if (SCARRY8(lVar7,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b28);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar7 + lVar10 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) {
LAB_1002b099c:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b1c);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + uVar5 * 0x10);
          lVar6 = *plVar1;
          lVar12 = plVar1[1];
          lVar8 = lVar12 - lVar6;
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b24);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
          lVar6 = *plVar1;
          lVar12 = plVar1[1];
          lVar10 = lVar12 - lVar6;
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b30);
            (*pcVar2)();
          }
          if (SCARRY8(lVar8,lVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b38);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar8 + lVar10 < lVar7) goto LAB_1002b0a00;
          lVar12 = uVar5 - 2;
          if (lVar10 <= lVar7) {
            lVar12 = lVar11;
          }
        }
        else {
          plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
          lVar8 = *plVar1;
          lVar6 = plVar1[1];
          if (SBORROW8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b40);
            (*pcVar2)();
          }
          lVar12 = uVar5 - 2;
          if (lVar6 - lVar8 <= lVar7) {
            lVar12 = lVar11;
          }
        }
      }
      uVar13 = lVar12 - 1;
      if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b08);
        (*pcVar2)();
      }
      lVar11 = *param_3;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b54);
        (*pcVar2)();
      }
      lVar10 = *(long *)(uVar9 + 0x20 + uVar13 * 0x10);
      plVar1 = (long *)(uVar9 + 0x20 + lVar12 * 0x10);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      puVar4 = &DAT_1005564c8;
      FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
      lVar6 = *(long *)(*(long *)(puVar4 + -8) + 0x48);
      FUN_1002b0dbc(lVar11 + lVar6 * lVar10,lVar11 + lVar6 * lVar7,lVar11 + lVar6 * lVar8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar8 < lVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b0c);
        (*pcVar2)();
      }
      uVar5 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100265268();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0b10);
        (*pcVar2)();
      }
      lVar11 = uVar9 + uVar13 * 0x10;
      *(long *)(lVar11 + 0x20) = lVar10;
      *(long *)(lVar11 + 0x28) = lVar8;
      *param_1 = uVar9;
      FUN_10026503c(lVar12);
      uVar9 = *param_1;
      uVar5 = *(ulong *)(uVar9 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}

