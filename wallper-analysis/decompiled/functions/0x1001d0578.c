// rea decompile_all
// name: FUN_1001d0578
// address: 0x1001d0578
// body: available
// range: 0x1001d0578-0x1001d091b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d0578(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  UUID UVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  __int64 _Var14;
  code *pcVar15;
  long lVar16;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var17;
  undefined1 auStack_b0 [4];
  uint local_ac;
  ulong local_88;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var14 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var14 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a218;
  FUN_100002f94(&DAT_10054a218,&DAT_10041a2a8);
  p_Var4 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var14,SUB41(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_1001d08ec:
    _swift_release(original);
LAB_1001d08f0:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  lVar11 = 0;
  p_Var17 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_88 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_88 = ~(-1L << (uVar9 & 0x3f));
  }
  local_88 = local_88 & *(ulong *)p_Var17;
  lVar1 = 0x20;
  local_ac = param_2;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x10;
  }
  do {
    if (local_88 == 0) {
      do {
        lVar12 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1001d0918);
          (*pcVar15)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
          if ((local_ac & 1) == 0) {
            _swift_release(original);
            goto LAB_1001d08f0;
          }
          uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var17 = -1L << (uVar9 & 0x3f);
          }
          else {
            _bzero(p_Var17,uVar9 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001d08ec;
        }
        local_88 = *(ulong *)(p_Var17 + lVar12 * 8);
        lVar11 = lVar11 + 1;
      } while (local_88 == 0);
      uVar6 = (local_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_88 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      local_88 = local_88 - 1 & local_88;
    }
    else {
      uVar6 = (local_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_88 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      local_88 = local_88 - 1 & local_88;
      lVar12 = lVar11;
    }
    lVar11 = *(long *)(lVar16 + 0x48);
    lVar13 = lVar11 * (LZCOUNT(uVar6) | lVar12 << 6);
    pcVar15 = *(code **)(lVar16 + lVar1);
    (*pcVar15)((long)puVar8 - extraout_x12,*(long *)(original + 0x30) + lVar13,UVar3.unknown);
    (*pcVar15)(puVar8,*(long *)(original + 0x38) + lVar13,UVar3.unknown);
    _Var14 = *(__int64 *)(p_Var4 + 0x28);
    FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
    uVar5 = Swift::Hashable::_rawHashValue(_Var14);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar7 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1001d091c);
          (*pcVar15)();
        }
        uVar7 = 0;
        if (uVar5 != uVar6) {
          uVar7 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar7 * 8 + 0x40);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar7 + 0x40);
    lVar11 = lVar11 * uVar6;
    pcVar15 = *(code **)(lVar16 + 0x20);
    (*pcVar15)(*(long *)(p_Var4 + 0x30) + lVar11,(long)puVar8 - extraout_x12,UVar3.unknown);
    (*pcVar15)(*(long *)(p_Var4 + 0x38) + lVar11,puVar8,UVar3.unknown);
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar11 = lVar12;
  } while( true );
}

