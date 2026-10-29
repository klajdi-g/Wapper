// rea decompile_all
// name: FUN_100184598
// address: 0x100184598
// body: available
// range: 0x100184598-0x10018464b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100184598(void)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if (DAT_100555688 != -1) {
      _swift_once(&DAT_100555688,FUN_1001646dc);
    }
    *(undefined1 *)(lVar1 + _TtC7Wallper17NowPlayingManager::mediaRemoteActive) =
         *(undefined1 *)(DAT_100577ca8 + 0x30);
    _swift_release();
    uVar2 = 0;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100184624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

