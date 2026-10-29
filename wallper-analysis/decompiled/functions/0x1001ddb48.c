// rea decompile_all
// name: FUN_1001ddb48
// address: 0x1001ddb48
// body: available
// range: 0x1001ddb48-0x1001de17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001de16c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001ddb48(void)

{
  byte bVar1;
  URL UVar2;
  NSURL *pNVar3;
  undefined *puVar4;
  URL UVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  Published *pPVar9;
  void *pvVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long extraout_x8_00;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ID IVar21;
  long unaff_x20;
  code *pcVar22;
  undefined1 *puVar23;
  code *pcVar24;
  long lVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  puVar17 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  puVar23 = &stack0xffffffffffffff00 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = (long)puVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar25 - extraout_x12_00;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar2.unknown + -8);
  UVar5 = UVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined *)((lVar16 - extraout_x12_01) - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar21 = *(ID *)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  local_78 = (undefined *)0x0;
  IVar21 = objc_stub::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                     (IVar21,pNVar3,0,4,&local_78);
  if (IVar21 == 0) {
    puVar17 = local_78;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar17);
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar4 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005684();
    uVar14 = *(ulong *)(IVar21 + 0x10);
    if (uVar14 != 0) {
      uVar20 = 0;
      bVar1 = *(byte *)(lVar13 + 0x50);
      do {
        if (*(ulong *)(IVar21 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1001de164);
          (*pcVar15)();
        }
        lVar18 = *(long *)(lVar13 + 0x48);
        pcVar22 = *(code **)(lVar13 + 0x10);
        (*pcVar22)((long)puVar17 - extraout_x12_03,
                   IVar21 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
                   lVar18 * uVar20,UVar2.unknown);
        pcVar24 = *(code **)(lVar13 + 0x20);
        UVar5.unknown = puVar17;
        (*pcVar24)(puVar17,(long)puVar17 - extraout_x12_03,UVar2.unknown);
        UVar5 = Foundation::URL::deletingPathExtension(UVar5);
        SVar26 = Foundation::URL::get_lastPathComponent(UVar5);
        pvVar10 = SVar26.bridgeObject;
        pcVar15 = *(code **)(lVar13 + 8);
        (*pcVar15)(lVar16 - extraout_x12_01,UVar2.unknown);
        (*pcVar22)(lVar12,puVar17,UVar2.unknown);
        pcVar22 = *(code **)(lVar13 + 0x38);
        (*pcVar22)(lVar12,0,1,UVar2.unknown);
        FUN_1000f8c24(lVar12,lVar25);
        lVar6 = lVar25;
        (**(code **)(lVar13 + 0x30))(lVar25,1,UVar2.unknown);
        if ((int)lVar6 == 1) {
          FUN_10002a29c(lVar25,&DAT_100553d90,&DAT_10041bf10);
          _swift_bridgeObjectRetain(puVar4);
          FUN_10000464c();
          pcVar8 = SVar26.str;
          _swift_bridgeObjectRelease(puVar4);
          if (((ulong)SVar26.bridgeObject & 1) == 0) {
            (*pcVar15)(puVar17,UVar2.unknown);
            _swift_bridgeObjectRelease(pvVar10);
            uVar11 = 1;
          }
          else {
            puVar7 = puVar4;
            _swift_isUniquelyReferenced_nonNull_native();
            local_78 = puVar4;
            if ((int)puVar7 == 0) {
              FUN_1001cb3b4();
            }
            puVar4 = local_78;
            _swift_bridgeObjectRelease
                      (*(undefined8 *)(*(long *)(local_78 + 0x30) + (long)pcVar8 * 0x10 + 8));
            (*pcVar24)(puVar23,*(long *)(puVar4 + 0x38) + (long)pcVar8 * lVar18,UVar2.unknown);
            FUN_1001d2124(pcVar8,puVar4);
            _swift_bridgeObjectRelease(pvVar10);
            (*pcVar15)(puVar17,UVar2.unknown);
            uVar11 = 0;
          }
          (*pcVar22)(puVar23,uVar11,1,UVar2.unknown);
          FUN_10002a29c(puVar23,&DAT_100553d90,&DAT_10041bf10);
        }
        else {
          (*pcVar24)(lVar16,lVar25,UVar2.unknown);
          puVar7 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          SVar27 = SVar26;
          local_78 = puVar4;
          FUN_10000464c();
          pcVar8 = SVar27.str;
          uVar19 = (ulong)~(uint)SVar27.bridgeObject & 1;
          lVar6 = *(long *)(puVar4 + 0x10) + uVar19;
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1001de168);
            (*pcVar15)();
          }
          if (*(long *)(puVar4 + 0x18) < lVar6) {
            FUN_1001ce198(lVar6,puVar7);
            SVar28 = SVar26;
            FUN_10000464c();
            pcVar8 = SVar28.str;
            puVar4 = local_78;
            if (((uint)SVar27.bridgeObject & 1) != ((uint)SVar28.bridgeObject & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x1001de180);
              (*pcVar15)();
            }
          }
          else {
            puVar4 = local_78;
            if (((ulong)puVar7 & 1) == 0) {
              FUN_1001cb3b4();
              puVar4 = local_78;
            }
          }
          local_78 = puVar4;
          if (((ulong)SVar27.bridgeObject & 1) == 0) {
            *(ulong *)(puVar4 + ((ulong)pcVar8 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar4 + ((ulong)pcVar8 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar8 & 0x3f)
            ;
            *(String *)(*(long *)(puVar4 + 0x30) + (long)pcVar8 * 0x10) = SVar26;
            (*pcVar24)(*(long *)(puVar4 + 0x38) + (long)pcVar8 * lVar18,lVar16,UVar2.unknown);
            (*pcVar15)(puVar17,UVar2.unknown);
            if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x1001de16c);
              (*pcVar15)();
            }
            *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
          }
          else {
            (**(code **)(lVar13 + 0x28))
                      (*(long *)(puVar4 + 0x38) + (long)pcVar8 * lVar18,lVar16,UVar2.unknown);
            _swift_bridgeObjectRelease(pvVar10);
            (*pcVar15)(puVar17,UVar2.unknown);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar14 != uVar20);
    }
    _swift_bridgeObjectRelease(IVar21);
    puVar17 = &DAT_10042ae68;
    _swift_getKeyPath(&DAT_10042ae68);
    pPVar9 = (Published *)&DAT_10042ae90;
    _swift_getKeyPath(&DAT_10042ae90);
    local_78 = puVar4;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar9,&local_78,unaff_x20,puVar17,pPVar9);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

