// rea decompile_all
// name: FUN_100007080
// address: 0x100007080
// body: available
// range: 0x100007080-0x10000722f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100007080(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *capacity;
  long lVar10;
  ulong local_70 [2];
  
  puVar5 = &DAT_10054a350;
  FUN_100002f94(&DAT_10054a350,&DAT_10041a320);
  lVar10 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)((long)local_70 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a358;
    FUN_100002f94(&DAT_10054a358,&DAT_10042ab70);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    local_70[1] = (ulong)*(int *)(puVar5 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    local_70[0] = *(ulong *)(lVar10 + 0x48);
    _swift_retain();
    do {
      FUN_1000087e4(param_1,puVar9,&DAT_10054a350,&DAT_10041a320);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)((long)local_70 + -extraout_x8 + 8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      FUN_10000464c();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10000722c);
        (*pcVar4)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar10 = *(long *)(puVar6 + 0x38);
      puVar5 = &DAT_10054a360;
      FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
      FUN_100007e1c((long)puVar9 + local_70[1],
                    lVar10 + *(long *)(*(long *)(puVar5 + -8) + 0x48) * uVar7,&DAT_10054a360,
                    &DAT_10041a330);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100007230);
        (*pcVar4)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + local_70[0];
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}

