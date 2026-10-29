// rea decompile_all
// name: FUN_1000052e8
// address: 0x1000052e8
// body: available
// range: 0x1000052e8-0x10000547f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000052e8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong *puVar7;
  undefined *capacity;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong auStack_70 [2];
  
  puVar2 = &DAT_10054a238;
  FUN_100002f94(&DAT_10054a238,&DAT_10041a2c8);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (ulong *)((long)auStack_70 - extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a240;
    FUN_100002f94(&DAT_10054a240,&DAT_10041a2d0);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    auStack_70[1] = (ulong)*(int *)(puVar2 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar8 + 0x48);
    do {
      puVar5 = puVar7;
      FUN_1000087e4(param_1,puVar7,&DAT_10054a238,&DAT_10041a2c8);
      uVar9 = *puVar7;
      uVar4 = uVar9;
      FUN_1000046b0();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10000547c);
        (*pcVar1)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar9;
      lVar10 = *(long *)(puVar3 + 0x38);
      puVar2 = &DAT_10054a248;
      FUN_100002f94(&DAT_10054a248,&DAT_10042aa30);
      FUN_100007e1c((long)puVar7 + auStack_70[1],
                    lVar10 + *(long *)(*(long *)(puVar2 + -8) + 0x48) * uVar4,&DAT_10054a248,
                    &DAT_10042aa30);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100005480);
        (*pcVar1)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar8;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
  }
  return puVar3;
}

