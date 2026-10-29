// rea decompile_all
// name: FUN_1001d682c
// address: 0x1001d682c
// body: available
// range: 0x1001d682c-0x1001d6f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001d6b48 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001d682c(undefined8 param_1,long param_2,char *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  NSString *pNVar10;
  NSComparisonResult NVar11;
  ulong uVar12;
  ulong extraout_x1;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *UNRECOVERED_JUMPTABLE;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar17;
  long unaff_x20;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  String SVar25;
  long local_e0 [3];
  undefined *puStack_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  char *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  void *pvStack_68;
  
  puVar5 = &DAT_10054a9d0;
  local_a8 = param_1;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar15 = (long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0[1] = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12;
  local_e0[0] = lVar15;
  local_b0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_b8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar15;
  puStack_c8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_e0[2] = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0[2] + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1001d537c();
  local_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar23 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1001d59ac();
  local_88 = *(long *)(lVar6 + -8);
  local_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  lVar17 = lVar23 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar24 = lVar18 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = param_2;
  local_a0 = param_3;
  FUN_1001d6f78(param_2,param_3);
  lVar8 = 0;
  FUN_10025ee04();
  lVar6 = local_88;
  uVar14 = local_a8;
  uVar22 = *(ulong *)(lVar7 + 0x10);
  if (*(char *)(unaff_x20 + *(int *)(lVar8 + 0x1c)) == '\x03') {
    if (uVar22 != 0) {
      uVar19 = 0;
      local_a0 = "d to decode saved playlists";
      do {
        if (*(ulong *)(lVar7 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f60);
          (*UNRECOVERED_JUMPTABLE)();
        }
        FUN_100029504(lVar7 + ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(local_88 + 0x48) * uVar19,uVar24 - extraout_x12_02,FUN_1001d59ac);
        FUN_100007e64(uVar24 - extraout_x12_02,uVar24,FUN_1001d59ac);
        IVar9 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
        pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar9 = NSUserDefaults::stringForKey_(IVar9,pNVar10);
        if (IVar9 == 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = extraout_x1;
          SVar25 = (String)(auVar4 << 0x40);
          pvVar21 = (void *)0xe000000000000000;
        }
        else {
          SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar21 = SVar25.bridgeObject;
        }
        local_70 = SVar25.str;
        uVar14 = 0;
        local_80 = 0x6b726144;
        local_78 = 0xe400000000000000;
        pvStack_68 = pvVar21;
        FUN_100026df4(0);
        NVar11 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                           (uVar14,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar14,uVar14);
        _swift_bridgeObjectRelease(pvVar21);
        *(bool *)lVar23 = NVar11.unknown == (undefined *)0x0;
        _swift_storeEnumTagMultiPayload(lVar23,local_98,2);
        uVar12 = uVar24;
        FUN_1001da410(uVar24,lVar23);
        FUN_100029548(lVar23,FUN_1001d537c);
        if ((uVar12 & 1) != 0) {
          _swift_bridgeObjectRelease(lVar7);
          uVar14 = local_a8;
          FUN_100007e64(uVar24,local_a8,FUN_1001d59ac);
          UNRECOVERED_JUMPTABLE = *(code **)(local_88 + 0x38);
          uVar13 = 0;
          goto LAB_1001d6e5c;
        }
        uVar19 = uVar19 + 1;
        FUN_100029548(uVar24,FUN_1001d59ac);
      } while (uVar22 != uVar19);
    }
    _swift_bridgeObjectRelease(lVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(local_88 + 0x38);
    uVar13 = 1;
    uVar14 = local_a8;
LAB_1001d6e5c:
    (*UNRECOVERED_JUMPTABLE)(uVar14,uVar13,1,local_90);
  }
  else {
    if (uVar22 < 2) {
      if (uVar22 == 0) {
        _swift_bridgeObjectRelease(lVar7);
        UNRECOVERED_JUMPTABLE = *(code **)(local_88 + 0x38);
        uVar14 = local_a8;
      }
      else {
        FUN_100029504(lVar7 + ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff)),local_a8,
                      FUN_1001d59ac);
        _swift_bridgeObjectRelease(lVar7);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001001d6efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar14,uVar22 == 0,1,local_90);
      return;
    }
    (**(code **)(local_e0[2] + 0x10))(lVar15,param_2,puStack_c8);
    lVar6 = local_c0;
    (**(code **)(local_b8 + 0x10))(local_c0,local_a0,local_b0);
    FUN_100266538(lVar15,lVar6);
    uVar22 = *(ulong *)(lVar7 + 0x10);
    if (uVar22 != 0) {
      uVar24 = 0;
      bVar3 = *(byte *)(local_88 + 0x50);
      do {
        if (*(ulong *)(lVar7 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f64);
          (*UNRECOVERED_JUMPTABLE)();
        }
        FUN_100029504(lVar7 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff)) +
                      *(long *)(local_88 + 0x48) * uVar24,lVar18,FUN_1001d59ac);
        FUN_100007e64(lVar18,lVar17,FUN_1001d59ac);
        lVar6 = local_e0[0];
        plVar1 = (long *)(lVar17 + *(int *)(local_90 + 0x1c));
        if ((char)plVar1[1] != '\x01') {
          plVar2 = (long *)(lVar17 + *(int *)(local_90 + 0x20));
          if ((char)plVar2[1] != '\x01') {
            lVar23 = *plVar1;
            lVar16 = *plVar2;
            lVar8 = lVar16 - lVar23;
            if (SBORROW8(lVar16,lVar23)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f68);
              (*UNRECOVERED_JUMPTABLE)();
            }
            if (SCARRY8(lVar8,0x5a0)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f6c);
              (*UNRECOVERED_JUMPTABLE)();
            }
            lVar8 = (lVar8 + 0x5a0) % 0x5a0;
            if (0 < lVar8) {
              if (SBORROW8(lVar15,lVar23)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f70);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (SCARRY8(lVar15 - lVar23,0x5a0)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f74);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (((lVar15 - lVar23) + 0x5a0) % 0x5a0 < lVar8) {
                FUN_100007e64(lVar17,local_e0[0],FUN_1001d59ac);
                uVar14 = 0;
                goto LAB_1001d6d8c;
              }
            }
          }
        }
        uVar24 = uVar24 + 1;
        FUN_100029548(lVar17,FUN_1001d59ac);
      } while (uVar22 != uVar24);
    }
    uVar14 = 1;
    lVar6 = local_e0[0];
