// rea decompile_all
// name: FUN_1001edc38
// address: 0x1001edc38
// body: available
// range: 0x1001edc38-0x1001ee05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001edc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,long param_6)

{
  code *pcVar1;
  UUID UVar2;
  UUID UVar3;
  ID self;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  long extraout_x8;
  char *pcVar10;
  long lVar11;
  undefined8 extraout_d0;
  String SVar12;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  FUN_100174ed8();
  if (UVar3.unknown == (undefined *)0x0) {
    UVar3 = Foundation::UUID::init();
    SVar12 = Foundation::UUID::get_uuidString(UVar3);
    (**(code **)(lVar11 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown)
    ;
  }
  else {
    objc_stub::stringValue((ID)UVar3.unknown);
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar8 = SVar12.bridgeObject;
  pcVar10 = SVar12.str;
  objc_stub::frame(param_5);
  _swift_beginAccess(param_6 + 0x10,&local_a8,0x20,0);
  lVar11 = *(long *)(param_6 + 0x10);
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    FUN_10000464c();
    if (((ulong)SVar12.bridgeObject & 1) != 0) {
      self = *(ID *)(*(long *)(lVar11 + 0x38) + (long)SVar12.str * 8);
      _swift_endAccess(&local_a8);
      _swift_bridgeObjectRelease(pvVar8);
      _swift_bridgeObjectRelease(lVar11);
      objc_stub::setFrame_display_(self,extraout_d0,param_2,param_3,param_4,1);
      goto LAB_1001edf28;
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  _swift_endAccess(&local_a8);
  puVar4 = &_OBJC_CLASS___NSWindow;
  _objc_allocWithZone();
  self = objc_stub::initWithContentRect_styleMask_backing_defer_screen_
                   ((ID)puVar4,0,0,param_3,param_4,0,2,0,param_5);
  objc_stub::setFrame_display_(self,extraout_d0,param_2,param_3,param_4,1);
  objc_stub::setOpaque_(self,0);
  IVar5 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setBackgroundColor_(self,IVar5);
  objc_stub::setLevel_(self,1000);
  objc_stub::setIgnoresMouseEvents_(self,1);
  objc_stub::setHasShadow_(self,0);
  objc_stub::setCollectionBehavior_(self,0x151);
  IVar5 = 0;
  FUN_1001ef460();
  _objc_allocWithZone();
  IVar5 = objc_stub::initWithFrame_(IVar5,0,0,param_3,param_4);
  objc_stub::setAutoresizingMask_(IVar5,0x12);
  objc_stub::setContentView_(self,IVar5);
  _swift_beginAccess(param_6 + 0x10,&local_a8,0x21,0);
  uVar6 = *(undefined8 *)(param_6 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  local_78 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(param_6 + 0x10) = 0x8000000000000000;
  FUN_100340778(self,pcVar10,pvVar8,uVar6);
  _swift_bridgeObjectRelease(pvVar8);
  *(undefined8 *)(param_6 + 0x10) = local_78;
  _swift_endAccess(&local_a8);
LAB_1001edf28:
  objc_stub::setAlphaValue_(self,0);
  objc_stub::orderFrontRegardless(self);
  puVar4 = &DAT_1005323e0;
  _swift_allocObject(&DAT_1005323e0,0x18,7);
  *(ID *)(puVar4 + 0x10) = self;
  puVar7 = &DAT_100532408;
  _swift_allocObject(&DAT_100532408,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1001f00f0;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  local_88 = thunk_FUN_1001f0074;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_1003f3adc;
  puStack_90 = &DAT_100532420;
  local_80 = puVar7;
  pvVar8 = __Block_copy(&local_a8);
  puVar9 = local_80;
  _swift_retain(puVar7);
  _swift_release(puVar9);
  NSAnimationContext::runAnimationGroup_((ID)&_OBJC_CLASS___NSAnimationContext,pvVar8);
  __Block_release(pvVar8);
  puVar9 = puVar7;
  _swift_isEscapingClosureAtFileLocation(puVar7,"",0x58,0x38,0x32,1);
  _swift_release(puVar7);
  _swift_release(puVar4);
  if (((ulong)puVar9 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ee060);
  (*pcVar1)();
}

