// rea decompile_all
// name: FUN_10031ac00
// address: 0x10031ac00
// body: available
// range: 0x10031ac00-0x10031add3 inclusive
// range: 0x10031addc-0x10031adf3 inclusive
// range: 0x10031adf8-0x10031ae0b inclusive
// range: 0x10031ae14-0x10031ae23 inclusive
// range: 0x10031ae44-0x10031ae67 inclusive
// range: 0x10031ae6c-0x10031ae9b inclusive
// range: 0x10031aeb0-0x10031aeff inclusive
// range: 0x10031af1c-0x10031af37 inclusive
// range: 0x10031af4c-0x10031b1ab inclusive
// range: 0x10031b1b0-0x10031b1e3 inclusive
// range: 0x10031b1e8-0x10031b1fb inclusive
// range: 0x10031b218-0x10031b21b inclusive
// range: 0x10031b228-0x10031b25b inclusive
// range: 0x10031b260-0x10031b273 inclusive
// range: 0x10031b284-0x10031b29f inclusive
// range: 0x10031b2b8-0x10031b2bb inclusive
// range: 0x10031b2f4-0x10031b30f inclusive
// range: 0x10031b324-0x10031b42f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_StringGuts FUN_10031ac00(code *param_1,code *param_2,code *param_3,code *param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  ulong uVar15;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  code *unaff_x21;
  long lVar22;
  size_t sVar23;
  ulong uVar24;
  code *pcVar25;
  _StringGuts _Var26;
  code *pcVar27;
  code *local_70;
  code *local_68;
  code *local_58;
  
  pcVar25 = param_2 + -(long)param_1;
  sVar23 = (long)param_3 - (long)param_2;
  pcVar9 = param_2;
  pcVar12 = param_4;
  pcVar20 = param_4;
  pcVar14 = param_2;
  pcVar7 = unaff_x21;
  if ((long)pcVar25 < (long)sVar23) {
    if ((param_4 != param_1) || (pcVar10 = param_3, param_2 <= param_4)) {
      pcVar9 = param_1;
      pcVar10 = pcVar25;
      _memmove(param_4,param_1,(size_t)pcVar25);
    }
    pcVar19 = param_4 + (long)pcVar25;
    if (0 < (long)pcVar25) {
      bVar5 = param_3 <= param_2;
      lVar8 = (long)param_2 - (long)param_3;
      if (!bVar5) {
        _Var26.unknown = (code *)0x736569766f4d;
        pcVar13 = param_2;
LAB_10031ac88:
        bVar4 = SBORROW8((long)pcVar13,(long)param_3);
        bVar3 = pcVar13 == param_3;
        bVar2 = lVar8 < 0;
        UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(byte)*pcVar14;
        pcVar13 = (code *)(ulong)(byte)*pcVar20;
        sVar23 = 0xe600000000000000;
        pbVar18 = &switchD_10031acac::switchdataD_100430918;
        pbVar17 = (byte *)(ulong)(byte)UNRECOVERED_JUMPTABLE_00[0x100430918];
        pcVar16 = (code *)((long)pbVar17 * 4 + 0x10031acb0);
        pcVar6 = (code *)_Var26.unknown;
        param_4 = (code *)_Var26.unknown;
        param_2 = pcVar9;
        pcVar11 = pcVar10;
        pcVar21 = pcVar20;
        pcVar27 = unaff_x21;
        switch(*pcVar14) {
        case (code)0x0:
          break;
        default:
        case (code)0x76:
          _Var26.unknown = (code *)0x7247;
switchD_10031acac_caseD_d8:
          _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffff0000ffff | 0x70610000);
switchD_10031acac_caseD_3e:
          _Var26.unknown =
               (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x696800000000);
switchD_10031acac_caseD_8d:
          _Var26.unknown = _Var26.unknown | 0x7363000000000000;
          break;
        case (code)0x2:
        case (code)0x17:
          _Var26.unknown = (code *)0x73656d6147;
          break;
        case (code)0x3:
        case (code)0x49:
        case (code)0x51:
          _Var26.unknown = (code *)0x73726143;
          break;
        case (code)0x4:
        case (code)0x80:
          _Var26.unknown = (code *)0x656c706f6550;
          break;
        case (code)0x5:
        case (code)0x7d:
        case (code)0xc1:
        case (code)0xe9:
        case (code)0x8c:
          _Var26.unknown = (code *)0x6d696e41;
switchD_10031acac_caseD_11:
          _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x6500000000);
switchD_10031acac_caseD_91:
          break;
        case (code)0x6:
          _Var26.unknown = (code *)0x744f;
        case (code)0xa1:
          _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffff0000ffff | 0x65680000);
switchD_10031acac_caseD_13:
          _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x7200000000);
