// rea decompile_all
// name: FUN_100319a9c
// address: 0x100319a9c
// body: available
// range: 0x100319a9c-0x100319d03 inclusive
// range: 0x100319d20-0x100319d33 inclusive
// range: 0x100319d58-0x100319d77 inclusive
// range: 0x100319e2c-0x100319e4b inclusive
// range: 0x100319e64-0x10031a0bb inclusive
// range: 0x10031a110-0x10031a12f inclusive
// range: 0x10031a1e4-0x10031a23b inclusive
// range: 0x10031a254-0x10031a497 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100319a9c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  byte *pbVar17;
  long unaff_x21;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  undefined1 local_62;
  undefined1 local_61;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar16 = param_3[1];
  if (0 < lVar16) {
    plVar9 = param_3;
    lVar12 = 0;
    do {
      lVar10 = lVar12 + 1;
      lVar18 = lVar10;
      if (lVar10 < lVar16) {
        lVar21 = *param_3;
        local_61 = *(undefined1 *)(lVar21 + lVar10);
        local_62 = *(undefined1 *)(lVar21 + lVar12);
        puVar4 = &local_61;
        FUN_10030f23c(puVar4,&local_62);
        if (unaff_x21 != 0) goto LAB_10031a42c;
        lVar14 = lVar12 + 2;
        lVar18 = lVar14;
        if (lVar14 < lVar16) {
          lVar10 = lVar16 + -1;
          lVar20 = param_4;
LAB_100319b84:
          bVar13 = *(byte *)(lVar21 + lVar14);
          puVar15 = (uint *)(long)(int)(&switchD_100319bb4::switchdataD_10031a498)[bVar13];
          uVar5 = 0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar13) {
          case 0:
          case 0x1c:
            break;
          default:
            uVar5 = 0x7363696870617247;
            break;
          case 2:
          case 0x1e:
          case 0x17:
          case 0x33:
            uVar5 = 0x73656d6147;
            break;
          case 3:
          case 0x1f:
            uVar5 = 0x73726143;
            break;
          case 4:
          case 0x20:
            uVar5 = 0x656c706f6550;
            break;
          case 5:
          case 0x21:
            uVar5 = 0x6d696e41;
          case 0x11:
          case 0x2d:
            uVar5 = uVar5 & 0xffff0000ffffffff | 0x6500000000;
            break;
          case 6:
          case 0x22:
            uVar5 = 0x6568744f;
          case 0x13:
          case 0x2f:
            uVar5 = uVar5 & 0xffff0000ffffffff | 0x7200000000;
            break;
          case 7:
          case 0x23:
          case 0x10:
          case 0x2c:
            uVar5 = 0x6563617053;
            break;
          case 8:
          case 0x24:
            uVar5 = 0x65727574614e;
            break;
          case 9:
          case 0x1a:
          case 0x25:
          case 0x36:
            uVar5 = 0x696c616d696e694d;
            break;
          case 10:
          case 0x26:
            uVar5 = 0x736c616d696e41;
          case 0x1b:
          case 0x37:
            break;
          case 0xb:
          case 0x27:
            uVar5 = 0x746e6957;
          case 0x19:
          case 0x35:
            uVar5 = uVar5 & 0xffff0000ffffffff | 0x726500000000;
            break;
          case 0xc:
          case 0x12:
          case 0x28:
          case 0x2e:
            uVar5 = 0x7472416c65786950;
            break;
          case 0xd:
          case 0x29:
            uVar5 = 0x6946696353;
          case 0x15:
          case 0x31:
            break;
          case 0x14:
          case 0x30:
            goto switchD_100319bb4_caseD_14;
          case 0x16:
            plVar9 = (long *)((ulong)plVar9 & 0xffff00000000ffff | 0x656c706f0000);
            goto joined_r0x000100319d70;
          case 0x18:
          case 0x34:
            lVar20 = -0x1800000000000000;
            plVar9 = (long *)0x7363696870617247;
          case 0xe:
          case 0x2a:
            goto joined_r0x000100319d70;
          case 0x32:
            plVar9 = (long *)((ulong)plVar9 & 0xffff | 0x696c616d696e0000);
            lVar20 = -0x15ffffffffff8b8d;
joined_r0x000100319d70:
            if ((plVar9 == (long *)0x736569766f4d) && (lVar20 == -0x1a00000000000000)) {
              _swift_bridgeObjectRelease(0xe600000000000000);
              _swift_bridgeObjectRelease(0xe600000000000000);
              if (((ulong)puVar4 & 1) == 0) goto LAB_100319b78;
              lVar10 = lVar14 + -1;
              goto LAB_100319ea4;
            }
            bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,
                               (_StringComparisonResult)(__int8)plVar9);
            _swift_bridgeObjectRelease(0xe600000000000000);
            _swift_bridgeObjectRelease(lVar20);
            if ((((uint)puVar4 ^ (uint)bVar3) & 1) != 0) {
              lVar10 = lVar14 + -1;
              lVar18 = lVar14;
              goto LAB_100319e7c;
            }
LAB_100319b78:
            lVar14 = lVar14 + 1;
            lVar18 = lVar16;
            if (lVar16 == lVar14) goto LAB_100319e7c;
            goto LAB_100319b84;
          }
          puVar15 = &UINT_10031a4d0;
switchD_100319bb4_caseD_14:
                    /* WARNING: Could not recover jumptable at 0x000100319ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)(int)puVar15[((byte *)(lVar21 + lVar14))[-1]] + 0x100319cc8))(uVar5);
          return;
        }
LAB_100319e7c:
        lVar14 = lVar18;
        if (((ulong)puVar4 & 1) != 0) {
LAB_100319ea4:
          if (lVar14 < lVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a46c);
            (*pcVar2)();
          }
          lVar18 = lVar14;
          if (lVar12 <= lVar10) {
            lVar21 = *param_3;
            lVar16 = lVar12;
            do {
              lVar14 = lVar14 + -1;
              if (lVar16 != lVar14) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a48c);
                  (*pcVar2)();
                }
                uVar1 = *(undefined1 *)(lVar21 + lVar16);
                *(undefined1 *)(lVar21 + lVar16) = *(undefined1 *)(lVar21 + lVar14);
                *(undefined1 *)(lVar21 + lVar14) = uVar1;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar14);
          }
        }
      }
      lVar16 = param_3[1];
      lVar21 = lVar18;
      if (lVar18 < lVar16) {
        if (SBORROW8(lVar18,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a468);
          (*pcVar2)();
        }
        if (lVar18 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a470);
            (*pcVar2)();
          }
          lVar14 = lVar12 + param_4;
          if (lVar16 <= lVar12 + param_4) {
            lVar14 = lVar16;
          }
          if (lVar14 < lVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a474);
            (*pcVar2)();
          }
          if (lVar18 != lVar14) {
            lVar20 = *param_3;
            pbVar19 = (byte *)(lVar20 + lVar18);
            lVar16 = lVar12 - lVar18;
LAB_100319f34:
            bVar13 = *(byte *)(lVar20 + lVar18);
            pbVar17 = pbVar19;
            lVar21 = lVar16;
LAB_100319f40:
            puVar15 = (uint *)(long)(int)(&switchD_100319f6c::switchdataD_10031a508)[bVar13];
            uVar5 = 0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(bVar13) {
            case 0:
              break;
            default:
              uVar5 = 0x7363696870617247;
              break;
            case 2:
            case 0x17:
              uVar5 = 0x73656d6147;
              break;
            case 3:
              uVar5 = 0x73726143;
              break;
            case 4:
              uVar5 = 0x656c706f6550;
              break;
            case 5:
              uVar5 = 0x6d696e41;
            case 0x11:
              uVar5 = uVar5 & 0xffff0000ffffffff | 0x6500000000;
              break;
            case 6:
              uVar5 = 0x6568744f;
            case 0x13:
              uVar5 = uVar5 & 0xffff0000ffffffff | 0x7200000000;
              break;
            case 7:
            case 0x10:
              uVar5 = 0x6563617053;
              break;
            case 8:
              uVar5 = 0x65727574614e;
              break;
            case 9:
            case 0x1a:
              uVar5 = 0x696c616d696e694d;
              break;
            case 10:
              uVar5 = 0x736c616d696e41;
            case 0x1b:
              break;
            case 0xb:
              uVar5 = 0x746e6957;
            case 0x19:
              uVar5 = uVar5 & 0xffff0000ffffffff | 0x726500000000;
              break;
            case 0xc:
            case 0x12:
              uVar5 = 0x7472416c65786950;
              break;
            case 0xd:
              uVar5 = 0x6946696353;
            case 0x15:
              break;
            case 0x14:
              goto switchD_100319f6c_caseD_14;
            case 0x16:
              plVar9 = (long *)((ulong)plVar9 & 0xffff | 0x696c616d696e0000);
              lVar10 = -0x15ffffffffff8b8d;
joined_r0x00010031a128:
              if ((plVar9 == (long *)0x736569766f4d) && (lVar10 == -0x1a00000000000000)) {
                _swift_bridgeObjectRelease(0xe600000000000000);
                _swift_bridgeObjectRelease(0xe600000000000000);
              }
              else {
                bVar3 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,
                                   (_StringComparisonResult)(__int8)plVar9);
                _swift_bridgeObjectRelease(0xe600000000000000);
                _swift_bridgeObjectRelease(lVar10);
                if (bVar3) goto code_r0x00010031a214;
              }
              goto LAB_100319f1c;
            case 0x18:
              lVar10 = -0x1800000000000000;
              plVar9 = (long *)0x7363696870617247;
            case 0xe:
              goto joined_r0x00010031a128;
            }
            puVar15 = &UINT_10031a540;
switchD_100319f6c_caseD_14:
                    /* WARNING: Could not recover jumptable at 0x00010031a098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)(int)puVar15[pbVar17[-1]] + 0x10031a080))(uVar5);
            return;
          }
        }
      }
LAB_10031a2a4:
      puVar8 = local_58;
      if (lVar21 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a45c);
        (*pcVar2)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar5 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10026486c(puVar8,uVar5 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
      *(long *)(puVar8 + uVar5 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar8 + uVar5 * 0x10 + 0x28) = lVar21;
      local_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a490);
        (*pcVar2)();
      }
      plVar9 = param_3;
      FUN_10031a998(&local_58);
      if (unaff_x21 != 0) goto LAB_10031a42c;
      lVar16 = param_3[1];
      lVar12 = lVar21;
    } while (lVar21 < lVar16);
  }
  puVar8 = local_58;
  lVar16 = *param_1;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a498);
    (*pcVar2)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100265268();
  }
  uVar5 = *(ulong *)(puVar8 + 0x10);
  while( true ) {
    local_58 = puVar8;
    if (uVar5 < 2) {
      _swift_bridgeObjectRelease(puVar8);
      return;
    }
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a494);
      (*pcVar2)();
    }
    lVar21 = uVar5 - 1;
    lVar18 = *(long *)(puVar8 + uVar5 * 0x10);
    lVar10 = *(long *)(puVar8 + lVar21 * 0x10 + 0x28);
    FUN_10031ac00(lVar12 + lVar18,lVar12 + *(long *)(puVar8 + lVar21 * 0x10 + 0x20),lVar12 + lVar10,
                  lVar16);
    if (unaff_x21 != 0) break;
    if (lVar10 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a460);
      (*pcVar2)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar5 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a464);
      (*pcVar2)();
    }
    *(long *)(puVar8 + uVar5 * 0x10) = lVar18;
    *(long *)((long)(puVar8 + uVar5 * 0x10) + 8) = lVar10;
    local_58 = puVar8;
    FUN_10026503c(lVar21);
    uVar5 = *(ulong *)(local_58 + 0x10);
    puVar8 = local_58;
  }
LAB_10031a42c:
  _swift_bridgeObjectRelease(local_58);
  return;
code_r0x00010031a214:
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a478);
    (*pcVar2)();
  }
  bVar13 = *pbVar17;
  pbVar11 = pbVar17 + -1;
  *pbVar17 = *pbVar11;
  *pbVar11 = bVar13;
  bVar3 = lVar21 == -1;
  lVar21 = lVar21 + 1;
  pbVar17 = pbVar11;
  if (bVar3) goto LAB_100319f1c;
  goto LAB_100319f40;
LAB_100319f1c:
  lVar18 = lVar18 + 1;
  pbVar19 = pbVar19 + 1;
  lVar16 = lVar16 + -1;
  lVar21 = lVar14;
  if (lVar18 == lVar14) goto LAB_10031a2a4;
  goto LAB_100319f34;
}

