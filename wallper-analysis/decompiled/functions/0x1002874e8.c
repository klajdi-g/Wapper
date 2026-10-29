// rea decompile_all
// name: FUN_1002874e8
// address: 0x1002874e8
// body: available
// range: 0x1002874e8-0x10028763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002874e8(long param_1,long param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *unaff_x20;
  lVar3 = 0;
  (*param_5)();
  lVar9 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028762c);
    (*pcVar2)();
  }
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = lVar7 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  lVar8 = lVar1 + lVar6 * param_1;
  _swift_arrayDestroy(lVar8,lVar9,lVar3);
  lVar3 = param_3 - lVar9;
  if (SBORROW8(param_3,lVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100287630);
    (*pcVar2)();
  }
  lVar9 = lVar6 * param_3;
  if (lVar3 != 0) {
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100287634);
      (*pcVar2)();
    }
    uVar4 = lVar1 + lVar6 * param_2;
    uVar5 = lVar8 + lVar9;
    if (uVar5 < uVar4 || uVar4 + (*(long *)(lVar7 + 0x10) - param_2) * lVar6 <= uVar5) {
      _swift_arrayInitWithTakeFrontToBack();
    }
    else if (uVar5 != uVar4) {
      _swift_arrayInitWithTakeBackToFront();
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100287638);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar3;
  }
  if (((0 < param_3) && (0 < lVar9)) && (FUN_100029504(param_4,lVar8,param_5), lVar6 < lVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028763c);
    (*pcVar2)();
  }
  FUN_10002a29c(param_4,param_6,param_7);
  return;
}

