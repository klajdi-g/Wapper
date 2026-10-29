// rea decompile_all
// name: FUN_1001473a0
// address: 0x1001473a0
// body: available
// range: 0x1001473a0-0x100147593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001473a0(void)

{
  Locale LVar1;
  LocalizationValue LVar2;
  long extraout_x8;
  long extraout_x8_00;
  Published *unaff_x20;
  String SVar3;
  String local_50;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  _swift_getKeyPath(&DAT_100427a80);
  _swift_getKeyPath(&DAT_100427aa8);
  local_50.str._0_1_ = 5;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_50);
  SVar3.bridgeObject = (void *)0x80000001004de930;
  SVar3.str = (char *)0xd000000000000012;
  LVar2 = LocalizationValue::_init(SVar3);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar3 = (extension_Foundation)::Swift::String::_init
                    ((undefined *)
                     ((long)&local_50 +
                     (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                     (extraout_x8 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
  _swift_getKeyPath(&DAT_100427ac8);
  _swift_getKeyPath(&DAT_100427af0);
  local_50 = SVar3;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  _swift_getKeyPath(&DAT_100427b10);
  _swift_getKeyPath(&DAT_100427b38);
  local_50.str._0_1_ = 1;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  _swift_getKeyPath(&DAT_100427bc0);
  _swift_getKeyPath(&DAT_100427be8);
  local_50.str._0_1_ = 1;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  return;
}

