// rea decompile_all
// name: FUN_1000654c8
// address: 0x1000654c8
// body: available
// range: 0x1000654c8-0x1000656fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000654c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  State SVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  undefined *puVar7;
  ID self;
  NSString *pNVar8;
  NSString *pNVar9;
  ID self_00;
  NSNumber *pNVar10;
  undefined *puVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  undefined8 extraout_x1_00;
  long lVar13;
  objc_super local_88;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  SVar3.unknown = &DAT_10054e510;
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_100002f94(&DAT_10054e510,&DAT_10041f458);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_78 != 0) {
    pcVar4 = (class_t *)0x0;
    FUN_1000660ec();
    pcVar5 = pcVar4;
    _objc_allocWithZone();
    *(undefined8 *)
     ((long)&pcVar5->isa +
     _TtC7WallperP33_1BB0B006840CE298DFD371C13BB5537221AutoAdvanceMenuTarget::manager) = param_2;
    local_88.receiver = (ID)pcVar5;
    local_88.super_class = pcVar4;
    _swift_retain(param_2);
    IVar6 = _objc_msgSendSuper2(&local_88,"init");
    puVar7 = &_OBJC_CLASS___NSMenu;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar7);
    uVar12 = extraout_x1;
    lVar13 = 0;
    do {
      lVar1 = lVar13 + 1;
      cVar2 = (&DAT_100557540)[lVar13];
      FUN_100215cec(cVar2);
      puVar7 = &_OBJC_CLASS___NSMenuItem;
      _objc_allocWithZone();
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar12);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      self_00 = objc_stub::initWithTitle_action_keyEquivalent_((ID)puVar7,pNVar8,"pick:",pNVar9);
      objc_stub::setTarget_(self_00,IVar6);
      pNVar10 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      objc_stub::setRepresentedObject_(self_00,pNVar10);
      puVar7 = &DAT_10041ebb0;
      _swift_getKeyPath(&DAT_10041ebb0);
      puVar11 = &DAT_10041ebd8;
      _swift_getKeyPath(&DAT_10041ebd8);
      Combine::Published::_get_subscript(&local_70,param_2,puVar7,puVar11);
      _swift_release(puVar7);
      _swift_release(puVar11);
      objc_stub::setState_(self_00,(ulong)((char)local_70 == cVar2));
      objc_stub::addItem_(self,self_00);
      uVar12 = extraout_x1_00;
      lVar13 = lVar1;
    } while (lVar1 != 6);
    objc_stub::popUpMenuPositioningItem_atLocation_inView_(self,0,0xc010000000000000,0,local_78);
  }
  return;
}

