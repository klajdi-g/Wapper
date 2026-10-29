// rea decompile_all
// name: FUN_1003e2eb8
// address: 0x1003e2eb8
// body: available
// range: 0x1003e2eb8-0x1003e308b inclusive
// range: 0x1003e3094-0x1003e30ab inclusive
// range: 0x1003e30b4-0x1003e30c3 inclusive
// range: 0x1003e30c8-0x1003e30db inclusive
// range: 0x1003e30e8-0x1003e3153 inclusive
// range: 0x1003e3168-0x1003e319b inclusive
// range: 0x1003e31d4-0x1003e31ef inclusive
// range: 0x1003e3204-0x1003e3463 inclusive
// range: 0x1003e3468-0x1003e3483 inclusive
// range: 0x1003e3488-0x1003e34b3 inclusive
// range: 0x1003e34bc-0x1003e34d3 inclusive
// range: 0x1003e34d8-0x1003e3513 inclusive
// range: 0x1003e3518-0x1003e352b inclusive
// range: 0x1003e353c-0x1003e3557 inclusive
// range: 0x1003e35ac-0x1003e35c7 inclusive
// range: 0x1003e35dc-0x1003e36e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_1003e2eb8(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  _StringGuts _Var4;
  _StringComparisonResult expecting;
  byte *pbVar5;
  _StringGuts _Var6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte *pbVar12;
  byte unaff_w21;
  size_t sVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *local_70;
  byte *local_68;
  
  pbVar14 = param_2 + -(long)param_1;
  sVar13 = (long)param_3 - (long)param_2;
  pbVar12 = param_4;
  if ((long)pbVar14 < (long)sVar13) {
    if ((param_4 != param_1) || (pbVar5 = param_3, param_2 <= param_4)) {
      pbVar5 = pbVar14;
      _memmove(param_4,param_1,(size_t)pbVar14);
    }
    pbVar16 = param_4 + (long)pbVar14;
    pbVar3 = param_1;
    if ((0 < (long)pbVar14) && (param_2 < param_3)) {
      pbVar15 = (byte *)0x736569766f4d;
      bVar2 = unaff_w21;
      do {
        bVar1 = param_2 == param_3;
        UNRECOVERED_JUMPTABLE = (code *)(ulong)*param_2;
        uVar7 = (ulong)*pbVar12;
        puVar10 = (undefined *)(ulong)(byte)UNRECOVERED_JUMPTABLE[0x100435a98];
        pbVar8 = (byte *)((long)puVar10 * 4 + 0x1003e2f68);
        pbVar3 = pbVar15;
        switch(*param_2) {
        case 0:
          goto switchD_1003e2f64_caseD_0;
        default:
        case 0xea:
          pbVar15 = (byte *)0x70617247;
switchD_1003e2f64_caseD_27:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff0000ffffffff | 0x7363696800000000);
switchD_1003e2f64_caseD_0:
switchD_1003e2f64_caseD_93:
          puVar10 = &DAT_100435000;
switchD_1003e2f64_caseD_70:
          puVar10 = puVar10 + 0xaa6;
switchD_1003e2f64_caseD_14:
          UNRECOVERED_JUMPTABLE = (code *)(&UNK_1003e308c + (ulong)(byte)puVar10[uVar7] * 4);
switchD_1003e2f64_caseD_88:
                    /* WARNING: Could not recover jumptable at 0x0001003e3088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return pbVar15;
        case 2:
        case 0x24:
        case 0x17:
        case 0x1d:
        case 0xe4:
          pbVar15 = (byte *)0x73656d6147;
switchD_1003e2f64_caseD_21:
          goto switchD_1003e2f64_caseD_0;
        case 3:
        case 0x38:
          pbVar15 = (byte *)0x73726143;
        case 0x29:
          goto switchD_1003e2f64_caseD_0;
        case 4:
        case 0xd6:
          pbVar15 = (byte *)0x6550;
        case 0x28:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff00000000ffff | 0x656c706f0000);
switchD_1003e2f64_caseD_25:
          goto switchD_1003e2f64_caseD_0;
        case 5:
        case 0x23:
          pbVar15 = (byte *)0x6d696e41;
        case 0x11:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff0000ffffffff | 0x6500000000);
switchD_1003e2f64_caseD_dc:
          goto switchD_1003e2f64_caseD_0;
        case 6:
          pbVar15 = (byte *)0x6568744f;
        case 0x13:
        case 0xe5:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff0000ffffffff | 0x7200000000);
          goto switchD_1003e2f64_caseD_0;
        case 7:
        case 0x10:
          pbVar15 = (byte *)0x7053;
switchD_1003e2f64_caseD_26:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffffffff0000ffff | 0x63610000);
switchD_1003e2f64_caseD_fc:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff0000ffffffff | 0x6500000000);
          goto switchD_1003e2f64_caseD_0;
        case 8:
          pbVar15 = (byte *)0x7574614e;
        case 0x48:
        case 0xc0:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff0000ffffffff | 0x657200000000);
          goto switchD_1003e2f64_caseD_0;
        case 9:
        case 0x1a:
          pbVar15 = (byte *)0x694d;
        case 0x1f:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff00000000ffff | 0x696c616d696e0000);
switchD_1003e2f64_caseD_22:
          goto switchD_1003e2f64_caseD_0;
        case 10:
          pbVar15 = (byte *)0x736c616d696e41;
        case 0x1b:
          goto switchD_1003e2f64_caseD_0;
        case 0xb:
          pbVar15 = (byte *)0x746e6957;
        case 0x19:
        case 0x20:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff0000ffffffff | 0x726500000000);
          goto switchD_1003e2f64_caseD_0;
        case 0xc:
        case 0x12:
          pbVar15 = (byte *)0x6950;
        case 0x30:
        case 0xbe:
        case 0xd2:
        case 0xda:
        case 0xe2:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff00000000ffff | 0x416c65780000);
switchD_1003e2f64_caseD_1e:
          pbVar15 = (byte *)((ulong)pbVar15 | 0x7472000000000000);
switchD_1003e2f64_caseD_f2:
          goto switchD_1003e2f64_caseD_0;
        case 0xd:
          pbVar15 = (byte *)0x6353;
        case 0x40:
          pbVar15 = (byte *)((ulong)pbVar15 & 0xffff00000000ffff | 0x6946690000);
switchD_1003e2f64_caseD_15:
          goto switchD_1003e2f64_caseD_0;
        case 0xe:
        case 0x50:
          goto switchD_1003e2f64_caseD_e;
        case 0x14:
          goto switchD_1003e2f64_caseD_14;
        case 0x15:
          goto switchD_1003e2f64_caseD_15;
        case 0x16:
        case 0xd0:
        case 0xd8:
        case 0xe0:
          goto switchD_1003e2f64_caseD_16;
        case 0x18:
        case 0xa8:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffff0000ffff | 0x70610000);
        case 0x8f:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffff0000ffffffff | 0x696800000000);
switchD_1003e2f64_caseD_b0:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0x7363000000000000);
          if (pbVar5 != (byte *)0x736569766f4d) {
switchD_1003e2f64_caseD_e:
            pbVar3 = pbVar14;
            break;
          }
          goto LAB_1003e31d4;
        case 0x1e:
          goto switchD_1003e2f64_caseD_1e;
        case 0x21:
          goto switchD_1003e2f64_caseD_21;
        case 0x22:
          goto switchD_1003e2f64_caseD_22;
        case 0x25:
          goto switchD_1003e2f64_caseD_25;
        case 0x26:
          goto switchD_1003e2f64_caseD_26;
        case 0x27:
        case 0xca:
        case 0xcc:
          goto switchD_1003e2f64_caseD_27;
        case 0x58:
        case 0xf0:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffff0000ffff | 0x706f0000);
switchD_1003e2f64_caseD_16:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffff0000ffffffff | 0x656c00000000);
          pbVar3 = pbVar14;
          if (pbVar5 != (byte *)0x736569766f4d) break;
LAB_1003e31d4:
          pbVar3 = pbVar14;
          if (pbVar14 != (byte *)0xe600000000000000) break;
          _swift_bridgeObjectRelease(0xe600000000000000);
          _swift_bridgeObjectRelease(0xe600000000000000);
          goto LAB_1003e3248;
        case 0x60:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffff0000ffffffff | 0x416c00000000);
        case 0x77:
        case 0xad:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0x7472000000000000);
switchD_1003e2f64_caseD_ab:
          if (pbVar5 != (byte *)0x736569766f4d) {
switchD_1003e2f64_caseD_74:
            pbVar3 = pbVar14;
            break;
          }
          goto LAB_1003e31d4;
        case 0x68:
        case 0xc1:
          pbVar5 = (byte *)0x656d696e41;
          pbVar3 = pbVar14;
          break;
        case 0x70:
          goto switchD_1003e2f64_caseD_70;
        case 0x71:
        case 0x72:
        case 0x79:
        case 0x8a:
        case 0x97:
        case 0xac:
        case 0xb1:
        case 0xb5:
          goto switchD_1003e2f64_caseD_71;
        case 0x73:
        case 0x7a:
        case 0xae:
        case 0xb6:
          goto switchD_1003e2f64_caseD_73;
        case 0x74:
        case 0xaf:
          goto switchD_1003e2f64_caseD_74;
        case 0x75:
        case 0x8c:
        case 0x90:
        case 0xb3:
        case 0xb8:
          goto switchD_1003e2f64_caseD_75;
        case 0x76:
        case 0x8d:
        case 0x98:
        case 0xb2:
          pbVar14 = (byte *)0xe500000000000000;
switchD_1003e2f64_caseD_71:
          pbVar5 = (byte *)0x73656d6147;
switchD_1003e2f64_caseD_73:
          if (pbVar5 != (byte *)0x736569766f4d) {
switchD_1003e2f64_caseD_78:
            pbVar3 = pbVar14;
            break;
          }
          goto LAB_1003e31d4;
        case 0x78:
        case 0x95:
        case 0x96:
        case 0x9a:
        case 0xb4:
          goto switchD_1003e2f64_caseD_78;
        case 0x88:
          goto switchD_1003e2f64_caseD_88;
        case 0x89:
        case 0x9c:
          goto switchD_1003e2f64_caseD_89;
        case 0x8b:
        case 0xba:
          goto switchD_1003e2f64_caseD_8b;
        case 0x8e:
          goto switchD_1003e2f64_caseD_8e;
        case 0x91:
          goto switchD_1003e2f64_caseD_91;
        case 0x92:
        case 0x9d:
        case 0xa9:
        case 0xb9:
        case 0xbc:
          pbVar5 = (byte *)0x696e694d;
switchD_1003e2f64_caseD_8e:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffff | 0x696c616d00000000);
switchD_1003e2f64_caseD_75:
          pbVar14 = (byte *)0xea00000000007473;
switchD_1003e2f64_caseD_91:
          bVar1 = pbVar5 == (byte *)0x736569766f4d;
switchD_1003e2f64_caseD_89:
          goto joined_r0x0001003e314c;
        case 0x93:
          goto switchD_1003e2f64_caseD_93;
        case 0x94:
          pbVar14 = (byte *)0xe400000000000000;
          pbVar5 = (byte *)0x6143;
switchD_1003e2f64_caseD_8b:
          pbVar5 = (byte *)(ulong)((uint)pbVar5 & 0xffff | 0x73720000);
          bVar1 = pbVar5 == (byte *)0x736569766f4d;
switchD_1003e2f64_caseD_9b:
joined_r0x0001003e314c:
          pbVar3 = pbVar14;
          if (!bVar1) break;
          goto LAB_1003e31d4;
        case 0x99:
          pbVar5 = (byte *)((ulong)pbVar5 & 0xffff0000ffffffff | 0x726500000000);
          if (pbVar5 != (byte *)0x736569766f4d) goto switchD_1003e2f64_caseD_b7;
          goto LAB_1003e31d4;
        case 0x9b:
        case 0xaa:
          goto switchD_1003e2f64_caseD_9b;
        case 0xab:
          goto switchD_1003e2f64_caseD_ab;
        case 0xb0:
          goto switchD_1003e2f64_caseD_b0;
        case 0xb7:
switchD_1003e2f64_caseD_b7:
          pbVar3 = pbVar14;
          break;
        case 0xbd:
        case 0xd1:
        case 0xd9:
        case 0xe1:
        case 0xf8:
          pbVar5 = (byte *)0x6946696353;
          pbVar3 = (byte *)0xe500000000000000;
          break;
        case 0xd4:
          goto switchD_1003e2f64_caseD_d4;
        case 0xdc:
          goto switchD_1003e2f64_caseD_dc;
        case 0xdd:
        case 0xf9:
          goto switchD_1003e2f64_caseD_dd;
        case 0xe6:
          goto switchD_1003e2f64_caseD_e6;
        case 0xe7:
switchD_1003e2f64_caseD_e7:
          _Var4.unknown = (undefined *)0x6550;
          goto switchD_1003e3338_caseD_44;
        case 0xf1:
switchD_1003e2f64_caseD_f1:
          _Var4.unknown = (undefined *)0x70617247;
          goto switchD_1003e3338_caseD_43;
        case 0xf2:
          goto switchD_1003e2f64_caseD_f2;
        case 0xfc:
          goto switchD_1003e2f64_caseD_fc;
        }
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,
                           (_StringComparisonResult)(__int8)pbVar5);
        _swift_bridgeObjectRelease(0xe600000000000000);
        pbVar14 = pbVar3;
switchD_1003e2f64_caseD_dd:
        _swift_bridgeObjectRelease(pbVar3);
        if ((bVar2 & 1) == 0) {
LAB_1003e3248:
          param_4 = pbVar12 + 1;
          pbVar8 = param_2;
          param_2 = pbVar12;
          pbVar3 = param_4;
          if (pbVar12 <= param_1) goto joined_r0x0001003e3264;
LAB_1003e3270:
          *param_1 = *param_2;
        }
        else {
          pbVar8 = param_2 + 1;
          param_4 = pbVar12;
          pbVar3 = pbVar8;
          if (param_1 < param_2) goto LAB_1003e3270;
joined_r0x0001003e3264:
          if (pbVar3 <= param_1) goto LAB_1003e3270;
        }
        param_1 = param_1 + 1;
        pbVar3 = param_1;
      } while ((param_4 < pbVar16) && (pbVar12 = param_4, param_2 = pbVar8, pbVar8 < param_3));
LAB_1003e367c:
      pbVar15 = pbVar16;
      local_70 = pbVar3;
      if (pbVar3 != param_4) goto LAB_1003e36b0;
      goto LAB_1003e36a8;
    }
  }
  else {
    if ((param_4 != param_2) || (param_3 <= param_4)) {
      _memmove(param_4,param_2,sVar13);
    }
    pbVar15 = param_4 + sVar13;
    pbVar16 = pbVar15;
    pbVar3 = param_2;
    if ((param_1 < param_2) && (bVar1 = sVar13 == 1, 0 < (long)sVar13)) {
      pbVar5 = (byte *)0x736569766f4d;
      goto LAB_1003e32dc;
    }
  }
  pbVar15 = pbVar16;
  local_70 = pbVar3;
  if (pbVar3 != param_4) goto LAB_1003e36b0;
  goto LAB_1003e36a8;
switchD_1003e2f64_caseD_d4:
  _Var4.unknown = pbVar5;
  pbVar5 = pbVar12;
LAB_1003e330c:
  param_4 = param_2;
  pbVar16 = pbVar15 + -1;
  puVar10 = (undefined *)(ulong)*pbVar16;
  uVar7 = (ulong)*pbVar8;
  puVar11 = (undefined *)(ulong)(&switchD_1003e3338::switchdataD_100435a7c)[(long)puVar10];
  uVar9 = (long)puVar11 * 4 + 0x1003e333c;
  _Var6.unknown = _Var4.unknown;
  switch(*pbVar16) {
  case 0:
  case 0x1c:
    goto switchD_1003e3338_caseD_0;
  default:
    goto switchD_1003e2f64_caseD_f1;
  case 2:
  case 0x1e:
  case 0x40:
  case 0x17:
  case 0x33:
  case 0x39:
    _Var4.unknown = (byte *)0x73656d6147;
switchD_1003e3338_caseD_3d:
    goto switchD_1003e3338_caseD_0;
  case 3:
  case 0x1f:
  case 0x54:
    _Var4.unknown = (byte *)0x73726143;
  case 0x45:
    goto switchD_1003e3338_caseD_0;
  case 4:
  case 0x20:
  case 0xf2:
    goto switchD_1003e2f64_caseD_e7;
  case 5:
  case 0x21:
  case 0x3f:
    _Var4.unknown = (undefined *)0x6d696e41;
  case 0x11:
  case 0x2d:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff0000ffffffff | 0x6500000000);
switchD_1003e3338_caseD_f8:
    goto switchD_1003e3338_caseD_0;
  case 6:
  case 0x22:
    _Var4.unknown = (undefined *)0x6568744f;
  case 0x13:
  case 0x2f:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff0000ffffffff | 0x7200000000);
    goto switchD_1003e3338_caseD_0;
  case 7:
  case 0x23:
  case 0x10:
  case 0x2c:
    _Var4.unknown = (undefined *)0x7053;
switchD_1003e3338_caseD_42:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff00000000ffff | 0x6563610000);
    goto switchD_1003e3338_caseD_0;
  case 8:
  case 0x24:
    _Var4.unknown = (undefined *)0x7574614e;
  case 100:
  case 0xdc:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff0000ffffffff | 0x657200000000);
    goto switchD_1003e3338_caseD_0;
  case 9:
  case 0x1a:
  case 0x25:
  case 0x36:
    _Var4.unknown = (undefined *)0x694d;
  case 0x3b:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff | 0x696c616d696e0000);
switchD_1003e3338_caseD_3e:
    goto switchD_1003e3338_caseD_0;
  case 10:
  case 0x26:
    _Var4.unknown = (byte *)0x736c616d696e41;
  case 0x1b:
  case 0x37:
    goto switchD_1003e3338_caseD_0;
  case 0xb:
  case 0x27:
    _Var4.unknown = (undefined *)0x746e6957;
  case 0x19:
  case 0x35:
  case 0x3c:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff0000ffffffff | 0x726500000000);
    goto switchD_1003e3338_caseD_0;
  case 0xc:
  case 0x12:
  case 0x28:
  case 0x2e:
    _Var4.unknown = (undefined *)0x6950;
  case 0x4c:
  case 0xda:
  case 0xee:
  case 0xf6:
  case 0xfe:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff00000000ffff | 0x416c65780000);
switchD_1003e3338_caseD_3a:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffffffffffff | 0x7472000000000000);
    goto switchD_1003e3338_caseD_0;
  case 0xd:
  case 0x29:
    _Var4.unknown = (undefined *)0x6353;
  case 0x5c:
    _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff00000000ffff | 0x6946690000);
switchD_1003e3338_caseD_15:
    goto switchD_1003e3338_caseD_0;
  case 0xe:
  case 0x2a:
  case 0x6c:
    goto switchD_1003e3338_caseD_e;
  case 0x14:
  case 0x30:
    goto switchD_1003e3338_caseD_14;
  case 0x15:
  case 0x31:
    goto switchD_1003e3338_caseD_15;
  case 0x16:
  case 0x32:
  case 0xec:
  case 0xf4:
  case 0xfc:
    goto switchD_1003e3338_caseD_16;
  case 0x18:
  case 0x34:
  case 0xc4:
    _Var6.unknown = (undefined *)0x7247;
  case 0xab:
    _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffffffff0000ffff | 0x70610000);
switchD_1003e3338_caseD_cc:
    _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffffffff | 0x7363696800000000);
    bVar1 = _Var4.unknown == _Var6.unknown;
switchD_1003e3338_caseD_e:
    expecting.value = (__int8)_Var6.unknown;
    if (bVar1) goto LAB_1003e35ac;
    goto LAB_1003e35dc;
  case 0x3a:
    goto switchD_1003e3338_caseD_3a;
  case 0x3d:
    goto switchD_1003e3338_caseD_3d;
  case 0x3e:
    goto switchD_1003e3338_caseD_3e;
  case 0x41:
    goto switchD_1003e3338_caseD_41;
  case 0x42:
    goto switchD_1003e3338_caseD_42;
  case 0x43:
  case 0xe6:
  case 0xe8:
    goto switchD_1003e3338_caseD_43;
  case 0x44:
    goto switchD_1003e3338_caseD_44;
  case 0x74:
    break;
  case 0x7c:
    _Var6.unknown = (undefined *)((ulong)_Var4.unknown & 0xffffffff0000ffff | 0x65780000);
  case 0x93:
  case 0xc9:
    _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffff0000ffffffff | 0x416c00000000);
switchD_1003e3338_caseD_c7:
    _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffffffffffff | 0x7472000000000000);
    bVar1 = _Var4.unknown == _Var6.unknown;
switchD_1003e3338_caseD_90:
    if (bVar1) goto LAB_1003e35ac;
switchD_1003e3338_caseD_ae:
    expecting.value = (__int8)_Var6.unknown;
    goto LAB_1003e35dc;
  case 0x84:
  case 0xdd:
    pbVar14 = (byte *)0xe500000000000000;
    _Var6.unknown = (undefined *)0x656d696e41;
    if (_Var4.unknown != (undefined *)0x656d696e41) goto switchD_1003e3338_caseD_d9;
    goto LAB_1003e35ac;
  case 0x8c:
    goto switchD_1003e3338_caseD_8c;
  case 0x8d:
  case 0x8e:
  case 0x95:
  case 0xa6:
  case 0xb3:
  case 200:
  case 0xcd:
  case 0xd1:
    pbVar14 = (byte *)0xe500000000000000;
    _Var6.unknown = (undefined *)0x656d6147;
  case 0x8f:
  case 0x96:
  case 0xca:
  case 0xd2:
    _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffff0000ffffffff | 0x7300000000);
    bVar1 = _Var4.unknown == _Var6.unknown;
switchD_1003e3338_caseD_94:
    if (bVar1) goto LAB_1003e35ac;
switchD_1003e3338_caseD_b0:
    expecting.value = (__int8)_Var6.unknown;
    goto LAB_1003e35dc;
  case 0x90:
  case 0xcb:
    goto switchD_1003e3338_caseD_90;
  case 0x91:
  case 0xa8:
  case 0xac:
  case 0xcf:
  case 0xd4:
    goto switchD_1003e3338_caseD_91;
  case 0x92:
  case 0xa9:
  case 0xb4:
  case 0xce:
    goto switchD_1003e3338_caseD_92;
  case 0x94:
  case 0xb1:
  case 0xb2:
  case 0xb6:
  case 0xd0:
    goto switchD_1003e3338_caseD_94;
  case 0xa4:
    goto switchD_1003e3338_caseD_a4;
  case 0xa5:
  case 0xb8:
    goto switchD_1003e3338_caseD_a5;
  case 0xa7:
  case 0xd6:
    _Var6.unknown = (undefined *)0x73726143;
  case 0xb7:
  case 0xc6:
    goto joined_r0x0001003e3524;
  case 0xaa:
    _Var6.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff00000000ffff | 0x616d696e0000);
switchD_1003e3338_caseD_91:
    _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffffffffffff | 0x696c000000000000);
    pbVar14 = (byte *)0x7473;
switchD_1003e3338_caseD_ad:
    pbVar14 = (byte *)((ulong)pbVar14 & 0xffffffffffff | 0xea00000000000000);
switchD_1003e3338_caseD_a5:
    if (_Var4.unknown == _Var6.unknown) goto LAB_1003e35ac;
switchD_1003e3338_caseD_92:
    expecting.value = (__int8)_Var6.unknown;
    goto LAB_1003e35dc;
  case 0xad:
    goto switchD_1003e3338_caseD_ad;
  case 0xae:
  case 0xb9:
  case 0xc5:
  case 0xd5:
  case 0xd8:
    goto switchD_1003e3338_caseD_ae;
  case 0xaf:
    goto switchD_1003e3338_caseD_af;
  case 0xb0:
    goto switchD_1003e3338_caseD_b0;
  case 0xb5:
    _Var6.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff00000000ffff | 0x7265746e0000);
    bVar1 = _Var4.unknown == _Var6.unknown;
  case 0xd3:
    expecting.value = (__int8)_Var6.unknown;
    if (bVar1) goto LAB_1003e35ac;
    goto LAB_1003e35dc;
  case 199:
    goto switchD_1003e3338_caseD_c7;
  case 0xcc:
    goto switchD_1003e3338_caseD_cc;
  case 0xd9:
  case 0xed:
  case 0xf5:
  case 0xfd:
switchD_1003e3338_caseD_d9:
    expecting.value = (__int8)_Var6.unknown;
    goto LAB_1003e35dc;
  case 0xf0:
    goto switchD_1003e3338_caseD_f0;
  case 0xf8:
    goto switchD_1003e3338_caseD_f8;
  case 0xf9:
    goto switchD_1003e3338_caseD_f9;
  }
  _Var6.unknown = (undefined *)0x6550;
switchD_1003e3338_caseD_16:
  _Var6.unknown = (undefined *)((ulong)_Var6.unknown & 0xffff00000000ffff | 0x656c706f0000);
joined_r0x0001003e3524:
  expecting.value = (__int8)_Var6.unknown;
  if (_Var4.unknown == _Var6.unknown) {
LAB_1003e35ac:
    expecting.value = (__int8)_Var6.unknown;
    if (pbVar14 != (byte *)0xe600000000000000) goto LAB_1003e35dc;
    _swift_bridgeObjectRelease(0xe600000000000000);
    _swift_bridgeObjectRelease(0xe600000000000000);
LAB_1003e3604:
    if ((param_3 + 1 < pbVar15) || (pbVar15 <= param_3)) {
      *param_3 = *pbVar16;
    }
    param_3 = param_3 + -1;
    bVar1 = param_4 == pbVar16;
    _Var4.unknown = pbVar5;
    pbVar8 = local_70;
    pbVar5 = param_4;
    pbVar3 = local_68;
    param_2 = local_68;
    pbVar15 = pbVar16;
    if (pbVar16 <= param_4) goto LAB_1003e367c;
    goto LAB_1003e330c;
  }
LAB_1003e35dc:
  bVar2 = Swift::_stringCompareWithSmolCheck(_Var4,(_StringGuts)0xe600000000000000,expecting);
  _swift_bridgeObjectRelease(0xe600000000000000);
switchD_1003e3338_caseD_f9:
  _swift_bridgeObjectRelease(pbVar14);
  if ((bVar2 & 1) == 0) goto LAB_1003e3604;
  if ((param_3 + 1 < local_68) || (local_68 <= param_3)) {
    *param_3 = *local_70;
  }
  if ((local_70 <= param_1) ||
     (bVar1 = param_4 == pbVar15, pbVar12 = param_4, param_2 = local_70, pbVar15 <= param_4))
  goto LAB_1003e3668;
LAB_1003e32dc:
  pbVar8 = param_2 + -1;
  param_3 = param_3 + -1;
  local_70 = pbVar8;
  local_68 = param_2;
  bVar2 = unaff_w21;
  goto switchD_1003e2f64_caseD_d4;
switchD_1003e3338_caseD_44:
  _Var4.unknown = (undefined *)((ulong)_Var4.unknown & 0xffff00000000ffff | 0x656c706f0000);
switchD_1003e3338_caseD_41:
  goto switchD_1003e3338_caseD_0;
switchD_1003e3338_caseD_43:
  pbVar15 = (byte *)((ulong)_Var4.unknown & 0xffff0000ffffffff | 0x696800000000);
switchD_1003e2f64_caseD_e6:
  _Var4.unknown = (undefined *)((ulong)pbVar15 & 0xffffffffffff | 0x7363000000000000);
switchD_1003e3338_caseD_0:
switchD_1003e3338_caseD_af:
switchD_1003e3338_caseD_8c:
  puVar11 = &DAT_100435000;
switchD_1003e3338_caseD_14:
  puVar10 = &UNK_1003e3464;
  uVar9 = (ulong)(byte)puVar11[uVar7 + 0xa8a];
switchD_1003e3338_caseD_a4:
                    /* WARNING: Could not recover jumptable at 0x0001003e3460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(puVar10 + uVar9 * 4))();
  return _Var4.unknown;
LAB_1003e3668:
  pbVar16 = pbVar15;
  pbVar3 = local_70;
  if (local_70 != param_4) goto LAB_1003e36b0;
LAB_1003e36a8:
  pbVar16 = pbVar15;
  pbVar3 = local_70;
  if (local_70 < pbVar15) {
    return (byte *)0x1;
  }
LAB_1003e36b0:
  _memmove(pbVar3,param_4,(long)pbVar16 - (long)param_4);
switchD_1003e3338_caseD_f0:
  return (byte *)0x1;
}

