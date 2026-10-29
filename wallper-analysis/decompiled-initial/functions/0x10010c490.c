// rea decompile_all
// name: FUN_10010c490
// address: 0x10010c490
// body: available
// range: 0x10010c490-0x10010c5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10010c490(long param_1)

{
  Locale LVar1;
  LocalizationValue LVar2;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  long extraout_x8;
  long extraout_x8_00;
  String SVar6;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar3 = 0;
  FUN_100126a5c();
  if (*(char *)(param_1 + *(int *)(lVar3 + 0x1c)) == '\x01') {
    pvVar5 = (void *)0x80000001004dd920;
    pcVar4 = (char *)0x1000000000000019;
  }
  else {
    pcVar4 = (char *)0x64616f6c6e776f44;
    pvVar5 = (void *)0xae00a680e2676e69;
  }
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

