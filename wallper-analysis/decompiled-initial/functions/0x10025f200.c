// rea decompile_all
// name: FUN_10025f200
// address: 0x10025f200
// body: available
// range: 0x10025f200-0x10025f347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10025f200(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *apuStack_70 [2];
  
  lVar6 = 0;
  FUN_100266c40();
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)apuStack_70 + lVar4);
  lVar6 = 0;
  FUN_10025ee04();
  lVar6 = *(long *)(unaff_x20 + *(int *)(lVar6 + 0x20));
  lVar8 = *(long *)(lVar6 + 0x10);
  apuStack_70[1] = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar8 != 0) {
    FUN_1001c5bc4(0,lVar8,0);
    lVar6 = lVar6 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar9 + 0x48);
    do {
      puVar5 = apuStack_70[1];
      FUN_100029504(lVar6,puVar7,FUN_100266c40);
      uVar1 = *puVar7;
      uVar3 = *(undefined8 *)((long)apuStack_70 + lVar4 + 8);
      _swift_bridgeObjectRetain(uVar3);
      FUN_100029548(puVar7,FUN_100266c40);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      apuStack_70[1] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(apuStack_70[1] + 0x10) = uVar2 + 1;
      *(undefined8 *)(apuStack_70[1] + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(apuStack_70[1] + uVar2 * 0x10 + 0x28) = uVar3;
      lVar6 = lVar6 + lVar9;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return apuStack_70[1];
}

