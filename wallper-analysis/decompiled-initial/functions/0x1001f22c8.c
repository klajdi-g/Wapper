// rea decompile_all
// name: FUN_1001f22c8
// address: 0x1001f22c8
// body: available
// range: 0x1001f22c8-0x1001f23bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f23b8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f22c8(void)

{
  undefined8 uVar1;
  byte bVar2;
  LocalizationValue LVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  LocalizationValue localized;
  String SVar6;
  
  bVar2 = *(byte *)(unaff_x22 + 0x6b0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x620));
  if ((bVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x5a8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x5a0);
    localized.unknown = *(undefined **)(unaff_x22 + 0x518);
    uVar1 = 8;
    if (*(char *)(unaff_x22 + 0x6b0) == '\0') {
      uVar1 = 6;
    }
    SVar6.bridgeObject = (void *)0x80000001004e1380;
    SVar6.str = (char *)0xd000000000000016;
    LVar3 = LocalizationValue::_init(SVar6);
    Foundation::Locale::get_current((Locale)LVar3.unknown);
    SVar6 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
    FUN_100123c28(1,uVar5,uVar4,SVar6.str,SVar6.bridgeObject,uVar1,0);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
  }
  _swift_task_switch(FUN_1001f23bc,0,0);
  return;
}

