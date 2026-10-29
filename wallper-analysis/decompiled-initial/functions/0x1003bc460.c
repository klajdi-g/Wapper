// rea decompile_all
// name: FUN_1003bc460
// address: 0x1003bc460
// body: available
// range: 0x1003bc460-0x1003bc573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003bc460(ID param_1,long param_2)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return param_1;
  }
  IVar2 = param_1;
  FUN_1003bc574();
  if ((IVar2 & 1) == 0) {
LAB_1003bc4e0:
    _swift_release(param_2);
  }
  else {
    IVar2 = objc_stub::keyCode(param_1);
    iVar1 = (int)IVar2;
    if (iVar1 == 0x31) {
      IVar2 = objc_stub::isARepeat(param_1);
      if ((IVar2 & 1) != 0) {
        _swift_release(param_2);
        return 0;
      }
      pcVar4 = *(code **)(param_2 + 0x30);
      if (pcVar4 == (code *)0x0) {
LAB_1003bc568:
        _swift_release(param_2);
        return 0;
      }
      uVar3 = *(undefined8 *)(param_2 + 0x38);
    }
    else if (iVar1 == 0x7e) {
      pcVar4 = *(code **)(param_2 + 0x20);
      if (pcVar4 == (code *)0x0) goto LAB_1003bc568;
      uVar3 = *(undefined8 *)(param_2 + 0x28);
    }
    else {
      if (iVar1 != 0x7d) goto LAB_1003bc4e0;
      pcVar4 = *(code **)(param_2 + 0x10);
      if (pcVar4 == (code *)0x0) goto LAB_1003bc568;
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    _swift_retain(uVar3);
    (*pcVar4)();
    _swift_release(param_2);
    FUN_10002f6dc(pcVar4,uVar3);
    param_1 = 0;
  }
  return param_1;
}