switchD_10031acac_caseD_f4:
          break;
        case (code)0x7:
        case (code)0x10:
        case (code)0x81:
          _Var26.unknown = (code *)0x6563617053;
switchD_10031acac_caseD_89:
          break;
        case (code)0x8:
          _Var26.unknown = (code *)0x7574614e;
        case (code)0xda:
          _Var26.unknown =
               (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x657200000000);
          break;
        case (code)0x9:
        case (code)0x1a:
        case (code)0x70:
        case (code)0x7e:
        case (code)0xc2:
        case (code)0xea:
          _Var26.unknown = (code *)0x696c616d696e694d;
        case (code)0x90:
          break;
        case (code)0xa:
        case (code)0xa9:
          _Var26.unknown = (code *)0x736c616d696e41;
switchD_10031acac_caseD_1b:
          break;
        case (code)0xb:
        case (code)0x40:
        case (code)0xca:
        case (code)0xf2:
          _Var26.unknown = (code *)0x6957;
        case (code)0x4a:
        case (code)0x52:
        case (code)0x82:
        case (code)0x8a:
        case (code)0x92:
        case (code)0x9a:
        case (code)0xa2:
        case (code)0xaa:
        case (code)0xb2:
        case (code)0xba:
        case (code)0xc8:
          _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffff0000ffff | 0x746e0000);
switchD_10031acac_caseD_19:
          _Var26.unknown =
               (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x726500000000);
          break;
        case (code)0xc:
        case (code)0x12:
        case (code)0xde:
          _Var26.unknown = (code *)0x6950;
        case (code)0x32:
        case (code)0x46:
        case (code)0x4e:
        case (code)0x56:
        case (code)0x5e:
        case (code)0x66:
        case (code)0x6e:
        case (code)0xd4:
          _Var26.unknown =
               (undefined *)((ulong)_Var26.unknown & 0xffff00000000ffff | 0x7472416c65780000);
          break;
        case (code)0xd:
          _Var26.unknown = (code *)0x46696353;
        case (code)0x99:
          _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x6900000000);
switchD_10031acac_caseD_15:
          break;
        case (code)0xe:
          goto switchD_10031acac_caseD_e;
        case (code)0x11:
        case (code)0xdc:
          goto switchD_10031acac_caseD_11;
        case (code)0x13:
        case (code)0x94:
          goto switchD_10031acac_caseD_13;
        case (code)0x14:
        case (code)0x9c:
          goto switchD_10031acac_caseD_14;
        case (code)0x15:
          goto switchD_10031acac_caseD_15;
        case (code)0x16:
          pcVar10 = (code *)((ulong)pcVar10 & 0xffff0000ffffffff | 0x656c00000000);
          if (pcVar10 != (code *)0x736569766f4d) goto switchD_10031acac_caseD_e0;
          goto LAB_10031af1c;
        case (code)0x18:
        case (code)0xb4:
          pcVar10 = (code *)((ulong)pcVar10 & 0xffff | 0x7363696870610000);
          if (pcVar10 == (code *)0x736569766f4d) goto LAB_10031af1c;
switchD_10031acac_caseD_e:
          goto LAB_10031af4c;
        case (code)0x19:
        case (code)0xfc:
          goto switchD_10031acac_caseD_19;
        case (code)0x1b:
        case (code)0xb1:
        case (code)0xb9:
          goto switchD_10031acac_caseD_1b;
        case (code)0x24:
          goto switchD_10031acac_caseD_24;
        case (code)0x25:
        case (code)0x71:
          goto switchD_10031acac_caseD_25;
        case (code)0x26:
          goto switchD_10031acac_caseD_26;
        case (code)0x27:
          goto switchD_10031acac_caseD_27;
        case (code)0x28:
          pcVar10 = (code *)0x6147;
switchD_10031acac_caseD_26:
          pcVar10 = (code *)((ulong)pcVar10 & 0xffff00000000ffff | 0x73656d0000);
switchD_10031acac_caseD_29:
joined_r0x00010031ae7c:
          if (pcVar10 != (code *)0x736569766f4d) goto LAB_10031af4c;
LAB_10031af1c:
          bVar3 = pcVar25 == (code *)0xe600000000000000;
switchD_10031acac_caseD_7c:
          if (!bVar3) goto LAB_10031af4c;
          pcVar6 = (code *)0xe600000000000000;
