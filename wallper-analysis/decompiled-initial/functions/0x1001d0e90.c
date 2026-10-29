// rea decompile_all
// name: FUN_1001d0e90
// address: 0x1001d0e90
// body: available
// range: 0x1001d0e90-0x1001d11f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d0e90(long param_1,bool param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  URL UVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x20;
  __int64 _Var14;
  __RawDictionaryStorage *original;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  __RawDictionaryStorage *p_Var18;
  undefined8 local_80;
  undefined8 uStack_78;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  puVar15 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var14 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var14 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a580;
  FUN_100002f94(&DAT_10054a580,&DAT_10041b598);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var14,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001d11c0:
    _swift_release(original);
LAB_1001d11c8:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var18 = original + 0x40;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)p_Var18;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d11f0);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001d11c8;
          }
          uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var18 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(p_Var18,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001d11c0;
        }
        uVar16 = *(ulong *)(p_Var18 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar13 = lVar7;
    }
    uVar8 = LZCOUNT(uVar8) | lVar13 << 6;
    lVar11 = *(long *)(lVar17 + 0x48);
    lVar7 = *(long *)(original + 0x30) + lVar11 * uVar8;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar17 + 0x10))(puVar15,lVar7,UVar4.unknown);
      puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
      uStack_78 = *puVar1;
      local_80 = puVar1[1];
      _swift_bridgeObjectRetain();
    }
    else {
      (**(code **)(lVar17 + 0x20))(puVar15,lVar7,UVar4.unknown);
      puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
      uStack_78 = *puVar1;
      local_80 = puVar1[1];
    }
    _Var14 = *(__int64 *)(p_Var5 + 0x28);
    FUN_1000036d0(&DAT_10054a588,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Hashable_100520a30);
    uVar6 = Swift::Hashable::_rawHashValue(_Var14);
    uVar12 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d11f4);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar6 != uVar8) {
          uVar9 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar8 | bVar2);
      } while (*(ulong *)(p_Var5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar8 = ~*(ulong *)(p_Var5 + uVar9 * 8 + 0x40);
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar9 + 0x40) = 1L << (uVar8 & 0x3f) | *(ulong *)(p_Var5 + uVar9 + 0x40);
    (**(code **)(lVar17 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar11 * uVar8,puVar15,UVar4.unknown);
    puVar1 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x10);
    *puVar1 = uStack_78;
    puVar1[1] = local_80;
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}

