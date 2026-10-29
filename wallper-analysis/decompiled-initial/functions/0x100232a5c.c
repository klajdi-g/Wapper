// rea decompile_all
// name: FUN_100232a5c
// address: 0x100232a5c
// body: available
// range: 0x100232a5c-0x100232c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100232a5c(long param_1)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  Bucket BVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  
  puVar8 = PTR___swiftEmptyArrayStorage_100524190;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    FUN_1001c5bc4(0,lVar12,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar10 = Swift::_HashTable::get_startBucket(_Var1);
    lVar17 = 0;
    iVar7 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar10.unknown >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100232c78);
        (*pcVar9)();
      }
      uVar13 = (ulong)BVar10.unknown >> 6;
      uVar14 = 1L << ((ulong)BVar10.unknown & 0x3f);
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar14) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100232c7c);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100232c80);
        (*pcVar9)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)BVar10.unknown * 0x10);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      uVar4 = *(ulong *)(puVar8 + 0x10);
      uVar6 = *(ulong *)(puVar8 + 0x18);
      _swift_bridgeObjectRetain(uVar5);
      if (uVar6 >> 1 <= uVar4) {
        FUN_1001c5bc4(1 < uVar6,uVar4 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar5;
      puVar16 = (undefined *)(1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
      if (puVar16 <= BVar10.unknown) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100232c84);
        (*pcVar9)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar14) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100232c88);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100232c8c);
        (*pcVar9)();
      }
      uVar14 = *(ulong *)(_Var1.unknown + uVar13 * 8) & -2L << ((ulong)BVar10.unknown & 0x3f);
      if (uVar14 == 0) {
        lVar15 = uVar13 << 6;
        puVar11 = (ulong *)(param_1 + 0x48 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if ((ulong)(puVar16 + 0x3f) >> 6 <= uVar13) {
            FUN_1001b0e68(BVar10.unknown,iVar7,0);
            BVar10.unknown = puVar16;
            goto LAB_100232afc;
          }
          uVar14 = *puVar11;
          lVar15 = lVar15 + 0x40;
          puVar11 = puVar11 + 1;
        } while (uVar14 == 0);
        FUN_1001b0e68(BVar10.unknown,iVar7,0);
        uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        BVar10.unknown = (undefined *)(LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar15);
      }
      else {
        uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        BVar10.unknown =
             (undefined *)
             (LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | (ulong)BVar10.unknown & 0x7fffffffffffffc0)
        ;
      }
LAB_100232afc:
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar12);
  }
  return puVar8;
}

