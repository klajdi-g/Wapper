// rea decompile_all
// name: FUN_1003f71a4
// address: 0x1003f71a4
// body: available
// range: 0x1003f71a4-0x1003f751b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f71a4(ulong param_1,undefined8 param_2,ID param_3,char *param_4,void *param_5,
                  ID param_6)

{
  undefined8 uVar1;
  StringInterpolation SVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  NSString *pNVar5;
  NSString *pNVar6;
  undefined *self;
  ID IVar7;
  LocalizationValue LVar8;
  StringInterpolation SVar9;
  char *pcVar10;
  _StringGuts extraout_x1;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 local_70;
  undefined8 local_68;
  
  SVar2 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar2.unknown + -8) + 0x40));
  SVar2.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown =
       SVar2.unknown +
       (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)
       );
  if ((param_1 & 1) != 0) {
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setObject_forKey_(param_3,pNVar5,pNVar6);
    self = &_OBJC_CLASS___UNMutableNotificationContent;
    _objc_allocWithZone();
    IVar7 = objc_stub::init((ID)self);
    SVar12.bridgeObject = (void *)0x80000001004e71d0;
    SVar12.str = (char *)0xd000000000000018;
    LVar8 = LocalizationValue::_init(SVar12);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    SVar12 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    SVar9.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    objc_stub::setTitle_(IVar7);
    LocalizationValue::StringInterpolation::_init(0x1d,1);
    SVar13.bridgeObject = (void *)0xe800000000000000;
    SVar13.str = (char *)0x206e6f6973726556;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar13,SVar9);
    SVar14.bridgeObject = param_5;
    SVar14.str = param_4;
    LocalizationValue::StringInterpolation::_appendInterpolation(SVar14,SVar9);
    SVar15.bridgeObject = (void *)0x80000001004e71f0;
    SVar15.str = (char *)0xd000000000000015;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar15,SVar9);
    LVar8 = LocalizationValue::_init(SVar2);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    pvVar11 = (void *)0x0;
    SVar12 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    objc_stub::setBody_(IVar7,pNVar5);
    pcVar10 = (char *)UNNotificationSound::defaultSound((ID)&_OBJC_CLASS___UNNotificationSound);
    objc_stub::setSound_(IVar7);
    local_70 = 0;
    local_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x11,extraout_x1);
    _swift_bridgeObjectRelease(local_68);
    local_70 = 0x2d7265706c6c6177;
    local_68 = 0xef2d657461647075;
    SVar16.bridgeObject = param_5;
    SVar16.str = param_4;
    SVar17.bridgeObject = pvVar11;
    SVar17.str = pcVar10;
    Swift::String::append(SVar16,SVar17);
    uVar1 = local_68;
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar1);
    IVar7 = UNNotificationRequest::requestWithIdentifier_content_trigger_
                      ((ID)&_OBJC_CLASS___UNNotificationRequest,pNVar5,IVar7,0);
    objc_stub::addNotificationRequest_withCompletionHandler_(param_6,IVar7,0);
  }
  return;
}

