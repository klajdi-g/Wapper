// rea decompile_all
// name: FUN_10020d728
// address: 0x10020d728
// body: available
// range: 0x10020d728-0x10020d873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020d728(undefined8 param_1)

{
  undefined *puVar1;
  ID self;
  URL UVar2;
  URL UVar3;
  NSString *pNVar4;
  long extraout_x8;
  undefined1 *puVar5;
  NSURL *pNVar6;
  long lVar7;
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  FUN_1000087e4(param_1,puVar5,&DAT_100553d90,&DAT_10041bf10);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  UVar3.unknown = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,UVar2.unknown);
  pNVar6 = (NSURL *)0x0;
  if ((int)UVar3.unknown != 1) {
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar3);
    (**(code **)(lVar7 + 8))(puVar5,UVar2.unknown);
  }
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setURL_forKey_(self,pNVar6,pNVar4);
  FUN_10002a29c(param_1,&DAT_100553d90,&DAT_10041bf10);
  return;
}

