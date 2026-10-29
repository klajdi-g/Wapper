// rea decompile_all
// name: FUN_1001d091c
// address: 0x1001d091c
// body: available
// range: 0x1001d091c-0x1001d0be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d091c(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  String SVar8;
  bool bVar9;
  code *pcVar10;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *unaff_x20;
  ulong uVar19;
  __RawDictionaryStorage *p_Var20;
  __RawDictionaryStorage *original;
  long lVar21;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a1f8;
  FUN_100002f94(&DAT_10054a1f8,&DAT_10042ac20);
  p_Var11 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001d0bb4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var11;
    return;
  }
  p_Var20 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var20;
  lVar14 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar21 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1001d0be4);
          (*pcVar10)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1U) != 0) {
            uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var20 = -1L << (uVar19 & 0x3f);
            }
            else {
              _bzero(p_Var20,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1001d0bb4;
        }
        uVar19 = *(ulong *)(p_Var20 + lVar21 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar19 == 0);
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar21 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar21 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar13 * 0x10);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar8 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + uVar13 * 0x20);
    uVar17 = *puVar2;
    uVar7 = *(undefined1 *)(puVar2 + 1);
    uVar4 = puVar2[2];
    uVar6 = puVar2[3];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(pvVar5);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var11 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar18 = -1L << ((ulong)(byte)p_Var11[0x20] & 0x3f);
    uVar12 = uVar12 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar12 >> 6;
    uVar13 = -1L << (uVar12 & 0x3f) & (*(ulong *)(p_Var11 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar18 >> 6;
      do {
        uVar12 = uVar15 + 1;
        if ((uVar12 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1001d0be8);
          (*pcVar10)();
        }
        uVar15 = 0;
        if (uVar12 != uVar13) {
          uVar15 = uVar12;
        }
        bVar9 = (bool)(uVar12 == uVar13 | bVar9);
      } while (*(ulong *)(p_Var11 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar13 = ~*(ulong *)(p_Var11 + uVar15 * 8 + 0x40);
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar15 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var11 + uVar15 + 0x40) =
         1L << (uVar13 & 0x3f) | *(ulong *)(p_Var11 + uVar15 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var11 + 0x30) + uVar13 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var11 + 0x38) + uVar13 * 0x20);
    *puVar2 = uVar17;
    *(undefined1 *)(puVar2 + 1) = uVar7;
    puVar2[2] = uVar4;
    puVar2[3] = uVar6;
    *(long *)(p_Var11 + 0x10) = *(long *)(p_Var11 + 0x10) + 1;
    lVar14 = lVar21;
  } while( true );
}

