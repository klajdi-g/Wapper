// rea decompile_all
// name: FUN_1001a8b9c
// address: 0x1001a8b9c
// body: available
// range: 0x1001a8b9c-0x1001a8dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a8b9c(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  String *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  String SVar6;
  code *pcVar7;
  bool bVar8;
  Hasher into;
  _StringGuts _Var9;
  _StringGuts _Var10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  lVar11 = *(long *)(param_3 + 0x10);
  uVar13 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar13) = *(ulong *)(param_1 + uVar13) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar11 = lVar11 + -1;
  do {
    while( true ) {
      lVar3 = param_5[3];
      uVar13 = param_5[4];
      lVar14 = lVar3;
      if (uVar13 == 0) {
        uVar12 = param_5[2] + 0x40U >> 6;
        lVar15 = lVar3;
        do {
          lVar14 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1001a8dc8);
            (*pcVar7)();
          }
          if ((long)uVar12 <= lVar14) {
            if ((long)uVar12 <= lVar3 + 1) {
              uVar12 = lVar3 + 1;
            }
            param_5[3] = uVar12 - 1;
            param_5[4] = 0;
            _swift_retain(param_3);
            FUN_1001a8dcc(param_1,param_2,lVar11,param_3);
            return;
          }
          uVar13 = *(ulong *)(param_5[1] + lVar14 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar13 == 0);
      }
      uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      pSVar1 = (String *)
               (*(long *)(*param_5 + 0x30) + LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 0x10 +
               lVar14 * 0x400);
      pcVar4 = pSVar1->str;
      puVar5 = pSVar1->bridgeObject;
      SVar6 = *pSVar1;
      param_5[3] = lVar14;
      param_5[4] = uVar13 - 1 & uVar13;
      Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
      _swift_bridgeObjectRetain(puVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar13 = Swift::Hasher::_finalize(into);
      uVar12 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar13 = uVar13 & (uVar12 ^ 0xffffffffffffffff);
      uVar17 = uVar13 >> 6;
      uVar16 = 1L << (uVar13 & 0x3f);
      if ((uVar16 & *(ulong *)(param_3 + 0x38 + uVar17 * 8)) != 0) break;
LAB_1001a8d48:
      _swift_bridgeObjectRelease(puVar5);
    }
    plVar2 = (long *)(*(long *)(param_3 + 0x30) + uVar13 * 0x10);
    _Var9.unknown = (undefined *)*plVar2;
    _Var10.unknown = (undefined *)plVar2[1];
    if (_Var9.unknown != pcVar4 || _Var10.unknown != puVar5) {
      do {
        bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var9,_Var10,(_StringComparisonResult)(__int8)pcVar4);
        if (bVar8) break;
        uVar13 = uVar13 + 1 & ~uVar12;
        uVar17 = uVar13 >> 6;
        uVar16 = 1L << (uVar13 & 0x3f);
        if ((uVar16 & *(ulong *)(param_3 + 0x38 + uVar17 * 8)) == 0) goto LAB_1001a8d48;
        plVar2 = (long *)(*(long *)(param_3 + 0x30) + uVar13 * 0x10);
        _Var9.unknown = (undefined *)*plVar2;
        _Var10.unknown = (undefined *)plVar2[1];
      } while ((_Var9.unknown != pcVar4) || (_Var10.unknown != puVar5));
    }
    _swift_bridgeObjectRelease(puVar5);
    uVar13 = *(ulong *)(param_1 + uVar17 * 8);
    *(ulong *)(param_1 + uVar17 * 8) = uVar13 & (uVar16 ^ 0xffffffffffffffff);
    if ((uVar13 & uVar16) != 0) {
      bVar8 = SBORROW8(lVar11,1);
      lVar11 = lVar11 + -1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001a8dcc);
        (*pcVar7)();
      }
      if (lVar11 == 0) {
        return;
      }
    }
  } while( true );
}

