// rea decompile_all
// name: FUN_1001ee8f0
// address: 0x1001ee8f0
// body: available
// range: 0x1001ee8f0-0x1001ee9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ee8f0(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar5 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar6 + 0x40);
  _swift_bridgeObjectRetain(lVar6);
  lVar8 = 0;
  while( true ) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      objc_stub::orderOut_
                (*(ID *)(*(long *)(lVar6 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                        lVar8 * 0x200),0);
    }
    bVar3 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar3) break;
    if ((long)(uVar5 + 0x3f >> 6) <= lVar8) {
      _swift_release(lVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = PTR___swiftEmptyDictionarySingleton_100524198;
      _swift_bridgeObjectRelease(uVar4);
      return;
    }
    uVar7 = ((ulong *)(lVar6 + 0x40))[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ee9f0);
  (*pcVar2)();
}

