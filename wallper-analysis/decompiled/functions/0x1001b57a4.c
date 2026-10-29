// rea decompile_all
// name: FUN_1001b57a4
// address: 0x1001b57a4
// body: available
// range: 0x1001b57a4-0x1001b58ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b57a4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *unaff_x20;
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_100287314();
  }
  if (param_2 < *(ulong *)(uVar6 + 0x10)) {
    lVar8 = *(ulong *)(uVar6 + 0x10) - 1;
    puVar2 = &DAT_100556908;
    FUN_100002f94(&DAT_100556908,&DAT_10042a888);
    uVar5 = (ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50);
    lVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x48);
    lVar7 = uVar6 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)) + lVar9 * param_2;
    FUN_100007e1c(lVar7,param_1,&DAT_100556908,&DAT_10042a888);
    lVar3 = lVar8 - param_2;
    lVar4 = lVar9 + lVar9 * lVar3;
    if ((lVar9 < 1 && lVar4 != 0) && (0 < lVar9 || -1 < lVar4)) {
      if (lVar9 != 0) {
        _swift_arrayInitWithTakeBackToFront(lVar7,lVar7 + lVar9,lVar3,puVar2);
      }
    }
    else {
      _swift_arrayInitWithTakeFrontToBack(lVar7,lVar7 + lVar9,lVar3,puVar2);
    }
    *(long *)(uVar6 + 0x10) = lVar8;
    *unaff_x20 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b58ac);
  (*pcVar1)();
}

