// rea decompile_all
// name: FUN_100007a0c
// address: 0x100007a0c
// body: available
// range: 0x100007a0c-0x100007b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100007a0c(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  capacity = (undefined *)param_1[2];
  puVar6 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a258;
    FUN_100002f94(&DAT_10054a258,&DAT_10041a2e8);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    do {
      uVar3 = param_1[4];
      uVar4 = param_1[5];
      uVar10 = param_1[7];
      uVar9 = param_1[6];
      uVar12 = param_1[9];
      uVar11 = param_1[8];
      _swift_bridgeObjectRetain(uVar4);
      uVar7 = uVar3;
      uVar8 = uVar4;
      FUN_10000464c();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100007b10);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      puVar2[1] = uVar10;
      *puVar2 = uVar9;
      puVar2[3] = uVar12;
      puVar2[2] = uVar11;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100007b14);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      capacity = capacity + -1;
      param_1 = param_1 + 6;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}

