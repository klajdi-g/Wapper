// rea decompile_all
// name: FUN_100152af4
// address: 0x100152af4
// body: available
// range: 0x100152af4-0x1001531e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001531e0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100152af4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  NSString *pNVar3;
  NSDictionary *pNVar4;
  long lVar5;
  undefined *puVar6;
  Data *pDVar7;
  Data DVar8;
  long lVar9;
  undefined *puVar10;
  NSData *pNVar11;
  ID IVar12;
  Data DVar13;
  ulong uVar14;
  ulong uVar15;
  Data DVar16;
  undefined8 uVar17;
  undefined *local_a0 [2];
  Data local_90;
  undefined8 uStack_88;
  long local_80 [5];
  long local_58;
  
  uVar15 = 0;
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  uVar14 = param_2;
  FUN_1001529e8();
  puVar2 = &_OBJC_CLASS___NSDictionary;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar14);
  pNVar4 = (NSDictionary *)objc_stub::initWithContentsOfFile_((ID)puVar2,pNVar3);
  puVar2 = PTR___type_metadata_for_Any_100524178;
  if (pNVar4 != (NSDictionary *)0x0) {
    local_80[0] = 0;
    (extension_Foundation)::Swift::Dictionary::__conditionallyBridgeFromObjectiveC(pNVar4);
    lVar9 = local_80[0];
    if (local_80[0] != 0) {
      if (*(long *)(local_80[0] + 0x10) == 0) {
LAB_100152cac:
        local_80[1] = 0;
        local_80[0] = 0;
        local_80[3] = 0;
        local_80[2] = 0;
        _swift_bridgeObjectRelease(lVar9);
      }
      else {
        _swift_bridgeObjectRetain(local_80[0]);
        uVar14 = 0;
        lVar5 = -0x2fffffffffffffec;
        FUN_10000464c(0xd000000000000014);
        if ((uVar14 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar9);
          goto LAB_100152cac;
        }
        FUN_1000280d4(*(long *)(lVar9 + 0x38) + lVar5 * 0x20,local_80);
        _swift_bridgeObjectRelease_n(lVar9,2);
        if (local_80[3] != 0) {
          puVar6 = &DAT_10054f980;
          FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
          pDVar7 = &local_90;
          _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,puVar6,6);
          DVar16.unknown = local_90.unknown;
          if (((ulong)pDVar7 & 1) == 0) goto LAB_100152cd4;
          if (*(long *)(local_90.unknown + 0x10) == 0) {
LAB_100152d20:
            if (*(long *)(DVar16.unknown + 0x10) == 0) {
LAB_100152d6c:
              local_80[1] = 0;
              local_80[0] = 0;
              local_80[3] = 0;
              local_80[2] = 0;
            }
            else {
              _swift_bridgeObjectRetain(DVar16.unknown);
              lVar9 = 0x64656b6e694c;
              uVar15 = 0;
              FUN_10000464c(0x64656b6e694c);
              if ((uVar15 & 1) == 0) {
                _swift_bridgeObjectRelease(DVar16.unknown);
                goto LAB_100152d6c;
              }
              FUN_1000280d4(*(long *)(DVar16.unknown + 0x38) + lVar9 * 0x20,local_80);
              _swift_bridgeObjectRelease(DVar16.unknown);
            }
            _swift_bridgeObjectRelease(DVar16.unknown);
            if (local_80[3] != 0) {
              pDVar7 = &local_90;
              _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,puVar6,6);
              DVar16.unknown = local_90.unknown;
              if ((int)pDVar7 == 0) {
                DVar16.unknown = (undefined *)0x0;
              }
              goto LAB_100152da8;
            }
            FUN_10002a29c(local_80,&DAT_10054d428,&DAT_100420300);
          }
          else {
            _swift_bridgeObjectRetain(local_90.unknown);
            FUN_10000464c(param_1);
            if ((param_2 & 1) == 0) {
              _swift_bridgeObjectRelease(DVar16.unknown);
              goto LAB_100152d20;
            }
            FUN_1000280d4(*(long *)(DVar16.unknown + 0x38) + param_1 * 0x20,local_80);
            _swift_bridgeObjectRelease(DVar16.unknown);
            _swift_dynamicCast(local_a0,local_80,puVar2 + 8,puVar6,6);
            if ((uVar15 & 1) == 0) goto LAB_100152d20;
            _swift_bridgeObjectRelease(DVar16.unknown);
            DVar16.unknown = local_a0[0];
LAB_100152da8:
            if (DVar16.unknown != (undefined *)0x0) {
              if (*(long *)(DVar16.unknown + 0x10) == 0) {
LAB_100152e24:
                local_80[1] = 0;
                local_80[0] = 0;
                local_80[3] = 0;
                local_80[2] = 0;
              }
              else {
                _swift_bridgeObjectRetain(DVar16.unknown);
                lVar9 = 0x746e65746e6f43;
                uVar15 = 0;
                FUN_10000464c(0x746e65746e6f43);
                if ((uVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(DVar16.unknown);
                  goto LAB_100152e24;
                }
                FUN_1000280d4(*(long *)(DVar16.unknown + 0x38) + lVar9 * 0x20,local_80);
                _swift_bridgeObjectRelease(DVar16.unknown);
              }
              _swift_bridgeObjectRelease(DVar16.unknown);
              if (local_80[3] == 0) goto LAB_100152cbc;
              pDVar7 = &local_90;
              _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,puVar6,6);
              DVar16.unknown = local_90.unknown;
              if (((ulong)pDVar7 & 1) == 0) goto LAB_100152cd4;
              if (*(long *)(local_90.unknown + 0x10) == 0) {
LAB_100152eac:
                local_80[1] = 0;
                local_80[0] = 0;
                local_80[3] = 0;
                local_80[2] = 0;
              }
              else {
                _swift_bridgeObjectRetain(local_90.unknown);
                lVar9 = 0x736563696f6843;
                uVar15 = 0;
                FUN_10000464c(0x736563696f6843);
                if ((uVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(DVar16.unknown);
                  goto LAB_100152eac;
                }
                FUN_1000280d4(*(long *)(DVar16.unknown + 0x38) + lVar9 * 0x20,local_80);
                _swift_bridgeObjectRelease(DVar16.unknown);
              }
              _swift_bridgeObjectRelease(DVar16.unknown);
              if (local_80[3] == 0) goto LAB_100152cbc;
              puVar10 = &DAT_10054f988;
              FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
              pDVar7 = &local_90;
              _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,puVar10,6);
              DVar16.unknown = local_90.unknown;
              if (((ulong)pDVar7 & 1) != 0) {
                if (*(long *)(local_90.unknown + 0x10) != 0) {
                  lVar9 = *(long *)(local_90.unknown + 0x20);
                  _swift_bridgeObjectRetain(lVar9);
                  _swift_bridgeObjectRelease(DVar16.unknown);
                  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_100152f9c:
                    uVar17 = 0;
                    DVar16.unknown = (undefined *)0x0;
                  }
                  else {
                    _swift_bridgeObjectRetain(lVar9);
                    lVar5 = 0x72656469766f7250;
                    uVar15 = 0;
                    FUN_10000464c(0x72656469766f7250);
                    if ((uVar15 & 1) == 0) {
                      _swift_bridgeObjectRelease(lVar9);
                      goto LAB_100152f9c;
                    }
                    FUN_1000280d4(*(long *)(lVar9 + 0x38) + lVar5 * 0x20,local_80);
                    _swift_bridgeObjectRelease(lVar9);
                    pDVar7 = &local_90;
                    _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,
                                       PTR___type_metadata_for_Swift_String_100523a98,6);
                    uVar17 = uStack_88;
                    DVar16.unknown = local_90.unknown;
                    if ((int)pDVar7 == 0) {
                      DVar16.unknown = (undefined *)0x0;
                      uVar17 = 0;
                    }
                  }
                  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_100153000:
                    local_80[1] = 0;
                    local_80[0] = 0;
                    local_80[3] = 0;
                    local_80[2] = 0;
                  }
                  else {
                    _swift_bridgeObjectRetain(lVar9);
                    lVar5 = 0x72756769666e6f43;
                    uVar15 = 0xed00006e6f697461;
                    FUN_10000464c(0x72756769666e6f43);
                    if ((uVar15 & 1) == 0) {
                      _swift_bridgeObjectRelease(lVar9);
                      goto LAB_100153000;
                    }
                    FUN_1000280d4(*(long *)(lVar9 + 0x38) + lVar5 * 0x20,local_80);
                    _swift_bridgeObjectRelease(lVar9);
                  }
                  _swift_bridgeObjectRelease(lVar9);
                  if (local_80[3] == 0) {
LAB_1001531b4:
                    FUN_10002a29c(local_80,&DAT_10054d428,&DAT_100420300);
                  }
                  else {
                    pDVar7 = &local_90;
                    _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,
                                       PTR___type_metadata_for_Foundation_Data_100520ae0,6);
                    uVar1 = uStack_88;
                    DVar8.unknown = local_90.unknown;
                    if (((ulong)pDVar7 & 1) != 0) {
                      pNVar11 = Foundation::Data::_bridgeToObjectiveC(local_90);
                      local_90.unknown = (undefined *)0x0;
                      IVar12 = NSPropertyListSerialization::
                               propertyListWithData_options_format_error_
                                         ((ID)&_OBJC_CLASS___NSPropertyListSerialization,pNVar11,0,0
                                          ,&local_90);
                      if (IVar12 == 0) {
                        DVar13.unknown = local_90.unknown;
                        Foundation::__convertNSErrorToError();
                        _swift_willThrow(0);
                        FUN_100093624(DVar8.unknown,uVar1);
                        _swift_errorRelease(DVar13.unknown);
                      }
                      else {
                        Swift::__bridgeAnyObjectToAny();
                        _swift_unknownObjectRelease(IVar12);
                        pDVar7 = &local_90;
                        _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,puVar6,6);
                        DVar13.unknown = local_90.unknown;
                        if (((ulong)pDVar7 & 1) != 0) {
                          if (*(long *)(local_90.unknown + 0x10) == 0) {
LAB_100153160:
                            local_80[1] = 0;
                            local_80[0] = 0;
                            local_80[3] = 0;
                            local_80[2] = 0;
                          }
                          else {
                            _swift_bridgeObjectRetain(local_90.unknown);
                            lVar9 = 0x44497465737361;
                            uVar15 = 0;
                            FUN_10000464c(0x44497465737361);
                            if ((uVar15 & 1) == 0) {
                              _swift_bridgeObjectRelease(DVar13.unknown);
                              goto LAB_100153160;
                            }
                            FUN_1000280d4(*(long *)(DVar13.unknown + 0x38) + lVar9 * 0x20,local_80);
                            _swift_bridgeObjectRelease(DVar13.unknown);
                          }
                          FUN_100093624(DVar8.unknown,uVar1);
                          _swift_bridgeObjectRelease(DVar13.unknown);
                          if (local_80[3] != 0) {
                            pDVar7 = &local_90;
                            _swift_dynamicCast(pDVar7,local_80,puVar2 + 8,
                                               PTR___type_metadata_for_Swift_String_100523a98,6);
                            DVar8.unknown = local_90.unknown;
                            if ((int)pDVar7 == 0) {
                              DVar8.unknown = (undefined *)0x0;
                              uStack_88 = 0;
                            }
                            goto LAB_100152ce4;
                          }
                          goto LAB_1001531b4;
                        }
                        FUN_100093624(DVar8.unknown,uVar1);
                      }
                    }
                  }
                  uStack_88 = 0;
                  DVar8.unknown = (undefined *)0x0;
                  goto LAB_100152ce4;
                }
                _swift_bridgeObjectRelease(local_90.unknown);
              }
              goto LAB_100152cd4;
            }
          }
          local_80[1] = 0;
          local_80[0] = 0;
          local_80[3] = 0;
          local_80[2] = 0;
        }
      }
LAB_100152cbc:
      FUN_10002a29c(local_80,&DAT_10054d428,&DAT_100420300);
    }
  }
LAB_100152cd4:
  uStack_88 = 0;
  DVar16.unknown = (undefined *)0x0;
  uVar17 = 0;
  DVar8.unknown = (undefined *)0x0;
LAB_100152ce4:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(DVar8.unknown,uStack_88,DVar16.unknown,uVar17);
}

