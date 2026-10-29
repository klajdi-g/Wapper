// rea decompile_all
// name: FUN_1002178c8
// address: 0x1002178c8
// body: available
// range: 0x1002178c8-0x1002179c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002178c8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  Published *pPVar4;
  undefined8 uVar5;
  long unaff_x20;
  AnyCancellable *this;
  undefined1 local_32;
  char local_31;
  
  puVar2 = &DAT_10042b4b0;
  _swift_getKeyPath(&DAT_10042b4b0);
  puVar3 = &DAT_10042b4d8;
  _swift_getKeyPath(&DAT_10042b4d8);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (local_31 == '\x01') {
    pPVar4 = (Published *)&DAT_10042b4b0;
    _swift_getKeyPath(&DAT_10042b4b0);
    _swift_getKeyPath(&DAT_10042b4d8);
    local_32 = 0;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar4,&local_32);
    lVar1 = _TtC7Wallper19ShuffleQueueManager::timerCancellable;
    this = *(AnyCancellable **)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::timerCancellable);
    if (this == (AnyCancellable *)0x0) {
      uVar5 = 0;
    }
    else {
      _swift_retain(this);
      Combine::AnyCancellable::cancel(this);
      _swift_release(this);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_release(uVar5);
    FUN_100217d50();
  }
  return;
}

