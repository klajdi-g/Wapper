// rea decompile_all
// name: FUN_1001aaf94
// address: 0x1001aaf94
// body: available
// range: 0x1001aaf94-0x1001ab0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1001aaf94(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  puVar6 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar6;
  if (param_2 == (undefined8 *)0x0) {
    lVar5 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ab0e0);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar2 = lVar5;
    do {
      while (uVar8 == 0) {
        bVar4 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ab0dc);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar5) {
          uVar8 = 0;
          if ((long)uVar10 <= lVar2 + 1) {
            uVar10 = lVar2 + 1;
          }
          lVar5 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_1001ab0a0;
        }
        uVar8 = puVar6[lVar5];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar5 * 0x200);
      lVar2 = lVar5;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_1001ab0a0:
  *param_1 = param_4;
  param_1[1] = (long)puVar6;
  param_1[2] = ~uVar7;
  param_1[3] = lVar5;
  param_1[4] = uVar8;
  return param_3;
}

