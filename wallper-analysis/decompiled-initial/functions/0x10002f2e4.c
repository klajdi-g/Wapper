// rea decompile_all
// name: FUN_10002f2e4
// address: 0x10002f2e4
// body: available
// range: 0x10002f2e4-0x10002f473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002f2e4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  Hasher HVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  __uint64 _Var11;
  long lVar12;
  
  lVar9 = 0;
  uVar7 = 1L << ((ulong)(byte)param_3[0x20] & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((param_3[0x20] & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  HVar4.unknown = param_3;
  lVar6 = 0;
  do {
    do {
      do {
        if (uVar10 == 0) {
          do {
            lVar12 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10002f474);
              (*pcVar1)();
            }
            if ((long)(uVar7 + 0x3f >> 6) <= lVar12) {
              FUN_1001a9b44(param_1,param_2,lVar9,param_3);
              return;
            }
            uVar10 = *(ulong *)((long)(param_3 + 0x40) + lVar12 * 8);
            lVar6 = lVar6 + 1;
          } while (uVar10 == 0);
          uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar10 = uVar10 - 1 & uVar10;
        }
        else {
          uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar10 = uVar10 - 1 & uVar10;
          lVar12 = lVar6;
        }
        uVar5 = LZCOUNT(uVar5);
        lVar6 = lVar12;
      } while (*(long *)(param_4 + 0x10) == 0);
      _Var11 = *(__uint64 *)(*(long *)(param_3 + 0x30) + (uVar5 | lVar12 << 6) * 8);
      uVar3 = Swift::Hasher::_hash(*(__int64 *)(param_4 + 0x28),_Var11,HVar4);
      uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
    } while ((*(ulong *)(param_4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0);
    do {
      if (*(__uint64 *)(*(long *)(param_4 + 0x30) + uVar3 * 8) == _Var11) {
        uVar3 = (uVar5 & 0xffffffffffffffc0 | lVar12 << 6) >> 3;
        *(ulong *)(param_1 + uVar3) = *(ulong *)(param_1 + uVar3) | 1L << (uVar5 & 0x3f);
        bVar2 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10002f438);
          (*pcVar1)();
        }
        break;
      }
      uVar3 = uVar3 + 1 & ~uVar8;
    } while ((*(ulong *)(param_4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  } while( true );
}

