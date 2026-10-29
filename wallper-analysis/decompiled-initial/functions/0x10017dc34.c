// rea decompile_all
// name: FUN_10017dc34
// address: 0x10017dc34
// body: available
// range: 0x10017dc34-0x10017de97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10017dc34(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  _DictionaryStorage *this;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_d0 [2];
  undefined1 auStack_c0 [32];
  ulong local_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a250;
    FUN_100002f94(&DAT_10054a250,&DAT_10041a2e0);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar11 = capacity;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar12 != 0) {
      uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      local_a0 = uVar3;
      uStack_98 = uVar2;
      FUN_1000280d4(*(long *)(param_1 + 0x38) + uVar8 * 0x20,auStack_90);
      FUN_1000280d4(auStack_90,auStack_c0);
      _swift_bridgeObjectRetain(uVar2);
      iVar7 = (int)local_d0;
      _swift_dynamicCast(local_d0,auStack_c0,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_Double_100523b90,6);
      uVar4 = local_d0[0];
      if (iVar7 == 0) {
        FUN_10002a29c(&local_a0,&DAT_100555e98,&DAT_100429ce0);
        _swift_release(puVar11);
        _swift_release(param_1);
        return (undefined *)0x0;
      }
      uVar12 = uVar12 - 1 & uVar12;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10002a29c(&local_a0,&DAT_100555e98,&DAT_100429ce0);
      uVar8 = uVar3;
      uVar9 = uVar2;
      FUN_10000464c();
      if ((uVar9 & 1) == 0) {
        if (*(ulong *)(puVar11 + 0x18) <= *(ulong *)(puVar11 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10017de94);
          (*pcVar5)();
        }
        uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar11 + uVar9 + 0x40) =
             *(ulong *)(puVar11 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar8 * 8) = uVar4;
        if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10017de98);
          (*pcVar5)();
        }
        *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar8 * 0x10);
        uVar9 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        _swift_bridgeObjectRelease(uVar9);
        *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar8 * 8) = uVar4;
      }
    }
    bVar6 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10017de90);
      (*pcVar5)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar13) break;
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  _swift_release(param_1);
  return puVar11;
}

