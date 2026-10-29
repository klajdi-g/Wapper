// rea decompile_all
// name: FUN_10019bc0c
// address: 0x10019bc0c
// body: available
// range: 0x10019bc0c-0x10019bcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019bc0c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar1 = (undefined8 *)(param_2 + _TtC7Wallper17NowPlayingManager::currentStoreURL);
  uVar8 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = *(ulong *)(param_3 + 0x10);
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10019bcd8);
    (*pcVar7)();
  }
  if (uVar9 != 1) {
    if (2 < uVar9) {
      uVar8 = *(undefined8 *)(param_3 + 0x20);
      uVar4 = *(undefined8 *)(param_3 + 0x28);
      uVar2 = *(undefined8 *)(param_3 + 0x30);
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      uVar3 = *(undefined8 *)(param_3 + 0x40);
      uVar6 = *(undefined8 *)(param_3 + 0x48);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      FUN_10019a25c(uVar8,uVar4,uVar2,uVar5,uVar3,uVar6);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10019bce0);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10019bcdc);
  (*pcVar7)();
}

