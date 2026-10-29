// rea decompile_all
// name: FUN_1001a9b44
// address: 0x1001a9b44
// body: available
// range: 0x1001a9b44-0x1001a9d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001a9b44(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  __uint64 _Var11;
  long lVar12;
  ulong uVar13;
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar3 = param_4;
    }
    else {
      this = (_DictionaryStorage *)&DAT_10054a5b8;
      HVar5.unknown = param_3;
      FUN_100002f94(&DAT_10054a5b8,&DAT_10042a360);
      puVar3 = param_3;
      Swift::_DictionaryStorage::_allocate(this,(__int64)param_3);
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar7 = 0;
      do {
        if (uVar13 == 0) {
          do {
            lVar12 = lVar7 + 1;
            if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1001a9d3c);
              (*pcVar1)();
            }
            if (param_2 <= lVar12) {
              return puVar3;
            }
            uVar13 = param_1[lVar12];
            lVar7 = lVar7 + 1;
          } while (uVar13 == 0);
          uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar12 = lVar7;
        }
        uVar6 = LZCOUNT(uVar6) | lVar12 << 6;
        _Var11 = *(__uint64 *)(*(long *)(param_4 + 0x30) + uVar6 * 8);
        uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
        uVar4 = Swift::Hasher::_hash(*(__int64 *)(puVar3 + 0x28),_Var11,HVar5);
        uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
        uVar8 = uVar4 >> 6;
        uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar3 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff)
        ;
        if (uVar6 == 0) {
          bVar2 = false;
          uVar6 = 0x3f - uVar9 >> 6;
          do {
            uVar4 = uVar8 + 1;
            if ((uVar4 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1001a9d40);
              (*pcVar1)();
            }
            uVar8 = 0;
            if (uVar4 != uVar6) {
              uVar8 = uVar4;
            }
            bVar2 = (bool)(uVar4 == uVar6 | bVar2);
          } while (*(ulong *)(puVar3 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
          uVar6 = ~*(ulong *)(puVar3 + uVar8 * 8 + 0x40);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
        }
        else {
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar3 + uVar8 + 0x40)
        ;
        *(__uint64 *)(*(long *)(puVar3 + 0x30) + uVar6 * 8) = _Var11;
        *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar6 * 8) = uVar10;
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        bVar2 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001a9d44);
          (*pcVar1)();
        }
        _swift_bridgeObjectRetain(uVar10);
        lVar7 = lVar12;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar3;
}

