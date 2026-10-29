// rea decompile_all
// name: FUN_10007b458
// address: 0x10007b458
// body: available
// range: 0x10007b458-0x10007b54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10007b458(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = param_1[4];
  uVar2 = param_2[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_retain(uVar2);
  _swift_release(uVar3);
  param_1[5] = param_2[5];
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar2);
  lVar1 = param_2[7];
  if (param_1[7] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[8];
      param_1[7] = lVar1;
      param_1[8] = uVar2;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[8];
      uVar3 = param_1[8];
      param_1[7] = lVar1;
      param_1[8] = uVar2;
      _swift_retain();
      _swift_release(uVar3);
      return param_1;
    }
    _swift_release(param_1[8]);
  }
  lVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar1;
  return param_1;
}

