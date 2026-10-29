// rea decompile_all
// name: FUN_1002275a8
// address: 0x1002275a8
// body: available
// range: 0x1002275a8-0x100227753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002275a8(Bucket param_1)

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
  ulong uVar10;
  long *unaff_x20;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_98 [72];
  
  lVar12 = *unaff_x20;
  _Var1.unknown = (undefined *)(lVar12 + 0x38);
  uVar10 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  puVar13 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar10 ^ 0xffffffffffffffff));
  uVar11 = 1L << ((ulong)puVar13 & 0x3f);
  if ((uVar11 & *(ulong *)(_Var1.unknown + ((ulong)puVar13 >> 6) * 8)) == 0) {
    uVar10 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar10) =
         *(ulong *)(_Var1.unknown + uVar10) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  }
  else {
    uVar10 = ~uVar10;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    if ((*(ulong *)(_Var1.unknown + ((ulong)puVar13 >> 6) * 8) & uVar11) != 0) {
      uVar11 = (ulong)(BVar8.unknown + 1) & uVar10;
      do {
        pSVar2 = (String *)(*(long *)(lVar12 + 0x30) + (long)puVar13 * 0x10);
        pvVar5 = pSVar2->bridgeObject;
        SVar6 = *pSVar2;
        Swift::Hasher::init(*(__int64 *)(lVar12 + 0x28));
        _swift_bridgeObjectRetain(pvVar5);
        into.unknown = auStack_98;
        Swift::String::hash(into,SVar6);
        uVar9 = Swift::Hasher::_finalize(into);
        _swift_bridgeObjectRelease(pvVar5);
        uVar9 = uVar9 & uVar10;
        if ((long)param_1.unknown < (long)uVar11) {
          if (uVar9 < uVar11) {
LAB_1002276ac:
            if ((long)param_1.unknown < (long)uVar9) goto LAB_100227634;
          }
          puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + (long)param_1.unknown * 0x10);
          puVar4 = (undefined8 *)(*(long *)(lVar12 + 0x30) + (long)puVar13 * 0x10);
          if ((param_1.unknown != puVar13) || (puVar4 + 2 <= puVar3)) {
            uVar14 = *puVar4;
            puVar3[1] = puVar4[1];
            *puVar3 = uVar14;
            param_1.unknown = puVar13;
          }
        }
        else if (uVar11 <= uVar9) goto LAB_1002276ac;
LAB_100227634:
        puVar13 = (undefined *)((ulong)(puVar13 + 1) & uVar10);
      } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar13 >> 6) * 8) >> ((ulong)puVar13 & 0x3f) & 1
               ) != 0);
    }
    uVar10 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar10) =
         (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U & *(ulong *)(_Var1.unknown + uVar10);
  }
  if (SBORROW8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100227754);
    (*pcVar7)();
  }
  *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + -1;
  *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
  return;
}

