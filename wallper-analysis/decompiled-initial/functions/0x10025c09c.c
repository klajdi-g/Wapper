// rea decompile_all
// name: FUN_10025c09c
// address: 0x10025c09c
// body: available
// range: 0x10025c09c-0x10025c23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025c09c(void)

{
  long lVar1;
  Date DVar2;
  ID self;
  ID IVar3;
  Date DVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  Date DVar5;
  long lVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  DVar5.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  Foundation::Date::init();
  lVar1 = _TtC7Wallper13WindowManager::lastRestoreAt;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper13WindowManager::lastRestoreAt,auStack_78,0,0);
  DVar4.unknown = (undefined *)(unaff_x20 + lVar1);
  (**(code **)(lVar6 + 0x10))(DVar5.unknown,DVar4.unknown,DVar2.unknown);
  dVar8 = Foundation::Date::timeIntervalSince(DVar5,DVar4);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(DVar5.unknown,DVar2.unknown);
  (*pcVar7)((long)DVar5.unknown - extraout_x12,DVar2.unknown);
  if (0.2 <= dVar8) {
    Foundation::Date::init();
    _swift_beginAccess(unaff_x20 + lVar1,auStack_90,0x21,0);
    (**(code **)(lVar6 + 0x28))(unaff_x20 + lVar1,(long)DVar5.unknown - extraout_x12,DVar2.unknown);
    _swift_endAccess(auStack_90);
    FUN_10025a508();
    self = *(ID *)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow);
    if (self == 0) {
      FUN_10025b1c4();
    }
    else {
      IVar3 = objc_stub::isMiniaturized(self);
      if ((int)IVar3 == 0) {
        objc_stub::makeKeyAndOrderFront_(self,0);
      }
      else {
        objc_stub::deminiaturize_(self,0);
      }
    }
  }
  return;
}

