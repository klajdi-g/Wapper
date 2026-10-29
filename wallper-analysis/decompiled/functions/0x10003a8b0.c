// rea decompile_all
// name: FUN_10003a8b0
// address: 0x10003a8b0
// body: available
// range: 0x10003a8b0-0x10003aa3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003a8b0(void)

{
  Locale LVar1;
  LocalizationValue LVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  String SVar5;
  String SVar6;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  SVar5.bridgeObject = (void *)0xe600000000000000;
  SVar5.str = (char *)0x61726f727541;
  LVar2 = LocalizationValue::_init(SVar5);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar5 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffc0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  SVar6.bridgeObject = (void *)0x80000001004dc120;
  SVar6.str = (char *)0xd000000000000026;
  LVar2 = LocalizationValue::_init(SVar6);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffc0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  puVar3 = &DAT_10054c2a8;
  FUN_100002f94(&DAT_10054c2a8,&DAT_10041d858);
  _swift_initStaticObject();
  puVar4 = &DAT_10054c318;
  FUN_100002f94(&DAT_10054c318,&DAT_10041d860);
  _swift_initStaticObject();
  _DAT_100577bb0 = SVar5;
  _DAT_100577bc0 = SVar6;
  DAT_100577bd0 = puVar3;
  DAT_100577bd8 = puVar4;
  return;
}

