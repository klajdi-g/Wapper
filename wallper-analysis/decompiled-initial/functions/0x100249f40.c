// rea decompile_all
// name: FUN_100249f40
// address: 0x100249f40
// body: available
// range: 0x100249f40-0x10024a007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100249f40(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_1;
  uVar2 = param_1[1];
  lVar6 = *param_2;
  puVar1 = (undefined8 *)(param_3 + _TtC7Wallper21VideoWallpaperManager::transitions);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  lVar3 = puVar1[1];
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar4 = *puVar1;
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(lVar3);
    FUN_10000464c();
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + lVar5 * 8);
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(uVar4);
      return lVar5 == lVar6;
    }
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(uVar4);
  }
  return false;
}

