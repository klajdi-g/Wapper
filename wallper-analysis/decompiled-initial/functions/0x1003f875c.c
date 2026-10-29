// rea decompile_all
// name: FUN_1003f875c
// address: 0x1003f875c
// body: available
// range: 0x1003f875c-0x1003f88a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f875c(void)

{
  long lVar1;
  ID self;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long local_48;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  
  lVar1 = _TtC7Wallper11AppDelegate::screenChangeObserver;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper11AppDelegate::screenChangeObserver,auStack_78,0,0);
  FUN_1000087e4(unaff_x20 + lVar1,auStack_60,&DAT_10054d428,&DAT_100420300);
  if (local_48 == 0) {
    FUN_10002a29c(auStack_60,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(auStack_60,auStack_40);
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    puVar2 = auStack_40;
    FUN_100007bd0(puVar2,local_28);
    Swift::__bridgeAnythingToObjectiveC();
    NSNotificationCenter::removeObserver_(self,puVar2);
    _swift_unknownObjectRelease(puVar2);
    FUN_100043f24(auStack_40);
  }
  if (DAT_1005570b0 != -1) {
    _swift_once(&DAT_1005570b0,FUN_1001edbe8);
  }
  FUN_1001ee720();
  if (DAT_100557730 != -1) {
    _swift_once(&DAT_100557730,FUN_10022a7d4);
  }
  FUN_10022aa28();
  return;
}

