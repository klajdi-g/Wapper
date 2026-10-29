// rea decompile_all
// name: FUN_10017631c
// address: 0x10017631c
// body: available
// range: 0x10017631c-0x1001765a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10017631c(long param_1)

{
  _HashTable _Var1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  URL UVar6;
  Bucket BVar7;
  URL UVar8;
  long lVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    FUN_1001c5bc4(0,lVar17,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar7 = Swift::_HashTable::get_startBucket(_Var1);
    lVar16 = 0;
    do {
      if ((ulong)BVar7.unknown >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100176598);
        (*pcVar5)();
      }
      uVar12 = (ulong)BVar7.unknown >> 6;
      uVar14 = 1L << ((ulong)BVar7.unknown & 0x3f);
      if ((*(ulong *)(_Var1.unknown + uVar12 * 8) & uVar14) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10017659c);
        (*pcVar5)();
      }
      iVar3 = *(int *)(param_1 + 0x24);
      UVar8.unknown = puVar10;
      (**(code **)(lVar9 + 0x10))
                (puVar10,*(long *)(param_1 + 0x38) + *(long *)(lVar9 + 0x48) * (long)BVar7.unknown,
                 UVar6.unknown);
      SVar18 = Foundation::URL::get_absoluteString(UVar8);
      (**(code **)(lVar9 + 8))(puVar10,UVar6.unknown);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(String *)(puVar4 + uVar2 * 0x10 + 0x20) = SVar18;
      puVar13 = (undefined *)(1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
      if (puVar13 <= BVar7.unknown) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001765a0);
        (*pcVar5)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar12 * 8) & uVar14) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001765a4);
        (*pcVar5)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001765a8);
        (*pcVar5)();
      }
      uVar14 = *(ulong *)(_Var1.unknown + uVar12 * 8) & -2L << ((ulong)BVar7.unknown & 0x3f);
      if (uVar14 == 0) {
        lVar15 = uVar12 << 6;
        puVar11 = (ulong *)(param_1 + 0x48 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if ((ulong)(puVar13 + 0x3f) >> 6 <= uVar12) {
            FUN_1001b0e68(BVar7.unknown,iVar3,0);
            goto LAB_100176400;
          }
          uVar14 = *puVar11;
          lVar15 = lVar15 + 0x40;
          puVar11 = puVar11 + 1;
        } while (uVar14 == 0);
        FUN_1001b0e68(BVar7.unknown,iVar3,0);
        uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        puVar13 = (undefined *)(LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar15);
      }
      else {
        uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        puVar13 = (undefined *)
                  (LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) |
                  (ulong)BVar7.unknown & 0x7fffffffffffffc0);
      }
LAB_100176400:
      lVar16 = lVar16 + 1;
      BVar7.unknown = puVar13;
    } while (lVar16 != lVar17);
  }
  return puVar4;
}

