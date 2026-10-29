// rea decompile_all
// name: FUN_1002f9e14
// address: 0x1002f9e14
// body: available
// range: 0x1002f9e14-0x1002fa11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f9e14(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong local_98 [7];
  
  lVar6 = 0;
  FUN_10040211c();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = (long)local_98 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar14 - extraout_x12_00;
  puVar7 = &DAT_10054a188;
  FUN_100002f94(&DAT_10054a188,&DAT_10042d4a0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (ulong *)(lVar19 - extraout_x12_01);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    iVar4 = *(int *)(puVar7 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(extraout_x8_00 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(extraout_x8_00 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(extraout_x8_00 + 0x48);
    do {
      FUN_1000087e4(param_1,puVar15,&DAT_10054a188,&DAT_10042d4a0);
      uVar2 = *puVar15;
      uVar3 = puVar15[1];
      FUN_100007e64((long)puVar15 + (long)iVar4,lVar19,FUN_10040211c);
      lVar18 = *param_3;
      uVar8 = uVar2;
      uVar9 = uVar3;
      FUN_10000464c();
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar16 = (ulong)~(uint)uVar9 & 1;
      lVar17 = lVar12 + uVar16;
      if (SCARRY8(lVar12,uVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002fa10c);
        (*pcVar5)();
      }
      if (*(long *)(lVar18 + 0x18) < lVar17) {
        FUN_1001ce764(lVar17,param_2 & 1);
        uVar8 = uVar2;
        uVar16 = uVar3;
        FUN_10000464c();
        if (((uint)uVar9 & 1) != ((uint)uVar16 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002fa120);
          (*pcVar5)();
        }
      }
      else if ((param_2 & 1) == 0) {
        FUN_1001cb71c();
      }
      lVar17 = *param_3;
      if ((uVar9 & 1) == 0) {
        lVar12 = lVar17 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        FUN_100007e64(lVar19,*(long *)(lVar17 + 0x38) + *(long *)(lVar10 + 0x48) * uVar8,
                      FUN_10040211c);
        if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002fa110);
          (*pcVar5)();
        }
        *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
      }
      else {
        lVar12 = *(long *)(lVar10 + 0x48) * uVar8;
        FUN_100029504(*(long *)(lVar17 + 0x38) + lVar12,lVar13,FUN_10040211c);
        FUN_100029504(lVar13,lVar14,FUN_10040211c);
        _swift_bridgeObjectRelease(uVar3);
        FUN_100029548(lVar13,FUN_10040211c);
        FUN_100029548(lVar19,FUN_10040211c);
        FUN_1001d4cb0(lVar14,*(long *)(lVar17 + 0x38) + lVar12,FUN_10040211c);
      }
      param_1 = param_1 + lVar11;
      param_2 = 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

