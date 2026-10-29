// rea decompile_all
// name: FUN_100005ee8
// address: 0x100005ee8
// body: available
// range: 0x100005ee8-0x100006003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100005ee8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *capacity;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a1f8;
    FUN_100002f94(&DAT_10054a1f8,&DAT_10042ac20);
    puVar9 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar12 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar3 = puVar12[-5];
      uVar5 = puVar12[-4];
      uVar13 = puVar12[-3];
      uVar7 = *(undefined1 *)(puVar12 + -2);
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar5);
      uVar10 = uVar3;
      uVar11 = uVar5;
      FUN_10000464c();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100006000);
        (*pcVar8)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x20);
      *puVar2 = uVar13;
      *(undefined1 *)(puVar2 + 1) = uVar7;
      puVar2[2] = uVar4;
      puVar2[3] = uVar6;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100006004);
        (*pcVar8)();
      }
      puVar12 = puVar12 + 6;
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar9);
  }
  return puVar9;
}

