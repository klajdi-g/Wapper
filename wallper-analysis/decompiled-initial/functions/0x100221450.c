// rea decompile_all
// name: FUN_100221450
// address: 0x100221450
// body: available
// range: 0x100221450-0x1002214fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100221450(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_beginAccess(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_weakLoadStrong();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    _swift_beginAccess(lVar3 + _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop,
                       unaff_x22 + 0x28,0x21,0);
    FUN_100227384(uVar1,uVar2);
    _swift_endAccess(unaff_x22 + 0x28);
    _swift_release(lVar3);
    _swift_bridgeObjectRelease(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002214f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

