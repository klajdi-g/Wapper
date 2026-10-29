// rea decompile_all
// name: FUN_1001cbe8c
// address: 0x1001cbe8c
// body: available
// range: 0x1001cbe8c-0x1001cc0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cbe8c(code *param_1,_DictionaryStorage *param_2,undefined8 param_3)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  __RawDictionaryStorage *p_Var7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  __RawDictionaryStorage *original;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  ulong local_68;
  
  lVar6 = 0;
  (*param_1)();
  lVar8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(param_2,param_3);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(param_2,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1001cc07c:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var1 = original + 0x40;
  uVar9 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var7 != original || p_Var1 + uVar9 * 8 <= p_Var7 + 0x40) {
    _memmove(p_Var7 + 0x40,p_Var1,uVar9 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar9 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1001cbfbc;
  do {
    uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar8 + 0x48) * uVar10;
      (**(code **)(lVar8 + 0x10))
                (auStack_a0 + -extraout_x8,*(long *)(original + 0x38) + lVar12,lVar6);
      puVar2 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      (**(code **)(lVar8 + 0x20))(*(long *)(p_Var7 + 0x38) + lVar12,auStack_a0 + -extraout_x8,lVar6)
      ;
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_1001cbfbc:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001cc0a4);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          _swift_release(original);
          goto LAB_1001cc07c;
        }
        local_68 = *(ulong *)(p_Var1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (local_68 == 0);
      uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar13 = lVar11;
    }
  } while( true );
}

