// rea decompile_all
// name: FUN_1001d24b8
// address: 0x1001d24b8
// body: available
// range: 0x1001d24b8-0x1001d268b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d24b8(Bucket param_1,long param_2,code *param_3)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  puVar16 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar11 ^ 0xffffffffffffffff));
  if ((*(ulong *)(_Var1.unknown + ((ulong)puVar16 >> 6) * 8) >> ((ulong)puVar16 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar17 = (ulong)(BVar8.unknown + 1) & uVar11;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + (long)puVar16 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar11;
      if ((long)param_1.unknown < (long)uVar17) {
        if (uVar9 < uVar17) {
LAB_1001d25b0:
          if ((long)param_1.unknown < (long)uVar9) goto LAB_1001d2538;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)param_1.unknown * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)puVar16 * 0x10);
        if ((param_1.unknown != puVar16) || (puVar4 + 2 <= puVar3)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        }
        lVar15 = *(long *)(param_2 + 0x38);
        lVar10 = 0;
        (*param_3)();
        lVar14 = *(long *)(*(long *)(lVar10 + -8) + 0x48);
        lVar12 = lVar14 * (long)param_1.unknown;
        uVar9 = lVar15 + lVar12;
        lVar13 = lVar14 * (long)puVar16;
        lVar15 = lVar15 + lVar13;
        param_1.unknown = puVar16;
        if (lVar12 < lVar13 || (ulong)(lVar15 + lVar14) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar15,1,lVar10);
        }
        else if (lVar12 - lVar13 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar15,1);
        }
      }
      else if (uVar17 <= uVar9) goto LAB_1001d25b0;
LAB_1001d2538:
      puVar16 = (undefined *)((ulong)(puVar16 + 1) & uVar11);
    } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar16 >> 6) * 8) >> ((ulong)puVar16 & 0x3f) & 1)
             != 0);
  }
  uVar11 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1001d268c);
  (*pcVar7)();
}

