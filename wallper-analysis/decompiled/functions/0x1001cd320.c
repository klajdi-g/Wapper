// rea decompile_all
// name: FUN_1001cd320
// address: 0x1001cd320
// body: available
// range: 0x1001cd320-0x1001cd4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cd320(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  this = (_DictionaryStorage *)&DAT_1005568c0;
  FUN_100002f94(&DAT_1005568c0,&DAT_10042a7f0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var11 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar12 = (1L << ((ulong)(byte)p_Var11[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var11 != original || p_Var1 + uVar12 * 8 <= p_Var11 + 0x40) {
      _memmove(p_Var11 + 0x40,p_Var1,uVar12 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(p_Var11 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar12 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar12 = uVar12 & *(ulong *)(original + 0x40);
    if (uVar12 == 0) goto LAB_1001cd404;
    do {
      uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      while( true ) {
        uVar14 = LZCOUNT(uVar14) | lVar18 << 6;
        lVar16 = uVar14 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar16);
        uVar7 = puVar2[1];
        lVar15 = uVar14 * 0x30;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar15);
        uVar5 = *puVar3;
        uVar8 = puVar3[1];
        uVar17 = puVar3[2];
        puVar4 = (undefined8 *)(*(long *)(p_Var11 + 0x30) + lVar16);
        uVar6 = puVar3[4];
        uVar9 = puVar3[5];
        uVar20 = puVar3[4];
        uVar19 = puVar3[3];
        *puVar4 = *puVar2;
        puVar4[1] = uVar7;
        puVar2 = (undefined8 *)(*(long *)(p_Var11 + 0x38) + lVar15);
        *puVar2 = uVar5;
        puVar2[1] = uVar8;
        puVar2[2] = uVar17;
        puVar2[4] = uVar20;
        puVar2[3] = uVar19;
        puVar2[5] = uVar9;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar9);
        if (uVar12 != 0) break;
LAB_1001cd404:
        do {
          lVar15 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1001cd4e8);
            (*pcVar10)();
          }
          if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1001cd4b8;
          uVar12 = *(ulong *)(p_Var1 + lVar15 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar12 == 0);
        uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar18 = lVar15;
      }
    } while( true );
  }
LAB_1001cd4b8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var11;
  return;
}

