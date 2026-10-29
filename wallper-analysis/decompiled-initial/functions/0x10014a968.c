// rea decompile_all
// name: FUN_10014a968
// address: 0x10014a968
// body: available
// range: 0x10014a968-0x10014ac77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010014aac0) */

undefined8 FUN_10014a968(void)

{
  ID self;
  NSString *pNVar1;
  ID IVar2;
  ID IVar3;
  Data DVar4;
  JSONDecoder *pJVar5;
  Published *pPVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  Published *local_78;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = NSUserDefaults::boolForKey_(self,pNVar1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSUserDefaults::boolForKey_(self,pNVar1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar4.unknown = (undefined *)NSUserDefaults::dataForKey_(self,pNVar1);
  if (DVar4.unknown != (undefined *)0x0) {
    uVar7 = extraout_x1;
    DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
    pJVar5 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    pJVar5 = Foundation::JSONDecoder::init(pJVar5);
    FUN_1001501dc();
    Foundation::JSONDecoder::_decode(pJVar5,(Data)0x10052e6e0);
    _swift_release(pJVar5);
    _swift_getKeyPath();
    _swift_getKeyPath(&DAT_100428020);
    local_80 = local_80 & 0xff;
    _swift_retain();
    Combine::Published::_set_subscript(local_78,&local_90);
    FUN_10014a3a8();
    FUN_100093624(DVar4.unknown,uVar7);
  }
  pPVar6 = (Published *)&DAT_100427f68;
  _swift_getKeyPath(&DAT_100427f68);
  _swift_getKeyPath(&DAT_100427f90);
  local_90._0_1_ = (char)IVar2;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar6,&local_90);
  pPVar6 = (Published *)&DAT_100427fb0;
  _swift_getKeyPath(&DAT_100427fb0);
  _swift_getKeyPath(&DAT_100427fd8);
  local_90 = CONCAT71(local_90._1_7_,(char)IVar3);
  _swift_retain();
  Combine::Published::_set_subscript(pPVar6,&local_90);
  pPVar6 = (Published *)&DAT_100428040;
  _swift_getKeyPath(&DAT_100428040);
  _swift_getKeyPath(&DAT_100428068);
  if ((int)IVar3 == 0) {
    if ((int)IVar2 == 0) {
      uStack_88 = 3;
    }
    else {
      uStack_88 = 2;
    }
  }
  else {
    uStack_88 = 4;
  }
  local_90 = 0;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar6,&local_90);
  return 0;
}

