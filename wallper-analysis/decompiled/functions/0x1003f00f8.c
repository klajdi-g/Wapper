// rea decompile_all
// name: FUN_1003f00f8
// address: 0x1003f00f8
// body: available
// range: 0x1003f00f8-0x1003f01df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f01d8 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f00f8(ID param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ID self;
  undefined *puVar5;
  long unaff_x20;
  
  _swift_unknownObjectWeakAssign
            (unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::hostView,param_1);
  self = objc_stub::layer(param_1);
  if (self != 0) {
    _swift_dynamicCastObjCClassUnconditional(self,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
    objc_stub::setPlayer_
              (self,*(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::player));
    puVar5 = &DAT_10053e358;
    _swift_allocObject(&DAT_10053e358,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar1 = (undefined8 *)(param_1 + _TtC7Wallper19PlayerContainerView::onLayout);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_1003f392c;
    puVar1[1] = puVar5;
    _swift_retain(puVar5);
    FUN_10002f6dc(uVar2,uVar3);
    _swift_release(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003f01e0);
  (*pcVar4)();
}

