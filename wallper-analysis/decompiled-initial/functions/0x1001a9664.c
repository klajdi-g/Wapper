// rea decompile_all
// name: FUN_1001a9664
// address: 0x1001a9664
// body: available
// range: 0x1001a9664-0x1001a989b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001a9664(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  puVar8 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar8 = param_4;
    }
    else {
      this = (_DictionaryStorage *)&DAT_10054a3b8;
      FUN_100002f94(&DAT_10054a3b8,&DAT_10042a3b0);
      puVar8 = param_3;
      Swift::_DictionaryStorage::_allocate(this,(__int64)param_3);
      if (param_2 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = *param_1;
      }
      lVar11 = 0;
      do {
        if (uVar15 == 0) {
          do {
            lVar16 = lVar11 + 1;
            if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a9894);
              (*pcVar6)();
            }
            if (param_2 <= lVar16) {
              return puVar8;
            }
            uVar15 = param_1[lVar16];
            lVar11 = lVar11 + 1;
          } while (uVar15 == 0);
          uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uVar15 = uVar15 - 1 & uVar15;
        }
        else {
          uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uVar15 = uVar15 - 1 & uVar15;
          lVar16 = lVar11;
        }
        uVar10 = LZCOUNT(uVar10) | lVar16 << 6;
        pSVar1 = (String *)(*(long *)(param_4 + 0x30) + uVar10 * 0x10);
        pcVar3 = pSVar1->str;
        pvVar4 = pSVar1->bridgeObject;
        SVar5 = *pSVar1;
        uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar10 * 8);
        Swift::Hasher::init(*(__int64 *)(puVar8 + 0x28));
        _swift_bridgeObjectRetain(pvVar4);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar5);
        uVar9 = Swift::Hasher::_finalize(into);
        uVar14 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
        uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
        uVar13 = uVar9 >> 6;
        uVar10 = -1L << (uVar9 & 0x3f) &
                 (*(ulong *)(puVar8 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar7 = false;
          uVar10 = 0x3f - uVar14 >> 6;
          do {
            uVar9 = uVar13 + 1;
            if ((uVar9 == uVar10) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a9898);
              (*pcVar6)();
            }
            uVar13 = 0;
            if (uVar9 != uVar10) {
              uVar13 = uVar9;
            }
            bVar7 = (bool)(uVar9 == uVar10 | bVar7);
          } while (*(ulong *)(puVar8 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar8 + uVar13 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar8 + uVar13 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar8 + uVar13 + 0x40);
        puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x30) + uVar10 * 0x10);
        *puVar2 = pcVar3;
        puVar2[1] = pvVar4;
        *(undefined8 *)(*(long *)(puVar8 + 0x38) + uVar10 * 8) = uVar12;
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
        bVar7 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a989c);
          (*pcVar6)();
        }
        lVar11 = lVar16;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar8;
}

