// rea decompile_all
// name: FUN_1003288d0
// address: 0x1003288d0
// body: available
// range: 0x1003288d0-0x100328abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003288d0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  undefined1 *puVar9;
  long lVar10;
  ulong *unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_90 [8];
  ulong local_88;
  ulong local_68;
  
  lVar7 = 0;
  FUN_10040211c();
  lVar7 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar13 = *unaff_x20;
  uVar15 = *(ulong *)(uVar13 + 0x10);
  uVar17 = uVar15 - 2;
  if (1 < uVar15) {
    uVar16 = 0;
    local_88 = uVar17;
    do {
      local_68 = 0;
      _swift_stdlib_random(&local_68,8);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_68;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar15;
      lVar8 = SUB168(auVar1 * auVar3,8);
      if (local_68 * uVar15 < uVar15) {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = -uVar15 / uVar15;
        }
        uVar11 = -uVar15 - uVar11 * uVar15;
        if (local_68 * uVar15 < uVar11) {
          do {
            local_68 = 0;
            _swift_stdlib_random(&local_68,8);
          } while (local_68 * uVar15 < uVar11);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_68;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar15;
          lVar8 = SUB168(auVar2 * auVar4,8);
        }
      }
      uVar11 = uVar16 + lVar8;
      if (SCARRY8(uVar16,lVar8)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100328ab0);
        (*pcVar5)();
      }
      if (uVar16 != uVar11) {
        uVar17 = *(ulong *)(uVar13 + 0x10);
        if (uVar17 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100328ab4);
          (*pcVar5)();
        }
        uVar14 = (ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
        lVar8 = uVar13 + uVar14;
        lVar10 = *(long *)(lVar7 + 0x48);
        lVar12 = lVar10 * uVar16;
        FUN_10002f154(lVar8 + lVar12,(long)puVar9 - extraout_x12);
        if (uVar17 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100328ab8);
          (*pcVar5)();
        }
        lVar10 = lVar10 * uVar11;
        FUN_10002f154(lVar8 + lVar10,puVar9);
        uVar17 = uVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar17 & 1) == 0) {
          FUN_1002652b8();
        }
        if (*(ulong *)(uVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100328abc);
          (*pcVar5)();
        }
        lVar8 = uVar13 + uVar14;
        FUN_10027f714(puVar9,lVar8 + lVar12);
        if (*(ulong *)(uVar13 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100328ac0);
          (*pcVar5)();
        }
        FUN_10027f714((long)puVar9 - extraout_x12,lVar8 + lVar10);
        *unaff_x20 = uVar13;
        uVar17 = local_88;
      }
      uVar15 = uVar15 - 1;
      bVar6 = uVar16 != uVar17;
      uVar16 = uVar16 + 1;
    } while (bVar6);
  }
  return;
}

