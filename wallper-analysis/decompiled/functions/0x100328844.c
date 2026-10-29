// rea decompile_all
// name: thunk_FUN_100328848
// address: 0x100328844
// body: available
// range: 0x100328844-0x100328847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_100328848(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = 0;
    _swift_stdlib_random(&uStack_28,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_28;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    uVar6 = SUB168(auVar1 * auVar3,8);
    if (uStack_28 * param_1 < param_1) {
      uVar7 = 0;
      if (param_1 != 0) {
        uVar7 = -param_1 / param_1;
      }
      uVar7 = -param_1 - uVar7 * param_1;
      if (uStack_28 * param_1 < uVar7) {
        do {
          uStack_28 = 0;
          _swift_stdlib_random(&uStack_28,8);
        } while (uStack_28 * param_1 < uVar7);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uStack_28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        uVar6 = SUB168(auVar2 * auVar4,8);
      }
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1003288d0);
  (*pcVar5)();
}

