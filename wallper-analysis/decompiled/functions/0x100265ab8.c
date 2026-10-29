// rea decompile_all
// name: FUN_100265ab8
// address: 0x100265ab8
// body: available
// range: 0x100265ab8-0x100265c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100265ab8(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  size_t sVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)(param_1 + 0x10);
  lVar10 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar13 != 0) {
    lVar14 = 0;
    plVar12 = (long *)(PTR___swiftEmptyArrayStorage_100524190 + 0x20);
    puVar9 = PTR___swiftEmptyArrayStorage_100524190;
    do {
      uVar2 = *(undefined1 *)(param_1 + 0x20 + lVar14);
      puVar5 = puVar9;
      if (lVar10 == 0) {
        uVar7 = *(ulong *)(puVar9 + 0x18);
        if ((long)((uVar7 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100265c14);
          (*pcVar3)();
        }
        uVar8 = uVar7 & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar8 = 1;
        }
        puVar5 = &DAT_100558538;
        FUN_100002f94(&DAT_100558538,&DAT_10042ce28);
        _swift_allocObject();
        puVar6 = puVar5;
        _malloc_size();
        puVar1 = puVar6 + -0x11;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar8;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar6 = puVar5 + 0x20;
        uVar7 = *(ulong *)(puVar9 + 0x18);
        sVar11 = (uVar7 >> 1) * 0x10;
        if (*(long *)(puVar9 + 0x10) != 0) {
          if ((puVar5 != puVar9) || (puVar9 + 0x20 + sVar11 <= puVar6)) {
            _memmove(puVar6,puVar9 + 0x20,sVar11);
          }
          *(undefined8 *)(puVar9 + 0x10) = 0;
        }
        plVar12 = (long *)(puVar6 + sVar11);
        lVar10 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - (uVar7 >> 1);
        _swift_release(puVar9);
      }
      bVar4 = SBORROW8(lVar10,1);
      lVar10 = lVar10 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100265c10);
        (*pcVar3)();
      }
      *plVar12 = lVar14;
      lVar14 = lVar14 + 1;
      *(undefined1 *)(plVar12 + 1) = uVar2;
      plVar12 = plVar12 + 2;
      puVar9 = puVar5;
    } while (lVar13 != lVar14);
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar7 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar7,lVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100265c18);
      (*pcVar3)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar7 - lVar10;
  }
  return puVar5;
}

