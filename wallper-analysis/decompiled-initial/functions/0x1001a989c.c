// rea decompile_all
// name: FUN_1001a989c
// address: 0x1001a989c
// body: available
// range: 0x1001a989c-0x1001a9b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001a989c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  URL UVar8;
  _DictionaryStorage *this;
  undefined *puVar9;
  Hasher into;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [72];
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  local_b0 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  local_b8 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar9 = param_4;
    }
    else {
      this = (_DictionaryStorage *)&DAT_10054a3c8;
      local_c8 = UVar8.unknown;
      FUN_100002f94(&DAT_10054a3c8,&DAT_10041a398);
      puVar9 = param_3;
      Swift::_DictionaryStorage::_allocate(this,(__int64)param_3);
      if (param_2 < 1) {
        uVar16 = 0;
      }
      else {
        uVar16 = *param_1;
      }
      puVar15 = local_c8;
      lVar12 = 0;
      local_d0 = param_4;
      do {
        if (uVar16 == 0) {
          do {
            lVar17 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a9b3c);
              (*pcVar6)();
            }
            if (param_2 <= lVar17) {
              return puVar9;
            }
            uVar16 = param_1[lVar17];
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
          lVar17 = lVar12;
        }
        uVar11 = LZCOUNT(uVar11) | lVar17 << 6;
        pSVar1 = (String *)(*(long *)(local_d0 + 0x30) + uVar11 * 0x10);
        local_c0 = *(long *)(local_b0 + 0x48);
        pcVar3 = pSVar1->str;
        pvVar4 = pSVar1->bridgeObject;
        SVar5 = *pSVar1;
        (**(code **)(local_b0 + 0x10))
                  (local_b8,*(long *)(local_d0 + 0x38) + local_c0 * uVar11,puVar15);
        Swift::Hasher::init(*(__int64 *)(puVar9 + 0x28));
        _swift_bridgeObjectRetain(pvVar4);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar5);
        uVar10 = Swift::Hasher::_finalize(into);
        puVar15 = local_c8;
        uVar14 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
        uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
        uVar13 = uVar10 >> 6;
        uVar11 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar7 = false;
          uVar11 = 0x3f - uVar14 >> 6;
          do {
            uVar10 = uVar13 + 1;
            if ((uVar10 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a9b40);
              (*pcVar6)();
            }
            uVar13 = 0;
            if (uVar10 != uVar11) {
              uVar13 = uVar10;
            }
            bVar7 = (bool)(uVar10 == uVar11 | bVar7);
          } while (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar9 + uVar13 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar9 + uVar13 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar9 + uVar13 + 0x40);
        puVar2 = (undefined8 *)(*(long *)(puVar9 + 0x30) + uVar11 * 0x10);
        *puVar2 = pcVar3;
        puVar2[1] = pvVar4;
        (**(code **)(local_b0 + 0x20))
                  (*(long *)(puVar9 + 0x38) + uVar11 * local_c0,local_b8,local_c8);
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
        bVar7 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a9b44);
          (*pcVar6)();
        }
        lVar12 = lVar17;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar9;
}

