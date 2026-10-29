// rea decompile_all
// name: FUN_100212f10
// address: 0x100212f10
// body: available
// range: 0x100212f10-0x10021329f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100213238 to 0x1004146a8 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10021329c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100212f10(void)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  NSArray *pNVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  NSDictionary *pNVar8;
  NSString *pNVar9;
  long extraout_x8;
  long lVar10;
  String SVar11;
  undefined1 auStack_a0 [8];
  undefined8 local_98 [10];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  UVar2 = Foundation::URL::_init();
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  (**(code **)(lVar10 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  UVar1.unknown = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  *(undefined8 *)(UVar1.unknown + 0x18) = 6;
  *(undefined8 *)(UVar1.unknown + 0x10) = 3;
  *(undefined8 *)(UVar1.unknown + 0x20) = 0x642d;
  *(undefined8 *)(UVar1.unknown + 0x28) = 0xe200000000000000;
  *(undefined8 *)(UVar1.unknown + 0x30) = 0xd000000000000014;
  *(undefined8 *)(UVar1.unknown + 0x38) = 0x80000001004e16d0;
  SVar11 = Foundation::URL::get_path(UVar1);
  *(String *)(UVar1.unknown + 0x40) = SVar11;
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(UVar1.unknown);
  local_98[0] = 0;
  IVar5 = NSTask::launchedTaskWithExecutableURL_arguments_error_terminationHandler_
                    ((ID)&_OBJC_CLASS___NSTask,pNVar3,pNVar4,local_98,0);
  if (IVar5 == 0) {
    uVar6 = local_98[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
  }
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  puVar7 = &DAT_100557348;
  FUN_100002f94(&DAT_100557348,&DAT_10042b178);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)PTR__NSFilePosixPermissions_100521028;
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined **)(puVar7 + 0x40) = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar7 + 0x28) = 0x1a4;
  UVar1.unknown = puVar7;
  FUN_100006df0();
  _swift_setDeallocating(puVar7);
  FUN_10002a29c(puVar7 + 0x20,&DAT_10054a1d8,&DAT_10042b180);
  FUN_100008090(0);
  FUN_1000036d0(&DAT_10054a600,FUN_100008090,&TargetProtocolConformanceDescriptor_10041b494);
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease();
  SVar11 = Foundation::URL::get_path(UVar1);
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  local_98[0] = 0;
  IVar5 = NSFileManager::setAttributes_ofItemAtPath_error_(IVar5,pNVar8,pNVar9,local_98);
  if ((int)IVar5 == 0) {
    uVar6 = local_98[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_48) {
      return uVar6;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100521138 == local_48) {
    return local_98[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

