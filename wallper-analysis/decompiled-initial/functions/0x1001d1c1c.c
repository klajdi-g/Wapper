// rea decompile_all
// name: FUN_1001d1c1c
// address: 0x1001d1c1c
// body: available
// range: 0x1001d1c1c-0x1001d1dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d1c1c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  __uint64 *p_Var2;
  __uint64 *p_Var3;
  code *pcVar4;
  Bucket BVar5;
  ulong uVar6;
  undefined *puVar7;
  Hasher HVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  puVar15 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar9 ^ 0xffffffffffffffff));
  if ((*(ulong *)(_Var1.unknown + ((ulong)puVar15 >> 6) * 8) >> ((ulong)puVar15 & 0x3f) & 1) != 0) {
    puVar13 = (undefined *)~uVar9;
    HVar8.unknown = puVar13;
    BVar5 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar9 = (ulong)(BVar5.unknown + 1) & (ulong)puVar13;
    do {
      lVar10 = *(long *)(param_2 + 0x30);
      p_Var2 = (__uint64 *)(lVar10 + (long)puVar15 * 8);
      uVar6 = Swift::Hasher::_hash(*(__int64 *)(param_2 + 0x28),*p_Var2,HVar8);
      uVar6 = uVar6 & (ulong)puVar13;
      if ((long)param_1.unknown < (long)uVar9) {
        if (uVar9 <= uVar6 || (long)uVar6 <= (long)param_1.unknown) {
LAB_1001d1cf4:
          p_Var3 = (__uint64 *)(lVar10 + (long)param_1.unknown * 8);
          if ((param_1.unknown != puVar15) || (p_Var2 + 1 <= p_Var3)) {
            *p_Var3 = *p_Var2;
          }
          lVar14 = *(long *)(param_2 + 0x38);
          puVar7 = &DAT_10054a248;
          FUN_100002f94(&DAT_10054a248,&DAT_10042aa30);
          lVar12 = *(long *)(*(long *)(puVar7 + -8) + 0x48);
          lVar10 = lVar12 * (long)param_1.unknown;
          lVar11 = lVar12 * (long)puVar15;
          param_1.unknown = puVar15;
          if (lVar10 < lVar11 || (ulong)(lVar14 + lVar11 + lVar12) <= (ulong)(lVar14 + lVar10)) {
            HVar8.unknown = (undefined *)0x1;
            _swift_arrayInitWithTakeFrontToBack();
          }
          else if (lVar10 - lVar11 != 0) {
            HVar8.unknown = (undefined *)0x1;
            _swift_arrayInitWithTakeBackToFront();
          }
        }
      }
      else if (uVar9 <= uVar6 && (long)uVar6 <= (long)param_1.unknown) goto LAB_1001d1cf4;
      puVar15 = (undefined *)((ulong)(puVar15 + 1) & (ulong)puVar13);
    } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar15 >> 6) * 8) >> ((ulong)puVar15 & 0x3f) & 1)
             != 0);
  }
  uVar9 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar9) =
       *(ulong *)(_Var1.unknown + uVar9) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d1dc4);
  (*pcVar4)();
}

