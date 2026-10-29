// rea decompile_all
// name: FUN_1001d40d0
// address: 0x1001d40d0
// body: available
// range: 0x1001d40d0-0x1001d424f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d4234 to 0x10025f470 FUN_10025f470 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001d4248) */

long FUN_1001d40d0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long local_38;
  
  local_38 = param_1;
  _swift_bridgeObjectRetain();
  FUN_1001b6890(&local_38);
  lVar3 = *(long *)(local_38 + 0x10);
  if (lVar3 == 0) {
    _swift_release();
    lVar3 = 0x1a4;
  }
  else {
    lVar8 = *(long *)(local_38 + 0x20);
    if (lVar3 != 1) {
      uVar9 = 0;
      lVar4 = 4;
      do {
        lVar5 = *(long *)(local_38 + lVar4 * 8);
        lVar1 = 0;
        if (-lVar3 + lVar4 != 3) {
          lVar1 = lVar4 + -3;
        }
        lVar6 = ((long *)(local_38 + 0x20))[lVar1];
        lVar1 = lVar6 - lVar5;
        if (SBORROW8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d423c);
          (*pcVar2)();
        }
        if (SCARRY8(lVar1,0x5a0)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d4240);
          (*pcVar2)();
        }
        uVar7 = (lVar1 + 0x5a0) % 0x5a0;
        if ((long)uVar7 <= (long)uVar9) {
          lVar5 = lVar8;
        }
        if ((long)uVar9 <= (long)uVar7) {
          uVar9 = uVar7;
        }
        lVar4 = lVar4 + 1;
        lVar8 = lVar5;
      } while (-lVar3 + lVar4 != 4);
      _swift_release();
      if (!SCARRY8(lVar5,uVar9 >> 1)) {
        lVar3 = 0x1e;
        if ((long)uVar9 < 0x78) {
          lVar3 = 0xf;
        }
        lVar4 = (long)(lVar5 + (uVar9 >> 1)) % 0x5a0;
        lVar8 = lVar4 + 0x5a0;
        if (-1 < lVar4) {
          lVar8 = lVar4;
        }
        FUN_10025f470(lVar3,lVar8);
        return lVar3;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d4248);
      (*pcVar2)();
    }
    _swift_release();
    if (SCARRY8(lVar8,0x2d0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d4244);
      (*pcVar2)();
    }
    lVar8 = (lVar8 + 0x2d0) % 0x5a0;
    lVar3 = lVar8 + 0x5a0;
    if (-1 < lVar8) {
      lVar3 = lVar8;
    }
  }
  return lVar3;
}

