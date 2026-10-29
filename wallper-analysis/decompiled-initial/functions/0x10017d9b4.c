// rea decompile_all
// name: FUN_10017d9b4
// address: 0x10017d9b4
// body: available
// range: 0x10017d9b4-0x10017dc33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10017d9b4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *capacity;
  ulong uVar14;
  long lVar15;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100524198;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10054a1c8;
    FUN_100002f94(&DAT_10054a1c8,&DAT_10042a8b0);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar8 = capacity;
  }
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar15 = 0;
  while( true ) {
    while (uVar14 != 0) {
      uVar3 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar15 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      local_90 = uVar3;
      uStack_88 = uVar2;
      FUN_1000280d4(*(long *)(param_1 + 0x38) + uVar11 * 0x20,auStack_80);
      FUN_1000280d4(auStack_80,auStack_b0);
      _swift_bridgeObjectRetain(uVar2);
      puVar10 = &local_c0;
      _swift_dynamicCast(puVar10,auStack_b0,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      uVar5 = uStack_b8;
      uVar4 = local_c0;
      if ((int)puVar10 == 0) {
        FUN_10002a29c(&local_90,&DAT_100555e98,&DAT_100429ce0);
        _swift_release(puVar8);
        _swift_release(param_1);
        return (undefined *)0x0;
      }
      uVar14 = uVar14 - 1 & uVar14;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10002a29c(&local_90,&DAT_100555e98,&DAT_100429ce0);
      uVar11 = uVar3;
      uVar12 = uVar2;
      FUN_10000464c();
      if ((uVar12 & 1) == 0) {
        if (*(ulong *)(puVar8 + 0x18) <= *(ulong *)(puVar8 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10017dc30);
          (*pcVar6)();
        }
        uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar8 + uVar12 + 0x40) =
             *(ulong *)(puVar8 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        puVar10 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar11 * 0x10);
        *puVar10 = uVar4;
        puVar10[1] = uVar5;
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10017dc34);
          (*pcVar6)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar11 * 0x10);
        uVar12 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        _swift_bridgeObjectRelease(uVar12);
        puVar10 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar11 * 0x10);
        uVar9 = puVar10[1];
        *puVar10 = uVar4;
        puVar10[1] = uVar5;
        _swift_bridgeObjectRelease(uVar9);
      }
    }
    bVar7 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10017dc2c);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar15) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  _swift_release(param_1);
  return puVar8;
}

