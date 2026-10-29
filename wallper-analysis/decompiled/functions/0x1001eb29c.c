// rea decompile_all
// name: FUN_1001eb29c
// address: 0x1001eb29c
// body: available
// range: 0x1001eb29c-0x1001eb36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eb29c(void *param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar7 = param_4 >> 0x30 & 0xff;
      goto LAB_1001eb310;
    }
    iVar6 = (int)((ulong)param_3 >> 0x20);
    if (SBORROW4(iVar6,(int)param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb370);
      (*pcVar2)();
    }
    uVar7 = (ulong)(iVar6 - (int)param_3);
  }
  else {
    if (uVar5 != 2) {
      uVar7 = 0;
      goto LAB_1001eb310;
    }
    uVar7 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb2ec);
      (*pcVar2)();
    }
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb36c);
    (*pcVar2)();
  }
  if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb30c);
    (*pcVar2)();
  }
LAB_1001eb310:
  uVar8 = *param_5;
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_5 = uVar8;
  uVar4 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_1001c44b8(0,*(undefined8 *)(uVar8 + 0x10),0,uVar8);
  }
  *param_5 = uVar4;
  _CC_MD5(param_1,(CC_LONG)uVar7,(uchar *)(uVar4 + 0x20));
  return;
}

