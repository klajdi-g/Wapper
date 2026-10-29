// rea decompile_all
// name: FUN_1001cf690
// address: 0x1001cf690
// body: available
// range: 0x1001cf690-0x1001cf9d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cf690(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  long lVar10;
  Hasher into;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  ulong uVar19;
  __RawDictionaryStorage *p_Var20;
  long lVar21;
  __RawDictionaryStorage *original;
  undefined1 auStack_a8 [72];
  
  puVar8 = &DAT_10054a360;
  FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
  lVar12 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = &stack0xffffffffffffff30 + -extraout_x8;
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a358;
  FUN_100002f94(&DAT_10054a358,&DAT_10042ab70);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001cf9a4:
    _swift_release(original);
LAB_1001cf9ac:
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var20 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var20;
  lVar10 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar21 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1001cf9d4);
          (*pcVar7)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001cf9ac;
          }
          uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var20 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(p_Var20,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001cf9a4;
        }
        uVar19 = *(ulong *)(p_Var20 + lVar21 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar19 == 0);
      uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar21 = lVar10;
    }
    uVar14 = LZCOUNT(uVar14) | lVar21 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar14 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar18 = *(long *)(lVar12 + 0x48);
    lVar10 = *(long *)(original + 0x38) + lVar18 * uVar14;
    if ((param_2 & 1U) == 0) {
      FUN_1000087e4(lVar10,puVar13,&DAT_10054a360,&DAT_10041a330);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100007e1c(lVar10,puVar13,&DAT_10054a360,&DAT_10041a330);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar11 >> 6;
    uVar14 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar6 = false;
      uVar14 = 0x3f - uVar17 >> 6;
      do {
        uVar11 = uVar15 + 1;
        if ((uVar11 == uVar14) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1001cf9d8);
          (*pcVar7)();
        }
        uVar15 = 0;
        if (uVar11 != uVar14) {
          uVar15 = uVar11;
        }
        bVar6 = (bool)(uVar11 == uVar14 | bVar6);
      } while (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar14 = ~*(ulong *)(p_Var9 + uVar15 * 8 + 0x40);
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar15 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar15 + 0x40) = 1L << (uVar14 & 0x3f) | *(ulong *)(p_Var9 + uVar15 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar14 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100007e1c(puVar13,*(long *)(p_Var9 + 0x38) + lVar18 * uVar14,&DAT_10054a360,&DAT_10041a330);
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar10 = lVar21;
  } while( true );
}

