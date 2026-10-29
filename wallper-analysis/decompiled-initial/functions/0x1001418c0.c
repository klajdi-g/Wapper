// rea decompile_all
// name: FUN_1001418c0
// address: 0x1001418c0
// body: available
// range: 0x1001418c0-0x100141a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100141a88 to 0x100139060 FUN_100139060 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001418c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  LocalizationValue LVar3;
  Locale LVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  Published *pPVar8;
  long unaff_x22;
  String SVar9;
  
  pPVar8 = *(Published **)(unaff_x22 + 0x2c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x298);
  puVar1 = &DAT_100427c18;
  _swift_getKeyPath(&DAT_100427c18);
  puVar2 = &DAT_100427c40;
  _swift_getKeyPath(&DAT_100427c40);
  *(undefined1 *)(unaff_x22 + 0x3a9) = 0;
  _swift_retain(uVar7);
  Combine::Published::_set_subscript(pPVar8,unaff_x22 + 0x3a9,uVar7,puVar1,puVar2);
  _swift_getKeyPath(&DAT_100427a80);
  _swift_getKeyPath(&DAT_100427aa8);
  *(undefined1 *)(unaff_x22 + 0x3a8) = 1;
  _swift_retain(uVar7);
  Combine::Published::_set_subscript();
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  lVar6 = *(long *)(*(long *)(LVar3.unknown + -8) + 0x40);
  *(long *)(unaff_x22 + 0x2e8) = lVar6;
  LVar3.unknown = (undefined *)(lVar6 + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  SVar9.bridgeObject = (void *)0x80000001004de640;
  SVar9.str = (char *)0x1000000000000017;
  LocalizationValue::_init(SVar9);
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  lVar6 = *(long *)(*(long *)(LVar4.unknown + -8) + 0x40);
  *(long *)(unaff_x22 + 0x2f0) = lVar6;
  LVar4.unknown = (undefined *)(lVar6 + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  Foundation::Locale::get_current(LVar4);
  SVar9 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
  _swift_task_dealloc(LVar4.unknown);
  _swift_task_dealloc(LVar3.unknown);
  _swift_getKeyPath(&DAT_100427ac8);
  _swift_getKeyPath(&DAT_100427af0);
  *(String *)(unaff_x22 + 0x178) = SVar9;
  _swift_retain(uVar7);
  Combine::Published::_set_subscript();
  plVar5 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2f8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100141a8c;
  FUN_100139060();
  return;
}

