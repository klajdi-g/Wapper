// rea decompile_all
// name: FUN_1001cea88
// address: 0x1001cea88
// body: available
// range: 0x1001cea88-0x1001ced3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cea88(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a1c8;
  FUN_100002f94(&DAT_10054a1c8,&DAT_10042a8b0);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001ced08:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ced38);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1001ced08;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ced3c);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}

