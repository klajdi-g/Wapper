// rea decompile_all
// name: FUN_1002d476c
// address: 0x1002d476c
// body: available
// range: 0x1002d476c-0x1002d4a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002d476c(long param_1,byte param_2)

{
  Locale LVar1;
  LocalizationValue LVar2;
  undefined *self;
  ID IVar3;
  NSString *pNVar4;
  long extraout_x8;
  long extraout_x8_00;
  AppStorage *pAVar5;
  LocalizationValue localized;
  String SVar6;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  AppStorage AStack_50;
  byte local_41;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pAVar5 = (AppStorage *)((long)&AStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)pAVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_41 = param_2 ^ 1;
  SwiftUI::AppStorage::set_wrappedValue
            (pAVar5,&local_41,*(undefined8 *)(param_1 + 0x20),
             PTR___type_metadata_for_Swift_Bool_100523b70);
  self = &_OBJC_CLASS___NSAlert;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  SVar6.bridgeObject = (void *)0x80000001004e43b0;
  SVar6.str = (char *)0xd00000000000001a;
  LVar2 = LocalizationValue::_init(SVar6);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  objc_stub::setMessageText_(IVar3,pNVar4);
  stringLiteral.bridgeObject = (void *)0x80000001004e43d0;
  stringLiteral.str = (char *)0x1000000000000041;
  LVar2 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  objc_stub::setInformativeText_(IVar3,pNVar4);
  objc_stub::setAlertStyle_(IVar3,0);
  stringLiteral_00.bridgeObject = (void *)0x80000001004e4420;
  stringLiteral_00.str = (char *)0xd000000000000010;
  LVar2 = LocalizationValue::_init(stringLiteral_00);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  objc_stub::addButtonWithTitle_(IVar3,pNVar4);
  stringLiteral_01.bridgeObject = (void *)0xe200000000000000;
  stringLiteral_01.str = (char *)0x4b4f;
  LVar2 = LocalizationValue::_init(stringLiteral_01);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar6 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  objc_stub::addButtonWithTitle_(IVar3,pNVar4);
  IVar3 = objc_stub::runModal(IVar3);
  if (IVar3 == 1000) {
    SMAppService::openSystemSettingsLoginItems((ID)&_OBJC_CLASS___SMAppService);
  }
  return 0;
}

