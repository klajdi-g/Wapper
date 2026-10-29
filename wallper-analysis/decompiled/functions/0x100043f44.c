// rea decompile_all
// name: FUN_100043f44
// address: 0x100043f44
// body: available
// range: 0x100043f44-0x10004420b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100044208 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100043f44(undefined8 param_1)

{
  URL UVar1;
  NSURL *pNVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSDictionary *pNVar8;
  undefined *local_c8 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar2 = Foundation::URL::_bridgeToObjectiveC(UVar1);
  local_c8[0] = (undefined *)0x0;
  IVar3 = NSFileManager::removeItemAtURL_error_((ID)UVar1.unknown,pNVar2,local_c8);
  UVar1.unknown = local_c8[0];
  if ((int)IVar3 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease();
  }
  pNVar2 = Foundation::URL::_bridgeToObjectiveC(UVar1);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _CGImageDestinationCreateWithURL(pNVar2,pNVar4,1,0);
  if (pNVar2 != (NSURL *)0x0) {
    puVar5 = &DAT_10054c088;
    FUN_100002f94(&DAT_10054c088,&DAT_10042b190);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) =
         *(undefined8 *)PTR__kCGImagePropertyPNGCompressionFilter_1005219d8;
    *(undefined **)(puVar5 + 0x40) = PTR___type_metadata_for_Swift_Int_100523bd8;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    puVar6 = puVar5;
    FUN_1000068d0();
    _swift_setDeallocating(puVar5);
    FUN_10002a29c(puVar5 + 0x20,&DAT_10054a168,&DAT_10041a200);
    puVar5 = &DAT_10054c090;
    FUN_100002f94(&DAT_10054c090,&DAT_10041d828);
    _swift_initStackObject();
    puVar7 = PTR__kCGImagePropertyPNGDictionary_1005219e0;
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)puVar7;
    *(undefined **)(puVar5 + 0x28) = puVar6;
    puVar7 = puVar5;
    FUN_100006a18(puVar5);
    _swift_setDeallocating(puVar5);
    FUN_10002a29c(puVar5 + 0x20,&DAT_10054c098,&DAT_10041d830);
    FUN_100007e08(0);
    FUN_100002f94(&DAT_10054c0a0,&DAT_10041d838);
    FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
    pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar7);
    _CGImageDestinationAddImage(pNVar2,param_1,pNVar8);
    _CGImageDestinationFinalize(pNVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

