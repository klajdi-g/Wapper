// rea decompile_all
// name: FUN_10025c8f8
// address: 0x10025c8f8
// body: available
// range: 0x10025c8f8-0x10025cb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10025c8f8(void)

{
  undefined *puVar1;
  code *pcVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  ID IVar5;
  undefined *self;
  LocalizationValue LVar6;
  NSString *pNVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  String SVar8;
  String stringLiteral;
  String stringLiteral_00;
  
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown =
       &stack0xffffffffffffffb0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if ((*(byte *)(unaff_x20 + _TtC7Wallper13WindowManager::isShowingAccessDenied) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _TtC7Wallper13WindowManager::isShowingAccessDenied) = 1;
    puVar1 = PTR__NSApp_1005212d0;
    if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10025cb7c);
      (*pcVar2)();
    }
    objc_stub::setActivationPolicy_(*(ID *)PTR__NSApp_1005212d0,0);
    IVar5 = *(ID *)puVar1;
    if (IVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10025cb80);
      (*pcVar2)();
    }
    objc_stub::activateIgnoringOtherApps_(IVar5,1);
    self = &_OBJC_CLASS___NSAlert;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)self);
    objc_stub::setAlertStyle_(IVar5,2);
    SVar8.bridgeObject = (void *)0x80000001004e2c80;
    SVar8.str = &DAT_d000000000000028;
    LVar6 = LocalizationValue::_init(SVar8);
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    SVar8 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    objc_stub::setMessageText_(IVar5,pNVar7);
    stringLiteral.bridgeObject = (void *)0x80000001004e2cb0;
    stringLiteral.str = (char *)0xd000000000000056;
    LVar6 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    SVar8 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    objc_stub::setInformativeText_(IVar5,pNVar7);
    stringLiteral_00.bridgeObject = (void *)0xe400000000000000;
    stringLiteral_00.str = (char *)0x74697551;
    LVar6 = LocalizationValue::_init(stringLiteral_00);
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    SVar8 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    objc_stub::addButtonWithTitle_(IVar5,pNVar7);
    objc_stub::runModal(IVar5);
    IVar5 = *(ID *)puVar1;
    if (IVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10025cb84);
      (*pcVar2)();
    }
    objc_stub::terminate_(IVar5,0);
  }
  return;
}

