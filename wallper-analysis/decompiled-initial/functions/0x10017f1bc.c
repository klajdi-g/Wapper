// rea decompile_all
// name: FUN_10017f1bc
// address: 0x10017f1bc
// body: available
// range: 0x10017f1bc-0x10017f383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10017f1bc(void)

{
  ID self;
  undefined *puVar1;
  undefined *puVar2;
  NSString *pNVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_70;
  long local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  puVar4 = &DAT_100429d30;
  puVar1 = puVar4;
  _swift_getKeyPath(&DAT_100429d30);
  puVar5 = &DAT_100429d58;
  puVar2 = puVar5;
  _swift_getKeyPath(&DAT_100429d58);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar6 = local_70 & 0xff;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(self,uVar6,pNVar3);
  _swift_getKeyPath(&DAT_100429d30);
  _swift_getKeyPath(&DAT_100429d58);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if ((char)local_70 == '\x01') {
    puVar4 = &DAT_100429b00;
    _swift_getKeyPath(&DAT_100429b00);
    puVar5 = &DAT_100429b28;
    _swift_getKeyPath(&DAT_100429b28);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar4);
    _swift_release(puVar5);
    if (local_68 != 0) {
      FUN_10017f398(&local_70,0,1);
      _swift_bridgeObjectRelease(local_48);
      _swift_bridgeObjectRelease(uStack_50);
      _swift_bridgeObjectRelease(local_58);
      _swift_bridgeObjectRelease(local_68);
    }
  }
  return;
}

