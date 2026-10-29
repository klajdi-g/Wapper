// rea decompile_all
// name: FUN_1003dcb94
// address: 0x1003dcb94
// body: available
// range: 0x1003dcb94-0x1003dd2ab inclusive
// range: 0x1003dd2d8-0x1003dd463 inclusive
// range: 0x1003dd630-0x1003dd813 inclusive
// range: 0x1003dd818-0x1003dd837 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003dcd70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003dcb94(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  NSComparisonResult NVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint *puVar19;
  NSComparisonResult NVar20;
  long unaff_x21;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long local_110;
  long local_108;
  long *local_100;
  long local_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  ulong *local_d8;
  ulong local_d0;
  ulong *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  ulong *local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  long lStack_80;
  ulong local_78;
  long lStack_70;
  undefined *local_58;
  
  lVar7 = 0;
  local_100 = param_1;
  FUN_10040211c();
  local_f0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar25 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_e0 = lVar25 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar15 = (lVar25 - extraout_x12_00) - extraout_x12_01;
  local_a8 = uVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_110 = uVar15 - extraout_x12_02;
  puVar13 = PTR___swiftEmptyArrayStorage_100524190;
switchD_1003dceb4_caseD_1d:
  NVar20.unknown = (undefined *)param_3[1];
  lVar24 = unaff_x21;
  local_58 = puVar13;
