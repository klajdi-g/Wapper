// rea decompile_all
// name: FUN_100005684
// address: 0x100005684
// body: available
// range: 0x100005684-0x10000580f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100005684(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  URL UVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *capacity;
  long lVar12;
  long lVar13;
  
  puVar6 = &DAT_10054a3c0;
  FUN_100002f94(&DAT_10054a3c0,&DAT_10041a390);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a3c8;
    FUN_100002f94(&DAT_10054a3c8,&DAT_10041a398);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      FUN_1000087e4(param_1,puVar11,&DAT_10054a3c0,&DAT_10041a390);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_10000464c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10000580c);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar7 + 0x38);
      UVar9 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar9.unknown + -8) + 0x20))
                (lVar13 + *(long *)(*(long *)(UVar9.unknown + -8) + 0x48) * uVar8,
                 (long)puVar11 + (long)iVar4,UVar9.unknown);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100005810);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}

