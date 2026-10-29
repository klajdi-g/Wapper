// rea decompile_all
// name: FUN_1002b4df0
// address: 0x1002b4df0
// body: available
// range: 0x1002b4df0-0x1002b4fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b4df0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  uVar11 = *(ulong *)(param_1 + 0x10);
  uVar14 = *(ulong *)(param_2 + 0x10);
  uVar2 = uVar14;
  if (uVar11 <= uVar14) {
    uVar2 = uVar11;
  }
  FUN_1001c5e64(0,uVar2,0);
  if (uVar2 != 0) {
    pbVar8 = (byte *)(param_1 + 0x20);
    pbVar7 = (byte *)(param_2 + 0x20);
    uVar9 = uVar2;
    uVar12 = uVar11;
    uVar15 = uVar14;
    do {
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002b4fbc);
        (*pcVar6)();
      }
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002b4fc0);
        (*pcVar6)();
      }
      bVar3 = *pbVar8;
      bVar4 = *pbVar7;
      uVar1 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1001c5e64(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      uVar15 = uVar15 - 1;
      puVar5[uVar1 + 0x20] = bVar4 ^ bVar3;
      uVar12 = uVar12 - 1;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (uVar14 < uVar11) {
    lVar10 = uVar14 - uVar2;
    uVar9 = uVar2;
    if ((long)uVar2 <= (long)uVar14) {
      uVar9 = uVar14;
    }
    lVar16 = uVar9 - uVar2;
    lVar13 = uVar11 - uVar2;
    pbVar8 = (byte *)(param_1 + uVar2 + 0x20);
    pbVar7 = (byte *)(param_2 + uVar2 + 0x20);
    do {
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002b4fc4);
        (*pcVar6)();
      }
      if (lVar10 == 0) {
        return;
      }
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002b4fc8);
        (*pcVar6)();
      }
      bVar3 = *pbVar8;
      bVar4 = *pbVar7;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        FUN_1001c5e64(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      lVar16 = lVar16 + -1;
      puVar5[uVar2 + 0x20] = bVar4 ^ bVar3;
      lVar10 = lVar10 + -1;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

