// rea decompile_all
// name: FUN_10017ffb0
// address: 0x10017ffb0
// body: available
// range: 0x10017ffb0-0x1001800bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 FUN_10017ffb0(void)

{
  ID IVar1;
  NSString *pNVar2;
  undefined1 *puVar3;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  IVar1 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar1 = NSUserDefaults::objectForKey_(IVar1,pNVar2);
  if (IVar1 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10002a29c(&local_50,&DAT_10054d428,&DAT_100420300);
  }
  else {
    puVar3 = &local_71;
    _swift_dynamicCast(puVar3,&local_50,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_Bool_100523b70,6);
    if (((ulong)puVar3 & 1) != 0) {
      return local_71;
    }
  }
  return 1;
}

