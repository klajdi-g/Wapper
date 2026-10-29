// rea decompile_all
// name: FUN_1001ced3c
// address: 0x1001ced3c
// body: available
// range: 0x1001ced3c-0x1001cf093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ced3c(long param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  UUID UVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  __int64 _Var13;
  __RawDictionaryStorage *original;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  __RawDictionaryStorage *p_Var17;
  undefined1 auStack_a0 [8];
  undefined8 local_78;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar14 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var13 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var13 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a140;
  FUN_100002f94(&DAT_10054a140,&DAT_10042a710);
  p_Var4 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var13,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001cf060:
    _swift_release(original);
LAB_1001cf068:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var17 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var17;
  lVar6 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar12 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cf090);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001cf068;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var17 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var17,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001cf060;
        }
        uVar15 = *(ulong *)(p_Var17 + lVar12 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar15 == 0);
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar12 = lVar6;
    }
    uVar7 = LZCOUNT(uVar7) | lVar12 << 6;
    lVar10 = *(long *)(lVar16 + 0x48);
    lVar6 = *(long *)(original + 0x30) + lVar10 * uVar7;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar16 + 0x10))(puVar14,lVar6,UVar3.unknown);
      local_78 = *(undefined8 *)(*(long *)(original + 0x38) + uVar7 * 8);
      _swift_bridgeObjectRetain();
    }
    else {
      (**(code **)(lVar16 + 0x20))(puVar14,lVar6,UVar3.unknown);
      local_78 = *(undefined8 *)(*(long *)(original + 0x38) + uVar7 * 8);
    }
    _Var13 = *(__int64 *)(p_Var4 + 0x28);
    FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
    uVar5 = Swift::Hashable::_rawHashValue(_Var13);
    uVar11 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar1 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar7) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cf094);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar7) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar7 | bVar1);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x40);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x40);
    (**(code **)(lVar16 + 0x20))(*(long *)(p_Var4 + 0x30) + lVar10 * uVar7,puVar14,UVar3.unknown);
    *(undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar7 * 8) = local_78;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar6 = lVar12;
  } while( true );
}

