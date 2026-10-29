// rea decompile_all
// name: FUN_10020e434
// address: 0x10020e434
// body: available
// range: 0x10020e434-0x10020ea93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020ea90 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010020e970) */

void FUN_10020e434(void)

{
  Encoding encoding;
  URL UVar1;
  ID IVar2;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  URL UVar6;
  undefined8 uVar7;
  URL in_x3;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  Encoding EVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  Encoding local_a0;
  long local_98;
  undefined *puStack_90;
  URL local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  puStack_90 = (undefined *)Encoding::_typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  puVar8 = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0.unknown = puVar8;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_88.unknown = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)puVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = (undefined *)(lVar12 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  EVar9.unknown = puVar8 + -extraout_x12_01;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar4.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar3);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  SVar13.bridgeObject = (void *)0x80000001004e1140;
  SVar13.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar13,true,in_x3);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar12,UVar1.unknown);
  SVar14.bridgeObject = (void *)0xe600000000000000;
  SVar14.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar14,true,in_x3);
  UVar4.unknown = puVar8;
  (*pcVar11)(puVar8,UVar1.unknown);
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  (*pcVar11)(EVar9.unknown,UVar1.unknown);
  local_80 = 0;
  UVar4.unknown = (undefined *)0x1;
  IVar2 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar2,pNVar5,1,0,&local_80);
  if ((int)IVar2 != 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar6.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar3);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    SVar15.bridgeObject = (void *)0x80000001004e1140;
    SVar15.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar15,true,UVar4);
    (*pcVar11)(lVar12,UVar1.unknown);
    SVar16.bridgeObject = (void *)0xea0000000000736c;
    SVar16.str = (char *)0x69616e626d756874;
    Foundation::URL::appendingPathComponent(SVar16,true,UVar4);
    UVar4.unknown = puVar8;
    (*pcVar11)(puVar8,UVar1.unknown);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    (*pcVar11)(EVar9.unknown,UVar1.unknown);
    local_80 = 0;
    UVar4.unknown = (undefined *)0x1;
    IVar2 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      (IVar2,pNVar5,1,0,&local_80);
    if ((int)IVar2 != 0) {
      IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      UVar6.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar3);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
      SVar17.bridgeObject = (void *)0x80000001004e1140;
      SVar17.str = (char *)0xd000000000000037;
      Foundation::URL::appendingPathComponent(SVar17,true,UVar4);
      (*pcVar11)(lVar12,UVar1.unknown);
      SVar18.bridgeObject = (void *)0xe800000000000000;
      SVar18.str = (char *)0x74736566696e616d;
      Foundation::URL::appendingPathComponent(SVar18,true,UVar4);
      UVar4.unknown = puVar8;
      (*pcVar11)(puVar8,UVar1.unknown);
      pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
      (*pcVar11)(EVar9.unknown,UVar1.unknown);
      local_80 = 0;
      UVar4.unknown = (undefined *)0x1;
      IVar2 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                        (IVar2,pNVar5,1,0,&local_80);
      if ((int)IVar2 != 0) {
        IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
        UVar6.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar2);
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
        SVar19.bridgeObject = (void *)0x80000001004e1140;
        SVar19.str = (char *)0xd000000000000037;
        Foundation::URL::appendingPathComponent(SVar19,true,UVar4);
        (*pcVar11)(lVar12,UVar1.unknown);
        UVar6.unknown = (undefined *)0x1;
        SVar20.bridgeObject = (void *)0xe800000000000000;
        SVar20.str = (char *)0x74736566696e616d;
        Foundation::URL::appendingPathComponent(SVar20,true,UVar4);
        (*pcVar11)(puVar8,UVar1.unknown);
        UVar4.unknown = local_88.unknown;
        SVar21.bridgeObject = (void *)0x80000001004e1780;
        SVar21.str = (char *)0xd000000000000010;
        Foundation::URL::appendingPathComponent(SVar21,UVar6);
        (*pcVar11)(EVar9.unknown,UVar1.unknown);
        encoding.unknown = local_a0.unknown;
        local_80 = 0x6b6f;
        uStack_78 = 0xe200000000000000;
        Encoding::_get_utf8(EVar9);
        FUN_100026df4();
        (extension_Foundation)::Swift::StringProtocol::_write(UVar4,true,encoding);
        (**(code **)(local_98 + 8))(encoding.unknown,puStack_90);
        UVar6.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
        pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar6);
        local_80 = 0;
        IVar2 = NSFileManager::removeItemAtURL_error_((ID)UVar6.unknown,pNVar5,&local_80);
        if ((int)IVar2 == 0) {
          uVar7 = local_80;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease(uVar7);
        }
        (*pcVar11)(UVar4.unknown,UVar1.unknown);
        uVar7 = 1;
        goto LAB_10020e9b8;
      }
    }
  }
  uVar7 = local_80;
  Foundation::__convertNSErrorToError();
  _swift_willThrow(0);
  _swift_errorRelease(uVar7);
  uVar7 = 0;
LAB_10020e9b8:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}

