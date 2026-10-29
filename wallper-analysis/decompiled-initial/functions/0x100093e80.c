// rea decompile_all
// name: FUN_100093e80
// address: 0x100093e80
// body: available
// range: 0x100093e80-0x100093f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093e80(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[2] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100093efc;
      }
    }
    else if (uVar2 == 2) {
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    else {
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    if (param_2 != 0) {
LAB_100093efc:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *(short *)param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
      *(short *)(param_1 + 2) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[2] = (char)iVar1;
      return;
    }
  }
  return;
}

