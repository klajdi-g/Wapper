// rea decompile_all
// name: FUN_10014df70
// address: 0x10014df70
// body: available
// range: 0x10014df70-0x10014e243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010014e154) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010014e14c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10014df70(void)

{
  ID self;
  undefined *puVar1;
  undefined *puVar2;
  NSString *pNVar3;
  JSONEncoder *pJVar4;
  JSONEncoder *pJVar5;
  Data DVar6;
  NSData *pNVar7;
  ulong uVar8;
  ulong local_80;
  long local_78;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  puVar1 = &DAT_100427f68;
  _swift_getKeyPath(&DAT_100427f68);
  puVar2 = &DAT_100427f90;
  _swift_getKeyPath(&DAT_100427f90);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar8 = local_80 & 0xff;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(self,uVar8,pNVar3);
  puVar1 = &DAT_100427fb0;
  _swift_getKeyPath(&DAT_100427fb0);
  puVar2 = &DAT_100427fd8;
  _swift_getKeyPath(&DAT_100427fd8);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar1);
  _swift_release(puVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(self,local_80 & 0xff,pNVar3);
  puVar1 = &DAT_100427ff8;
  _swift_getKeyPath(&DAT_100427ff8);
  puVar2 = &DAT_100428020;
  _swift_getKeyPath(&DAT_100428020);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if (local_78 == 0) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::removeObjectForKey_(self,pNVar3);
  }
  else {
    pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
    pJVar5 = Foundation::JSONEncoder::init(pJVar4);
    pJVar4 = pJVar5;
    FUN_10015015c();
    puVar1 = &DAT_10052e6e0;
    DVar6 = Foundation::JSONEncoder::_encode(pJVar5,pJVar4,&DAT_10052e6e0,pJVar4);
    _swift_bridgeObjectRelease(local_78);
    _swift_release(pJVar5);
    pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar6);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_(self,pNVar7,pNVar3);
    FUN_100093624(DVar6.unknown,puVar1);
  }
  return;
}

