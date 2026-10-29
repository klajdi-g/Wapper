// rea decompile_all
// name: FUN_100296b30
// address: 0x100296b30
// body: available
// range: 0x100296b30-0x100296c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100296b30(void)

{
  void *aBlock;
  ID IVar1;
  Published *unaff_x20;
  undefined *puVar2;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  FUN_100296aa8();
  puVar2 = *(undefined **)
            ((long)&unaff_x20->unknown + _TtC7Wallper20NetworkStatusMonitor::retryInterval);
  _swift_getKeyPath(&DAT_10042db70);
  _swift_getKeyPath(&DAT_10042db98);
  local_60 = puVar2;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_60);
  puVar2 = &DAT_100537380;
  _swift_allocObject(&DAT_100537380,0x18,7);
  _swift_weakInit(puVar2 + 0x10,unaff_x20);
  local_40 = FUN_1002985d0;
  local_60 = PTR___NSConcreteStackBlock_100521110;
  local_58 = 0x42000000;
  local_50 = FUN_10016802c;
  puStack_48 = &DAT_100537398;
  local_38 = puVar2;
  aBlock = __Block_copy(&local_60);
  _swift_release(local_38);
  IVar1 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3ff0000000000000,1,aBlock);
  __Block_release(aBlock);
  *(ID *)((long)&unaff_x20->unknown + _TtC7Wallper20NetworkStatusMonitor::countdownTimer) = IVar1;
  return 0;
}

