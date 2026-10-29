// rea decompile_all
// name: FUN_100296ed0
// address: 0x100296ed0
// body: available
// range: 0x100296ed0-0x10029706b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100296ed0(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long *plVar5;
  ulong local_50 [4];
  
  pcVar2 = (code *)local_50;
  puVar3 = &DAT_10042db28;
  _swift_getKeyPath(&DAT_10042db28);
  puVar4 = &DAT_10042db50;
  _swift_getKeyPath(&DAT_10042db50);
  Combine::Published::_get_subscript(local_50);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if ((local_50[0] & 1) == 0) {
    puVar3 = &DAT_10042db70;
    _swift_getKeyPath(&DAT_10042db70);
    puVar4 = &DAT_10042db98;
    _swift_getKeyPath(&DAT_10042db98);
    plVar5 = unaff_x20;
    Combine::Published::_modify_subscript();
    if (SBORROW8(*unaff_x20,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100297068);
      (*pcVar2)();
    }
    *unaff_x20 = *unaff_x20 + -1;
    (*pcVar2)(local_50,0);
    _swift_release(puVar3);
    _swift_release(puVar4);
    puVar3 = &DAT_10042db70;
    _swift_getKeyPath(&DAT_10042db70);
    puVar4 = &DAT_10042db98;
    _swift_getKeyPath(&DAT_10042db98);
    Combine::Published::_get_subscript(local_50,plVar5,puVar3,puVar4);
    _swift_release(puVar3);
    _swift_release(puVar4);
    if ((long)local_50[0] < 1) {
      uVar1 = *(long *)((long)plVar5 + _TtC7Wallper20NetworkStatusMonitor::retryInterval) + 10;
      if (SCARRY8(*(long *)((long)plVar5 + _TtC7Wallper20NetworkStatusMonitor::retryInterval),10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10029706c);
        (*pcVar2)();
      }
      if (0x1d < (long)uVar1) {
        uVar1 = 0x1e;
      }
      *(ulong *)((long)plVar5 + _TtC7Wallper20NetworkStatusMonitor::retryInterval) = uVar1;
      _swift_getKeyPath(&DAT_10042db70);
      _swift_getKeyPath(&DAT_10042db98);
      local_50[0] = uVar1;
      _swift_retain(plVar5);
      Combine::Published::_set_subscript();
    }
  }
  else {
    FUN_100296aa8();
  }
  return;
}

