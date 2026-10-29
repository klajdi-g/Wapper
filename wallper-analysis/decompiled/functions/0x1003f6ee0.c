// rea decompile_all
// name: FUN_1003f6ee0
// address: 0x1003f6ee0
// body: available
// range: 0x1003f6ee0-0x1003f71a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f6ee0(void)

{
  String SVar1;
  bool bVar2;
  ID self;
  undefined *puVar3;
  undefined *puVar4;
  NSString *pNVar5;
  ID IVar6;
  void *aBlock;
  _StringGuts _Var7;
  long unaff_x20;
  undefined8 uVar8;
  String SVar9;
  char *local_70;
  void *local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  uVar8 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::applicationManager);
  puVar3 = &DAT_100436d08;
  _swift_getKeyPath(&DAT_100436d08);
  puVar4 = &DAT_100436d30;
  _swift_getKeyPath(&DAT_100436d30);
  Combine::Published::_get_subscript(&local_70,uVar8,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  SVar1.bridgeObject = local_68;
  SVar1.str = local_70;
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = NSUserDefaults::boolForKey_(self,pNVar5);
  if ((int)IVar6 != 0) {
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar6 = NSUserDefaults::boolForKey_(self,pNVar5);
    if ((int)IVar6 != 0) {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar6 = NSUserDefaults::stringForKey_(self,pNVar5);
      if (IVar6 != 0) {
        SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var7.unknown = SVar9.bridgeObject;
        if (SVar9 == SVar1) {
          _swift_bridgeObjectRelease(local_68);
          _swift_bridgeObjectRelease(_Var7.unknown);
          return;
        }
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar9.str,_Var7,(_StringComparisonResult)(__int8)local_70);
        _swift_bridgeObjectRelease(_Var7.unknown);
        if (bVar2) {
          _swift_bridgeObjectRelease(local_68);
          return;
        }
      }
      IVar6 = UNUserNotificationCenter::currentNotificationCenter
                        ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
      puVar3 = &DAT_10053e980;
      _swift_allocObject(&DAT_10053e980,0x30,7);
      *(ID *)(puVar3 + 0x10) = self;
      *(char **)(puVar3 + 0x18) = local_70;
      *(void **)(puVar3 + 0x20) = local_68;
      *(ID *)(puVar3 + 0x28) = IVar6;
      local_50 = FUN_1003fcf58;
      local_70 = PTR___NSConcreteStackBlock_100521110;
      local_68 = (void *)0x42000000;
      local_60 = FUN_1003f3a58;
      puStack_58 = &DAT_10053e998;
      local_48 = puVar3;
      aBlock = __Block_copy(&local_70);
      _swift_release(local_48);
      UNUserNotificationCenter::requestAuthorizationWithOptions_completionHandler_(IVar6,6,aBlock);
      __Block_release(aBlock);
      return;
    }
  }
  _swift_bridgeObjectRelease(local_68);
  return;
}

