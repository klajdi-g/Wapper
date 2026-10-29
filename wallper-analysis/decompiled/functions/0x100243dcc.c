// rea decompile_all
// name: FUN_100243dcc
// address: 0x100243dcc
// body: available
// range: 0x100243dcc-0x100243f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100243dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  Date DVar1;
  ID self;
  NSString *pNVar2;
  long extraout_x8;
  long extraout_x12;
  code *pcVar3;
  long lVar4;
  long lVar5;
  double extraout_d0;
  double dVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  local_88 = param_3;
  local_80 = param_7;
  local_78 = param_8;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  Foundation::Date::init();
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::doubleForKey_(self,pNVar2);
  dVar6 = extraout_d0;
  if (extraout_d0 < 0.0) {
    dVar6 = 0.0;
  }
  Foundation::Date::addingTimeInterval(dVar6 + 8.0,(Date)0x0);
  pcVar3 = *(code **)(lVar4 + 8);
  (*pcVar3)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  FUN_100243f44(param_1,param_5,param_4,param_6,local_80,param_2,local_88,lVar5,local_78);
  (*pcVar3)(lVar5,DVar1.unknown);
  return;
}

