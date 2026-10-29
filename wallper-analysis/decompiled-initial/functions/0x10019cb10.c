// rea decompile_all
// name: FUN_10019cb10
// address: 0x10019cb10
// body: available
// range: 0x10019cb10-0x10019cc8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019cb10(undefined *param_1,undefined *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = _TtC7Wallper17NowPlayingManager::artworkCacheOrder;
  puVar5 = auStack_80;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCacheOrder,auStack_68,0,0);
  lVar6 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  if (lVar6 != 0) {
    lVar8 = 0;
    puVar9 = (undefined8 *)(*(long *)(unaff_x20 + lVar1) + 0x28);
    do {
      if (((undefined *)puVar9[-1] == param_1 && (undefined *)*puVar9 == param_2) ||
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)puVar9[-1],(undefined *)*puVar9,
                             (_StringComparisonResult)(__int8)param_1), bVar2)) {
        _swift_beginAccess(unaff_x20 + lVar1,auStack_80,0x21,0);
        FUN_1001b5610(lVar8);
        _swift_endAccess(auStack_80);
        _swift_bridgeObjectRelease(puVar5);
        break;
      }
      puVar9 = puVar9 + 2;
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
  }
  _swift_beginAccess(unaff_x20 + lVar1,auStack_80,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar1);
  _swift_bridgeObjectRetain(param_2);
  uVar3 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar1) = uVar7;
  uVar4 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_1001c432c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + lVar1) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1001c432c(uVar7,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
  lVar6 = uVar7 + uVar3 * 0x10;
  *(undefined **)(lVar6 + 0x20) = param_1;
  *(undefined **)(lVar6 + 0x28) = param_2;
  *(ulong *)(unaff_x20 + lVar1) = uVar7;
  _swift_endAccess(auStack_80);
  return;
}

