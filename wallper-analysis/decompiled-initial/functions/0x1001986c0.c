// rea decompile_all
// name: FUN_1001986c0
// address: 0x1001986c0
// body: available
// range: 0x1001986c0-0x100198757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001986c0(void)

{
  Notification NVar1;
  Notification NVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_beginAccess(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  NVar1.unknown = (undefined *)(lVar3 + 0x10);
  _swift_weakLoadStrong();
  if (NVar1.unknown != (undefined *)0x0) {
    NVar2.unknown = NVar1.unknown;
    Foundation::Notification::_get_userInfo(NVar1);
    FUN_100198758();
    _swift_release(NVar1.unknown);
    _swift_bridgeObjectRelease(NVar2.unknown);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = NVar1.unknown == (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100198754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

