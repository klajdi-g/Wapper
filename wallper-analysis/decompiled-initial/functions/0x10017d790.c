// rea decompile_all
// name: FUN_10017d790
// address: 0x10017d790
// body: available
// range: 0x10017d790-0x10017d90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010017d904) */

undefined8 FUN_10017d790(void)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  ID self;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  NSArray *pNVar7;
  NSString *pNVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  puVar3 = &DAT_10042a160;
  _swift_getKeyPath(&DAT_10042a160);
  puVar4 = &DAT_10042a188;
  _swift_getKeyPath(&DAT_10042a188);
  Combine::Published::_get_subscript(&local_58);
  _swift_release(puVar3);
  _swift_release(puVar4);
  pppuVar1 = local_58;
  ppppuVar9 = (undefined8 ****)local_58[2];
  if (ppppuVar9 == (undefined8 ****)0x0) {
    _swift_bridgeObjectRelease(local_58);
    ppppuVar5 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    ppppuVar5 = ppppuVar9;
    FUN_1001c5970(ppppuVar9,0);
    ppppuVar6 = &local_58;
    FUN_1001aacf0(ppppuVar6,ppppuVar5 + 4,ppppuVar9,pppuVar1);
    FUN_10002f6ec(local_58,uStack_50,local_48,uStack_40,local_38);
    if (ppppuVar6 != ppppuVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10017d854);
      (*pcVar2)();
    }
  }
  local_58 = ppppuVar5;
  _swift_retain(ppppuVar5);
  FUN_100177c2c(&local_58);
  _swift_release(ppppuVar5);
  pppuVar1 = local_58;
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(pppuVar1);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar7,pNVar8);
  return 0;
}

