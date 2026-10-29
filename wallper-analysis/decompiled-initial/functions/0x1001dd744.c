// rea decompile_all
// name: FUN_1001dd744
// address: 0x1001dd744
// body: available
// range: 0x1001dd744-0x1001ddb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ddb44 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001dd848 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001dd744(void)

{
  long lVar1;
  code *pcVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  NSURL *pNVar9;
  URL UVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_80 [16];
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100556c98;
  FUN_100002f94(&DAT_100556c98,&DAT_10042adc8);
  lVar13 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper14PreviewManager::_previewURLs;
  puVar8 = PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005684();
  puVar6 = &DAT_100556c88;
  local_70 = puVar5;
  FUN_100002f94(&DAT_100556c88,&DAT_10042adc0);
  Combine::Published::init(lVar11 - extraout_x8_00,puVar6,puVar6);
  (**(code **)(lVar13 + 0x20))(unaff_x20 + lVar1,lVar11 - extraout_x8_00,puVar4);
  lVar1 = _TtC7Wallper14PreviewManager::fm;
  IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  *(ID *)(unaff_x20 + lVar1) = IVar7;
  puVar4 = PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined **)(unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs) =
       PTR___swiftEmptySetSingleton_1005241a0;
  lVar13 = _TtC7Wallper14PreviewManager::failedIDs;
  puVar6 = puVar8;
  FUN_100005480();
  *(undefined **)(unaff_x20 + lVar13) = puVar6;
  *(undefined **)(unaff_x20 + _TtC7Wallper14PreviewManager::transparentIDs) = puVar4;
  lVar13 = _TtC7Wallper14PreviewManager::transparentRetryCount;
  FUN_100005480();
  *(undefined **)(unaff_x20 + lVar13) = puVar8;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::maxRetries) = 3;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::maxTransparentRetries) = 2;
  *(undefined **)(unaff_x20 + _TtC7Wallper14PreviewManager::validatedIDs) = puVar4;
  lVar13 = _TtC7Wallper14PreviewManager::remoteVideoTemplates;
  puVar4 = &DAT_100549e60;
  FUN_100002f94(&DAT_100549e60,&DAT_100419f50);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) = 0xd00000000000002f;
  *(undefined8 *)(puVar4 + 0x28) = 0x80000001004dbbb0;
  puVar6 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  puVar8 = puVar6;
  _swift_initStaticObject();
  *(undefined **)(puVar4 + 0x30) = puVar8;
  *(undefined8 *)(puVar4 + 0x38) = 0xd000000000000026;
  *(undefined8 *)(puVar4 + 0x40) = 0x80000001004dbbe0;
  _swift_initStaticObject(puVar6,&DAT_100556f38);
  *(undefined **)(puVar4 + 0x48) = puVar6;
  *(undefined **)(unaff_x20 + lVar13) = puVar4;
  UVar10.unknown = (undefined *)0x1;
  IVar7 = objc_stub::URLsForDirectory_inDomains_(*(ID *)(unaff_x20 + lVar1),0xe);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar7 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar7);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ddb44);
    (*pcVar2)();
  }
  (**(code **)(lVar12 + 0x10))
            (lVar11,IVar7 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),UVar3.unknown);
  _swift_bridgeObjectRelease(IVar7);
  SVar14.bridgeObject = (void *)0x80000001004e0c00;
  SVar14.str = (char *)0xd000000000000010;
  Foundation::URL::appendingPathComponent(SVar14,true,UVar10);
  (**(code **)(lVar12 + 0x20))
            (unaff_x20 + _TtC7Wallper14PreviewManager::cacheDirectory,
             auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  UVar10.unknown = *(undefined **)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
  pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar10);
  local_70 = (undefined *)0x0;
  IVar7 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar10.unknown,pNVar9,1,0,&local_70);
  if ((int)IVar7 == 0) {
    puVar4 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar4);
  }
  FUN_1001ddb48();
  (**(code **)(lVar12 + 8))(lVar11,UVar3.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

