// rea decompile_all
// name: FUN_10022ef8c
// address: 0x10022ef8c
// body: available
// range: 0x10022ef8c-0x10022f1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022ef8c(undefined8 param_1)

{
  bool bVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  char *pcVar5;
  NSString *pNVar6;
  URL UVar7;
  String *pSVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar10 - extraout_x12;
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar4.unknown = (undefined *)NSBundle::bundleURL(IVar3);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  local_70 = Foundation::URL::get_path(UVar4);
  UVar7.unknown = local_70.bridgeObject;
  pcVar5 = local_70.str;
  local_80 = 0xd000000000000012;
  uStack_78 = 0x80000001004e22a0;
  FUN_100026df4();
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,pcVar5,pcVar5);
  _swift_bridgeObjectRelease();
  if (!bVar1) {
    SVar12 = Foundation::URL::get_path(UVar7);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    IVar3 = NSFileManager::isWritableFileAtPath_((ID)UVar4.unknown,pNVar6);
    UVar7.unknown = (undefined *)0x0;
    if ((int)IVar3 != 0) {
      UVar7 = Foundation::URL::deletingLastPathComponent((URL)0x0);
      SVar12 = Foundation::URL::get_path(UVar7);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      (**(code **)(lVar11 + 8))(lVar10,UVar2.unknown);
      IVar3 = NSFileManager::isWritableFileAtPath_((ID)UVar4.unknown,pNVar6);
      UVar7.unknown = (undefined *)0x0;
      if ((IVar3 & 1) != 0) {
        (**(code **)(lVar11 + 0x20))(param_1,lVar9,UVar2.unknown);
        return;
      }
    }
  }
  SVar12 = Foundation::URL::get_path(UVar7);
  pSVar8 = (String *)SVar12.str;
  FUN_100231e20();
  _swift_allocError(&DAT_100533dd8,pSVar8,0,0);
  *pSVar8 = SVar12;
  *(undefined4 *)&pSVar8[1].str = 0;
  *(char *)((long)&pSVar8[1].str + 4) = '\0';
  _swift_willThrow();
  (**(code **)(lVar11 + 8))(lVar9,UVar2.unknown);
  return;
}

