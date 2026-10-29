// rea decompile_all
// name: FUN_1001cb59c
// address: 0x1001cb59c
// body: available
// range: 0x1001cb59c-0x1001cb71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cb59c(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  this = (_DictionaryStorage *)&DAT_10054a3b0;
  FUN_100002f94(&DAT_10054a3b0,&DAT_10041a380);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_1001cb678;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        lVar12 = uVar10 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
        uVar5 = puVar2[1];
        lVar11 = uVar10 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar11);
        uVar14 = puVar3[2];
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar12);
        uVar16 = puVar3[1];
        uVar15 = *puVar3;
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + lVar11);
        puVar2[1] = uVar16;
        *puVar2 = uVar15;
        puVar2[2] = uVar14;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_1001cb678:
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001cb71c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_1001cb6f4;
          uVar8 = *(ulong *)(p_Var1 + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar11;
      }
    } while( true );
  }
LAB_1001cb6f4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}

