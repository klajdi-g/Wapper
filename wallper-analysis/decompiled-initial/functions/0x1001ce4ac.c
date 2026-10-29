// rea decompile_all
// name: FUN_1001ce4ac
// address: 0x1001ce4ac
// body: available
// range: 0x1001ce4ac-0x1001ce763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ce4ac(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  Hasher into;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_c8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a3b0;
  FUN_100002f94(&DAT_10054a3b0,&DAT_10041a380);
  p_Var7 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001ce728:
    _swift_release(original);
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001ce760);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1001ce728;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar17 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar9 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar3 = pSVar1->bridgeObject;
    SVar4 = *pSVar1;
    puVar11 = (undefined8 *)(*(long *)(original + 0x38) + uVar9 * 0x18);
    uVar18 = *puVar11;
    uVar19 = puVar11[1];
    uVar20 = puVar11[2];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar3);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar4);
    uVar8 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar8 = uVar12 + 1;
        if ((uVar8 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001ce764);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar8 != uVar9) {
          uVar12 = uVar8;
        }
        bVar5 = (bool)(uVar8 == uVar9 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var7 + uVar12 * 8 + 0x40);
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar12 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var7 + uVar12 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var7 + uVar12 + 0x40);
    puVar11 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar9 * 0x10);
    *puVar11 = pcVar2;
    puVar11[1] = pvVar3;
    puVar11 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar9 * 0x18);
    *puVar11 = uVar18;
    puVar11[1] = uVar19;
    puVar11[2] = uVar20;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}

