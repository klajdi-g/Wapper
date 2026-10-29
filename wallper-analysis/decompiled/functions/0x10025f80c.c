// rea decompile_all
// name: FUN_10025f80c
// address: 0x10025f80c
// body: available
// range: 0x10025f80c-0x10025f907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10025f80c(char param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  Locale LVar1;
  LocalizationValue LVar2;
  long extraout_x8;
  long extraout_x8_00;
  String SVar3;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  if (param_1 != '\0') {
    param_2 = param_4;
    param_3 = param_5;
  }
  SVar3.bridgeObject = param_3;
  SVar3.str = param_2;
  LVar2 = LocalizationValue::_init(SVar3);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar3 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffb0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar3;
}

