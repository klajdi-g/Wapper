// rea decompile_all
// name: FUN_1001eeca8
// address: 0x1001eeca8
// body: available
// range: 0x1001eeca8-0x1001eedff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001eeca8(void)

{
  long lVar1;
  undefined *puVar2;
  void *aBlock;
  ID IVar3;
  ID self;
  long unaff_x20;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  lVar1 = _TtC7WallperP33_8A1C610580B7CD8A17F7CF76228A646719HighlightBorderView::starTimer;
  if (*(ID *)(unaff_x20 +
             _TtC7WallperP33_8A1C610580B7CD8A17F7CF76228A646719HighlightBorderView::starTimer) != 0)
  {
    objc_stub::invalidate
              (*(ID *)(unaff_x20 +
                      _TtC7WallperP33_8A1C610580B7CD8A17F7CF76228A646719HighlightBorderView::
                      starTimer));
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  puVar2 = &DAT_1005321d8;
  _swift_allocObject(&DAT_1005321d8,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  local_40 = FUN_1001ef550;
  local_60 = PTR___NSConcreteStackBlock_100521110;
  local_58 = 0x42000000;
  local_50 = FUN_10016802c;
  puStack_48 = &DAT_1005321f0;
  local_38 = puVar2;
  aBlock = __Block_copy(&local_60);
  _swift_release(local_38);
  IVar3 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3fd3333333333333,1,aBlock);
  __Block_release(aBlock);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  if (IVar3 != 0) {
    self = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    NSRunLoop::addTimer_forMode_(self,IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_100521578);
  }
  return 0;
}