switchD_1003dceb4_caseD_f:
  local_e8 = param_3;
  if (0 < (long)NVar20.unknown) {
    puVar16 = (ulong *)0x0;
    local_108 = param_4;
    local_90 = lVar7;
    do {
      lVar17 = local_110;
      puVar19 = (uint *)((long)puVar16 + 1);
      puVar18 = puVar16;
      local_d8 = puVar16;
      if ((long)puVar19 < (long)NVar20.unknown) {
        lVar21 = *param_3;
        local_b8 = *(long *)(local_f0 + 0x48);
        lVar22 = local_b8 * (long)puVar19;
        lVar23 = local_110;
        local_a0 = (ulong *)puVar19;
        FUN_100029504(lVar21 + local_b8 * (long)puVar16,local_110,FUN_10040211c);
        lVar12 = (long)*(int *)(lVar7 + 0x24);
        bVar2 = *(byte *)(lVar21 + lVar22 + lVar12);
        uVar15 = (ulong)bVar2;
        if (bVar2 == 0xe) {
          uVar15 = 0;
          lVar22 = -0x2000000000000000;
        }
        else {
          FUN_100402278();
          lVar12 = (long)*(int *)(lVar7 + 0x24);
          lVar22 = lVar23;
        }
        bVar2 = *(byte *)(lVar17 + lVar12);
        uVar8 = (ulong)bVar2;
        local_f8 = lVar24;
        local_c8 = (ulong *)NVar20.unknown;
        local_78 = uVar15;
        lStack_70 = lVar22;
        if (bVar2 == 0xe) {
          uVar8 = 0;
          lVar23 = -0x2000000000000000;
        }
        else {
          FUN_100402278();
        }
        local_88 = uVar8;
        lStack_80 = lVar23;
        FUN_100026df4();
        NVar20.unknown = (undefined *)&local_78;
        local_d0 = uVar8;
        NVar9 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (uVar8,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
        local_c0 = NVar9.unknown;
        _swift_bridgeObjectRelease(lVar22);
        _swift_bridgeObjectRelease(lVar23);
        FUN_100029548(lVar17,FUN_10040211c);
        puVar16 = (ulong *)((long)local_d8 + 2);
        lVar17 = local_b8 * (long)puVar16;
        param_3 = (long *)(lVar21 + lVar17);
        lVar21 = lVar21 + local_b8 * (long)local_a0;
        lVar24 = 0;
        lVar22 = local_b8 * (long)local_a0;
        do {
          unaff_x21 = lVar22;
          lVar23 = lVar24;
          uVar6 = puVar16 == local_c8;
          lVar12 = lVar17;
          local_a0 = puVar16;
          if ((long)local_c8 <= (long)puVar16) break;
          local_b0 = lVar17;
          FUN_100029504(lVar21,local_a8,FUN_10040211c);
          puVar13 = (undefined *)(long)*(int *)(lVar7 + 0x24);
          param_4 = -0x1a00000000000000;
          uVar8 = 0x736569766f4d;
          puVar19 = &switchD_1003dceb4::switchdataD_1003dd838;
          uVar15 = uVar8;
          lVar24 = unaff_x21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((long)param_3 + (long)puVar13)) {
          case 0:
          case 0x1e:
          case 0x35:
            break;
          case 1:
          case 0x1f:
            param_4 = -0x1800000000000000;
            uVar8 = 0x70617247;
          case 0x10:
          case 0x2e:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7363696800000000;
            break;
          case 2:
          case 0x11:
          case 0x20:
            param_4 = -0x1b00000000000000;
            uVar8 = 0x656d6147;
          case 0x2f:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7300000000;
            break;
          case 3:
          case 0x12:
          case 0x21:
            param_4 = -0x1c00000000000000;
            uVar8 = 0x73726143;
          case 0x30:
            break;
          case 4:
          case 0x13:
          case 0x22:
            uVar8 = 0x656c706f6550;
          case 0x31:
            break;
          case 5:
          case 0x14:
          case 0x23:
            param_4 = -0x1b00000000000000;
            uVar8 = 0x6d696e41;
          case 0x32:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
            break;
          case 6:
          case 0x15:
          case 0x24:
            param_4 = -0x1b00000000000000;
            uVar8 = 0x6568744f;
          case 0x33:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7200000000;
            break;
          case 7:
          case 0x16:
          case 0x25:
            param_4 = -0x1b00000000000000;
            uVar8 = 0x63617053;
          case 0x34:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
            break;
          case 8:
          case 0x17:
          case 0x26:
            uVar8 = 0x65727574614e;
            break;
          case 9:
          case 0x18:
          case 0x27:
            uVar8 = 0x616d696e694d;
          case 0x36:
            uVar8 = uVar8 | 0x696c000000000000;
            param_4 = -0x15ffffffffff8b8d;
            break;
          case 10:
          case 0x19:
          case 0x28:
            param_4 = -0x1900000000000000;
            uVar8 = 0x6d696e41;
          case 0x37:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x736c6100000000;
            break;
          default:
            uVar8 = 0x7265746e6957;
          case 0x38:
            break;
          case 0xc:
          case 0x1b:
          case 0x2a:
            param_4 = -0x1800000000000000;
            uVar8 = 0x65786950;
          case 0x39:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7472416c00000000;
            break;
          case 0xd:
          case 0x1c:
          case 0x2b:
            param_4 = -0x1b00000000000000;
            uVar8 = 0x46696353;
          case 0x3a:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x6900000000;
            break;
          case 0xe:
          case 0x2c:
            uVar8 = 0;
            param_4 = -0x2000000000000000;
            break;
          case 0xf:
            goto switchD_1003dceb4_caseD_f;
          case 0x1d:
            goto switchD_1003dceb4_caseD_1d;
          case 0x2d:
            goto switchD_1003dceb4_caseD_2d;
          }
          lVar7 = -0x1a00000000000000;
          uVar15 = local_a8;
          local_78 = uVar8;
          lStack_70 = param_4;
switchD_1003dceb4_caseD_2d:
          uVar8 = 0x6f4d;
switchD_1003dcff8_caseD_10:
          uVar8 = uVar8 & 0xffff00000000ffff | 0x736569760000;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(puVar13[uVar15]) {
          case 0:
            break;
          case 1:
          case 0x1f:
            lVar7 = -0x1800000000000000;
            uVar8 = 0x70617247;
          case 0x1d:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7363696800000000;
            break;
          case 2:
          case 0x11:
            lVar7 = -0x1b00000000000000;
            uVar8 = 0x656d6147;
          case 0x20:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7300000000;
            break;
          case 3:
          case 0x12:
            lVar7 = -0x1c00000000000000;
            uVar8 = 0x73726143;
          case 0x21:
            break;
          case 4:
          case 0x13:
            uVar8 = 0x656c706f6550;
          case 0x22:
            break;
          case 5:
          case 0x14:
            lVar7 = -0x1b00000000000000;
            uVar8 = 0x6d696e41;
          case 0x23:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
            break;
          case 6:
          case 0x15:
            lVar7 = -0x1b00000000000000;
            uVar8 = 0x6568744f;
          case 0x24:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7200000000;
            break;
          case 7:
          case 0x16:
            lVar7 = -0x1b00000000000000;
            uVar8 = 0x63617053;
          case 0x25:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
            break;
          case 8:
          case 0x17:
            uVar8 = 0x65727574614e;
          case 0xf:
          case 0x26:
            break;
          case 9:
          case 0x18:
            uVar8 = 0x616d696e694d;
          case 0x27:
            uVar8 = uVar8 | 0x696c000000000000;
            lVar7 = -0x15ffffffffff8b8d;
            break;
          case 10:
          case 0x19:
            lVar7 = -0x1900000000000000;
            uVar8 = 0x6d696e41;
          case 0x28:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x736c6100000000;
            break;
          default:
            uVar8 = 0x7265746e6957;
          case 0x29:
            break;
          case 0xc:
          case 0x1b:
            lVar7 = -0x1800000000000000;
            uVar8 = 0x65786950;
          case 0x2a:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x7472416c00000000;
            break;
          case 0xd:
          case 0x1c:
            lVar7 = -0x1b00000000000000;
            uVar8 = 0x46696353;
          case 0x2b:
            uVar8 = uVar8 & 0xffff0000ffffffff | 0x6900000000;
            break;
          case 0xe:
            uVar8 = 0;
            lVar7 = -0x2000000000000000;
            break;
          case 0x10:
            goto switchD_1003dcff8_caseD_10;
          case 0x1e:
            goto switchD_1003dcff8_caseD_1e;
          }
          bVar5 = local_c0 == (undefined *)0xffffffffffffffff;
          local_88 = uVar8;
          lStack_80 = lVar7;
          NVar20 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                             (NVar9.unknown,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,local_d0,local_d0);
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRelease(lVar7);
          FUN_100029548(local_a8,FUN_10040211c);
          puVar16 = (ulong *)((long)local_a0 + 1);
          param_3 = (long *)((long)param_3 + local_b8);
          lVar21 = lVar21 + local_b8;
          lVar17 = local_b0 + local_b8;
          lVar24 = lVar23 + 1;
          lVar22 = unaff_x21 + local_b8;
          lVar12 = local_b0;
          lVar7 = local_90;
          NVar9 = NVar20;
        } while (bVar5 != (NVar20.unknown != (undefined *)0xffffffffffffffff));
        uVar6 = local_c0 == (undefined *)0xffffffffffffffff;
        puVar19 = (uint *)local_a0;
        lVar17 = lVar12;
switchD_1003dcff8_caseD_1e:
        puVar18 = local_d8;
        param_3 = local_e8;
        lVar24 = local_f8;
        if ((bool)uVar6) {
          if ((long)puVar19 < (long)local_d8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd814);
            (*pcVar4)();
          }
          if ((long)local_d8 < (long)puVar19) {
            lVar21 = 0;
            lVar12 = *local_e8;
            lVar22 = (long)local_d8 * local_b8;
            do {
              if ((long)puVar18 + lVar21 != (long)puVar18 + lVar23 + 1) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd82c);
                  (*pcVar4)();
                }
                uVar15 = lVar12 + lVar22;
                FUN_100007e64(uVar15,local_e0,FUN_10040211c);
                if ((lVar22 < unaff_x21) || ((ulong)(lVar12 + lVar17) <= uVar15)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar15,lVar12 + unaff_x21,1,lVar7);
                }
                else if (local_b8 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar15,lVar12 + unaff_x21,1,lVar7);
                }
                FUN_100007e64(local_e0,lVar12 + unaff_x21,FUN_10040211c);
                puVar18 = local_d8;
                puVar19 = (uint *)local_a0;
                param_3 = local_e8;
              }
              lVar21 = lVar21 + 1;
              lVar3 = lVar23 + 1;
              unaff_x21 = unaff_x21 - local_b8;
              lVar17 = lVar17 - local_b8;
              lVar22 = lVar22 + local_b8;
              lVar23 = lVar23 + -1;
              lVar24 = local_f8;
            } while (lVar21 + (long)puVar18 < (long)puVar18 + lVar3);
          }
        }
      }
      puVar16 = (ulong *)puVar19;
      puVar13 = local_58;
      puVar14 = (ulong *)param_3[1];
      if ((long)puVar16 < (long)puVar14) {
        if (SBORROW8((long)puVar16,(long)puVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd808);
          (*pcVar4)();
        }
        if ((long)puVar16 - (long)puVar18 < local_108) {
          if (SCARRY8((long)puVar18,local_108)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd80c);
            (*pcVar4)();
          }
          puVar1 = (ulong *)((long)puVar18 + local_108);
          if ((long)puVar14 <= (long)puVar18 + local_108) {
            puVar1 = puVar14;
          }
          if ((long)puVar1 < (long)puVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd810);
            (*pcVar4)();
          }
          if (puVar16 != puVar1) {
            local_d0 = *(long *)(local_f0 + 0x48);
            local_b0 = *param_3 + local_d0 * ((long)puVar16 + -1);
            local_b8 = (long)puVar18 - (long)puVar16;
            lVar17 = *param_3 + (long)puVar16 * local_d0;
            local_f8 = lVar24;
            local_c8 = puVar1;
            local_c0 = (undefined *)lVar17;
            local_a0 = puVar16;
            FUN_100029504(local_b0,lVar25,FUN_10040211c);
            uVar15 = (ulong)*(int *)(lVar7 + 0x24);
            lVar7 = -0x1a00000000000000;
            uVar8 = 0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)(lVar17 + uVar15)) {
            case 1:
              lVar7 = -0x1800000000000000;
              uVar8 = 0x70617247;
            case 0x10:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x7363696800000000;
              break;
            case 2:
              lVar7 = -0x1b00000000000000;
              uVar8 = 0x656d6147;
            case 0x11:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x7300000000;
              break;
            case 3:
              lVar7 = -0x1c00000000000000;
              uVar8 = 0x73726143;
            case 0x12:
              break;
            case 4:
              uVar8 = 0x656c706f6550;
            case 0x13:
              break;
            case 5:
              lVar7 = -0x1b00000000000000;
              uVar8 = 0x6d696e41;
            case 0x14:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
              break;
            case 6:
              lVar7 = -0x1b00000000000000;
              uVar8 = 0x6568744f;
            case 0x15:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x7200000000;
              break;
            case 7:
              lVar7 = -0x1b00000000000000;
              uVar8 = 0x63617053;
            case 0x16:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
              break;
            case 8:
              uVar8 = 0x65727574614e;
              break;
            case 9:
              uVar8 = 0x616d696e694d;
            case 0x18:
              uVar8 = uVar8 | 0x696c000000000000;
              lVar7 = -0x15ffffffffff8b8d;
              break;
            case 10:
              lVar7 = -0x1900000000000000;
              uVar8 = 0x6d696e41;
            case 0x19:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x736c6100000000;
              break;
            case 0xb:
            case 0x1d:
              uVar8 = 0x7265746e6957;
            case 0x1a:
              break;
            case 0xc:
              lVar7 = -0x1800000000000000;
              uVar8 = 0x65786950;
            case 0x1b:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x7472416c00000000;
              break;
            case 0xd:
              lVar7 = -0x1b00000000000000;
              uVar8 = 0x46696353;
            case 0x1c:
              uVar8 = uVar8 & 0xffff0000ffffffff | 0x6900000000;
              break;
            case 0xe:
              uVar8 = 0;
              lVar7 = -0x2000000000000000;
              break;
            case 0xf:
              goto switchD_1003dd320_caseD_f;
            }
            local_78 = uVar8;
            lStack_70 = lVar7;
            uVar15 = (ulong)*(byte *)(lVar25 + uVar15);
