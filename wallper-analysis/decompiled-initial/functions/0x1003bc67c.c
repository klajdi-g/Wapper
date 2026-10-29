// rea decompile_all
// name: FUN_1003bc67c
// address: 0x1003bc67c
// body: available
// range: 0x1003bc67c-0x1003bc743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003bc67c(ID param_1,long param_2)

{
  ID IVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    IVar1 = param_1;
    FUN_1003bc574();
    if (((IVar1 & 1) == 0) || (IVar1 = objc_stub::keyCode(param_1), (int)IVar1 != 0x31)) {
      _swift_release(param_2);
    }
    else {
      pcVar2 = *(code **)(param_2 + 0x40);
      if (pcVar2 == (code *)0x0) {
        _swift_release(param_2);
        param_1 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x48);
        _swift_retain(uVar3);
        (*pcVar2)();
        _swift_release(param_2);
        FUN_10002f6dc(pcVar2,uVar3);
        param_1 = 0;
      }
    }
  }
  return param_1;
}

