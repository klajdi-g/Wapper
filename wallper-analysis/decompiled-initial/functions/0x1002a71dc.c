// rea decompile_all
// name: FUN_1002a71dc
// address: 0x1002a71dc
// body: available
// range: 0x1002a71dc-0x1002a75e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a75e4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a71dc(void)

{
  undefined *puVar1;
  Date DVar2;
  URL self;
  NSString *pNVar3;
  ID IVar4;
  ulong uVar5;
  Dictionary<undefined,undefined> DVar6;
  undefined8 uVar7;
  ID *pIVar8;
  Date DVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  Date DVar12;
  Date DVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  ID local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  puVar1 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)local_90 - extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar19 = Foundation::URL::get_path(self);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  local_80 = 0;
  IVar4 = NSFileManager::attributesOfItemAtPath_error_((ID)self.unknown,pNVar3,&local_80);
  if (IVar4 == 0) {
    uVar7 = local_80;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar7);
  }
  else {
    uVar5 = 0;
    FUN_100008090();
    FUN_1000036d0(&DAT_10054a600,FUN_100008090,&TargetProtocolConformanceDescriptor_10041b494);
    puVar1 = PTR___type_metadata_for_Any_100524178;
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar6.unknown + 0x10) != 0) {
      lVar16 = *(long *)PTR__NSFileSize_100521030;
      _swift_bridgeObjectRetain(DVar6.unknown);
      thunk_FUN_1000046e0(lVar16);
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar6.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar6.unknown + 0x38) + lVar16 * 0x20,&local_80);
        _swift_bridgeObjectRelease(DVar6.unknown);
        uVar7 = 0;
        FUN_100028110(0);
        pIVar8 = local_90;
        puVar10 = &local_80;
        _swift_dynamicCast(pIVar8,puVar10,puVar1 + 8,uVar7,6);
        IVar4 = local_90[0];
        if (((ulong)pIVar8 & 1) != 0) {
          if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_1002a7478:
            uStack_78 = 0;
            local_80 = 0;
            local_68 = 0;
            uStack_70 = 0;
          }
          else {
            lVar16 = *(long *)PTR__NSFileModificationDate_100521020;
            _swift_bridgeObjectRetain(DVar6.unknown);
            thunk_FUN_1000046e0(lVar16);
            if (((ulong)puVar10 & 1) == 0) {
              _swift_bridgeObjectRelease(DVar6.unknown);
              goto LAB_1002a7478;
            }
            FUN_1000280d4(*(long *)(DVar6.unknown + 0x38) + lVar16 * 0x20,&local_80);
            _swift_bridgeObjectRelease(DVar6.unknown);
          }
          _swift_bridgeObjectRelease(DVar6.unknown);
          if (local_68 == 0) {
            FUN_10002a29c(&local_80,&DAT_10054d428,&DAT_100420300);
            (**(code **)(lVar17 + 0x38))(lVar15,1,1,DVar2.unknown);
          }
          else {
            lVar16 = lVar15;
            _swift_dynamicCast(lVar15,&local_80,puVar1 + 8,DVar2.unknown,6);
            DVar13 = DVar2;
            (**(code **)(lVar17 + 0x38))(lVar15,(uint)lVar16 ^ 1,1);
            lVar16 = lVar15;
            (**(code **)(lVar17 + 0x30))(lVar15,1,DVar2.unknown);
            if ((int)lVar16 != 1) {
              DVar12 = DVar2;
              (**(code **)(lVar17 + 0x20))(lVar14,lVar15);
              local_80 = 0;
              uStack_78 = 0xe000000000000000;
              local_90[0] = objc_stub::longLongValue(IVar4);
              SVar19 = Swift::CustomStringConvertible::get_description();
              SVar20.bridgeObject = DVar13.unknown;
              SVar20.str = DVar12.unknown;
              Swift::String::append(SVar19,SVar20);
              _swift_bridgeObjectRelease(SVar19.bridgeObject);
              SVar19.bridgeObject = (void *)0xe100000000000000;
              SVar19.str = (char *)0x2d;
              DVar9.unknown = (undefined *)0x2d;
              SVar21.bridgeObject = DVar13.unknown;
              SVar21.str = DVar12.unknown;
              Swift::String::append(SVar19,SVar21);
              dVar18 = Foundation::Date::get_timeIntervalSince1970(DVar9);
              double::_write((undefined *)&local_80,dVar18);
              uVar11 = uStack_78;
              uVar7 = local_80;
              (**(code **)(lVar17 + 8))(lVar14,DVar2.unknown);
              goto LAB_1002a743c;
            }
          }
          FUN_10002a29c(lVar15,&DAT_10054b950,&DAT_10041d870);
          goto LAB_1002a7434;
        }
      }
    }
    _swift_bridgeObjectRelease(DVar6.unknown);
  }
LAB_1002a7434:
  uVar7 = 0;
  uVar11 = 0;
LAB_1002a743c:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar7,uVar11);
  }
  return;
}

