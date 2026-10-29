// rea decompile_all
// name: FUN_1002690dc
// address: 0x1002690dc
// body: available
// range: 0x1002690dc-0x1002695cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002695cc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1002690dc(void)

{
  ulong uVar1;
  String SVar2;
  String SVar3;
  bool bVar4;
  URL UVar5;
  ID IVar6;
  URL UVar7;
  URL UVar8;
  NSURL *pNVar9;
  undefined *puVar10;
  NSArray *pNVar11;
  _StringComparisonResult expecting;
  long extraout_x8;
  long extraout_x12;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  String SVar21;
  String SVar22;
  undefined auStack_a0 [8];
  code *local_98;
  ulong local_90;
  code *local_88;
  undefined *local_80;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  puVar14 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = puVar14 + -extraout_x12;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  if (DAT_100558870 != -1) {
    _swift_once(&DAT_100558870,FUN_100268dac);
  }
  UVar7 = UVar5;
  FUN_100099338(UVar5.unknown,&DAT_100577d80);
  local_88 = *(code **)(lVar18 + 0x10);
  UVar8.unknown = puVar13;
  (*local_88)(puVar13,UVar7.unknown,UVar5.unknown);
  pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar8);
  pcVar19 = *(code **)(lVar18 + 8);
  local_80 = UVar5.unknown;
  (*pcVar19)(puVar13,UVar5.unknown);
  local_70 = (undefined *)0x0;
  IVar6 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar6,pNVar9,1,0,&local_70);
  if ((int)IVar6 == 0) {
    puVar10 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar10);
  }
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  puVar10 = local_80;
  UVar5.unknown = puVar13;
  (*local_88)(puVar13,UVar7.unknown,local_80);
  pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  (*pcVar19)(puVar13,puVar10);
  puVar13 = &DAT_10054d058;
  FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
  _swift_allocObject();
  *(undefined8 *)(puVar13 + 0x18) = 4;
  *(undefined8 *)(puVar13 + 0x10) = 2;
  uVar16 = *(undefined8 *)PTR__NSURLAddedToDirectoryDateKey_100521590;
  *(undefined8 *)(puVar13 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_1005215a0;
  *(undefined8 *)(puVar13 + 0x28) = uVar16;
  FUN_100008040(0);
  pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar13);
  local_70 = (undefined *)0x0;
  puVar13 = (undefined *)
            NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                      (IVar6,pNVar9,pNVar11,4,&local_70);
  if (puVar13 == (undefined *)0x0) {
    puVar13 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar13);
    puVar13 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  local_90 = *(ulong *)(puVar13 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_100524190;
  if (local_90 != 0) {
    uVar20 = 0;
    local_98 = pcVar19;
    do {
      if (*(ulong *)(puVar13 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1002695b4);
        (*pcVar19)();
      }
      uVar12 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
      lVar17 = *(long *)(lVar18 + 0x48);
      UVar5.unknown = puVar14;
      (*local_88)(puVar14,puVar13 + lVar17 * uVar20 + uVar12,puVar10);
      SVar21 = Foundation::URL::get_pathExtension(UVar5);
      SVar22 = Swift::String::lowercased(SVar21);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar21.bridgeObject = DAT_100558bb8.unknown;
      SVar21.str = DAT_100558bb0.unknown;
      if (SVar22 == SVar21) {
LAB_1002694ac:
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        puVar10 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = puVar15;
        if (((ulong)puVar10 & 1) == 0) {
          FUN_1001c5f18(0,*(long *)(puVar15 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5f18(1 < *(ulong *)(local_70 + 0x18),uVar1 + 1,1);
        }
        puVar15 = local_70;
        puVar10 = local_80;
        *(ulong *)(local_70 + 0x10) = uVar1 + 1;
        (**(code **)(lVar18 + 0x20))(local_70 + uVar1 * lVar17 + uVar12,puVar14,local_80);
      }
      else {
        expecting.value = SVar22.str._0_1_;
        bVar4 = Swift::_stringCompareWithSmolCheck(DAT_100558bb0,DAT_100558bb8,expecting);
        if ((((bVar4) ||
             (SVar2.bridgeObject = DAT_100558bc8.unknown, SVar2.str = DAT_100558bc0.unknown,
             SVar22 == SVar2)) ||
            (bVar4 = Swift::_stringCompareWithSmolCheck(DAT_100558bc0,DAT_100558bc8,expecting),
            bVar4)) ||
           ((SVar3.bridgeObject = DAT_100558bd8.unknown, SVar3.str = DAT_100558bd0.unknown,
            SVar22 == SVar3 ||
            (bVar4 = Swift::_stringCompareWithSmolCheck(DAT_100558bd0,DAT_100558bd8,expecting),
            bVar4)))) goto LAB_1002694ac;
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        puVar10 = local_80;
        (*local_98)(puVar14,local_80);
      }
      uVar20 = uVar20 + 1;
    } while (local_90 != uVar20);
  }
  _swift_bridgeObjectRelease(puVar13);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar15;
}