switchD_1003dd320_caseD_f:
                    /* WARNING: Could not recover jumptable at 0x0001003dd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)(int)(&UINT_1003dd8ec)[uVar15] + 0x1003dd448))(0x736569766f4d);
            return;
          }
        }
      }
      if ((long)puVar16 < (long)puVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd7fc);
        (*pcVar4)();
      }
      puVar10 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar13;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar15 = *(ulong *)(puVar11 + 0x10);
      puVar13 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar15) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_10026486c(puVar13,uVar15 + 1,1,puVar11);
      }
      *(ulong *)(puVar13 + 0x10) = uVar15 + 1;
      *(ulong **)(puVar13 + uVar15 * 0x10 + 0x20) = local_d8;
      *(ulong **)(puVar13 + uVar15 * 0x10 + 0x28) = puVar16;
      local_58 = puVar13;
      if (*local_100 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd830);
        (*pcVar4)();
      }
      FUN_1003e01c4(&local_58,*local_100,param_3,FUN_1003e1e04);
      puVar13 = local_58;
      if (lVar24 != 0) goto LAB_1003dd7cc;
      NVar20.unknown = (undefined *)param_3[1];
    } while ((long)puVar16 < (long)NVar20.unknown);
    lVar24 = 0;
  }
  puVar13 = local_58;
  lVar7 = *local_100;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd838);
    (*pcVar4)();
  }
  puVar10 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_100265268();
  }
  uVar15 = *(ulong *)(puVar13 + 0x10);
  while (local_58 = puVar13, 1 < uVar15) {
    lVar25 = *param_3;
    if (lVar25 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd834);
      (*pcVar4)();
    }
    lVar22 = uVar15 - 1;
    lVar23 = *(long *)(puVar13 + uVar15 * 0x10);
    lVar17 = *(long *)(puVar13 + lVar22 * 0x10 + 0x28);
    lVar21 = *(long *)(local_f0 + 0x48);
    FUN_1003e1e04(lVar25 + lVar21 * lVar23,
                  lVar25 + lVar21 * *(long *)(puVar13 + lVar22 * 0x10 + 0x20),
                  lVar25 + lVar21 * lVar17,lVar7);
    if (lVar24 != 0) break;
    if (lVar17 < lVar23) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd800);
      (*pcVar4)();
    }
    puVar10 = puVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar10 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar13 + 0x10) <= uVar15 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dd804);
      (*pcVar4)();
    }
    *(long *)(puVar13 + uVar15 * 0x10) = lVar23;
    *(long *)((long)(puVar13 + uVar15 * 0x10) + 8) = lVar17;
    local_58 = puVar13;
    FUN_10026503c(lVar22);
    puVar13 = local_58;
    param_3 = local_e8;
    uVar15 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003dd7cc:
  _swift_bridgeObjectRelease(puVar13);
  return;
}

