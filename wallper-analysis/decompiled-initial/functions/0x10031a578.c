// rea decompile_all
// name: FUN_10031a578
// address: 0x10031a578
// body: available
// range: 0x10031a578-0x10031a76b inclusive
// range: 0x10031a774-0x10031a78b inclusive
// range: 0x10031a7e8-0x10031a7ff inclusive
// range: 0x10031a8b4-0x10031a90b inclusive
// range: 0x10031a924-0x10031a927 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031a578(long param_1,ulong param_2,ulong param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x24;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  
  if (param_3 == param_2) {
    return;
  }
  uVar8 = 0x736569766f4d;
  lVar6 = *param_4;
  pbVar9 = (byte *)(lVar6 + param_3);
  param_1 = param_1 - param_3;
  uVar7 = param_3;
LAB_10031a614:
  bVar4 = *(byte *)(lVar6 + uVar7);
  pbVar10 = pbVar9;
  lVar11 = param_1;
LAB_10031a620:
  puVar5 = (uint *)(long)(int)(&switchD_10031a644::switchdataD_10031a928)[bVar4];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    break;
  default:
    uVar8 = 0x7363696870617247;
    break;
  case 2:
  case 0x17:
    uVar8 = 0x73656d6147;
    break;
  case 3:
    uVar8 = 0x73726143;
    break;
  case 4:
    uVar8 = 0x656c706f6550;
    break;
  case 5:
    uVar8 = 0x6d696e41;
  case 0x11:
    uVar8 = uVar8 & 0xffff0000ffffffff | 0x6500000000;
    break;
  case 6:
    uVar8 = 0x6568744f;
  case 0x13:
    uVar8 = uVar8 & 0xffff0000ffffffff | 0x7200000000;
    break;
  case 7:
  case 0x10:
    uVar8 = 0x6563617053;
    break;
  case 8:
    uVar8 = 0x65727574614e;
    break;
  case 9:
  case 0x1a:
    uVar8 = 0x696c616d696e694d;
    break;
  case 10:
    uVar8 = 0x736c616d696e41;
  case 0x1b:
    break;
  case 0xb:
    uVar8 = 0x746e6957;
  case 0x19:
    uVar8 = uVar8 & 0xffff0000ffffffff | 0x726500000000;
    break;
  case 0xc:
  case 0x12:
    uVar8 = 0x7472416c65786950;
    break;
  case 0xd:
    uVar8 = 0x6946696353;
  case 0x15:
    break;
  case 0xe:
    goto switchD_10031a644_caseD_e;
  case 0x14:
    goto switchD_10031a644_caseD_14;
  case 0x16:
    param_3 = param_3 & 0xffffffffffff | 0x696c000000000000;
    unaff_x24 = -0x15ffffffffff8b8d;
    if (param_3 != 0x736569766f4d) goto LAB_10031a8bc;
LAB_10031a8b4:
    if (unaff_x24 == -0x1a00000000000000) {
      _swift_bridgeObjectRelease(0xe600000000000000);
      _swift_bridgeObjectRelease(0xe600000000000000);
      goto LAB_10031a5f8;
    }
    goto LAB_10031a8bc;
  case 0x18:
    param_3 = param_3 & 0xffff | 0x7363696870610000;
    if (param_3 == 0x736569766f4d) goto LAB_10031a8b4;
switchD_10031a644_caseD_e:
LAB_10031a8bc:
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,
                       (_StringComparisonResult)(__int8)param_3);
    _swift_bridgeObjectRelease(0xe600000000000000);
    _swift_bridgeObjectRelease(unaff_x24);
    if (bVar2) goto code_r0x00010031a8e4;
    goto LAB_10031a5f8;
  }
  puVar5 = &UINT_10031a960;
switchD_10031a644_caseD_14:
                    /* WARNING: Could not recover jumptable at 0x00010031a768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)puVar5[pbVar10[-1]] + 0x10031a758))(uVar8);
  return;
code_r0x00010031a8e4:
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10031a928);
    (*pcVar1)();
  }
  bVar4 = *pbVar10;
  pbVar3 = pbVar10 + -1;
  *pbVar10 = *pbVar3;
  *pbVar3 = bVar4;
  bVar2 = lVar11 == -1;
  lVar11 = lVar11 + 1;
  pbVar10 = pbVar3;
  if (bVar2) goto LAB_10031a5f8;
  goto LAB_10031a620;
LAB_10031a5f8:
  uVar7 = uVar7 + 1;
  pbVar9 = pbVar9 + 1;
  param_1 = param_1 + -1;
  if (uVar7 == param_2) {
    return;
  }
  goto LAB_10031a614;
}

