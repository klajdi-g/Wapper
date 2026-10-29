// rea decompile_all
// name: FUN_100292fc4
// address: 0x100292fc4
// body: available
// range: 0x100292fc4-0x10029310b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100292fc4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ID self;
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String local_58;
  long local_48;
  
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::operatingSystemVersion(self,&local_58);
  if (local_48 < 1) {
    local_58 = Swift::CustomStringConvertible::get_description();
    SVar2.bridgeObject = (void *)0xe100000000000000;
    SVar2.str = (char *)0x2e;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar2,SVar7);
  }
  else {
    local_58 = Swift::CustomStringConvertible::get_description();
    SVar1.bridgeObject = (void *)0xe100000000000000;
    SVar1.str = (char *)0x2e;
    SVar4.bridgeObject = param_4;
    SVar4.str = param_3;
    Swift::String::append(SVar1,SVar4);
    SVar2 = Swift::CustomStringConvertible::get_description();
    SVar5.bridgeObject = param_4;
    SVar5.str = param_3;
    Swift::String::append(SVar2,SVar5);
    _swift_bridgeObjectRelease(SVar2.bridgeObject);
    SVar3.bridgeObject = (void *)0xe100000000000000;
    SVar3.str = (char *)0x2e;
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar3,SVar6);
  }
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar2,SVar8);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return local_58;
}

