// rea decompile_all
// name: FUN_1002336e0
// address: 0x1002336e0
// body: available
// range: 0x1002336e0-0x10023382b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002336e0(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  uVar2 = *(ulong *)(unaff_x20 + 8);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar7 = *(long *)(unaff_x20 + 8);
  puVar3 = param_1;
  uVar4 = param_2;
  FUN_10000464c();
  uVar5 = (ulong)~(uint)uVar4 & 1;
  lVar6 = *(long *)(lVar7 + 0x10) + uVar5;
  if (SCARRY8(*(long *)(lVar7 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100233808);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar6) {
    FUN_1001cd988(lVar6,uVar2);
    puVar3 = param_1;
    uVar2 = param_2;
    FUN_10000464c();
    if (((uint)uVar4 & 1) != ((uint)uVar2 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100233788);
      (*pcVar1)();
    }
  }
  else if ((uVar2 & 1) == 0) {
    FUN_1001caf18();
    *(long *)(unaff_x20 + 8) = lVar7;
    goto joined_r0x000100233824;
  }
  *(long *)(unaff_x20 + 8) = lVar7;
joined_r0x000100233824:
  if ((uVar4 & 1) == 0) {
    FUN_1002a7954();
    _swift_bridgeObjectRetain(param_2);
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + (long)puVar3 * 8);
  if (!SCARRY8(lVar6,1)) {
    *(long *)(*(long *)(lVar7 + 0x38) + (long)puVar3 * 8) = lVar6 + 1;
    FUN_10027ef6c(param_1,param_2);
    puVar3 = PTR___swiftEmptyArrayStorage_100524190;
    if (param_1 != (undefined *)0x0) {
      puVar3 = param_1;
    }
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10023380c);
  (*pcVar1)();
}

