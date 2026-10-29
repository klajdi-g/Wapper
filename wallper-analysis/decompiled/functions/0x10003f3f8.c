// rea decompile_all
// name: FUN_10003f3f8
// address: 0x10003f3f8
// body: available
// range: 0x10003f3f8-0x10003fac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003fac0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010003f894) */

void FUN_10003f3f8(void)

{
  bool bVar1;
  Date DVar2;
  URL UVar3;
  undefined *puVar4;
  URL UVar5;
  NSURL *pNVar6;
  NSArray *pNVar7;
  ID IVar8;
  Date DVar9;
  URLResourceValues forKeys;
  Date DVar10;
  Date DVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  ID local_150;
  long local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_108;
  Date local_100;
  code *local_f8;
  Date local_f0;
  long local_e8;
  undefined *local_e0;
  code *local_d8;
  long local_d0;
  code *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a0;
  undefined1 auStack_98 [40];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_140 = (undefined *)Foundation::URLResourceValues::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar13 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_10054b950;
  local_e8 = lVar13;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  puVar12 = (undefined *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_b0 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)puVar12 - extraout_x12;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = (undefined *)(lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_100.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar12 - extraout_x12_00;
  local_d0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined *)(lVar13 - extraout_x12_01);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar12 = puVar18 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_e0 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = (undefined *)NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar5.unknown = puVar4;
  FUN_10003b620(lVar13 - extraout_x12_03);
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  local_c8 = *(code **)(lVar16 + 8);
  local_c0 = lVar16;
  local_b8 = UVar3.unknown;
  (*local_c8)(lVar13 - extraout_x12_03,UVar3.unknown);
  puVar12 = &DAT_10054d058;
  FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
  local_108 = puVar12;
  _swift_allocObject();
  uStack_118 = 2;
  local_120 = 1;
  *(undefined8 *)(puVar12 + 0x18) = 2;
  *(undefined8 *)(puVar12 + 0x10) = 1;
  uVar19 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100521598;
  *(undefined8 *)(puVar12 + 0x20) = uVar19;
  FUN_100008040(0);
  local_128 = uVar19;
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar12);
  local_a0 = 0;
  IVar8 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    ((ID)puVar4,pNVar6,pNVar7,0,&local_a0);
  puVar12 = local_b8;
  if (IVar8 == 0) {
    uVar19 = local_a0;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar19);
  }
  else {
    local_138 = puVar4;
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    lVar16 = local_d0;
    DVar9 = Foundation::Date::init();
    local_f0.unknown = puVar18;
    Foundation::Date::addingTimeInterval(-300.0,DVar9);
    local_f8 = *(code **)(lVar14 + 8);
    (*local_f8)(lVar16,DVar2.unknown);
    lVar16 = *(long *)(IVar8 + 0x10);
    local_150 = IVar8;
    if (lVar16 != 0) {
      lVar17 = IVar8 + ((ulong)*(byte *)(local_c0 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(local_c0 + 0x50) ^ 0xffffffffffffffff));
      local_d0 = *(long *)(local_c0 + 0x48);
      local_d8 = *(code **)(local_c0 + 0x10);
      puVar4 = local_e0;
      local_130 = lVar13;
      do {
        (*local_d8)(lVar13,lVar17,puVar12);
        UVar5.unknown = puVar4;
        (**(code **)(local_c0 + 0x20))(puVar4,lVar13,puVar12);
        SVar21 = Foundation::URL::get_lastPathComponent(UVar5);
        SVar22.bridgeObject = (void *)0xe700000000000000;
        SVar22.str = (char *)0x2d7265646e6572;
        bVar1 = Swift::String::hasPrefix(SVar22,SVar21);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        if (bVar1) {
          puVar12 = local_108;
          _swift_initStackObject(local_108,auStack_98);
          *(undefined8 *)(puVar12 + 0x18) = uStack_118;
          *(undefined8 *)(puVar12 + 0x10) = local_120;
          *(undefined8 *)(puVar12 + 0x20) = local_128;
          forKeys.unknown = puVar12;
          FUN_100266760();
          _swift_setDeallocating(puVar12);
          pcVar15 = FUN_100008040;
          FUN_100029548(puVar12 + 0x20);
          Foundation::URL::_resourceValues((Set<NSURLResourceKey>)forKeys.unknown,(URL)pcVar15);
          _swift_bridgeObjectRelease();
          lVar13 = local_e8;
          Foundation::URLResourceValues::_get_contentModificationDate(forKeys);
          (**(code **)(local_148 + 8))(lVar13,local_140);
          DVar10.unknown = local_b0;
          FUN_1000087e4(lVar20,local_b0,&DAT_10054b950,&DAT_10041d870);
          pcVar15 = *(code **)(lVar14 + 0x30);
          (*pcVar15)(DVar10.unknown,1,DVar2.unknown);
          DVar11.unknown = local_100.unknown;
          lVar13 = local_130;
          DVar9 = DVar2;
          if ((int)DVar10.unknown == 1) {
            Foundation::Date::get_distantPast(DVar10);
            puVar12 = local_b0;
            (*pcVar15)(local_b0,1);
            if ((int)puVar12 != 1) {
              DVar9.unknown = &DAT_10041d870;
              FUN_10002a29c(local_b0,&DAT_10054b950);
            }
          }
          else {
            (**(code **)(lVar14 + 0x20))(local_100.unknown,local_b0);
          }
          bVar1 = Foundation::Date::<_infix(DVar11,local_f0,DVar9);
          (*local_f8)(DVar11.unknown,DVar2.unknown);
          if (bVar1) {
            pNVar6 = Foundation::URL::_bridgeToObjectiveC((URL)DVar11.unknown);
            local_a0 = 0;
            IVar8 = objc_stub::removeItemAtURL_error_((ID)local_138,pNVar6,&local_a0);
            if ((int)IVar8 == 0) {
              uVar19 = local_a0;
              Foundation::__convertNSErrorToError();
              _swift_willThrow(0);
              _swift_errorRelease(uVar19);
            }
          }
          puVar4 = local_e0;
          FUN_10002a29c(lVar20,&DAT_10054b950,&DAT_10041d870);
        }
        puVar12 = local_b8;
        (*local_c8)(puVar4,local_b8);
        lVar17 = lVar17 + local_d0;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    _swift_bridgeObjectRelease(local_150);
    (*local_f8)(local_f0.unknown,DVar2.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

