// rea decompile_all
// name: FUN_100285684
// address: 0x100285684
// body: available
// range: 0x100285684-0x100285787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100285684(void)

{
  Locale LVar1;
  undefined *self;
  ID self_00;
  NSString *pNVar2;
  Locale LVar3;
  NSLocale *pNVar4;
  long extraout_x8;
  long lVar5;
  String identifier;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  lVar5 = *(long *)(LVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setDateFormat_(self_00,pNVar2);
  identifier.bridgeObject = (void *)0xeb00000000584953;
  identifier.str = (char *)0x4f505f53555f6e65;
  LVar3 = Foundation::Locale::init(identifier);
  pNVar4 = Foundation::Locale::_bridgeToObjectiveC(LVar3);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),LVar1.unknown);
  objc_stub::setLocale_(self_00,pNVar4);
  DAT_100558f88 = self_00;
  return 0;
}

