// rea decompile_all
// name: FUN_10009fd70
// address: 0x10009fd70
// body: available
// range: 0x10009fd70-0x10009ff33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10009fd70(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_1000a1e68();
  if (DAT_10054f848 == 0) {
    if (DAT_10054f850 == -1) {
      uVar6 = 0;
      lVar4 = DAT_100577bf8;
    }
    else {
      _swift_once(&DAT_10054f850,FUN_1000a1094);
      uVar6 = (ulong)(DAT_10054f848 != 0);
      lVar4 = DAT_100577bf8;
    }
  }
  else {
    uVar6 = 1;
    lVar4 = DAT_10054f848;
  }
  lVar5 = DAT_10054f858;
  lVar3 = DAT_10054f858;
  if (DAT_10054f858 == 0) {
    if (DAT_10054f860 != -1) {
      _swift_once(&DAT_10054f860,FUN_1000a0f78);
    }
    lVar5 = DAT_100577c00;
    _swift_bridgeObjectRetain(DAT_100577c00);
    lVar3 = 0;
  }
  lVar1 = DAT_1005553a8;
  _swift_bridgeObjectRetain(lVar3);
  if (lVar1 != -1) {
    _swift_once(&DAT_1005553a8,FUN_100159ccc);
  }
  uVar2 = 0;
  FUN_10015f8e8(0);
  FUN_100099338();
  lVar3 = 0;
  FUN_10009e280();
  FUN_100029504(uVar2,(long)param_1 + (long)*(int *)(lVar3 + 0x2c),FUN_10015f8e8);
  *param_1 = 0x6b63754c20746547;
  param_1[1] = 0xe900000000000079;
  param_1[2] = 0x6e75502074666144;
  param_1[3] = 0xe90000000000006b;
  param_1[4] = lVar4;
  param_1[5] = uVar6;
  param_1[6] = lVar5;
  param_1[7] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  *param_1 = 0x4077100000000000;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

