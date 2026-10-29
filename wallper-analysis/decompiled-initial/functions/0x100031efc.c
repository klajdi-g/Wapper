// rea decompile_all
// name: FUN_100031efc
// address: 0x100031efc
// body: available
// range: 0x100031efc-0x100032023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100031efc(void)

{
  ulong *puVar1;
  ulong uVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  long lVar5;
  void *pvVar6;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar7;
  long unaff_x20;
  String stringLiteral;
  String SVar8;
  
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar5 = 0;
  FUN_10040211c();
  puVar1 = (ulong *)(unaff_x20 + *(int *)(lVar5 + 0x3c));
  pvVar6 = (void *)puVar1[1];
  if (pvVar6 != (void *)0x0) {
    pcVar7 = (char *)*puVar1;
    uVar2 = (ulong)pcVar7 & 0xffffffffffff;
    if (((ulong)pvVar6 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)pvVar6 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      _swift_bridgeObjectRetain();
      SVar8.bridgeObject = pvVar6;
      SVar8.str = pcVar7;
      return SVar8;
    }
  }
  stringLiteral.bridgeObject = (void *)0xed0000656c746954;
  stringLiteral.str = (char *)0x206e776f6e6b6e55;
  LVar4 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar4.unknown);
  SVar8 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffd0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar8;
}

