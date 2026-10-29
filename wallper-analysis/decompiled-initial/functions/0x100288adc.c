// rea decompile_all
// name: FUN_100288adc
// address: 0x100288adc
// body: available
// range: 0x100288adc-0x100288ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100288c94) */
/* WARNING: Removing unreachable block (ram,0x000100288c74) */

undefined1 * FUN_100288adc(void)

{
  URL UVar1;
  ID self;
  URL UVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  undefined1 auStack_70 [16];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = puVar6 + -extraout_x12;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  if (DAT_100558fc8 != -1) {
    _swift_once(&DAT_100558fc8,switchD_100284e44::caseD_44);
  }
  UVar2 = UVar1;
  FUN_100099338(UVar1.unknown,&DAT_100558fd0);
  pcVar8 = *(code **)(lVar9 + 0x10);
  UVar3.unknown = puVar7;
  (*pcVar8)(puVar7,UVar2.unknown,UVar1.unknown);
  SVar11 = Foundation::URL::get_path(UVar3);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(puVar7,UVar1.unknown);
  IVar5 = NSFileManager::fileExistsAtPath_(self,pNVar4);
  if ((IVar5 & 1) == 0) {
    UVar3.unknown = puVar7;
    (*pcVar8)(puVar7,UVar2.unknown,UVar1.unknown);
    SVar11 = Foundation::URL::get_path(UVar3);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    (*pcVar10)(puVar7,UVar1.unknown);
    NSFileManager::createFileAtPath_contents_attributes_(self,pNVar4,0,0);
  }
  FUN_100044230(0,&DAT_100558fe8,&PTR__OBJC_CLASS___NSFileHandle_10053fbe8);
  (*pcVar8)(puVar6,UVar2.unknown,UVar1.unknown);
  FUN_100285304();
  if (puVar6 != (undefined1 *)0x0) {
    DAT_100558fc0 = (extension_Foundation)::__C::NSFileHandle::_seekToEnd();
  }
  return puVar6;
}

