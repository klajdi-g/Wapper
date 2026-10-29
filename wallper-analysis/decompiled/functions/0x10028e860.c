// rea decompile_all
// name: FUN_10028e860
// address: 0x10028e860
// body: available
// range: 0x10028e860-0x10028eaa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028eaa4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10028e860(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70 [3];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  if (DAT_100559060 != -1) {
    _swift_once(&DAT_100559060,FUN_10028e2cc);
  }
  _swift_beginAccess(&DAT_100559068,local_70,0x20,0);
  puVar2 = DAT_100559068;
  if (*(long *)(DAT_100559068 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_100559068);
    lVar1 = param_1;
    uVar6 = param_2;
    FUN_10000464c();
    if ((uVar6 & 1) != 0) {
      self = *(ID *)(*(long *)(puVar2 + 0x38) + lVar1 * 8);
      _swift_endAccess(local_70);
      _swift_bridgeObjectRelease(puVar2);
      goto LAB_10028ea54;
    }
    _swift_bridgeObjectRelease(puVar2);
  }
  _swift_endAccess(local_70);
  puVar2 = &_OBJC_CLASS___NSAppleScript;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::initWithSource_((ID)puVar2,pNVar3);
  if (self != 0) {
    local_70[0] = *param_3;
    IVar4 = objc_stub::compileAndReturnError_(self,local_70);
    *param_3 = local_70[0];
    puVar2 = DAT_100559068;
    if ((int)IVar4 == 0) {
      self = 0;
    }
    else {
      if (0x1f < *(ulong *)(DAT_100559068 + 0x10)) {
        _swift_beginAccess(&DAT_100559068,auStack_88,1,0);
        DAT_100559068 = PTR___swiftEmptyDictionarySingleton_100524198;
        _swift_bridgeObjectRelease(puVar2);
      }
      _swift_beginAccess(&DAT_100559068,local_70,0x21,0);
      _swift_bridgeObjectRetain(param_2);
      puVar5 = DAT_100559068;
      _swift_isUniquelyReferenced_nonNull_native(DAT_100559068);
      puVar2 = DAT_100559068;
      DAT_100559068 = (undefined *)0x8000000000000000;
      FUN_100341268(self,param_1,param_2,puVar5);
      _swift_bridgeObjectRelease(param_2);
      DAT_100559068 = puVar2;
      _swift_endAccess(local_70);
    }
  }
LAB_10028ea54:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_58) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

