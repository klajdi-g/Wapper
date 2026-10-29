// rea decompile_all
// name: FUN_1001cc9b4
// address: 0x1001cc9b4
// body: available
// range: 0x1001cc9b4-0x1001ccc03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cc9b4(void)

{
  __RawDictionaryStorage *p_Var1;
  UUID UVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long extraout_x12;
  long *unaff_x20;
  long lVar8;
  code *pcVar9;
  __RawDictionaryStorage *original;
  long lVar10;
  ulong local_68;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar4 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  puVar7 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  this = (_DictionaryStorage *)&DAT_10054a218;
  FUN_100002f94(&DAT_10054a218,&DAT_10041a2a8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1001ccbdc:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var1 = original + 0x40;
  uVar5 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var3 != original) || (p_Var1 + uVar5 * 8 <= p_Var3 + 0x40)) {
    _memmove(p_Var3 + 0x40,p_Var1,uVar5 << 3);
  }
  lVar10 = 0;
  *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar5 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1001ccb0c;
  do {
    uVar6 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      lVar8 = *(long *)(lVar4 + 0x48) * (LZCOUNT(uVar6) | lVar10 << 6);
      pcVar9 = *(code **)(lVar4 + 0x10);
      (*pcVar9)((long)puVar7 - extraout_x12,*(long *)(original + 0x30) + lVar8,UVar2.unknown);
      (*pcVar9)(puVar7,*(long *)(original + 0x38) + lVar8,UVar2.unknown);
      pcVar9 = *(code **)(lVar4 + 0x20);
      (*pcVar9)(*(long *)(p_Var3 + 0x30) + lVar8,(long)puVar7 - extraout_x12,UVar2.unknown);
      (*pcVar9)(*(long *)(p_Var3 + 0x38) + lVar8,puVar7,UVar2.unknown);
      if (local_68 != 0) break;
LAB_1001ccb0c:
      do {
        lVar8 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ccc04);
          (*pcVar9)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar8) {
          _swift_release(original);
          goto LAB_1001ccbdc;
        }
        local_68 = *(ulong *)(p_Var1 + lVar8 * 8);
        lVar10 = lVar10 + 1;
      } while (local_68 == 0);
      uVar6 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar10 = lVar8;
    }
  } while( true );
}

