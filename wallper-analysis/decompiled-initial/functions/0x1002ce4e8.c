// rea decompile_all
// name: FUN_1002ce4e8
// address: 0x1002ce4e8
// body: available
// range: 0x1002ce4e8-0x1002cecdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cecdc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002ce874) */

void FUN_1002ce4e8(void)

{
  undefined1 *puVar1;
  URL UVar2;
  ID IVar3;
  NSString *pNVar4;
  URL UVar5;
  URL UVar6;
  NSURL *pNVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  NSDictionary *pNVar11;
  State SVar12;
  undefined *extraout_x1;
  char *pcVar13;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  URL UVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_150 [8];
  undefined1 *local_148;
  undefined8 local_138;
  undefined8 local_130;
  char local_128 [24];
  undefined1 auStack_110 [16];
  undefined *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  State local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  local_148 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar14.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)UVar14.unknown - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (lVar17 - extraout_x12_01) - extraout_x12_02;
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar5.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar6.unknown = (undefined *)NSBundle::URLForResource_withExtension_(IVar3,pNVar4);
  if (UVar6.unknown == (undefined *)0x0) {
    puVar10 = &DAT_10054c048;
    FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar10 + 0x18) = 2;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar10 + 0x20) = SVar20.str;
    *(undefined **)(puVar10 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar10 + 0x28) = SVar20.bridgeObject;
    *(undefined8 *)(puVar10 + 0x30) = 0xd00000000000002c;
    *(undefined8 *)(puVar10 + 0x38) = 0x80000001004e42a0;
    puVar9 = puVar10;
    FUN_100005b10(puVar10);
    _swift_setDeallocating(puVar10);
    FUN_10002a29c(puVar10 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar10 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar11 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar9);
    UVar5.unknown = (NSURL *)0x1;
    SVar12.unknown = (undefined *)objc_stub::initWithDomain_code_userInfo_(puVar10,pNVar4,1,pNVar11)
    ;
    UVar2.unknown = extraout_x1;
    _swift_willThrow(0);
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    (**(code **)(lVar15 + 0x20))(lVar18,lVar17 - extraout_x12_01,UVar2.unknown);
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar6.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar3);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    SVar20.bridgeObject = (void *)0x80000001004e42d0;
    SVar20.str = (char *)0xd000000000000040;
    Foundation::URL::appendingPathComponent(SVar20,true,UVar5);
    pcVar16 = *(code **)(lVar15 + 8);
    (*pcVar16)(UVar14.unknown,UVar2.unknown);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar14);
    local_e0.unknown = (undefined *)0x0;
    UVar5.unknown = (undefined *)0x1;
    IVar8 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      (IVar3,pNVar7,1,0,&local_e0);
    puVar1 = local_148;
    if ((int)IVar8 == 0) {
      SVar12.unknown = local_e0.unknown;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
    }
    else {
      SVar19.bridgeObject = (void *)0xec0000006e6f736a;
      SVar19.str = (char *)0x2e73656972746e65;
      UVar5 = Foundation::URL::appendingPathComponent(SVar19,false,UVar5);
      SVar20 = Foundation::URL::get_path(UVar5);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      IVar8 = NSFileManager::fileExistsAtPath_(IVar3,pNVar4);
      SVar12.unknown = (undefined *)0x0;
      if ((int)IVar8 == 0) {
LAB_1002ce7e0:
        UVar6.unknown = Foundation::URL::_bridgeToObjectiveC(SVar12.unknown);
        UVar5.unknown = Foundation::URL::_bridgeToObjectiveC(UVar6);
        local_e0.unknown = (undefined *)0x0;
        IVar3 = NSFileManager::copyItemAtURL_toURL_error_
                          (IVar3,UVar6.unknown,UVar5.unknown,&local_e0);
        if ((int)IVar3 != 0) {
          puVar10 = &DAT_100549eb0;
          FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
          _swift_initStaticObject();
          FUN_1002d4b5c(puVar10);
          _swift_arrayDestroy(puVar10 + 0x20,2,PTR___type_metadata_for_Swift_String_100523a98);
          uStack_f8 = *(undefined8 *)(unaff_x20 + 0xd0);
          local_100 = *(undefined **)(unaff_x20 + 200);
          local_d0 = *(undefined8 *)(unaff_x20 + 0xd8);
          local_138 = 0xd00000000000004d;
          local_130 = 0x80000001004e4320;
          local_e0.unknown = local_100;
          uStack_d8 = uStack_f8;
          local_78 = local_d0;
          FUN_100043d74(&local_100,auStack_f0);
          FUN_1000087e4(&local_78,auStack_f0,&DAT_10055a7a0,&DAT_10042e998);
          puVar10 = &DAT_10054dd08;
          FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
          SwiftUI::State::set_wrappedValue(&local_e0,&local_138,puVar10);
          FUN_100043c00(&local_100);
          FUN_10002a29c(&local_78,&DAT_10055a7a0,&DAT_10042e998);
          (*pcVar16)(local_148,UVar2.unknown);
          (*pcVar16)(lVar17,UVar2.unknown);
          (*pcVar16)(lVar18,UVar2.unknown);
          goto LAB_1002ceb70;
        }
        SVar12.unknown = local_e0.unknown;
        Foundation::__convertNSErrorToError();
      }
      else {
        pNVar7 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
        local_e0.unknown = (undefined *)0x0;
        UVar5.unknown = (undefined *)&local_e0;
        IVar8 = NSFileManager::removeItemAtURL_error_(IVar3,pNVar7);
        SVar12.unknown = local_e0.unknown;
        if ((int)IVar8 != 0) goto LAB_1002ce7e0;
        Foundation::__convertNSErrorToError();
      }
      _swift_willThrow(0);
      (*pcVar16)(puVar1,UVar2.unknown);
    }
    (*pcVar16)(lVar17,UVar2.unknown);
    (*pcVar16)(lVar18);
  }
  local_e0.unknown = (undefined *)0x0;
  uStack_d8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x11,(_StringGuts)UVar2.unknown);
  _swift_bridgeObjectRelease(uStack_d8);
  local_e0.unknown = (undefined *)0x6620726961706552;
  uStack_d8 = 0xef203a64656c6961;
  pcVar13 = local_128;
  _swift_getErrorValue(SVar12.unknown,auStack_110);
  SVar20 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar21.bridgeObject = UVar5.unknown;
  SVar21.str = pcVar13;
  Swift::String::append(SVar20,SVar21);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  local_d0 = *(undefined8 *)(unaff_x20 + 0xd8);
  local_100 = local_e0.unknown;
  uStack_f8 = uStack_d8;
  puVar10 = &DAT_10054dd08;
  local_e0.unknown = *(undefined **)(unaff_x20 + 200);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xd0);
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue(&local_e0,&local_100,puVar10);
  FUN_100044230(0,&DAT_100557e00,&PTR__OBJC_CLASS___NSSound_10053fc30);
  (extension_AppKit)::__C::NSSound::beep();
  _swift_errorRelease(SVar12.unknown);
LAB_1002ceb70:
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xc0);
  local_e0.unknown = *(undefined **)(unaff_x20 + 0xb8);
  local_138 = CONCAT71(local_138._1_7_,1);
  puVar10 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_e0,&local_138,puVar10);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

