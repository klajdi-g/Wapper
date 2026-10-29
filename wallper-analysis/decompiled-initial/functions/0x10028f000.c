// rea decompile_all
// name: FUN_10028f000
// address: 0x10028f000
// body: available
// range: 0x10028f000-0x10028f113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10028f000(void)

{
  ID IVar1;
  NSString *pNVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar3 = 0;
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar1 = NSBundle::objectForInfoDictionaryKey_(IVar1,pNVar2);
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
    FUN_10028f264(&local_50);
  }
  else {
    _swift_dynamicCast(&local_80,&local_50,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    if ((uVar3 & 1) != 0) goto LAB_10028f0fc;
  }
  local_80 = 0x302e31;
  uStack_78 = 0xe300000000000000;
LAB_10028f0fc:
  auVar4._8_8_ = uStack_78;
  auVar4._0_8_ = local_80;
  return auVar4;
}