switchD_10031acac_caseD_31:
          _swift_bridgeObjectRelease(pcVar6);
          _swift_bridgeObjectRelease(pcVar25);
          goto switchD_10031acac_caseD_e8;
        case (code)0x29:
          goto switchD_10031acac_caseD_29;
        case (code)0x2a:
        case (code)0x2d:
        case (code)0xcc:
          pcVar10 = (code *)0x694d;
        case (code)0xf5:
          pcVar10 = (code *)((ulong)pcVar10 & 0xffff | 0x696c616d696e0000);
switchD_10031acac_caseD_2c:
          pcVar25 = (code *)0xea00000000007473;
          bVar3 = pcVar10 == (code *)0x736569766f4d;
switchD_10031acac_caseD_27:
          if (!bVar3) goto LAB_10031af4c;
          goto LAB_10031af1c;
        case (code)0x2b:
          goto switchD_10031acac_caseD_2b;
        case (code)0x2c:
          goto switchD_10031acac_caseD_2c;
        case (code)0x2e:
          goto switchD_10031acac_caseD_2e;
        case (code)0x30:
          goto switchD_10031acac_caseD_30;
        case (code)0x31:
        case (code)0x45:
        case (code)0x4d:
        case (code)0x55:
        case (code)0x5d:
        case (code)0x65:
        case (code)0x6d:
          goto switchD_10031acac_caseD_31;
        case (code)0x34:
          goto switchD_10031acac_caseD_34;
        case (code)0x35:
          goto switchD_10031acac_caseD_35;
        case (code)0x3e:
        case (code)0x85:
        case (code)0xad:
          goto switchD_10031acac_caseD_3e;
        case (code)0x44:
        case (code)0x4c:
        case (code)0x54:
        case (code)0x5c:
        case (code)0x64:
        case (code)0x6c:
          pcVar25 = (code *)0xe400000000000000;
          pcVar10 = (code *)0x6143;
switchD_10031acac_caseD_2e:
          pcVar10 = (code *)(ulong)((uint)pcVar10 & 0xffff | 0x73720000);
switchD_10031acac_caseD_25:
          goto joined_r0x00010031ae7c;
        case (code)0x48:
        case (code)0x50:
          goto switchD_10031acac_caseD_48;
        case (code)0x58:
        case (code)0x68:
          goto switchD_10031acac_caseD_58;
        case (code)0x59:
        case (code)0x61:
        case (code)0x69:
          goto switchD_10031acac_caseD_59;
        case (code)0x5a:
        case (code)0x62:
        case (code)0x6a:
          goto switchD_10031acac_caseD_5a;
        case (code)0x5b:
        case (code)0x63:
        case (code)0x6b:
        case (code)0x73:
        case (code)0xe3:
        case (code)0xe7:
          goto switchD_10031acac_caseD_5b;
        case (code)0x60:
          goto switchD_10031acac_caseD_60;
        case (code)0x72:
        case (code)0xe2:
        case (code)0xe6:
          goto switchD_10031acac_caseD_72;
        case (code)0x7c:
          goto switchD_10031acac_caseD_7c;
        case (code)0x84:
          goto switchD_10031acac_caseD_84;
        case (code)0x88:
          goto switchD_10031acac_caseD_88;
        case (code)0x89:
          goto switchD_10031acac_caseD_89;
        case (code)0x8d:
        case (code)0x95:
        case (code)0x9d:
        case (code)0xa5:
          goto switchD_10031acac_caseD_8d;
        case (code)0x91:
          goto switchD_10031acac_caseD_91;
        case (code)0x98:
          goto switchD_10031acac_caseD_98;
        case (code)0xa0:
          pcVar25 = (code *)0xe500000000000000;
          pcVar10 = (code *)0x6946696353;
          goto LAB_10031af4c;
        case (code)0xa4:
        case (code)0xbc:
          pcVar10 = (code *)((ulong)pcVar10 & 0xffff00000000ffff | 0x7265746e0000);
        case (code)0xf1:
          bVar3 = pcVar10 == (code *)0x736569766f4d;
switchD_10031acac_caseD_c9:
          if (!bVar3) {
switchD_10031acac_caseD_2b:
            goto LAB_10031af4c;
          }
          goto LAB_10031af1c;
        case (code)0xa8:
          goto switchD_10031acac_caseD_a8;
        case (code)0xac:
        case (code)0xcd:
          goto switchD_10031acac_caseD_ac;
        case (code)0xb0:
          goto switchD_10031acac_caseD_b0;
        case (code)0xb8:
          goto switchD_10031acac_caseD_b8;
        case (code)0xc0:
          goto switchD_10031acac_caseD_c0;
        case (code)0xc9:
          goto switchD_10031acac_caseD_c9;
        case (code)0xd7:
        case (code)0xff:
          pcVar10 = (code *)0x6e41;
