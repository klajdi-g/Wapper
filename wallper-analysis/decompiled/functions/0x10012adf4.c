// rea decompile_all
// name: FUN_10012adf4
// address: 0x10012adf4
// body: available
// range: 0x10012adf4-0x10012aed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012adf4(long param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  lVar2 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC7Wallper17MenuBarController::popover;
  if ((lVar2 != 0) &&
     (IVar3 = objc_stub::isShown(*(ID *)(lVar2 + _TtC7Wallper17MenuBarController::popover)),
     (int)IVar3 != 0)) {
    objc_stub::performClose_(*(ID *)(lVar2 + lVar1),0);
  }
  _swift_beginAccess(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar4 = *(code **)(param_1 + _TtC7Wallper17MenuBarController::onOpenMain);
    if (pcVar4 != (code *)0x0) {
      uVar5 = ((undefined8 *)(param_1 + _TtC7Wallper17MenuBarController::onOpenMain))[1];
      FUN_1000939f8(pcVar4,uVar5);
      (*pcVar4)(0);
      FUN_10002f6dc(pcVar4,uVar5);
    }
  }
  return;
}

