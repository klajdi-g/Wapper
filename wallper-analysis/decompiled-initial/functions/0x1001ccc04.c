// rea decompile_all
// name: FUN_1001ccc04
// address: 0x1001ccc04
// body: available
// range: 0x1001ccc04-0x1001ccd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ccc04(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  this = (_DictionaryStorage *)&DAT_10054a1f8;
  FUN_100002f94(&DAT_10054a1f8,&DAT_10042ac20);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var8 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar10 = (1L << ((ulong)(byte)p_Var8[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var8 != original || p_Var1 + uVar10 * 8 <= p_Var8 + 0x40) {
      _memmove(p_Var8 + 0x40,p_Var1,uVar10 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(p_Var8 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(original + 0x40);
    if (uVar10 == 0) goto LAB_1001ccce0;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar16 << 6;
        lVar14 = uVar12 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar5 = puVar2[1];
        lVar13 = uVar12 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
        uVar15 = *puVar3;
        uVar6 = *(undefined1 *)(puVar3 + 1);
        puVar4 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + lVar14);
        uVar9 = puVar3[3];
        uVar18 = puVar3[3];
        uVar17 = puVar3[2];
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(p_Var8 + 0x38) + lVar13);
        *puVar2 = uVar15;
        *(undefined1 *)(puVar2 + 1) = uVar6;
        puVar2[3] = uVar18;
        puVar2[2] = uVar17;
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar5);
        if (uVar10 != 0) break;
LAB_1001ccce0:
        do {
          lVar13 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1001ccd94);
            (*pcVar7)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_1001ccd6c;
          uVar10 = *(ulong *)(p_Var1 + lVar13 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar16 = lVar13;
      }
    } while( true );
  }
LAB_1001ccd6c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var8;
  return;
}