switchD_10031acac_caseD_30:
          pcVar10 = (code *)((ulong)pcVar10 & 0xffff00000000ffff | 0x656d690000);
          goto joined_r0x00010031ae7c;
        case (code)0xd8:
        case (code)0xdb:
        case (code)0xf6:
          goto switchD_10031acac_caseD_d8;
        case (code)0xdd:
          goto switchD_10031acac_caseD_dd;
        case (code)0xe0:
switchD_10031acac_caseD_e0:
          goto LAB_10031af4c;
        case (code)0xe1:
        case (code)0xe5:
          pcVar25 = (code *)0xe500000000000000;
          pcVar10 = (code *)0x726568744f;
LAB_10031af4c:
          pcVar9 = (code *)0xe600000000000000;
          pcVar12 = pcVar25;
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,
                             (_StringComparisonResult)(__int8)pcVar10);
          pcVar7 = (code *)(ulong)bVar5;
          _swift_bridgeObjectRelease(0xe600000000000000);
          _swift_bridgeObjectRelease(pcVar25);
          if (bVar5) {
switchD_10031acac_caseD_59:
            bVar5 = pcVar14 <= param_1;
            pcVar13 = pcVar14 + 1;
            UNRECOVERED_JUMPTABLE_00 = pcVar14;
switchD_10031acac_caseD_b0:
            pcVar14 = pcVar13;
            if ((!bVar5) || (pcVar13 = pcVar14, pcVar14 <= param_1)) goto LAB_10031afb8;
          }
          else {
switchD_10031acac_caseD_e8:
            pcVar21 = pcVar20 + 1;
            UNRECOVERED_JUMPTABLE_00 = pcVar20;
            if (pcVar20 <= param_1) {
              bVar5 = pcVar21 <= param_1;
              pcVar13 = pcVar14;
switchD_10031acac_caseD_5a:
              pcVar14 = pcVar13;
              pcVar13 = pcVar14;
              if (!bVar5) goto switchD_10031acac_caseD_60;
            }
LAB_10031afb8:
            *param_1 = *UNRECOVERED_JUMPTABLE_00;
            pcVar13 = pcVar14;
          }
switchD_10031acac_caseD_60:
          param_1 = param_1 + 1;
switchD_10031acac_caseD_35:
          pcVar14 = pcVar13;
          UNRECOVERED_JUMPTABLE_00 = param_1;
          if (pcVar21 < pcVar19) goto switchD_10031acac_caseD_58;
          goto LAB_10031b3c4;
        case (code)0xe4:
          goto switchD_10031acac_caseD_e4;
        case (code)0xe8:
          goto switchD_10031acac_caseD_e8;
        case (code)0xf0:
          goto switchD_10031acac_caseD_f0;
        case (code)0xf4:
          goto switchD_10031acac_caseD_f4;
        }
        pbVar17 = &BYTE_100430926;
switchD_10031acac_caseD_14:
        UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_10031add4;
switchD_10031acac_caseD_24:
        UNRECOVERED_JUMPTABLE_00 =
             UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar13[(long)pbVar17] * 4;
