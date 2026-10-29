// rea decompile_all
// name: FUN_10023c1ec
// address: 0x10023c1ec
// body: available
// range: 0x10023c1ec-0x10023c3eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023c1ec(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ID self;
  ID IVar2;
  NSString *pNVar3;
  Dictionary<undefined,undefined> DVar4;
  Dictionary<undefined,undefined> DVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  float fVar8;
  double dVar9;
  undefined1 auStack_68 [24];
  
  lVar7 = _TtC7Wallper21VideoWallpaperManager::players;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_68,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(lVar7);
  uVar1 = param_1;
  uVar6 = param_2;
  FUN_10000464c();
  if ((uVar6 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar7);
    return;
  }
  self = *(ID *)(*(long *)(lVar7 + 0x38) + uVar1 * 8);
  _swift_bridgeObjectRelease(lVar7);
  uVar1 = param_1;
  FUN_10023c0d0(param_1,param_2);
  IVar2 = objc_stub::timeControlStatus(self);
  if ((uVar1 & 1) == 0) {
    if (IVar2 == 0) {
      return;
    }
    objc_stub::pause(self);
    return;
  }
  if (IVar2 == 2) {
    return;
  }
  IVar2 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = NSUserDefaults::dictionaryForKey_(IVar2,pNVar3);
  if (IVar2 == 0) {
LAB_10023c34c:
    DVar5.unknown = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005c3c();
  }
  else {
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar5 = DVar4;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar4.unknown);
    if (DVar5.unknown == (undefined *)0x0) goto LAB_10023c34c;
  }
  if ((*(long *)(DVar5.unknown + 0x10) == 0) || (FUN_10000464c(), (param_2 & 1) == 0)) {
    _swift_bridgeObjectRelease(DVar5.unknown);
    dVar9 = 1.0;
  }
  else {
    dVar9 = *(double *)(*(long *)(DVar5.unknown + 0x38) + param_1 * 8);
    _swift_bridgeObjectRelease(DVar5.unknown);
    fVar8 = 1.0;
    if (dVar9 <= 0.0) goto LAB_10023c3c0;
  }
  fVar8 = (float)dVar9;
LAB_10023c3c0:
  objc_stub::playImmediatelyAtRate_(self,fVar8);
  return;
}

