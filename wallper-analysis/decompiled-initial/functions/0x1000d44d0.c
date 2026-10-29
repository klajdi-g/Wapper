// rea decompile_all
// name: FUN_1000d44d0
// address: 0x1000d44d0
// body: available
// range: 0x1000d44d0-0x1000d45bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000d44d0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = param_1 % 0x3c;
  iVar6 = (int)lVar7;
  cVar4 = (char)(iVar6 + 0x37);
  uVar1 = iVar6 + 0x37 + ((uint)(cVar4 * -0x77) >> 8);
  uVar3 = iVar6 + (((uint)(iVar6 * 0x67) >> 0xf & 1) + (iVar6 * 0x670000 >> 0x19)) * -5;
  lVar2 = lVar7 - (char)uVar3;
  if ((uVar3 & 0xff) == 0) {
    lVar2 = (long)(char)(cVar4 + ((char)((uint)(int)(char)uVar1 >> 5) + (char)((uVar1 & 0x80) >> 7))
                                 * -0x3c);
  }
  iVar6 = (iVar6 - uVar3) + 5;
  cVar4 = (char)iVar6;
  uVar1 = iVar6 + ((uint)(cVar4 * -0x77) >> 8);
  if (0 < param_2) {
    lVar2 = (long)(char)(cVar4 + ((char)((uint)(int)(char)uVar1 >> 5) + (char)((uVar1 & 0x80) >> 7))
                                 * -0x3c);
  }
  if (!SCARRY8(param_1 - lVar7,lVar2)) {
    lVar7 = ((param_1 - lVar7) + lVar2) % 0x5a0;
    lVar2 = lVar7 + 0x5a0;
    if (-1 < lVar7) {
      lVar2 = lVar7;
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000d45bc);
  (*pcVar5)();
}

