// rea decompile_all
// name: FUN_1001eb764
// address: 0x1001eb764
// body: available
// range: 0x1001eb764-0x1001eb927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001eb764(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  NSString *pNVar2;
  URL UVar3;
  undefined *puVar4;
  code *pcVar5;
  long extraout_x8;
  undefined1 *puVar6;
  ID IVar7;
  long lVar8;
  String SVar9;
  undefined1 auStack_80 [32];
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_80,0x21,0);
  UVar3.unknown = param_3;
  FUN_100227384(param_2);
  _swift_endAccess(auStack_80);
  _swift_bridgeObjectRelease();
  IVar7 = *(ID *)(param_1 + _TtC7Wallper14PreviewManager::fm);
  SVar9 = Foundation::URL::get_path(UVar3);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  IVar7 = objc_stub::fileExistsAtPath_(IVar7,pNVar2);
  if ((int)IVar7 != 0) {
    UVar3 = Foundation::URL::typeMetadataAccessor();
    lVar8 = *(long *)(UVar3.unknown + -8);
    (**(code **)(lVar8 + 0x10))(puVar6,param_4,UVar3.unknown);
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,UVar3.unknown);
    puVar1 = &DAT_10042ae68;
    _swift_getKeyPath(&DAT_10042ae68);
    puVar4 = &DAT_10042ae90;
    _swift_getKeyPath(&DAT_10042ae90);
    _swift_bridgeObjectRetain(param_3);
    pcVar5 = (code *)auStack_80;
    Combine::Published::_modify_subscript((Published *)UVar3.unknown,pcVar5,param_1,puVar1,puVar4);
    FUN_100122fac(puVar6,param_2,param_3);
    (*pcVar5)(auStack_80,0);
    _swift_release(puVar1);
    _swift_release(puVar4);
  }
  return;
}

