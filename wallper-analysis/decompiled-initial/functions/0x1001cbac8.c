// rea decompile_all
// name: FUN_1001cbac8
// address: 0x1001cbac8
// body: available
// range: 0x1001cbac8-0x1001cbcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cbac8(void)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  UUID UVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  __RawDictionaryStorage *original;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  ulong local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar5 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  this = (_DictionaryStorage *)&DAT_10054a140;
  FUN_100002f94(&DAT_10054a140,&DAT_10042a710);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1001cbcb8:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var1 = original + 0x40;
  uVar6 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var4 != original) || (p_Var1 + uVar6 * 8 <= p_Var4 + 0x40)) {
    _memmove(p_Var4 + 0x40,p_Var1,uVar6 << 3);
  }
  lVar10 = 0;
  *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar6 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1001cbbfc;
  do {
    uVar7 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
      lVar8 = *(long *)(lVar5 + 0x48) * uVar7;
      (**(code **)(lVar5 + 0x10))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(original + 0x30) + lVar8,UVar3.unknown);
      uVar9 = *(undefined8 *)(*(long *)(original + 0x38) + uVar7 * 8);
      (**(code **)(lVar5 + 0x20))
                (*(long *)(p_Var4 + 0x30) + lVar8,
                 auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
      *(undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar7 * 8) = uVar9;
      _swift_bridgeObjectRetain(uVar9);
      if (local_68 != 0) break;
LAB_1001cbbfc:
      do {
        lVar8 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cbce0);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
          _swift_release(original);
          goto LAB_1001cbcb8;
        }
        local_68 = *(ulong *)(p_Var1 + lVar8 * 8);
        lVar10 = lVar10 + 1;
      } while (local_68 == 0);
      uVar7 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar10 = lVar8;
    }
  } while( true );
}

