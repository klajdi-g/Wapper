// rea decompile_all
// name: FUN_1001cd678
// address: 0x1001cd678
// body: available
// range: 0x1001cd678-0x1001cd987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cd678(long param_1,bool param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  long lVar5;
  ulong uVar6;
  Hasher HVar7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar14;
  undefined1 *puVar15;
  __RawDictionaryStorage *p_Var16;
  __uint64 _Var17;
  ulong uVar18;
  undefined1 auStack_80 [8];
  
  puVar3 = &DAT_10054a248;
  FUN_100002f94(&DAT_10054a248,&DAT_10042aa30);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_80 + -extraout_x8;
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a240;
  FUN_100002f94(&DAT_10054a240,&DAT_10041a2d0);
  p_Var4 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001cd954:
    _swift_release(original);
LAB_1001cd95c:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var16 = original + 0x40;
  uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var16;
  lVar5 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar13 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cd984);
          (*pcVar2)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar13) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001cd95c;
          }
          uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001cd954;
        }
        uVar18 = *(ulong *)(p_Var16 + lVar13 * 8);
        lVar5 = lVar5 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar13 = lVar5;
    }
    uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
    _Var17 = *(__uint64 *)(*(long *)(original + 0x30) + uVar9 * 8);
    lVar14 = *(long *)(lVar8 + 0x48);
    lVar5 = *(long *)(original + 0x38) + lVar14 * uVar9;
    if ((param_2 & 1U) == 0) {
      HVar7.unknown = &DAT_10054a248;
      FUN_1000087e4(lVar5,puVar15,&DAT_10054a248,&DAT_10042aa30);
    }
    else {
      HVar7.unknown = &DAT_10054a248;
      FUN_100007e1c(lVar5,puVar15,&DAT_10054a248,&DAT_10042aa30);
    }
    uVar6 = Swift::Hasher::_hash(*(__int64 *)(p_Var4 + 0x28),_Var17,HVar7);
    uVar12 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar6 >> 6;
    uVar9 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var4 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar1 = false;
      uVar9 = 0x3f - uVar12 >> 6;
      do {
        uVar6 = uVar10 + 1;
        if ((uVar6 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cd988);
          (*pcVar2)();
        }
        uVar10 = 0;
        if (uVar6 != uVar9) {
          uVar10 = uVar6;
        }
        bVar1 = (bool)(uVar6 == uVar9 | bVar1);
      } while (*(ulong *)(p_Var4 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var4 + uVar10 * 8 + 0x40);
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar10 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var4 + uVar10 + 0x40);
    *(__uint64 *)(*(long *)(p_Var4 + 0x30) + uVar9 * 8) = _Var17;
    FUN_100007e1c(puVar15,*(long *)(p_Var4 + 0x38) + lVar14 * uVar9,&DAT_10054a248,&DAT_10042aa30);
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar5 = lVar13;
  } while( true );
}

