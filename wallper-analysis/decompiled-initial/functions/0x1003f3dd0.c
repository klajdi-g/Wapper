// rea decompile_all
// name: FUN_1003f3dd0
// address: 0x1003f3dd0
// body: available
// range: 0x1003f3dd0-0x1003f3f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003f3dd0(long param_1,long param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  Hasher into;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  if (param_1 == param_2) {
LAB_1003f3f58:
    uVar10 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar16 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar16 = ~(-1L << (uVar14 & 0x3f));
      }
      uVar16 = uVar16 & *(ulong *)(param_1 + 0x38);
      lVar12 = 0;
      while( true ) {
        if (uVar16 == 0) {
          do {
            lVar15 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1003f3f80);
              (*pcVar8)();
            }
            if ((long)(uVar14 + 0x3f >> 6) <= lVar15) goto LAB_1003f3f58;
            uVar16 = ((ulong *)(param_1 + 0x38))[lVar15];
            lVar12 = lVar12 + 1;
          } while (uVar16 == 0);
          uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar16 = uVar16 - 1 & uVar16;
        }
        else {
          uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar16 = uVar16 - 1 & uVar16;
          lVar15 = lVar12;
        }
        pSVar1 = (String *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar11) | lVar15 << 6) * 0x10);
        pcVar3 = pSVar1->str;
        puVar5 = pSVar1->bridgeObject;
        SVar7 = *pSVar1;
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        _swift_bridgeObjectRetain(puVar5);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar7);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar11 = uVar11 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) break;
        while( true ) {
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
          _Var4.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var4.unknown == pcVar3 && _Var6.unknown == puVar5) ||
             (bVar9 = Swift::_stringCompareWithSmolCheck
                                (_Var4,_Var6,(_StringComparisonResult)(__int8)pcVar3), bVar9))
          break;
          uVar11 = uVar11 + 1 & ~uVar13;
          if ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0)
          goto LAB_1003f3f48;
        }
        _swift_bridgeObjectRelease(puVar5);
        lVar12 = lVar15;
      }
LAB_1003f3f48:
      _swift_bridgeObjectRelease(puVar5);
    }
    uVar10 = 0;
  }
  return uVar10;
}

