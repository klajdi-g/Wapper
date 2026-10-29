// rea decompile_all
// name: FUN_100006c3c
// address: 0x100006c3c
// body: available
// range: 0x100006c3c-0x100006ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100006c3c(long param_1)

{
  undefined *puVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined1 *puVar3;
  UUID UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *capacity;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  puVar1 = &DAT_10054a210;
  FUN_100002f94(&DAT_10054a210,&DAT_10041a2a0);
  lVar8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a218;
    FUN_100002f94(&DAT_10054a218,&DAT_10041a2a8);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    local_68 = (long)*(int *)(puVar1 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar8 + 0x48);
    _swift_retain();
    do {
      puVar5 = puVar7;
      FUN_1000087e4(param_1,puVar7,&DAT_10054a210,&DAT_10041a2a0);
      puVar3 = puVar7;
      FUN_10000476c();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100006dd8);
        (*pcVar11)();
      }
      uVar6 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) =
           *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      lVar9 = *(long *)(puVar2 + 0x30);
      UVar4 = Foundation::UUID::typeMetadataAccessor();
      lVar10 = *(long *)(*(long *)(UVar4.unknown + -8) + 0x48) * (long)puVar3;
      pcVar11 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x20);
      (*pcVar11)(lVar9 + lVar10,puVar7,UVar4.unknown);
      (*pcVar11)(*(long *)(puVar2 + 0x38) + lVar10,puVar7 + local_68,UVar4.unknown);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100006ddc);
        (*pcVar11)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + lVar8;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}