LAB_1001d6d8c:
    lVar17 = local_88;
    lVar15 = local_90;
    UNRECOVERED_JUMPTABLE = *(code **)(local_88 + 0x38);
    (*UNRECOVERED_JUMPTABLE)(lVar6,uVar14,1,local_90);
    lVar8 = local_e0[1];
    FUN_100007e1c(lVar6,local_e0[1],&DAT_10054a9d0,&DAT_10041bc60);
    pcVar20 = *(code **)(lVar17 + 0x30);
    lVar6 = lVar8;
    (*pcVar20)(lVar8,1,lVar15);
    uVar14 = local_a8;
    if ((int)lVar6 == 1) {
      if (uVar22 == 0) {
        uVar13 = 1;
      }
      else {
        if (*(ulong *)(lVar7 + 0x10) < uVar22) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1001d6f78);
          (*UNRECOVERED_JUMPTABLE)();
        }
        FUN_100029504(lVar7 + ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(local_88 + 0x48) * (uVar22 - 1),local_a8,FUN_1001d59ac);
        uVar13 = 0;
      }
      _swift_bridgeObjectRelease(lVar7);
      lVar6 = local_90;
      (*UNRECOVERED_JUMPTABLE)(uVar14,uVar13,1,local_90);
      lVar7 = lVar8;
      (*pcVar20)(lVar8,1,lVar6);
      if ((int)lVar7 != 1) {
        FUN_10002a29c(lVar8,&DAT_10054a9d0,&DAT_10041bc60);
      }
    }
    else {
      _swift_bridgeObjectRelease(lVar7);
      uVar14 = local_a8;
      FUN_100007e64(lVar8,local_a8,FUN_1001d59ac);
      (*UNRECOVERED_JUMPTABLE)(uVar14,0,1,lVar15);
    }
  }
  return;
}

