// rea decompile_all
// name: FUN_100231fec
// address: 0x100231fec
// body: available
// range: 0x100231fec-0x1002321c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002321c4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100231fec(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  undefined *self;
  ID self_00;
  URL UVar2;
  NSURL *pNVar3;
  NSArray *pNVar4;
  ID IVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  self = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  UVar2 = Foundation::URL::_init();
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  (**(code **)(lVar8 + 8))
            ((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  objc_stub::setExecutableURL_(self_00,pNVar3);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::setArguments_(self_00,pNVar4);
  local_70 = 0;
  IVar5 = objc_stub::launchAndReturnError_(self_00,&local_70);
  if ((int)IVar5 == 0) {
    Foundation::__convertNSErrorToError();
  }
  else {
    objc_stub::waitUntilExit(self_00);
    IVar5 = objc_stub::terminationStatus(self_00);
    if ((int)IVar5 == 0) goto LAB_100232180;
    _swift_bridgeObjectRetain(param_2);
    puVar6 = (undefined8 *)objc_stub::terminationStatus(self_00);
    puVar7 = puVar6;
    FUN_100231e20();
    _swift_allocError(&DAT_100533dd8,puVar7,0,0);
    *puVar7 = param_1;
    puVar7[1] = param_2;
    *(int *)(puVar7 + 2) = (int)puVar6;
    *(undefined1 *)((long)puVar7 + 0x14) = 2;
  }
  _swift_willThrow();
LAB_100232180:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

