// rea decompile_all
// name: FUN_1003bcb8c
// address: 0x1003bcb8c
// body: available
// range: 0x1003bcb8c-0x1003bccf3 inclusive
// range: 0x1003bcd00-0x1003bcd43 inclusive
// range: 0x1003bcd54-0x1003bcd87 inclusive
// range: 0x1003bcd8c-0x1003bcdbb inclusive
// range: 0x1003bcdd4-0x1003bcde7 inclusive
// range: 0x1003bcdec-0x1003bce03 inclusive
// range: 0x1003bce3c-0x1003bce4b inclusive
// range: 0x1003bce60-0x1003bce9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1003bcb8c(byte *param_1,byte *param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  byte *UNRECOVERED_JUMPTABLE;
  ulong unaff_x22;
  
  uVar2 = 0x736569766f4d;
  puVar3 = (undefined *)(ulong)*param_1;
  UNRECOVERED_JUMPTABLE = &switchD_1003bcbd0::switchdataD_100435a60;
  switch(*param_1) {
  case 0:
  case 0x1c:
  case 0x38:
    goto switchD_1003bcbd0_caseD_0;
  default:
    uVar2 = 0x70617247;
  case 0x5f:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x7363696800000000;
switchD_1003bcbd0_caseD_0:
switchD_1003bcbd0_caseD_cb:
    puVar3 = &DAT_100435000;
switchD_1003bcbd0_caseD_a8:
    puVar3 = puVar3 + 0xa6e;
switchD_1003bcbd0_caseD_14:
    UNRECOVERED_JUMPTABLE = &UNK_1003bccf4 + (ulong)(byte)puVar3[*param_2] * 4;
switchD_1003bcbd0_caseD_c0:
                    /* WARNING: Could not recover jumptable at 0x0001003bccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 2:
  case 0x1e:
  case 0x3a:
  case 0x5c:
  case 0x17:
  case 0x33:
  case 0x4f:
  case 0x55:
    uVar2 = 0x73656d6147;
switchD_1003bcbd0_caseD_59:
    goto switchD_1003bcbd0_caseD_0;
  case 3:
  case 0x1f:
  case 0x3b:
  case 0x70:
    uVar2 = 0x73726143;
  case 0x61:
    goto switchD_1003bcbd0_caseD_0;
  case 4:
  case 0x20:
  case 0x3c:
    uVar2 = 0x6550;
  case 0x60:
    uVar2 = uVar2 & 0xffff00000000ffff | 0x656c706f0000;
switchD_1003bcbd0_caseD_5d:
    goto switchD_1003bcbd0_caseD_0;
  case 5:
  case 0x21:
  case 0x3d:
  case 0x5b:
    uVar2 = 0x6d696e41;
  case 0x11:
  case 0x2d:
  case 0x49:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x6500000000;
    goto switchD_1003bcbd0_caseD_0;
  case 6:
  case 0x22:
  case 0x3e:
    uVar2 = 0x6568744f;
  case 0x13:
  case 0x2f:
  case 0x4b:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x7200000000;
    goto switchD_1003bcbd0_caseD_0;
  case 7:
  case 0x23:
  case 0x3f:
  case 0x10:
  case 0x2c:
  case 0x48:
    uVar2 = 0x7053;
switchD_1003bcbd0_caseD_5e:
    uVar2 = uVar2 & 0xffff00000000ffff | 0x6563610000;
    goto switchD_1003bcbd0_caseD_0;
  case 8:
  case 0x24:
  case 0x40:
    uVar2 = 0x7574614e;
  case 0x80:
  case 0xf8:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x657200000000;
    goto switchD_1003bcbd0_caseD_0;
  case 9:
  case 0x1a:
  case 0x25:
  case 0x36:
  case 0x41:
  case 0x52:
    uVar2 = 0x694d;
  case 0x57:
    uVar2 = uVar2 & 0xffff00000000ffff | 0x696c616d696e0000;
switchD_1003bcbd0_caseD_5a:
    goto switchD_1003bcbd0_caseD_0;
  case 10:
  case 0x26:
  case 0x42:
    uVar2 = 0x736c616d696e41;
  case 0x1b:
  case 0x37:
  case 0x53:
    goto switchD_1003bcbd0_caseD_0;
  case 0xb:
  case 0x27:
  case 0x43:
    uVar2 = 0x746e6957;
  case 0x19:
  case 0x35:
  case 0x51:
  case 0x58:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x726500000000;
    goto switchD_1003bcbd0_caseD_0;
  case 0xc:
  case 0x12:
  case 0x28:
  case 0x2e:
  case 0x44:
  case 0x4a:
    uVar2 = 0x6950;
  case 0x68:
  case 0xf6:
    uVar2 = uVar2 & 0xffff00000000ffff | 0x416c65780000;
switchD_1003bcbd0_caseD_56:
    uVar2 = uVar2 | 0x7472000000000000;
    goto switchD_1003bcbd0_caseD_0;
  case 0xd:
  case 0x29:
  case 0x45:
    uVar2 = 0x6353;
  case 0x78:
    uVar2 = uVar2 & 0xffff00000000ffff | 0x6946690000;
switchD_1003bcbd0_caseD_15:
    goto switchD_1003bcbd0_caseD_0;
  case 0xe:
  case 0x2a:
  case 0x46:
  case 0x88:
    uVar2 = 0x7265746e6957;
  case 0xd1:
    if (uVar2 == 0x736569766f4d) {
LAB_1003bce3c:
      if (unaff_x22 == 0xe600000000000000) {
        uVar2 = 0;
        goto LAB_1003bce74;
      }
    }
    break;
  case 0x14:
  case 0x30:
  case 0x4c:
    goto switchD_1003bcbd0_caseD_14;
  case 0x15:
  case 0x31:
  case 0x4d:
    goto switchD_1003bcbd0_caseD_15;
  case 0x16:
  case 0xef:
    uVar2 = 0x706f6550;
  case 0x90:
    uVar2 = uVar2 & 0xffff0000ffffffff | 0x656c00000000;
switchD_1003bcbd0_caseD_32:
joined_r0x0001003bcd0c:
    if (uVar2 != 0x736569766f4d) break;
    goto LAB_1003bce3c;
  case 0x18:
  case 0x34:
  case 0x50:
  case 0xe0:
    uVar2 = 0x696869766f4d;
  case 199:
    uVar2 = uVar2 | 0x7363000000000000;
switchD_1003bcbd0_caseD_e8:
    goto joined_r0x0001003bcd0c;
  case 0x32:
  case 0x4e:
    goto switchD_1003bcbd0_caseD_32;
  case 0x56:
    goto switchD_1003bcbd0_caseD_56;
  case 0x59:
    goto switchD_1003bcbd0_caseD_59;
  case 0x5a:
    goto switchD_1003bcbd0_caseD_5a;
  case 0x5d:
    goto switchD_1003bcbd0_caseD_5d;
  case 0x5e:
    goto switchD_1003bcbd0_caseD_5e;
  case 0x98:
    uVar2 = 0x7472736569766f4d;
  case 0xaf:
  case 0xe5:
    in_ZR = uVar2 == 0x736569766f4d;
switchD_1003bcbd0_caseD_e3:
joined_r0x0001003bcd9c:
    if (!(bool)in_ZR) break;
    goto LAB_1003bce3c;
  case 0xa0:
  case 0xf9:
    uVar2 = 0x656d696f4d;
    break;
  case 0xa8:
    goto switchD_1003bcbd0_caseD_a8;
  case 0xa9:
  case 0xaa:
  case 0xb1:
  case 0xc2:
  case 0xcf:
  case 0xe4:
  case 0xe9:
  case 0xed:
    goto switchD_1003bcbd0_caseD_a9;
  case 0xab:
  case 0xb2:
  case 0xe6:
  case 0xee:
    goto switchD_1003bcbd0_caseD_ab;
  case 0xac:
  case 0xe7:
    uVar2 = 0x694d;
  case 0xca:
  case 0xd5:
  case 0xe1:
  case 0xf1:
  case 0xf4:
    uVar2 = uVar2 & 0xffff00000000ffff | 0x616d696e0000;
switchD_1003bcbd0_caseD_c6:
    uVar2 = uVar2 | 0x696c000000000000;
    unaff_x22 = 0x7473;
switchD_1003bcbd0_caseD_ad:
    unaff_x22 = unaff_x22 & 0xffffffffffff | 0xea00000000000000;
    in_ZR = uVar2 == 0x736569766f4d;
switchD_1003bcbd0_caseD_c9:
    if (!(bool)in_ZR) {
switchD_1003bcbd0_caseD_c1:
      break;
    }
    goto LAB_1003bce3c;
  case 0xad:
  case 0xc4:
  case 200:
  case 0xeb:
  case 0xf0:
    goto switchD_1003bcbd0_caseD_ad;
  case 0xae:
  case 0xc5:
  case 0xd0:
  case 0xea:
    uVar2 = 0x6147;
    goto switchD_1003bcbd0_caseD_a9;
  case 0xb0:
  case 0xcd:
  case 0xce:
  case 0xd2:
  case 0xec:
    unaff_x22 = 0xe400000000000000;
  case 0xcc:
    uVar2 = 0x73726143;
switchD_1003bcbd0_caseD_c3:
    if (uVar2 != 0x736569766f4d) {
switchD_1003bcbd0_caseD_d3:
      break;
    }
    goto LAB_1003bce3c;
  case 0xc0:
    goto switchD_1003bcbd0_caseD_c0;
  case 0xc1:
  case 0xd4:
    goto switchD_1003bcbd0_caseD_c1;
  case 0xc3:
  case 0xf2:
    goto switchD_1003bcbd0_caseD_c3;
  case 0xc6:
    goto switchD_1003bcbd0_caseD_c6;
  case 0xc9:
    goto switchD_1003bcbd0_caseD_c9;
  case 0xcb:
    goto switchD_1003bcbd0_caseD_cb;
  case 0xd3:
  case 0xe2:
    goto switchD_1003bcbd0_caseD_d3;
  case 0xe3:
    goto switchD_1003bcbd0_caseD_e3;
  case 0xe8:
    goto switchD_1003bcbd0_caseD_e8;
  case 0xf5:
    uVar2 = 0x6946696353;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,
                     (_StringComparisonResult)(__int8)uVar2);
  uVar2 = (ulong)bVar1;
LAB_1003bce74:
  _swift_bridgeObjectRelease(0xe600000000000000);
  _swift_bridgeObjectRelease(unaff_x22);
  return uVar2;
switchD_1003bcbd0_caseD_a9:
  uVar2 = uVar2 & 0xffff00000000ffff | 0x73656d0000;
  in_ZR = uVar2 == 0x736569766f4d;
switchD_1003bcbd0_caseD_ab:
  goto joined_r0x0001003bcd9c;
}

