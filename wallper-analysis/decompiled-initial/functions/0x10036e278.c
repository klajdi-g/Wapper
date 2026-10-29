// rea decompile_all
// name: FUN_10036e278
// address: 0x10036e278
// body: available
// range: 0x10036e278-0x10036e44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10036e278(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  StringInterpolation SVar4;
  long lVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  String SVar7;
  String SVar8;
  String SVar9;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  SVar4 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  if (((param_1 & 1) == 0) || (FUN_1002a9100(), param_4 == (void *)0x0)) {
    SVar9.bridgeObject = (void *)0xe900000000000079;
    SVar9.str = (char *)0x6164207972657645;
    LVar2.unknown = (undefined *)LocalizationValue::_init(SVar9);
  }
  else {
    lVar5 = 0;
    SVar4.unknown = param_3;
    FUN_10034c884();
    if (*(char *)(unaff_x20 + *(int *)(lVar5 + 0x14)) == '\0') {
      LocalizationValue::StringInterpolation::_init(0x11,1);
      pcVar1 = "Sunrise today in ";
      pcVar6 = (char *)0xd000000000000011;
    }
    else {
      LocalizationValue::StringInterpolation::_init(0x10,1);
      pcVar1 = "Sunset today in ";
      pcVar6 = (char *)0xd000000000000010;
    }
    SVar7.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    SVar7.str = pcVar6;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar7,SVar4);
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    LocalizationValue::StringInterpolation::_appendInterpolation(SVar8,SVar4);
    _swift_bridgeObjectRelease(param_4);
    LocalizationValue::StringInterpolation::_appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar4);
    LVar2.unknown =
         (undefined *)
         LocalizationValue::_init
                   ((StringInterpolation)
                    (&stack0xffffffffffffffb0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0)) +
                    -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
  }
  Foundation::Locale::get_current(LVar2);
  SVar9 = (extension_Foundation)::Swift::String::_init
                    ((LocalizationValue)
                     (&stack0xffffffffffffffb0 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  return SVar9;
}

