// rea decompile_all
// name: FUN_100402c10
// address: 0x100402c10
// body: available
// range: 0x100402c10-0x100402d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100402c10(char param_1)

{
  Locale LVar1;
  LocalizationValue LVar2;
  ulong uVar3;
  char *pcVar4;
  void *pvVar5;
  long extraout_x8;
  long extraout_x8_00;
  String SVar6;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  if (param_1 == '\0') {
    uVar3 = 0x6577654e;
  }
  else {
    if (param_1 != '\x01') {
      pcVar4 = (char *)0x6b694c2074736f4d;
      pvVar5 = (void *)0xea00000000006465;
      goto LAB_100402cdc;
    }
    uVar3 = 0x65646c4f;
  }
  pcVar4 = (char *)(uVar3 | 0x747300000000);
  pvVar5 = (void *)0xe600000000000000;
LAB_100402cdc:
  SVar6.bridgeObject = pvVar5;
  SVar6.str = pcVar4;
  LVar2 = LocalizationValue::_init(SVar6);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffd0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar6;
}

