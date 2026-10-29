// rea decompile_all
// name: FUN_1001cb420
// address: 0x1001cb420
// body: available
// range: 0x1001cb420-0x1001cb587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cb420(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_10054a398;
  FUN_100002f94(&DAT_10054a398,&DAT_10042ab50);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var8 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar9 = (1L << ((ulong)(byte)p_Var8[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var8 != original || p_Var1 + uVar9 * 8 <= p_Var8 + 0x40) {
      _memmove(p_Var8 + 0x40,p_Var1,uVar9 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var8 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(original + 0x40);
    if (uVar9 == 0) goto LAB_1001cb4fc;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar11 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = *(undefined1 *)(*(long *)(original + 0x38) + uVar11);
        puVar4 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar11 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(*(long *)(p_Var8 + 0x38) + uVar11) = uVar6;
        _swift_bridgeObjectRetain();
        if (uVar9 != 0) break;
LAB_1001cb4fc:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1001cb588);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_1001cb560;
          uVar9 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1001cb560:
  _swift_release(original);
  *unaff_x20 = (long)p_Var8;
  return;
}

