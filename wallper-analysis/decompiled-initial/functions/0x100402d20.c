// rea decompile_all
// name: FUN_100402d20
// address: 0x100402d20
// body: available
// range: 0x100402d20-0x100402e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100402d20(byte param_1)

{
  Locale LVar1;
  LocalizationValue LVar2;
  char *pcVar3;
  void *pvVar4;
  long extraout_x8;
  long extraout_x8_00;
  String SVar5;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  if (param_1 < 2) {
    if (param_1 == 0) {
      pcVar3 = (char *)0x656d6954206c6c41;
      pvVar4 = (void *)0xe800000000000000;
    }
    else {
      pcVar3 = (char *)0x656557207473614c;
      pvVar4 = (void *)0xe90000000000006b;
    }
  }
  else if (param_1 == 2) {
    pcVar3 = (char *)0x6e6f4d207473614c;
    pvVar4 = (void *)0xea00000000006874;
  }
  else {
    pcVar3 = (char *)0x6165592073696854;
    pvVar4 = (void *)0xe900000000000072;
  }
  SVar5.bridgeObject = pvVar4;
  SVar5.str = pcVar3;
  LVar2 = LocalizationValue::_init(SVar5);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar5 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffd0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar5;
}

