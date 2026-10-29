// rea decompile_all
// name: FUN_1003fa3e0
// address: 0x1003fa3e0
// body: available
// range: 0x1003fa3e0-0x1003fa61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003fa5a8 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003fa3e0(void)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  byte *pbVar4;
  NSString *pNVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  byte local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = NSBundle::bundleIdentifier(IVar2);
  if (IVar2 == 0) {
    return (undefined8 *)0x0;
  }
  IVar2 = NSUserDefaults::persistentDomainForName_(self,IVar2);
  puVar1 = PTR___type_metadata_for_Any_100524178;
  if (IVar2 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) != 0) {
      uVar7 = 0xee00797265747461;
      lVar8 = 0x426e4f6573756170;
      _swift_bridgeObjectRetain(DVar3.unknown);
      FUN_10000464c(0x426e4f6573756170);
      if ((uVar7 & 1) != 0) {
        FUN_1000280d4(*(long *)(DVar3.unknown + 0x38) + lVar8 * 0x20,&local_60);
        _swift_bridgeObjectRelease_n(DVar3.unknown,2);
        if (local_48 != 0) {
          pbVar4 = &local_61;
          _swift_dynamicCast(pbVar4,&local_60,puVar1 + 8,
                             PTR___type_metadata_for_Swift_Bool_100523b70,6);
          if (((ulong)pbVar4 & 1) != 0) {
            pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            NSUserDefaults::setBool_forKey_(self,(ulong)local_61,pNVar5);
            pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            NSUserDefaults::removeObjectForKey_(self,pNVar5);
            return (undefined8 *)0x0;
          }
          return (undefined8 *)0x0;
        }
        goto LAB_1003fa5e0;
      }
      _swift_bridgeObjectRelease(DVar3.unknown);
    }
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
LAB_1003fa5e0:
  puVar6 = &local_60;
  FUN_10002a29c(puVar6,&DAT_10054d428,&DAT_100420300);
  return puVar6;
}

