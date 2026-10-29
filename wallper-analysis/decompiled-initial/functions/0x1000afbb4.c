// rea decompile_all
// name: FUN_1000afbb4
// address: 0x1000afbb4
// body: available
// range: 0x1000afbb4-0x1000afdbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000afc3c to 0x1000a42a4 FUN_1000a42a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000afbb4(undefined8 param_1,undefined8 param_2,double param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x22;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  bVar1 = *(byte *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0x38);
  uVar10 = (uint)bVar1;
  if (bVar1 == 2) {
    uVar9 = 1;
LAB_1000afbf4:
    if (*(long *)(*(long *)(lVar2 + 0x30) + 0x10) != 0) {
      uVar9 = uVar10;
    }
    FUN_100092e18(lVar2,uVar9);
  }
  else {
    if (bVar1 == 0xb) {
      uVar9 = 10;
      goto LAB_1000afbf4;
    }
    FUN_100092e18(lVar2,bVar1);
    if (uVar10 - 6 < 2) {
      dVar12 = *(double *)(unaff_x22 + 0x40);
      dVar14 = *(double *)(unaff_x22 + 0x48);
      FUN_1000931c8();
LAB_1000afcf0:
      *(double *)(unaff_x22 + 0x70) = dVar14;
      *(double *)(unaff_x22 + 0x78) = param_3;
      *(double *)(unaff_x22 + 0x68) = dVar12;
      IVar5 = *(ID *)(unaff_x22 + 0x38);
      FUN_1000932b8(IVar5,*(char *)(unaff_x22 + 0xa8) == '\x04');
      if (IVar5 != 0) {
        IVar5 = objc_stub::CGImageForProposedRect_context_hints_(IVar5,0,0,0);
        *(ID *)(unaff_x22 + 0x80) = IVar5;
        if (IVar5 != 0) {
          if ((*(byte *)(unaff_x22 + 0xa8) & 0xfe) == 6) {
            plVar3 = (long *)0x90;
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x88) = plVar3;
            *plVar3 = unaff_x22;
            plVar3[1] = (long)FUN_1000afdbc;
            uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
            uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
            uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
            uVar7 = *(undefined1 *)(unaff_x22 + 0xa8);
            uVar4 = 2;
          }
          else {
            *(undefined8 *)(unaff_x22 + 0x90) = 0;
            plVar3 = (long *)0x90;
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x98) = plVar3;
            *plVar3 = unaff_x22;
            plVar3[1] = (long)FUN_1000afe2c;
            uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
            uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
            uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
            uVar7 = *(undefined1 *)(unaff_x22 + 0xa8);
            uVar4 = 1;
          }
          goto LAB_1000afc30;
        }
      }
    }
    else {
      if (uVar10 == 3) {
        dVar12 = *(double *)(unaff_x22 + 0x40);
        dVar14 = *(double *)(unaff_x22 + 0x48);
        param_3 = dVar14;
        if (dVar12 <= dVar14) {
          param_3 = dVar12;
        }
        param_3 = param_3 / 100.0;
        dVar12 = dVar12 * 0.5;
        dVar14 = dVar14 * 0.5 + param_3 * -4.0;
        dVar8 = 56.0;
LAB_1000afce8:
        param_3 = param_3 * dVar8;
        goto LAB_1000afcf0;
      }
      if (uVar10 == 4) {
        dVar12 = *(double *)(unaff_x22 + 0x40);
        dVar14 = *(double *)(unaff_x22 + 0x48);
        param_3 = dVar14;
        if (dVar12 <= dVar14) {
          param_3 = dVar12;
        }
        param_3 = param_3 / 100.0;
        dVar12 = dVar12 * 0.11;
        dVar14 = dVar14 * 0.5;
        dVar8 = 118.0;
        goto LAB_1000afce8;
      }
    }
  }
  plVar3 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000afeec;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined1 *)(unaff_x22 + 0xa8);
  uVar4 = 0;
LAB_1000afc30:
  FUN_1000a42a4(uVar11,uVar13,uVar4,uVar6,uVar7);
  return;
}

