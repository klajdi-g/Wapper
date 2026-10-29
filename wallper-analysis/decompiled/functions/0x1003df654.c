// rea decompile_all
// name: FUN_1003df654
// address: 0x1003df654
// body: available
// range: 0x1003df654-0x1003df73f inclusive
// range: 0x1003df764-0x1003df8ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003df654(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long extraout_x12;
  long extraout_x13;
  byte abStack_d0 [8];
  
  lVar1 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (param_3 == param_2) {
    return;
  }
  lVar3 = *param_4;
  lVar4 = *(long *)(extraout_x12 + 0x48);
  FUN_100029504(lVar3 + lVar4 * (param_3 + -1),
                abStack_d0 + (-extraout_x13 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                FUN_10040211c);
  uVar2 = (ulong)*(int *)(lVar1 + 0x24);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(lVar3 + lVar4 * param_3 + uVar2)) {
  case 1:
  case 0x10:
    break;
  case 2:
  case 0x11:
    break;
  case 3:
  case 0x12:
    break;
  case 4:
  case 0x13:
    break;
  case 5:
  case 0x14:
    break;
  case 6:
  case 0x15:
    break;
  case 7:
  case 0x16:
    break;
  case 8:
    break;
  case 9:
  case 0x18:
    break;
  case 10:
  case 0x19:
    break;
  case 0xb:
  case 0x1d:
  case 0x1a:
    break;
  case 0xc:
  case 0x1b:
    break;
  case 0xd:
  case 0x1c:
    break;
  case 0xe:
    break;
  case 0xf:
    goto switchD_1003df7ac_caseD_f;
  }
  uVar2 = (ulong)(abStack_d0 + (-extraout_x13 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)))[uVar2];
switchD_1003df7ac_caseD_f:
                    /* WARNING: Could not recover jumptable at 0x0001003df8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&UINT_1003dfae4)[uVar2] + 0x1003df8d4))(0x736569766f4d);
  return;
}

