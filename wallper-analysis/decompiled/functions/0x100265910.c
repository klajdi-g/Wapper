// rea decompile_all
// name: FUN_100265910
// address: 0x100265910
// body: available
// range: 0x100265910-0x100265ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100265910(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  size_t sVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  
  lVar15 = *(long *)(param_1 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar15 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    puVar16 = (undefined1 *)(param_1 + 0x30);
    lVar17 = 0;
    plVar13 = (long *)PTR___swiftEmptyArrayStorage_100524190;
    do {
      plVar13 = plVar13 + 4;
      lVar3 = *(long *)(puVar16 + -0x10);
      lVar4 = *(long *)(puVar16 + -8);
      uVar5 = *puVar16;
      if (lVar12 == 0) {
        uVar10 = *(ulong *)(puVar14 + 0x18);
        if ((long)((uVar10 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100265ab4);
          (*pcVar6)();
        }
        uVar11 = uVar10 & 0xfffffffffffffffe;
        if ((long)uVar10 < 2) {
          uVar11 = 1;
        }
        puVar7 = &DAT_100558848;
        FUN_100002f94(&DAT_100558848,&DAT_10042d098);
        _swift_allocObject();
        FUN_10007510c(lVar3,lVar4,uVar5);
        puVar8 = puVar7;
        _malloc_size();
        puVar2 = puVar8 + -1;
        if (0x1f < (long)puVar8) {
          puVar2 = puVar8 + -0x20;
        }
        *(ulong *)(puVar7 + 0x10) = uVar11;
        *(long *)(puVar7 + 0x18) = ((long)puVar2 >> 5) << 1;
        puVar8 = puVar7 + 0x20;
        sVar9 = (*(ulong *)(puVar14 + 0x18) >> 1) * 0x20;
        lVar12 = ((long)puVar2 >> 5 & 0x7fffffffffffffffU) - (*(ulong *)(puVar14 + 0x18) >> 1);
        plVar13 = (long *)(puVar8 + sVar9);
        if (*(long *)(puVar14 + 0x10) != 0) {
          if ((puVar7 != puVar14) || (puVar14 + 0x20 + sVar9 <= puVar8)) {
            _memmove(puVar8,puVar14 + 0x20,sVar9);
          }
          *(undefined8 *)(puVar14 + 0x10) = 0;
        }
        _swift_release(puVar14);
        puVar14 = puVar7;
      }
      else {
        FUN_10007510c(lVar3,lVar4,uVar5);
      }
      if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100265ab0);
        (*pcVar6)();
      }
      lVar12 = lVar12 + -1;
      lVar1 = lVar17 + 1;
      puVar16 = puVar16 + 0x18;
      *plVar13 = lVar17;
      plVar13[1] = lVar3;
      plVar13[2] = lVar4;
      *(undefined1 *)(plVar13 + 3) = uVar5;
      lVar17 = lVar1;
    } while (lVar15 != lVar1);
  }
  if (1 < *(ulong *)(puVar14 + 0x18)) {
    uVar10 = *(ulong *)(puVar14 + 0x18) >> 1;
    if (SBORROW8(uVar10,lVar12)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100265ab8);
      (*pcVar6)();
    }
    *(ulong *)(puVar14 + 0x10) = uVar10 - lVar12;
  }
  return puVar14;
}

