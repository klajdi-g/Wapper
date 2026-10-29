// rea decompile_all
// name: FUN_1001d1674
// address: 0x1001d1674
// body: available
// range: 0x1001d1674-0x1001d196f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d1674(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  String SVar6;
  bool bVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long *unaff_x20;
  undefined8 uVar19;
  __RawDictionaryStorage *p_Var20;
  ulong uVar21;
  __RawDictionaryStorage *original;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_1005568c0;
  FUN_100002f94(&DAT_1005568c0,&DAT_10042a7f0);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001d193c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var20 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar21 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar21 = uVar21 & *(ulong *)p_Var20;
  lVar12 = 0;
  do {
    if (uVar21 == 0) {
      do {
        lVar18 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001d196c);
          (*pcVar8)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar21 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var20 = -1L << (uVar21 & 0x3f);
            }
            else {
              _bzero(p_Var20,uVar21 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1001d193c;
        }
        uVar21 = *(ulong *)(p_Var20 + lVar18 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar21 == 0);
      uVar11 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar21 = uVar21 - 1 & uVar21;
    }
    else {
      uVar11 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar21 = uVar21 - 1 & uVar21;
      lVar18 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar18 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar11 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar6 = *pSVar1;
    puVar13 = (undefined8 *)(*(long *)(original + 0x38) + uVar11 * 0x30);
    uVar3 = *puVar13;
    uVar5 = puVar13[1];
    uVar16 = puVar13[2];
    uVar24 = puVar13[4];
    uVar23 = puVar13[3];
    uVar22 = puVar13[5];
    if ((param_2 & 1U) == 0) {
      uVar19 = puVar13[4];
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar22);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar6);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var9 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar7 = false;
      uVar11 = 0x3f - uVar17 >> 6;
      do {
        uVar10 = uVar14 + 1;
        if ((uVar10 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001d1970);
          (*pcVar8)();
        }
        uVar14 = 0;
        if (uVar10 != uVar11) {
          uVar14 = uVar10;
        }
        bVar7 = (bool)(uVar10 == uVar11 | bVar7);
      } while (*(ulong *)(p_Var9 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var9 + uVar14 * 8 + 0x40);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar14 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var9 + uVar14 + 0x40);
    puVar13 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar11 * 0x10);
    *puVar13 = pcVar2;
    puVar13[1] = pvVar4;
    puVar13 = (undefined8 *)(*(long *)(p_Var9 + 0x38) + uVar11 * 0x30);
    *puVar13 = uVar3;
    puVar13[1] = uVar5;
    puVar13[2] = uVar16;
    puVar13[4] = uVar24;
    puVar13[3] = uVar23;
    puVar13[5] = uVar22;
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar12 = lVar18;
  } while( true );
}

