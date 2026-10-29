// rea decompile_all
// name: FUN_1001cf9d8
// address: 0x1001cf9d8
// body: available
// range: 0x1001cf9d8-0x1001cfd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cf9d8(long param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  UUID UVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *unaff_x20;
  __int64 _Var16;
  __RawDictionaryStorage *original;
  long lVar17;
  __RawDictionaryStorage *p_Var18;
  ulong uVar19;
  
  lVar3 = 0;
  FUN_1001d537c();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  puVar8 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar17 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var16 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var16 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a150;
  FUN_100002f94(&DAT_10054a150,&DAT_10041a1e8);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var16,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001cfd68:
    _swift_release(original);
LAB_1001cfd70:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var18 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var18;
  lVar7 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cfd98);
          (*pcVar2)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001cfd70;
          }
          uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var18 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(p_Var18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001cfd68;
        }
        uVar19 = *(ulong *)(p_Var18 + lVar15 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar19 == 0);
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar15 = lVar7;
    }
    uVar10 = LZCOUNT(uVar10) | lVar15 << 6;
    lVar13 = *(long *)(lVar17 + 0x48);
    lVar7 = *(long *)(original + 0x30) + lVar13 * uVar10;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar17 + 0x10))(lVar9,lVar7,UVar4.unknown);
      lVar7 = *(long *)(lVar3 + 0x48);
      FUN_100029504(*(long *)(original + 0x38) + lVar7 * uVar10,puVar8,FUN_1001d537c);
    }
    else {
      (**(code **)(lVar17 + 0x20))(lVar9,lVar7,UVar4.unknown);
      lVar7 = *(long *)(lVar3 + 0x48);
      FUN_100007e64(*(long *)(original + 0x38) + lVar7 * uVar10,puVar8,FUN_1001d537c);
    }
    _Var16 = *(__int64 *)(p_Var5 + 0x28);
    FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
    uVar6 = Swift::Hashable::_rawHashValue(_Var16);
    uVar14 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar6 >> 6;
    uVar10 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar1 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar6 = uVar11 + 1;
        if ((uVar6 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cfd9c);
          (*pcVar2)();
        }
        uVar11 = 0;
        if (uVar6 != uVar10) {
          uVar11 = uVar6;
        }
        bVar1 = (bool)(uVar6 == uVar10 | bVar1);
      } while (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var5 + uVar11 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar11 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var5 + uVar11 + 0x40);
    (**(code **)(lVar17 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar13 * uVar10,lVar9,UVar4.unknown);
    FUN_100007e64(puVar8,*(long *)(p_Var5 + 0x38) + lVar7 * uVar10,FUN_1001d537c);
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}

