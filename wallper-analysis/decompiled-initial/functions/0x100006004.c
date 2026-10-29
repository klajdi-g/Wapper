// rea decompile_all
// name: FUN_100006004
// address: 0x100006004
// body: available
// range: 0x100006004-0x100006187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100006004(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  undefined1 *puVar5;
  UUID UVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *capacity;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = &DAT_10054a138;
  FUN_100002f94(&DAT_10054a138,&DAT_10041a1d0);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a140;
    FUN_100002f94(&DAT_10054a140,&DAT_10042a710);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_1000087e4(param_1,puVar9,&DAT_10054a138,&DAT_10041a1d0);
      puVar5 = puVar9;
      FUN_10000476c();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100006184);
        (*pcVar2)();
      }
      uVar10 = *(undefined8 *)(puVar9 + iVar1);
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar12 = *(long *)(puVar4 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar12 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar5,puVar9,
                 UVar6.unknown);
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + (long)puVar5 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100006188);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar11;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}

