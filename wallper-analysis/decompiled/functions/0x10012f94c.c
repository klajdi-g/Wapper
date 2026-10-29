// rea decompile_all
// name: FUN_10012f94c
// address: 0x10012f94c
// body: available
// range: 0x10012f94c-0x10012fa6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012f94c(long param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar3 = *unaff_x20;
  lVar6 = *(long *)(lVar3 + 0x10);
  if (SCARRY8(lVar6,uVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10012fa60);
    (*pcVar1)();
  }
  lVar5 = lVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar5 == 0) ||
     (uVar2 = *(ulong *)(lVar3 + 0x18) >> 1, (long)uVar2 < (long)(lVar6 + uVar4))) {
    (*param_2)();
    uVar2 = *(ulong *)(lVar5 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar3 = lVar5;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10012fa64);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = 0;
    (*param_3)();
    if (uVar2 - lVar5 < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10012fa68);
      (*pcVar1)();
    }
    uVar2 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    uVar2 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar3 + uVar2 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * lVar5,param_1 + uVar2,uVar4
               ,lVar6);
    _swift_bridgeObjectRelease(param_1);
    if (uVar4 != 0) {
      if (SCARRY8(*(long *)(lVar3 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10012fa6c);
        (*pcVar1)();
      }
      *(ulong *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + uVar4;
    }
  }
  *unaff_x20 = lVar3;
  return;
}

