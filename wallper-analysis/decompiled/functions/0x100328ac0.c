// rea decompile_all
// name: FUN_100328ac0
// address: 0x100328ac0
// body: available
// range: 0x100328ac0-0x100328c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100328ac0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  bool bVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_68;
  
  uVar16 = *unaff_x20;
  uVar18 = *(ulong *)(uVar16 + 0x10);
  uVar5 = uVar18 - 2;
  if (1 < uVar18) {
    uVar19 = 0;
    do {
      local_68 = 0;
      _swift_stdlib_random(&local_68,8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_68;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar18;
      lVar15 = SUB168(auVar6 * auVar8,8);
      if (local_68 * uVar18 < uVar18) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = -uVar18 / uVar18;
        }
        uVar17 = -uVar18 - uVar17 * uVar18;
        if (local_68 * uVar18 < uVar17) {
          do {
            local_68 = 0;
            _swift_stdlib_random(&local_68,8);
          } while (local_68 * uVar18 < uVar17);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_68;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar18;
          lVar15 = SUB168(auVar7 * auVar9,8);
        }
      }
      uVar17 = uVar19 + lVar15;
      if (SCARRY8(uVar19,lVar15)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100328c34);
        (*pcVar10)();
      }
      if (uVar19 != uVar17) {
        if (*(ulong *)(uVar16 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100328c38);
          (*pcVar10)();
        }
        if (*(ulong *)(uVar16 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100328c3c);
          (*pcVar10)();
        }
        puVar1 = (undefined8 *)(uVar16 + 0x20 + uVar19 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        puVar1 = (undefined8 *)(uVar16 + 0x20 + uVar17 * 0x10);
        uVar14 = *puVar1;
        uVar4 = puVar1[1];
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        uVar12 = uVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar12 & 1) == 0) {
          FUN_1002652cc();
        }
        if (*(ulong *)(uVar16 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100328c40);
          (*pcVar10)();
        }
        puVar1 = (undefined8 *)(uVar16 + 0x20 + uVar19 * 0x10);
        uVar13 = puVar1[1];
        *puVar1 = uVar14;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(uVar13);
        if (*(ulong *)(uVar16 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100328c44);
          (*pcVar10)();
        }
        puVar1 = (undefined8 *)(uVar16 + 0x20 + uVar17 * 0x10);
        uVar14 = puVar1[1];
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        _swift_bridgeObjectRelease(uVar14);
        *unaff_x20 = uVar16;
      }
      uVar18 = uVar18 - 1;
      bVar11 = uVar19 != uVar5;
      uVar19 = uVar19 + 1;
    } while (bVar11);
  }
  return;
}

