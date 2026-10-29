// rea decompile_all
// name: FUN_10025fe08
// address: 0x10025fe08
// body: available
// range: 0x10025fe08-0x10025ff3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10025fe08(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  Locale LVar5;
  LocalizationValue LVar6;
  long extraout_x8;
  long extraout_x8_00;
  String SVar7;
  
  LVar5 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar6 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  pcVar2 = (char *)0xd000000000000035;
  pcVar3 = " Mac\'s appearance.";
  if (param_1 != 2) {
    pcVar2 = (char *)0xd000000000000052;
    pcVar3 = "Ds";
  }
  pcVar1 = (char *)0xd000000000000023;
  pcVar4 = "day, another for the night.";
  if (param_1 != 0) {
    pcVar1 = (char *)0xd00000000000002b;
    pcVar4 = "es of day you choose.";
  }
  if (param_1 < 2) {
    pcVar2 = pcVar1;
    pcVar3 = pcVar4;
  }
  SVar7.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
  SVar7.str = pcVar2;
  LVar6 = LocalizationValue::_init(SVar7);
  Foundation::Locale::get_current((Locale)LVar6.unknown);
  SVar7 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffd0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar7;
}

