// rea decompile_all
// name: FUN_100230310
// address: 0x100230310
// body: available
// range: 0x100230310-0x100230eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100230ea4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100230794) */
/* WARNING: Removing unreachable block (ram,0x000100230df4) */

void FUN_100230310(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  URLResourceValues UVar5;
  URL UVar6;
  URL UVar7;
  NSURL *pNVar8;
  NSArray *pNVar9;
  undefined *puVar10;
  undefined *puVar11;
  _SetStorage *this;
  URLResourceValues UVar12;
  Hasher into;
  _StringGuts _Var13;
  _StringGuts _Var14;
  char *pcVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  undefined *puVar17;
  long extraout_x8_01;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar24;
  __int64 _seed;
  ulong uVar25;
  long lVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined *puVar31;
  ulong uVar32;
  String SVar33;
  String SVar34;
  undefined *local_1b0;
  undefined *local_1a8;
  long local_1a0;
  undefined *local_110 [14];
  undefined8 local_a0;
  undefined1 auStack_98 [40];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  puVar4 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar19 = (long)&local_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1a8 = (undefined *)(lVar19 - extraout_x12_00);
  UVar5 = Foundation::URLResourceValues::typeMetadataAccessor();
  lVar16 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar29 = (undefined *)(lVar19 - extraout_x12_00) + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = puVar29 + -extraout_x12_01;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  puVar31 = puVar17 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = (long)puVar31 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar24 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  puVar4 = &DAT_10054d058;
  FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
  puVar10 = puVar4;
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  uVar28 = *(undefined8 *)PTR__NSURLIsDirectoryKey_1005215a8;
  *(undefined8 *)(puVar10 + 0x20) = uVar28;
  FUN_100008040(0);
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar10);
  local_110[0] = (undefined *)0x0;
  puVar10 = (undefined *)
            NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                      ((ID)UVar7.unknown,pNVar8,pNVar9,0,local_110);
  if (puVar10 == (undefined *)0x0) {
    UVar7.unknown = local_110[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease();
    puVar10 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    UVar7.unknown = (undefined *)0x0;
  }
  uVar25 = *(ulong *)(puVar10 + 0x10);
  if (uVar25 != 0) {
    uVar30 = 0;
    do {
      if (*(ulong *)(puVar10 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x100230e8c);
        (*pcVar27)();
      }
      (**(code **)(lVar26 + 0x10))
                (lVar24,puVar10 + *(long *)(lVar26 + 0x48) * uVar30 +
                                  ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff)),
                 UVar6.unknown);
      pcVar27 = *(code **)(lVar26 + 0x20);
      UVar7.unknown = puVar31;
      (*pcVar27)(puVar31,lVar24,UVar6.unknown);
      SVar33 = Foundation::URL::get_pathExtension(UVar7);
      _Var13.unknown = SVar33.bridgeObject;
      if ((SVar33.str == (undefined *)0x707061) &&
         (_Var13.unknown == (undefined *)0xe300000000000000)) {
        _swift_bridgeObjectRelease(puVar10);
        puVar10 = (undefined *)0xe300000000000000;
LAB_100230900:
        _swift_bridgeObjectRelease(puVar10);
        (*pcVar27)(lVar20,puVar31,UVar6.unknown);
        (*pcVar27)(lVar20 - extraout_x12_04,lVar20,UVar6.unknown);
        (*pcVar27)(param_1,lVar20 - extraout_x12_04,UVar6.unknown);
        pcVar27 = *(code **)(lVar26 + 0x38);
        uVar28 = 0;
        goto LAB_10023095c;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar33.str,_Var13,(_StringComparisonResult)0x61);
      _swift_bridgeObjectRelease(_Var13.unknown);
      if (bVar3) goto LAB_100230900;
      uVar30 = uVar30 + 1;
      UVar7.unknown = puVar31;
      (**(code **)(lVar26 + 8))(puVar31,UVar6.unknown);
    } while (uVar25 != uVar30);
  }
  if (param_3 < 1) {
    _swift_bridgeObjectRelease(puVar10);
    pcVar27 = *(code **)(lVar26 + 0x38);
    uVar28 = 1;
LAB_10023095c:
    (*pcVar27)(param_1,uVar28,1,UVar6.unknown);
  }
  else {
    uVar30 = *(ulong *)(puVar10 + 0x10);
    puVar31 = puVar10;
    uVar25 = uVar30;
    if (uVar30 == 0) {
      uVar32 = 0;
LAB_100230988:
      if (uVar32 != uVar30) {
        if (uVar30 <= uVar32) {
LAB_100230e84:
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x100230e88);
          (*pcVar27)();
        }
        bVar1 = *(byte *)(lVar26 + 0x50);
        lVar20 = *(long *)(lVar26 + 0x48);
        local_1b0 = puVar10;
LAB_100230afc:
        UVar7.unknown = local_1a8;
        FUN_100230310(local_1a8,
                      puVar10 + lVar20 * uVar32 +
                                ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),
                      param_3 + -1);
        puVar4 = UVar7.unknown;
        (**(code **)(lVar26 + 0x30))(UVar7.unknown,1,UVar6.unknown);
        FUN_10002a29c(UVar7.unknown,&DAT_100553d90,&DAT_10041bf10);
        uVar25 = uVar32;
        if ((int)puVar4 == 1) {
          do {
            uVar32 = uVar32 + 1;
            uVar25 = uVar30;
            if (uVar32 == uVar30) break;
            if (uVar30 <= uVar32) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x100230e98);
              (*pcVar27)();
            }
            SVar33 = Foundation::URL::get_lastPathComponent(UVar7);
            UVar7.unknown = SVar33.bridgeObject;
            if (SVar33.str == (undefined *)0x58534f43414d5f5f &&
                UVar7.unknown == (undefined *)0xe800000000000000) {
              _swift_bridgeObjectRelease();
            }
            else {
              bVar3 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar33.str,(_StringGuts)UVar7.unknown,
                                 (_StringComparisonResult)0x5f);
              _swift_bridgeObjectRelease();
              if (!bVar3) {
                this = (_SetStorage *)&DAT_1005569d0;
                local_a0 = uVar28;
                FUN_100002f94(&DAT_1005569d0,&DAT_10042aad0);
                UVar12.unknown = (undefined *)0x1;
                Swift::_SetStorage::_allocate(this,1);
                uVar2 = local_a0;
                _seed = *(__int64 *)(UVar12.unknown + 0x28);
                SVar33 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                _Var13.unknown = SVar33.str;
                Swift::Hasher::init(_seed);
                into.unknown = (undefined *)local_110;
                Swift::String::hash(into,SVar33);
                uVar25 = Swift::Hasher::_finalize(into);
                _swift_bridgeObjectRelease(SVar33.bridgeObject);
                uVar23 = -1L << ((ulong)(byte)UVar12.unknown[0x20] & 0x3f);
                uVar25 = uVar25 & (uVar23 ^ 0xffffffffffffffff);
                uVar18 = uVar25 >> 6;
                uVar21 = *(ulong *)(UVar12.unknown + uVar18 * 8 + 0x38);
                uVar22 = 1L << (uVar25 & 0x3f);
                if ((uVar22 & uVar21) != 0) {
                  do {
                    SVar33 = (extension_Foundation)::Swift::String::
                             __unconditionallyBridgeFromObjectiveC();
                    _Var14.unknown = SVar33.bridgeObject;
                    SVar34 = (extension_Foundation)::Swift::String::
                             __unconditionallyBridgeFromObjectiveC();
                    pcVar15 = SVar34.bridgeObject;
                    if (SVar33 == SVar34) {
                      _Var13.unknown = pcVar15;
                      _swift_bridgeObjectRelease(_Var14.unknown);
                      _swift_bridgeObjectRelease(pcVar15);
                      goto LAB_100230dc8;
                    }
                    _Var13.unknown = _Var14.unknown;
                    bVar3 = Swift::_stringCompareWithSmolCheck
                                      ((_StringGuts)SVar33.str,_Var14,
                                       (_StringComparisonResult)(__int8)SVar34.str);
                    _swift_bridgeObjectRelease(_Var14.unknown);
                    _swift_bridgeObjectRelease(pcVar15);
                    if (bVar3) goto LAB_100230dc8;
                    uVar25 = uVar25 + 1 & ~uVar23;
                    uVar18 = uVar25 >> 6;
                    uVar21 = *(ulong *)(UVar12.unknown + uVar18 * 8 + 0x38);
                    uVar22 = 1L << (uVar25 & 0x3f);
                  } while ((uVar22 & uVar21) != 0);
                }
                *(ulong *)(UVar12.unknown + uVar18 * 8 + 0x38) = uVar22 | uVar21;
                *(undefined8 *)(*(long *)(UVar12.unknown + 0x30) + uVar25 * 8) = uVar2;
                if (SCARRY8(*(long *)(UVar12.unknown + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar27 = (code *)SoftwareBreakpoint(1,0x100230ea0);
                  (*pcVar27)();
                }
                *(long *)(UVar12.unknown + 0x10) = *(long *)(UVar12.unknown + 0x10) + 1;
LAB_100230dc8:
                puVar31 = local_1b0;
                FUN_1002326b4(&local_a0);
                Foundation::URL::_resourceValues
                          ((Set<NSURLResourceKey>)UVar12.unknown,(URL)_Var13.unknown);
                _swift_release();
                Foundation::URLResourceValues::_get_isDirectory(UVar12);
                UVar7.unknown = puVar29;
                (**(code **)(lVar16 + 8))(puVar29,UVar5.unknown);
                if (((ulong)UVar12.unknown & 1) != 0) goto code_r0x000100230e68;
              }
            }
            if (SCARRY8(uVar32,1)) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x100230e9c);
              (*pcVar27)();
            }
          } while( true );
        }
      }
    }
    else {
      uVar32 = 0;
      do {
        SVar33 = Foundation::URL::get_lastPathComponent(UVar7);
        UVar7.unknown = SVar33.bridgeObject;
        if ((SVar33.str == (undefined *)0x58534f43414d5f5f) &&
           (UVar7.unknown == (undefined *)0xe800000000000000)) {
          _swift_bridgeObjectRelease();
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar33.str,(_StringGuts)UVar7.unknown,
                             (_StringComparisonResult)0x5f);
          _swift_bridgeObjectRelease();
          if (!bVar3) {
            UVar7.unknown = auStack_98;
            puVar11 = puVar4;
            _swift_initStackObject();
            *(undefined8 *)(puVar11 + 0x18) = 2;
            *(undefined8 *)(puVar11 + 0x10) = 1;
            *(undefined8 *)(puVar11 + 0x20) = uVar28;
            UVar12.unknown = puVar11;
            FUN_100266760();
            _swift_setDeallocating(puVar11);
            FUN_1002326b4(puVar11 + 0x20);
            Foundation::URL::_resourceValues((Set<NSURLResourceKey>)UVar12.unknown,UVar7);
            _swift_bridgeObjectRelease();
            Foundation::URLResourceValues::_get_isDirectory(UVar12);
            UVar7.unknown = puVar17;
            (**(code **)(lVar16 + 8))(puVar17,UVar5.unknown);
            if (((ulong)UVar12.unknown & 1) != 0) goto LAB_100230988;
          }
        }
        uVar32 = uVar32 + 1;
      } while (uVar30 != uVar32);
    }
    if (uVar25 == *(ulong *)(puVar31 + 0x10)) {
      pcVar27 = *(code **)(lVar26 + 0x38);
      uVar28 = 1;
    }
    else {
      if ((long)*(ulong *)(puVar31 + 0x10) <= (long)uVar25) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x100230ea4);
        (*pcVar27)();
      }
      FUN_100230310(lVar19,puVar31 + *(long *)(lVar26 + 0x48) * uVar25 +
                                     ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff)),
                    param_3 + -1);
      lVar16 = local_1a0;
      FUN_1000087e4(lVar19,local_1a0,&DAT_100553d90,&DAT_10041bf10);
      lVar20 = lVar16;
      (**(code **)(lVar26 + 0x30))(lVar16,1,UVar6.unknown);
      if ((int)lVar20 == 1) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x100230eac);
        (*pcVar27)();
      }
      (**(code **)(lVar26 + 0x20))(param_1,lVar16,UVar6.unknown);
      FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
      pcVar27 = *(code **)(lVar26 + 0x38);
      uVar28 = 0;
    }
    (*pcVar27)(param_1,uVar28,1,UVar6.unknown);
    _swift_bridgeObjectRelease(puVar31);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x000100230e68:
  if ((long)uVar30 <= (long)uVar32) goto LAB_100230e84;
  goto LAB_100230afc;
}

