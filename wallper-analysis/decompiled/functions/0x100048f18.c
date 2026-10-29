// rea decompile_all
// name: FUN_100048f18
// address: 0x100048f18
// body: available
// range: 0x100048f18-0x100049027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100048f18(long param_1,long param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [12];
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  if (param_1 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100049004);
    (*pcVar17)();
  }
  param_1 = param_1 * 4;
  uVar2 = param_1 + *param_3;
  if (SCARRY8(param_1,*param_3)) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100049008);
    (*pcVar17)();
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10004900c);
    (*pcVar17)();
  }
  uVar18 = *(ulong *)(param_2 + 0x10);
  if (uVar18 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100049010);
    (*pcVar17)();
  }
  uVar3 = param_1 + param_3[1];
  if (SCARRY8(param_1,param_3[1])) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100049014);
    (*pcVar17)();
  }
  if (uVar18 <= uVar3) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100049018);
    (*pcVar17)();
  }
  uVar4 = param_1 + param_3[2];
  if (SCARRY8(param_1,param_3[2])) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10004901c);
    (*pcVar17)();
  }
  if (uVar4 < uVar18) {
    uVar5 = param_1 + param_3[3];
    if (SCARRY8(param_1,param_3[3])) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100049024);
      (*pcVar17)();
    }
    if (uVar5 < uVar18) {
      param_2 = param_2 + 0x20;
      pauVar6 = (undefined1 (*) [12])(param_2 + uVar2 * 0x10);
      uVar19 = (undefined4)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
      pauVar1 = (undefined1 (*) [12])(param_3 + 4);
      fVar22 = (float)param_3[5];
      fVar23 = (float)((ulong)param_3[5] >> 0x20);
      fVar20 = (float)*(undefined8 *)*pauVar1;
      fVar21 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      pauVar7 = (undefined1 (*) [12])(param_2 + uVar3 * 0x10);
      uVar24 = (undefined4)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      pauVar8 = (undefined1 (*) [12])(param_2 + uVar4 * 0x10);
      uVar25 = (undefined4)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
      auVar13._12_4_ = uVar24;
      auVar13._0_12_ = *pauVar7;
      auVar14._12_4_ = uVar24;
      auVar14._0_12_ = *pauVar7;
      NEON_ext(auVar13,auVar14,8,1);
      auVar9._12_4_ = uVar19;
      auVar9._0_12_ = *pauVar6;
      auVar10._12_4_ = uVar19;
      auVar10._0_12_ = *pauVar6;
      NEON_ext(auVar9,auVar10,8,1);
      auVar9 = *(undefined1 (*) [16])(param_2 + uVar5 * 0x10);
      auVar11._12_4_ = fVar23;
      auVar11._0_12_ = *pauVar1;
      auVar12._12_4_ = fVar23;
      auVar12._0_12_ = *pauVar1;
      NEON_ext(auVar11,auVar12,8,1);
      NEON_ext(auVar9,auVar9,8,1);
      auVar15._12_4_ = uVar25;
      auVar15._0_12_ = *pauVar8;
      auVar16._12_4_ = uVar25;
      auVar16._0_12_ = *pauVar8;
      NEON_ext(auVar15,auVar16,8,1);
      return CONCAT44((float)((ulong)*(undefined8 *)*pauVar6 >> 0x20) * fVar20 +
                      (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20) * fVar21 +
                      (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20) * fVar22 +
                      auVar9._4_4_ * fVar23,
                      (float)*(undefined8 *)*pauVar6 * fVar20 +
                      (float)*(undefined8 *)*pauVar7 * fVar21 +
                      (float)*(undefined8 *)*pauVar8 * fVar22 + auVar9._0_4_ * fVar23);
    }
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100049028);
    (*pcVar17)();
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x100049020);
  (*pcVar17)();
}

