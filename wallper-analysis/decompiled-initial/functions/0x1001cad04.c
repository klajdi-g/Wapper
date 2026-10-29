// rea decompile_all
// name: FUN_1001cad04
// address: 0x1001cad04
// body: available
// range: 0x1001cad04-0x1001caf17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cad04(void)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  
  puVar3 = &DAT_10054a248;
  FUN_100002f94(&DAT_10054a248,&DAT_10042aa30);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  this = (_DictionaryStorage *)&DAT_10054a240;
  FUN_100002f94(&DAT_10054a240,&DAT_10041a2d0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1001caef0:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var1 = original + 0x40;
  uVar6 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var4 != original) || (p_Var1 + uVar6 * 8 <= p_Var4 + 0x40)) {
    _memmove(p_Var4 + 0x40,p_Var1,uVar6 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(original + 0x40);
  if (uVar6 == 0) goto LAB_1001cae40;
  do {
    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar6 = uVar6 - 1 & uVar6;
    while( true ) {
      uVar8 = LZCOUNT(uVar8) | lVar11 << 6;
      uVar9 = *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
      lVar10 = *(long *)(lVar5 + 0x48) * uVar8;
      FUN_1000087e4(*(long *)(original + 0x38) + lVar10,auStack_90 + -extraout_x8,&DAT_10054a248,
                    &DAT_10042aa30);
      *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar8 * 8) = uVar9;
      FUN_100007e1c(auStack_90 + -extraout_x8,*(long *)(p_Var4 + 0x38) + lVar10,&DAT_10054a248,
                    &DAT_10042aa30);
      if (uVar6 != 0) break;
LAB_1001cae40:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001caf18);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_1001caef0;
        }
        uVar6 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar6 == 0);
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      lVar11 = lVar10;
    }
  } while( true );
}

