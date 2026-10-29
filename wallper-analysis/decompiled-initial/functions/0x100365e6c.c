// rea decompile_all
// name: FUN_100365e6c
// address: 0x100365e6c
// body: available
// range: 0x100365e6c-0x100365f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100365e6c(undefined8 *param_1,char *param_2,void *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Locale LVar1;
  LocalizationValue LVar2;
  Text TVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  String stringLiteral;
  String local_50;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  if (((ulong)param_2 & 0xff) == 0) {
    stringLiteral.bridgeObject = (void *)0xef796c6c61756e61;
    stringLiteral.str = (char *)0x4d2065676e616843;
    LVar2 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar2.unknown);
    param_5 = 0;
    local_50 = (extension_Foundation)::Swift::String::_init
                         ((undefined *)
                          ((long)&local_50 +
                          (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                          (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  }
  else {
    FUN_100215cec();
    local_50.bridgeObject = param_3;
    local_50.str = param_2;
  }
  uVar5 = local_50.str._0_1_;
  FUN_100026df4();
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar3 = SwiftUI::Text::_init();
  *param_1 = TVar3.unknown;
  param_1[1] = puVar4;
  *(undefined1 *)(param_1 + 2) = uVar5;
  param_1[3] = param_5;
  return;
}

