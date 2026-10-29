// rea decompile_all
// name: FUN_10019dab4
// address: 0x10019dab4
// body: available
// range: 0x10019dab4-0x10019dcbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10019dab4(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar2 = *param_1;
  dVar8 = param_1[1];
  dVar7 = param_1[2];
  dVar6 = *param_2;
  dVar4 = param_2[1];
  dVar1 = param_2[2];
  dVar9 = dVar8;
  if (dVar8 < dVar2) {
    dVar9 = dVar2;
  }
  dVar3 = dVar7;
  if (dVar7 < dVar9) {
    dVar3 = dVar9;
  }
  dVar5 = dVar1;
  dVar9 = dVar4;
  if (dVar3 <= 0.0) {
    dVar7 = 0.0;
    if (dVar6 <= dVar4) {
      if (dVar4 <= dVar1) {
        dVar3 = 0.0;
        dVar9 = dVar1;
        goto joined_r0x00010019dbfc;
      }
      dVar3 = 0.0;
      if (dVar4 <= 0.0) goto LAB_10019dcb0;
      if (dVar6 <= dVar4) {
        if (dVar6 <= dVar1) goto LAB_10019dc8c;
      }
      else if (dVar4 <= dVar1) goto LAB_10019dc14;
      goto LAB_10019dc3c;
    }
    if (dVar6 <= dVar1) {
      dVar3 = 0.0;
      goto joined_r0x00010019dbb8;
    }
    dVar3 = 0.0;
    if (dVar6 <= 0.0) goto LAB_10019dcb0;
    if (dVar4 < dVar6) {
      dVar7 = dVar6;
      if (dVar4 <= dVar1) {
        dVar5 = dVar4;
      }
LAB_10019dc2c:
      dVar7 = dVar7 - dVar5;
      goto LAB_10019dca4;
    }
    dVar7 = dVar6;
    if (dVar1 < dVar6) {
      dVar7 = dVar1;
    }
    dVar7 = dVar7 - dVar6;
    dVar1 = dVar6;
  }
  else {
    if (dVar2 <= dVar8) {
      dVar8 = dVar2;
    }
    if (dVar8 <= dVar7) {
      dVar7 = dVar8;
    }
    dVar3 = (dVar3 - dVar7) / dVar3;
    dVar7 = 0.0;
    if (dVar4 < dVar6) {
      if (dVar6 <= dVar1) {
joined_r0x00010019dbb8:
        dVar7 = 0.0;
        if (dVar1 <= 0.0) goto LAB_10019dcb0;
        if (dVar6 <= dVar4) {
          dVar7 = dVar1;
          if (dVar1 < dVar6) goto LAB_10019dc2c;
          dVar7 = dVar1 - dVar6;
        }
        else if (dVar4 <= dVar1) {
          dVar7 = dVar1 - dVar4;
        }
        else {
          dVar7 = dVar1 - dVar1;
        }
        goto LAB_10019dca4;
      }
      if (dVar6 <= 0.0) goto LAB_10019dcb0;
      if (dVar6 <= dVar4) {
        if (dVar1 < dVar6) goto LAB_10019dc4c;
        dVar7 = dVar6 - dVar6;
      }
      else if (dVar1 < dVar4) {
LAB_10019dc4c:
        dVar7 = dVar6 - dVar1;
      }
      else {
        dVar7 = dVar6 - dVar4;
      }
      goto LAB_10019dca4;
    }
    dVar9 = dVar1;
    if (dVar1 < dVar4) {
      dVar9 = dVar4;
    }
joined_r0x00010019dbfc:
    dVar7 = 0.0;
    if (dVar9 <= 0.0) goto LAB_10019dcb0;
    if (dVar4 < dVar6) {
      if (dVar1 < dVar4) goto LAB_10019dc3c;
LAB_10019dc14:
      dVar7 = dVar9 - dVar4;
      dVar6 = dVar4;
    }
    else if (dVar1 < dVar6) {
LAB_10019dc3c:
      dVar7 = dVar9 - dVar1;
      dVar6 = dVar4;
    }
    else {
LAB_10019dc8c:
      dVar7 = dVar9 - dVar6;
      dVar6 = dVar4;
    }
LAB_10019dca4:
    if (dVar1 < dVar6) {
      dVar1 = dVar6;
    }
  }
  dVar7 = dVar7 / dVar1;
LAB_10019dcb0:
  return dVar3 < dVar7;
}

