// rea decompile_all
// name: FUN_1003bd520
// address: 0x1003bd520
// body: available
// range: 0x1003bd520-0x1003bd6c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1003bd520(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar2 = 0;
  FUN_10040211c();
  local_70 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_68 = (long)puVar4 - extraout_x12;
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (1 < uVar3) {
    uVar8 = 0;
    uVar6 = uVar3 >> 1;
    local_78 = uVar6;
    do {
      uVar3 = uVar3 - 1;
      if (uVar8 != uVar3) {
        uVar6 = *(ulong *)(param_1 + 0x10);
        if (uVar6 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bd6bc);
          (*pcVar1)();
        }
        uVar7 = (ulong)*(byte *)(local_70 + 0x50) + 0x20 &
                ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff);
        lVar2 = param_1 + uVar7;
        lVar5 = *(long *)(local_70 + 0x48);
        lVar9 = lVar5 * uVar8;
        FUN_100029504(lVar2 + lVar9,local_68,FUN_10040211c);
        if (uVar6 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bd6c0);
          (*pcVar1)();
        }
        lVar5 = lVar5 * uVar3;
        FUN_100029504(lVar2 + lVar5,puVar4,FUN_10040211c);
        uVar6 = param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar6 & 1) == 0) {
          FUN_100287238();
        }
        if (*(ulong *)(param_1 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bd6c4);
          (*pcVar1)();
        }
        lVar2 = param_1 + uVar7;
        FUN_10027f714(puVar4,lVar2 + lVar9);
        if (*(ulong *)(param_1 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bd6c8);
          (*pcVar1)();
        }
        FUN_10027f714(local_68,lVar2 + lVar5);
        uVar6 = local_78;
      }
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  return param_1;
}

