// rea decompile_all
// name: FUN_10023ae7c
// address: 0x10023ae7c
// body: available
// range: 0x10023ae7c-0x10023afd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10023ae7c(long param_1,ulong param_2)

{
  byte bVar1;
  Hasher HVar2;
  ulong uVar3;
  Hasher HVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  lVar7 = _TtC7Wallper21VideoWallpaperManager::holds;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_68,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  lVar9 = *(long *)(lVar7 + 0x10);
  _swift_bridgeObjectRetain_n(lVar7,2);
  puVar6 = PTR___swiftEmptySetSingleton_1005241a0;
  if ((lVar9 != 0) &&
     (FUN_10000464c(), puVar6 = PTR___swiftEmptySetSingleton_1005241a0, (param_2 & 1) != 0)) {
    puVar6 = *(undefined **)(*(long *)(lVar7 + 0x38) + param_1 * 8);
    _swift_bridgeObjectRetain(puVar6);
  }
  HVar4.unknown = (undefined *)0x2;
  _swift_bridgeObjectRelease_n(lVar7);
  lVar7 = 0;
  do {
    if (*(long *)(puVar6 + 0x10) != 0) {
      bVar1 = (&DAT_100557ad8)[lVar7];
      puVar8 = (undefined *)(ulong)bVar1;
      Swift::Hasher::init(*(__int64 *)(puVar6 + 0x28));
      HVar2.unknown = puVar8;
      Swift::Hasher::_combine((__uint64)puVar8,HVar4);
      uVar3 = Swift::Hasher::_finalize(HVar2);
      uVar5 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar6 + (uVar3 >> 6) * 8 + 0x38) >> (uVar3 & 0x3f) & 1) != 0) {
        do {
          if (*(byte *)(*(long *)(puVar6 + 0x30) + uVar3) == bVar1) goto LAB_10023afb0;
          uVar3 = uVar3 + 1 & ~uVar5;
        } while ((*(ulong *)(puVar6 + (uVar3 >> 6) * 8 + 0x38) >> (uVar3 & 0x3f) & 1) != 0);
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  puVar8 = (undefined *)0x4;
LAB_10023afb0:
  _swift_bridgeObjectRelease(puVar6);
  return puVar8;
}

