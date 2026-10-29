// rea decompile_all
// name: FUN_1003f6da4
// address: 0x1003f6da4
// body: available
// range: 0x1003f6da4-0x1003f6edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f6da4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  _swift_release(uVar5);
  FUN_1003f42cc();
  FUN_100219cf4(1);
  _swift_release(uVar5);
  lVar2 = _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager;
  uVar5 = *(undefined8 *)(lVar1 + _TtC7Wallper11AppDelegate::___lazy_storage___shuffleManager);
  _swift_retain(uVar5);
  FUN_1002227a0();
  _swift_release(uVar5);
  if ((*(byte *)(*(long *)(lVar1 + _TtC7Wallper11AppDelegate::playlistManager) +
                _TtC7Wallper15PlaylistManager::isSchedulingActive) & 1) == 0) {
    *(undefined1 *)
     (*(long *)(lVar1 + _TtC7Wallper11AppDelegate::playlistManager) +
     _TtC7Wallper15PlaylistManager::isSchedulingActive) = 1;
    FUN_1001bbef0();
  }
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar5 = DAT_100577cc0;
  puVar3 = &DAT_100436d50;
  _swift_getKeyPath(&DAT_100436d50);
  puVar4 = &DAT_100436d78;
  _swift_getKeyPath(&DAT_100436d78);
  Combine::Published::_get_subscript(unaff_x22 + 0x38,uVar5,puVar3,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar3);
  if (*(char *)(unaff_x22 + 0x38) == '\x01') {
    uVar5 = *(undefined8 *)(lVar1 + lVar2);
    _swift_retain(uVar5);
    FUN_100216c54();
    _swift_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f6ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

