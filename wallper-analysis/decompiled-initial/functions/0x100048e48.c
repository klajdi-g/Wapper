// rea decompile_all
// name: FUN_100048e48
// address: 0x100048e48
// body: available
// range: 0x100048e48-0x100048f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100048e48(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048ef4);
    (*pcVar5)();
  }
  param_1 = param_1 * 4;
  uVar1 = param_1 + *param_3;
  if (SCARRY8(param_1,*param_3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048ef8);
    (*pcVar5)();
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048efc);
    (*pcVar5)();
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 <= uVar1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f00);
    (*pcVar5)();
  }
  uVar2 = param_1 + param_3[1];
  if (SCARRY8(param_1,param_3[1])) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f04);
    (*pcVar5)();
  }
  if (uVar6 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f08);
    (*pcVar5)();
  }
  uVar3 = param_1 + param_3[2];
  if (SCARRY8(param_1,param_3[2])) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f0c);
    (*pcVar5)();
  }
  if (uVar3 < uVar6) {
    uVar4 = param_1 + param_3[3];
    if (SCARRY8(param_1,param_3[3])) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f14);
      (*pcVar5)();
    }
    if (uVar4 < uVar6) {
      param_2 = param_2 + 0x20;
      uVar7 = *(undefined8 *)(param_2 + uVar1 * 8);
      uVar12 = *(undefined8 *)(param_2 + uVar2 * 8);
      uVar13 = *(undefined8 *)(param_2 + uVar3 * 8);
      uVar14 = *(undefined8 *)(param_2 + uVar4 * 8);
      fVar8 = (float)param_3[4];
      fVar9 = (float)((ulong)param_3[4] >> 0x20);
      fVar10 = (float)param_3[5];
      fVar11 = (float)((ulong)param_3[5] >> 0x20);
      return CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar8 + (float)((ulong)uVar12 >> 0x20) * fVar9
                      + (float)((ulong)uVar13 >> 0x20) * fVar10 +
                      (float)((ulong)uVar14 >> 0x20) * fVar11,
                      (float)uVar7 * fVar8 + (float)uVar12 * fVar9 + (float)uVar13 * fVar10 +
                      (float)uVar14 * fVar11);
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f18);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100048f10);
  (*pcVar5)();
}

