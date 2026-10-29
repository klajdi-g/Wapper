// rea decompile_all
// name: FUN_100227754
// address: 0x100227754
// body: available
// range: 0x100227754-0x1002278e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100227754(Bucket param_1)

{
  _HashTable _Var1;
  code *pcVar2;
  Bucket BVar3;
  ulong uVar4;
  _HashTable _Var5;
  ulong uVar6;
  long *unaff_x20;
  ulong uVar7;
  Hasher HVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *unaff_x20;
  _Var1.unknown = (undefined *)(lVar9 + 0x38);
  uVar6 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  puVar10 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar6 ^ 0xffffffffffffffff));
  uVar7 = 1L << ((ulong)puVar10 & 0x3f);
  if ((uVar7 & *(ulong *)(_Var1.unknown + ((ulong)puVar10 >> 6) * 8)) == 0) {
    uVar6 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar6) =
         *(ulong *)(_Var1.unknown + uVar6) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  }
  else {
    uVar6 = ~uVar6;
    _Var5.unknown = _Var1.unknown;
    BVar3 = Swift::_HashTable::previousHole(param_1,_Var1);
    if ((*(ulong *)(_Var1.unknown + ((ulong)puVar10 >> 6) * 8) & uVar7) != 0) {
      uVar7 = (ulong)(BVar3.unknown + 1) & uVar6;
      do {
        HVar8.unknown = (undefined *)(ulong)(byte)puVar10[*(long *)(lVar9 + 0x30)];
        Swift::Hasher::init(*(__int64 *)(lVar9 + 0x28));
        Swift::Hasher::_combine((__uint64)HVar8.unknown,(Hasher)_Var5.unknown);
        uVar4 = Swift::Hasher::_finalize(HVar8);
        uVar4 = uVar4 & uVar6;
        if ((long)param_1.unknown < (long)uVar7) {
          if (uVar4 < uVar7) {
LAB_10022783c:
            if ((long)param_1.unknown < (long)uVar4) goto LAB_1002277e0;
          }
          if ((param_1.unknown != puVar10) ||
             (puVar10 + *(long *)(lVar9 + 0x30) + 1 <= param_1.unknown + *(long *)(lVar9 + 0x30))) {
            param_1.unknown[*(long *)(lVar9 + 0x30)] = puVar10[*(long *)(lVar9 + 0x30)];
            param_1.unknown = puVar10;
          }
        }
        else if (uVar7 <= uVar4) goto LAB_10022783c;
LAB_1002277e0:
        puVar10 = (undefined *)((ulong)(puVar10 + 1) & uVar6);
      } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar10 >> 6) * 8) >> ((ulong)puVar10 & 0x3f) & 1
               ) != 0);
    }
    uVar6 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar6) =
         (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U & *(ulong *)(_Var1.unknown + uVar6);
  }
  if (SBORROW8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002278e4);
    (*pcVar2)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
  *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
  return;
}

