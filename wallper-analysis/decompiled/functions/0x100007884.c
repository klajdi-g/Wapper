// rea decompile_all
// name: FUN_100007884
// address: 0x100007884
// body: available
// range: 0x100007884-0x100007a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100007884(long param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  long lVar6;
  byte *pbVar7;
  long extraout_x8;
  ulong uVar8;
  byte *pbVar9;
  undefined *capacity;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  puVar4 = &DAT_10054a220;
  FUN_100002f94(&DAT_10054a220,&DAT_10041a2b0);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a228;
    FUN_100002f94(&DAT_10054a228,&DAT_10041a2b8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar2 = *(int *)(puVar4 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      pbVar7 = pbVar9;
      FUN_1000087e4(param_1,pbVar9,&DAT_10054a220,&DAT_10041a2b0);
      bVar1 = *pbVar9;
      uVar11 = (ulong)bVar1;
      FUN_100004958();
      if (((ulong)pbVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100007a08);
        (*pcVar3)();
      }
      uVar8 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar11 & 0x3f);
      *(byte *)(*(long *)(puVar5 + 0x30) + uVar11) = bVar1;
      lVar12 = *(long *)(puVar5 + 0x38);
      lVar6 = 0;
      FUN_10040211c();
      FUN_100007e64(pbVar9 + iVar2,lVar12 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * uVar11,
                    FUN_10040211c);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100007a0c);
        (*pcVar3)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}

