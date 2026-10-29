// rea decompile_all
// name: FUN_10029aabc
// address: 0x10029aabc
// body: available
// range: 0x10029aabc-0x10029ae4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10029aabc(void)

{
  undefined8 uVar1;
  Date DVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  ID IVar5;
  NSString *pNVar6;
  undefined *self;
  LocalizationValue LVar7;
  char *pcVar8;
  Date DVar9;
  ID self_00;
  _StringGuts extraout_x1;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  double dVar13;
  String SVar14;
  String stringLiteral;
  String SVar15;
  String SVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown =
       (undefined *)
       ((lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  IVar5 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = NSUserDefaults::boolForKey_(IVar5,pNVar6);
  if ((int)IVar5 != 0) {
    self = &_OBJC_CLASS___UNMutableNotificationContent;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)self);
    SVar14.bridgeObject = (void *)0x80000001004e38f0;
    SVar14.str = (char *)0xd000000000000011;
    LVar7 = LocalizationValue::_init(SVar14);
    Foundation::Locale::get_current((Locale)LVar7.unknown);
    SVar14 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    objc_stub::setTitle_(IVar5,pNVar6);
    stringLiteral.bridgeObject = (void *)0x80000001004e3910;
    stringLiteral.str = (char *)0xd00000000000004a;
    LVar7 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar7.unknown);
    pvVar10 = (void *)0x0;
    SVar14 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    objc_stub::setBody_(IVar5,pNVar6);
    pcVar8 = (char *)UNNotificationSound::defaultSound((ID)&_OBJC_CLASS___UNNotificationSound);
    objc_stub::setSound_(IVar5);
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x10,extraout_x1);
    SVar15.bridgeObject = (void *)0xee002d6573756170;
    SVar15.str = (char *)0x2d79726574746162;
    SVar16.bridgeObject = pvVar10;
    SVar16.str = pcVar8;
    Swift::String::append(SVar15,SVar16);
    DVar9 = Foundation::Date::init();
    dVar13 = Foundation::Date::get_timeIntervalSince1970(DVar9);
    (**(code **)(lVar12 + 8))(lVar11,DVar2.unknown);
    double::_write((undefined *)&local_80,dVar13);
    uVar1 = uStack_78;
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar1);
    IVar5 = UNNotificationRequest::requestWithIdentifier_content_trigger_
                      ((ID)&_OBJC_CLASS___UNNotificationRequest,pNVar6,IVar5,0);
    self_00 = UNUserNotificationCenter::currentNotificationCenter
                        ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
    UNUserNotificationCenter::addNotificationRequest_withCompletionHandler_(self_00,IVar5,0);
  }
  return 0;
}

