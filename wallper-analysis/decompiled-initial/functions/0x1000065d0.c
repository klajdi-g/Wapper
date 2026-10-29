// rea decompile_all
// name: FUN_1000065d0
// address: 0x1000065d0
// body: available
// range: 0x1000065d0-0x1000066af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000065d0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *capacity;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a158;
    uVar5 = 0;
    FUN_100002f94();
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar7 = puVar8[-1];
      uVar10 = puVar8[1];
      uVar9 = *puVar8;
      uVar4 = uVar7;
      FUN_1000046b0();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000066ac);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar7;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000066b0);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      puVar8 = puVar8 + 3;
    } while (capacity != (undefined *)0x0);
  }
  return puVar3;
}

