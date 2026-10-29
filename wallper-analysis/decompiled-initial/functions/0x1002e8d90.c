// rea decompile_all
// name: FUN_1002e8d90
// address: 0x1002e8d90
// body: available
// range: 0x1002e8d90-0x1002e900f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002e8d90(void)

{
  UUID UVar1;
  State SVar2;
  undefined8 *self;
  UUID UVar3;
  ID IVar4;
  NSString *pNVar5;
  Dictionary<undefined,undefined> DVar6;
  Dictionary<undefined,undefined> DVar7;
  long extraout_x8;
  long unaff_x20;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  String SVar11;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x88);
  local_60 = *(undefined8 *)(unaff_x20 + 0x80);
  SVar2.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar2);
  self = (undefined8 *)NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self == (undefined8 *)0x0) {
    return 0x3ff0000000000000;
  }
  if (DAT_100557bb0 != -1) {
    self = &DAT_100557bb0;
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  FUN_100174ed8();
  if (self == (undefined8 *)0x0) {
    UVar3 = Foundation::UUID::init();
    SVar11 = Foundation::UUID::get_uuidString(UVar3);
    (**(code **)(lVar9 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  }
  else {
    objc_stub::stringValue((ID)self);
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar8 = SVar11.bridgeObject;
  IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = NSUserDefaults::dictionaryForKey_(IVar4,pNVar5);
  if (IVar4 != 0) {
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar7 = DVar6;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar6.unknown);
    if (DVar7.unknown != (undefined *)0x0) {
      lVar9 = *(long *)(DVar7.unknown + 0x10);
      goto joined_r0x0001002e8f84;
    }
  }
  DVar7.unknown = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005c3c();
  lVar9 = *(long *)(DVar7.unknown + 0x10);
joined_r0x0001002e8f84:
  if (lVar9 != 0) {
    FUN_10000464c();
    if (((ulong)SVar11.bridgeObject & 1) != 0) {
      uVar10 = *(undefined8 *)(*(long *)(DVar7.unknown + 0x38) + (long)SVar11.str * 8);
      _swift_bridgeObjectRelease(DVar7.unknown);
      _swift_bridgeObjectRelease(pvVar8);
      return uVar10;
    }
  }
  _swift_bridgeObjectRelease(DVar7.unknown);
  _swift_bridgeObjectRelease(pvVar8);
  return 0x3ff0000000000000;
}

