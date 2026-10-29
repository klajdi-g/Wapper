// rea decompile_all
// name: FUN_10029f20c
// address: 0x10029f20c
// body: available
// range: 0x10029f20c-0x10029f33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029f334 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029f338 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10029f20c(void)

{
  URL self;
  NSURL *pNVar1;
  ID self_00;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100521138;
  self.unknown = &_OBJC_CLASS___AVURLAsset;
  _objc_allocWithZone();
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(self);
  self_00 = objc_stub::initWithURL_options_((ID)self.unknown,pNVar1,0);
  *(ID *)(unaff_x22 + 0x370) = self_00;
  uVar5 = *(undefined8 *)PTR__AVMediaTypeVideo_1005212b8;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x338;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10029f33c;
  lVar2 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar2,1);
  puVar3 = &DAT_100558e70;
  FUN_100002f94(&DAT_100558e70,&DAT_10042ddf0);
  *(undefined8 *)(unaff_x22 + 0xa8) = PTR___NSConcreteStackBlock_100521110;
  *(undefined **)(unaff_x22 + 0xe0) = puVar3;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x42000000;
  *(code **)(unaff_x22 + 0xb8) = FUN_10029d4a8;
  *(undefined **)(unaff_x22 + 0xc0) = &DAT_100537758;
  *(long *)(unaff_x22 + 200) = lVar2;
  objc_stub::loadTracksWithMediaType_completionHandler_
            (self_00,uVar5,(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar4) {
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

