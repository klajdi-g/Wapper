// rea decompile_all
// name: FUN_100213f74
// address: 0x100213f74
// body: available
// range: 0x100213f74-0x100214207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100214204 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100213f74(void)

{
  undefined *puVar1;
  Date DVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  undefined *puVar6;
  NSDictionary *pNVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  String SVar10;
  undefined1 auStack_b0 [8];
  undefined8 local_a8 [10];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar10 = Foundation::URL::get_path(UVar3);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  IVar5 = NSFileManager::fileExistsAtPath_((ID)UVar3.unknown,pNVar4);
  if ((int)IVar5 != 0) {
    Foundation::Date::init();
    IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    puVar6 = &DAT_100557348;
    FUN_100002f94(&DAT_100557348,&DAT_10042b178);
    _swift_initStackObject();
    puVar1 = PTR__NSFileModificationDate_100521020;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined8 *)(puVar6 + 0x20) = *(undefined8 *)puVar1;
    *(undefined **)(puVar6 + 0x40) = DVar2.unknown;
    FUN_1000ccd8c(puVar6 + 0x28);
    (**(code **)(lVar9 + 0x10))();
    UVar3.unknown = puVar6;
    FUN_100006df0();
    _swift_setDeallocating(puVar6);
    FUN_10002a29c(puVar6 + 0x20,&DAT_10054a1d8,&DAT_10042b180);
    FUN_100008090(0);
    FUN_1000036d0(&DAT_10054a600,FUN_100008090,&TargetProtocolConformanceDescriptor_10041b494);
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease();
    SVar10 = Foundation::URL::get_path(UVar3);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    local_a8[0] = 0;
    IVar5 = NSFileManager::setAttributes_ofItemAtPath_error_(IVar5,pNVar7,pNVar4,local_a8);
    if ((int)IVar5 == 0) {
      uVar8 = local_a8[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar8);
    }
    (**(code **)(lVar9 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

