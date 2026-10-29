// rea decompile_all
// name: FUN_1001d89b0
// address: 0x1001d89b0
// body: available
// range: 0x1001d89b0-0x1001d8c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001d89b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  undefined8 *puVar9;
  long extraout_x12;
  long unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_a0;
  
  lVar5 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar12 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100266c40();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar9 = (undefined8 *)(uVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar9 - extraout_x12;
  lVar5 = 0;
  FUN_10025ee04();
  puVar3 = PTR___swiftEmptyArrayStorage_100524190;
  lVar5 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x20));
  uVar8 = *(ulong *)(lVar5 + 0x10);
  if (uVar8 != 0) {
    uVar10 = 0;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d8ca0);
        (*pcVar4)();
      }
      uVar14 = (ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff);
      lVar15 = *(long *)(lVar16 + 0x48);
      FUN_100029504(lVar5 + uVar14 + lVar15 * uVar10,lVar13,FUN_100266c40);
      FUN_1001d85e4(uVar12,lVar13);
      uVar6 = uVar12;
      FUN_1001da410(uVar12,param_1);
      FUN_100029548(uVar12,FUN_1001d537c);
      if ((uVar6 & 1) == 0) {
        FUN_100029548(lVar13,FUN_100266c40);
      }
      else {
        puVar7 = puVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar7 & 1) == 0) {
          FUN_1001c5d34(0,*(long *)(puVar3 + 0x10) + 1,1);
        }
        uVar6 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
          FUN_1001c5d34(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
        FUN_100007e64(lVar13,puVar3 + uVar6 * lVar15 + uVar14,FUN_100266c40);
      }
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  lVar5 = *(long *)(puVar3 + 0x10);
  if (lVar5 == 0) {
    _swift_release(puVar3);
    puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    FUN_1001c5bc4(0,lVar5,0);
    puVar11 = puVar3 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar16 + 0x48);
    do {
      FUN_100029504(puVar11,puVar9,FUN_100266c40);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      _swift_bridgeObjectRetain(uVar2);
      FUN_100029548(puVar9,FUN_100266c40);
      uVar8 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar7 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
      *(undefined8 *)(puVar7 + uVar8 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + uVar8 * 0x10 + 0x28) = uVar2;
      puVar11 = puVar11 + lVar13;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_release(puVar3);
  }
  return puVar7;
}

