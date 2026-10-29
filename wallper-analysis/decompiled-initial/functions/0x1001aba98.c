// rea decompile_all
// name: FUN_1001aba98
// address: 0x1001aba98
// body: available
// range: 0x1001aba98-0x1001abd6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001aba98(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  URL UVar6;
  URL UVar7;
  _StringGuts _Var8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  String SVar18;
  long alStack_b0 [2];
  long local_90;
  ulong local_58;
  
  puVar5 = &DAT_100556440;
  alStack_b0[1] = param_2;
  FUN_100002f94(&DAT_100556440,&DAT_10042a0f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)alStack_b0 + -extraout_x8);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  local_58 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    local_58 = ~(-1L << (uVar11 & 0x3f));
  }
  local_58 = local_58 & *(ulong *)(param_3 + 0x40);
  lVar10 = 0;
  do {
    if (local_58 == 0) {
      do {
        lVar15 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1001abd70);
          (*pcVar17)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar15) {
          FUN_1001a989c(param_1,alStack_b0[1],local_90,param_3);
          return;
        }
        local_58 = ((ulong *)(param_3 + 0x40))[lVar15];
        lVar10 = lVar10 + 1;
      } while (local_58 == 0);
      uVar9 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_58 = local_58 - 1 & local_58;
    }
    else {
      uVar9 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_58 = local_58 - 1 & local_58;
      lVar15 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9);
    uVar12 = uVar9 | lVar15 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar1;
    puVar3 = (undefined *)puVar1[1];
    pcVar17 = *(code **)(lVar14 + 0x10);
    (*pcVar17)(lVar13,*(long *)(param_3 + 0x38) + *(long *)(lVar14 + 0x48) * uVar12,UVar6.unknown);
    *puVar16 = uVar2;
    *(undefined **)((long)alStack_b0 + -extraout_x8 + 8) = puVar3;
    (*pcVar17)((long)puVar16 + (long)*(int *)(puVar5 + 0x30),lVar13,UVar6.unknown);
    UVar7.unknown = puVar3;
    _swift_bridgeObjectRetain_n(puVar3,2);
    SVar18 = Foundation::URL::get_absoluteString(UVar7);
    _Var8.unknown = SVar18.bridgeObject;
    lVar10 = lVar15;
    if (SVar18.str == (undefined *)0xd00000000000001c &&
        _Var8.unknown == (undefined *)0x80000001004dc890) {
      _swift_bridgeObjectRelease(_Var8.unknown);
      FUN_10002a29c(puVar16,&DAT_100556440,&DAT_10042a0f0);
      (**(code **)(lVar14 + 8))(lVar13,UVar6.unknown);
      _swift_bridgeObjectRelease(puVar3);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar18.str,_Var8,(_StringComparisonResult)0x1c);
      _swift_bridgeObjectRelease(_Var8.unknown);
      FUN_10002a29c(puVar16,&DAT_100556440,&DAT_10042a0f0);
      (**(code **)(lVar14 + 8))(lVar13,UVar6.unknown);
      _swift_bridgeObjectRelease(puVar3);
      if (!bVar4) {
        uVar12 = (uVar9 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
        *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar9 & 0x3f);
        bVar4 = SCARRY8(local_90,1);
        local_90 = local_90 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1001abd38);
          (*pcVar17)();
        }
      }
    }
  } while( true );
}