switchD_10031acac_caseD_98:
                    /* WARNING: Could not recover jumptable at 0x00010031add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(_Var26.unknown);
        return (_StringGuts)_Var26.unknown;
      }
      pcVar16 = param_1;
      if (param_1 == param_4) goto LAB_10031b3f0;
      goto LAB_10031b3f8;
    }
switchD_10031b080_caseD_31b3e4:
    pcVar14 = param_1;
  }
  else {
    if ((param_4 != param_2) || (param_3 <= param_4)) {
switchD_10031acac_caseD_a8:
      _memmove(param_4,param_2,sVar23);
      pcVar9 = param_2;
    }
    pcVar19 = pcVar20 + sVar23;
    param_4 = pcVar20;
    if (param_1 < pcVar14) {
      bVar5 = sVar23 != 0;
      bVar4 = SBORROW8(sVar23,1);
      bVar2 = (long)(sVar23 - 1) < 0;
      bVar3 = sVar23 == 1;
switchD_10031acac_caseD_c0:
      param_4 = pcVar20;
      if (bVar2 == bVar4) {
switchD_10031acac_caseD_48:
        pcVar10 = (code *)0x736569766f4d;
switchD_10031acac_caseD_e4:
        pcVar27 = pcVar7;
        goto LAB_10031b024;
      }
    }
  }
switchD_10031b080_caseD_31b3e8:
  pcVar16 = pcVar14;
  param_1 = pcVar16;
  if (pcVar16 == param_4) {
LAB_10031b3f0:
    param_1 = pcVar16;
    if (pcVar16 < pcVar19) goto LAB_10031b408;
  }
  goto LAB_10031b3f8;
LAB_10031b054:
  _Var26.unknown = local_58 + -1;
  UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(byte)*_Var26.unknown;
  pcVar19 = param_3 + 1;
  pcVar13 = (code *)(ulong)(byte)*pcVar16;
switchD_10031acac_caseD_72:
  pbVar18 = &switchD_10031b080::switchdataD_1004308fc;
  goto switchD_10031acac_caseD_34;
switchD_10031acac_caseD_5b:
  _Var26.unknown = (code *)0x656c706f6550;
  goto switchD_10031b080_caseD_31b188;
switchD_10031acac_caseD_58:
  lVar8 = (long)pcVar13 - (long)param_3;
  bVar5 = false;
  pcVar20 = pcVar21;
  UNRECOVERED_JUMPTABLE_00 = param_1;
  if (param_3 <= pcVar13) goto LAB_10031b3c4;
  goto LAB_10031ac88;
switchD_10031acac_caseD_dd:
  _Var26.unknown = (undefined *)0x6957;
switchD_10031b080_caseD_31b0a0:
  _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffff0000ffff | 0x746e0000);
switchD_10031b080_caseD_31b0a4:
  _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x726500000000);
switchD_10031b080_caseD_31b188:
  pbVar17 = &UNK_100430000;
switchD_10031b080_caseD_31b194:
  pbVar17 = pbVar17 + 0x90a;
switchD_10031b080_caseD_31b198:
  UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_10031b1ac + (ulong)(byte)pcVar13[(long)pbVar17] * 4);
switchD_10031b080_caseD_31b1a4:
                    /* WARNING: Could not recover jumptable at 0x00010031b1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(_Var26.unknown);
  return (_StringGuts)_Var26.unknown;
switchD_10031acac_caseD_34:
  pcVar16 = (code *)0x10031b084;
  pcVar6 = (code *)_Var26.unknown;
switchD_10031acac_caseD_84:
  _Var26.unknown = pcVar10;
  pbVar17 = (byte *)(ulong)(byte)UNRECOVERED_JUMPTABLE_00[(long)pbVar18];
  pcVar16 = pcVar16 + (long)pbVar17 * 4;
  pcVar11 = (code *)_Var26.unknown;
switchD_10031acac_caseD_88:
  pcVar21 = pcVar14;
  pcVar10 = pcVar20;
  param_4 = pcVar10;
  pcVar14 = pcVar21;
  switch(pcVar16) {
  case (code *)0x10031b084:
  case (code *)0x10031b088:
    _Var26.unknown = (undefined *)0x7247;
switchD_10031b080_caseD_31b08c:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffff0000ffff | 0x70610000);
switchD_10031acac_caseD_b8:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x696800000000);
switchD_10031b080_caseD_31b094:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffffffff | 0x7363000000000000);
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b08c:
    goto switchD_10031b080_caseD_31b08c;
  case (code *)0x10031b090:
    goto switchD_10031acac_caseD_b8;
  case (code *)0x10031b094:
    goto switchD_10031b080_caseD_31b094;
  case (code *)0x10031b09c:
    goto switchD_10031acac_caseD_dd;
  case (code *)0x10031b0a0:
    goto switchD_10031b080_caseD_31b0a0;
  case (code *)0x10031b0a4:
    goto switchD_10031b080_caseD_31b0a4;
  case (code *)0x10031b0ac:
    goto switchD_10031acac_caseD_5b;
  case (code *)0x10031b0bc:
    _Var26.unknown = (undefined *)0x6950;
  case (code *)0x10031b0c4:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff | 0x7472416c65780000);
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b0d4:
    _Var26.unknown = (code *)0x696c616d696e694d;
  case (code *)0x10031b0e4:
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b0f0:
  case (code *)0x10031b0f4:
    _Var26.unknown = (code *)0x73656d6147;
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b104:
    _Var26.unknown = (code *)0x73726143;
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b114:
  case (code *)0x10031b118:
    _Var26.unknown = (code *)0x6563617053;
switchD_10031b080_caseD_31b124:
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b124:
    goto switchD_10031b080_caseD_31b124;
  case (code *)0x10031b128:
  case (code *)0x10031b12c:
    _Var26.unknown = (undefined *)0x6d696e41;
switchD_10031b080_caseD_31b134:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x6500000000);
switchD_10031b080_caseD_31b138:
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b134:
    goto switchD_10031b080_caseD_31b134;
  case (code *)0x10031b138:
    goto switchD_10031b080_caseD_31b138;
  case (code *)0x10031b13c:
    _Var26.unknown = (undefined *)0x46696353;
  case (code *)0x10031b148:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x6900000000);
switchD_10031b080_caseD_31b14c:
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b14c:
    goto switchD_10031b080_caseD_31b14c;
  case (code *)0x10031b150:
    _Var26.unknown = (undefined *)0x744f;
  case (code *)0x10031b158:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffffffff0000ffff | 0x65680000);
switchD_10031b080_caseD_31b15c:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x7200000000);
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b15c:
    goto switchD_10031b080_caseD_31b15c;
  case (code *)0x10031b164:
  case (code *)0x10031b168:
    _Var26.unknown = (code *)0x736c616d696e41;
switchD_10031b080_caseD_31b178:
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b178:
    goto switchD_10031b080_caseD_31b178;
  case (code *)0x10031b17c:
    _Var26.unknown = (undefined *)0x7574614e;
  case (code *)0x10031b184:
    _Var26.unknown = (undefined *)((ulong)_Var26.unknown & 0xffff0000ffffffff | 0x657200000000);
  case (code *)0x10031b188:
    goto switchD_10031b080_caseD_31b188;
  case (code *)0x10031b194:
    goto switchD_10031b080_caseD_31b194;
  case (code *)0x10031b198:
    goto switchD_10031b080_caseD_31b198;
  case (code *)0x10031b1a4:
    goto switchD_10031b080_caseD_31b1a4;
  case (code *)0x10031b1b0:
    pcVar11 = (code *)0x7363696870617247;
    bVar3 = _Var26.unknown == (undefined *)0x7363696870617247;
switchD_10031b080_caseD_31b1c4:
joined_r0x00010031b1dc:
    if (!bVar3) goto LAB_10031b324;
switchD_10031b080_caseD_31b2f4:
    if (pcVar25 != (code *)0xe600000000000000) goto LAB_10031b324;
switchD_10031b080_caseD_31b2fc:
    _swift_bridgeObjectRelease(0xe600000000000000);
    _swift_bridgeObjectRelease(pcVar25);
    goto LAB_10031b34c;
  case (code *)0x10031b1c4:
    goto switchD_10031b080_caseD_31b1c4;
  case (code *)0x10031b1cc:
    pcVar11 = (code *)0x7265746e6957;
  case (code *)0x10031b1d8:
    bVar3 = (code *)_Var26.unknown == pcVar11;
switchD_10031b080_caseD_31b1dc:
    goto joined_r0x00010031b1dc;
  case (code *)0x10031b1dc:
    goto switchD_10031b080_caseD_31b1dc;
  case (code *)0x10031b1e8:
    pcVar11 = (code *)((ulong)pcVar11 & 0xffff00000000ffff | 0x656c706f0000);
    bVar3 = (code *)_Var26.unknown == pcVar11;
  case (code *)0x10031b1f4:
    goto joined_r0x00010031b1dc;
  case (code *)0x10031b218:
    goto LAB_10031b324;
  case (code *)0x10031b228:
    pcVar11 = (code *)((ulong)pcVar11 & 0xffffffffffff | 0x696c000000000000);
    pcVar25 = (code *)0xea00000000007473;
switchD_10031b080_caseD_31b234:
    goto joined_r0x00010031b238;
  case (code *)0x10031b234:
    goto switchD_10031b080_caseD_31b234;
  case (code *)0x10031b240:
    pcVar25 = (code *)0xe500000000000000;
switchD_10031b080_caseD_31b244:
    pcVar11 = (code *)0x656d6147;
switchD_10031b080_caseD_31b24c:
    pcVar11 = (code *)((ulong)pcVar11 & 0xffff0000ffffffff | 0x7300000000);
    if ((code *)_Var26.unknown != pcVar11) {
switchD_10031b080_caseD_31b258:
      goto LAB_10031b324;
    }
    goto switchD_10031b080_caseD_31b2f4;
  case (code *)0x10031b244:
    goto switchD_10031b080_caseD_31b244;
  case (code *)0x10031b24c:
    goto switchD_10031b080_caseD_31b24c;
  case (code *)0x10031b258:
    goto switchD_10031b080_caseD_31b258;
  case (code *)0x10031b260:
    pcVar11 = (code *)0x6143;
switchD_10031b080_caseD_31b264:
    pcVar11 = (code *)(ulong)((uint)pcVar11 & 0xffff | 0x73720000);
joined_r0x00010031b238:
    if ((code *)_Var26.unknown != pcVar11) goto LAB_10031b324;
    goto switchD_10031b080_caseD_31b2f4;
  case (code *)0x10031b264:
    goto switchD_10031b080_caseD_31b264;
  case (code *)0x10031b284:
    pcVar25 = (code *)0xe500000000000000;
switchD_10031b080_caseD_31b288:
    pcVar11 = (code *)0x656d696e41;
    if (_Var26.unknown != (undefined *)0x656d696e41) {
switchD_10031b080_caseD_31b29c:
      goto LAB_10031b324;
    }
    goto switchD_10031b080_caseD_31b2f4;
  case (code *)0x10031b288:
    goto switchD_10031b080_caseD_31b288;
  case (code *)0x10031b29c:
    goto switchD_10031b080_caseD_31b29c;
  case (code *)0x10031b2f4:
    goto switchD_10031b080_caseD_31b2f4;
  case (code *)0x10031b2fc:
    goto switchD_10031b080_caseD_31b2fc;
  case (code *)0x10031b348:
    goto switchD_10031b080_caseD_31b348;
  case (code *)0x10031b354:
    goto switchD_10031b080_caseD_31b354;
  case (code *)0x10031b380:
    goto switchD_10031b080_caseD_31b380;
  case (code *)0x10031b394:
    goto switchD_10031b080_caseD_31b394;
  case (code *)0x10031b398:
    goto switchD_10031b080_caseD_31b398;
  case (code *)0x10031b3a4:
    goto switchD_10031b080_caseD_31b3a4;
  case (code *)0x10031b3cc:
    goto switchD_10031b080_caseD_31b3cc;
  case (code *)0x10031b3e4:
    goto switchD_10031b080_caseD_31b3e4;
  case (code *)0x10031b3e8:
    goto switchD_10031b080_caseD_31b3e8;
  case (code *)0x10031b424:
    goto switchD_10031b080_caseD_31b424;
  case (code *)0x10031b43c:
switchD_10031b080_caseD_31b444:
switchD_10031b080_caseD_31b448:
    param_3 = (code *)((ulong)pcVar12 >> 1);
    pcVar19 = param_3 + -(long)pcVar11;
    if (SBORROW8((long)param_3,(long)pcVar11)) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10031b550);
      (*pcVar25)();
    }
switchD_10031b080_caseD_31b454:
    param_1 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    if (pcVar19 != (code *)0x0) {
      bVar4 = SBORROW8((long)pcVar19,1);
      bVar2 = (long)(pcVar19 + -1) < 0;
      pcVar10 = pcVar11;
      unaff_x21 = pcVar9;
switchD_10031b080_caseD_31b464:
      if (bVar2 == bVar4) {
        _Var26.unknown = &DAT_1005568f0;
switchD_10031b080_caseD_31b470:
        FUN_100002f94(_Var26.unknown,&DAT_100430c90);
        param_1 = (code *)_Var26.unknown;
switchD_10031b080_caseD_31b480:
        lVar8 = 0;
        FUN_10040211c();
        lVar22 = *(long *)(*(long *)(lVar8 + -8) + 0x48);
        uVar15 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
        uVar24 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
        _swift_allocObject(param_1,uVar24 + lVar22 * (long)pcVar19,uVar15 | 7);
        pcVar25 = param_1;
        _malloc_size();
        if (lVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10031b554);
          (*pcVar25)();
        }
        lVar8 = (long)pcVar25 - uVar24;
        if (lVar8 == -0x8000000000000000 && lVar22 == -1) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10031b558);
          (*pcVar25)();
        }
        lVar1 = 0;
        if (lVar22 != 0) {
          lVar1 = lVar8 / lVar22;
        }
        *(code **)(param_1 + 0x10) = pcVar19;
        *(long *)(param_1 + 0x18) = lVar1 << 1;
        if (pcVar10 == param_3) {
LAB_10031b548:
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10031b54c);
          (*pcVar25)();
        }
      }
      else {
        param_1 = (code *)PTR___swiftEmptyArrayStorage_100524190;
        if (pcVar10 == param_3) goto LAB_10031b548;
      }
      lVar8 = 0;
      FUN_10040211c();
      uVar15 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
      _swift_arrayInitWithCopy
                (param_1 + (uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff)),
                 unaff_x21 + *(long *)(*(long *)(lVar8 + -8) + 0x48) * (long)pcVar10,pcVar19,lVar8);
    }
    return (_StringGuts)param_1;
  case (code *)0x10031b444:
    goto switchD_10031b080_caseD_31b444;
  case (code *)0x10031b448:
    goto switchD_10031b080_caseD_31b448;
  case (code *)0x10031b454:
    goto switchD_10031b080_caseD_31b454;
  case (code *)0x10031b464:
    goto switchD_10031b080_caseD_31b464;
  case (code *)0x10031b470:
    goto switchD_10031b080_caseD_31b470;
  case (code *)0x10031b480:
    goto switchD_10031b080_caseD_31b480;
  }
LAB_10031b324:
  pcVar9 = (code *)0xe600000000000000;
  pcVar12 = pcVar25;
  bVar5 = Swift::_stringCompareWithSmolCheck
                    (_Var26,(_StringGuts)0xe600000000000000,(_StringComparisonResult)(__int8)pcVar11
                    );
  pcVar7 = (code *)(ulong)bVar5;
  _swift_bridgeObjectRelease(0xe600000000000000);
  _swift_bridgeObjectRelease(pcVar25);
switchD_10031b080_caseD_31b348:
  if (((ulong)pcVar7 & 1) != 0) {
    bVar5 = local_68 <= param_3 + 1;
    UNRECOVERED_JUMPTABLE_00 = local_68;
    pcVar16 = local_70;
    pcVar19 = local_58;
    pcVar7 = pcVar27;
switchD_10031b080_caseD_31b380:
    pcVar11 = pcVar10;
    if ((!bVar5) || (UNRECOVERED_JUMPTABLE_00 <= param_3)) {
      pcVar13 = (code *)(ulong)(byte)*pcVar16;
switchD_10031b080_caseD_31b394:
      *param_3 = SUB81(pcVar13,0);
    }
switchD_10031b080_caseD_31b398:
    param_4 = pcVar21;
    if (param_1 < pcVar16) {
switchD_10031b080_caseD_31b3a4:
      bVar4 = SBORROW8((long)param_4,(long)pcVar19);
      bVar2 = (long)param_4 - (long)pcVar19 < 0;
      bVar3 = param_4 == pcVar19;
      bVar5 = false;
      pcVar10 = pcVar11;
      pcVar20 = param_4;
      pcVar14 = pcVar16;
      if (param_4 < pcVar19) {
LAB_10031b024:
        pcVar16 = pcVar14 + -1;
        param_3 = param_3 + -1;
switchD_10031acac_caseD_f0:
        local_58 = pcVar19;
        local_70 = pcVar16;
        local_68 = pcVar14;
        goto LAB_10031b054;
      }
    }
    param_1 = pcVar16;
    if (pcVar16 == param_4) goto LAB_10031b3f0;
    goto LAB_10031b3f8;
  }
LAB_10031b34c:
  bVar5 = local_58 <= pcVar19;
  pcVar13 = local_58;
switchD_10031b080_caseD_31b354:
  if ((!bVar5) || (pcVar13 <= param_3)) {
    *param_3 = *pcVar6;
  }
  param_3 = param_3 + -1;
  bVar5 = pcVar6 <= pcVar21;
  bVar4 = SBORROW8((long)pcVar21,(long)pcVar6);
  bVar2 = (long)pcVar21 - (long)pcVar6 < 0;
  bVar3 = pcVar21 == pcVar6;
  pcVar16 = local_70;
  pcVar14 = local_68;
  _Var26.unknown = pcVar6;
switchD_10031acac_caseD_ac:
  pcVar19 = (code *)_Var26.unknown;
  pcVar20 = pcVar21;
  UNRECOVERED_JUMPTABLE_00 = pcVar14;
  local_58 = pcVar19;
  if (!bVar5) goto LAB_10031b054;
LAB_10031b3c4:
  bVar3 = UNRECOVERED_JUMPTABLE_00 == pcVar21;
  param_4 = pcVar21;
  pcVar21 = UNRECOVERED_JUMPTABLE_00;
switchD_10031b080_caseD_31b3cc:
  pcVar16 = pcVar21;
  param_1 = pcVar16;
  if (bVar3) goto LAB_10031b3f0;
LAB_10031b3f8:
  _memmove(param_1,param_4,(long)pcVar19 - (long)param_4);
LAB_10031b408:
  _Var26.unknown = (code *)0x1;
switchD_10031b080_caseD_31b424:
  return (_StringGuts)_Var26.unknown;
}

