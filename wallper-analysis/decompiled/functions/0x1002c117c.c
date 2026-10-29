// rea decompile_all
// name: FUN_1002c117c
// address: 0x1002c117c
// body: available
// range: 0x1002c117c-0x1002c137f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_1002c117c(void)

{
  Locale LVar1;
  undefined *puVar2;
  ID self;
  Locale LVar3;
  NSLocale *pNVar4;
  TimeZone TVar5;
  TimeZone TVar6;
  NSString *pNVar7;
  NSDate *pNVar8;
  long extraout_x8;
  long extraout_x8_00;
  NSTimeZone *pNVar9;
  undefined1 *puVar10;
  long lVar11;
  String SVar12;
  
  puVar2 = &DAT_10055a520;
  FUN_100002f94(&DAT_10055a520,&DAT_10042e420);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  lVar11 = *(long *)(LVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar2 = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar2);
  SVar12.bridgeObject = (void *)0xeb00000000584953;
  SVar12.str = (char *)0x4f505f53555f6e65;
  LVar3 = Foundation::Locale::init(SVar12);
  pNVar4 = Foundation::Locale::_bridgeToObjectiveC(LVar3);
  (**(code **)(lVar11 + 8))
            ((long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),LVar1.unknown);
  objc_stub::setLocale_(self,pNVar4);
  Foundation::TimeZone::_init(0);
  TVar5 = Foundation::TimeZone::typeMetadataAccessor();
  lVar11 = *(long *)(TVar5.unknown + -8);
  TVar6.unknown = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,TVar5.unknown);
  pNVar9 = (NSTimeZone *)0x0;
  if ((int)TVar6.unknown != 1) {
    pNVar9 = Foundation::TimeZone::_bridgeToObjectiveC(TVar6);
    (**(code **)(lVar11 + 8))(puVar10,TVar5.unknown);
  }
  objc_stub::setTimeZone_(self,pNVar9);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setDateFormat_(self,pNVar7);
  pNVar8 = Foundation::Date::_bridgeToObjectiveC((Date)0x0);
  objc_stub::stringFromDate_(self,pNVar8);
  SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar12;
}

