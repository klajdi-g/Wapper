// rea decompile_all
// name: FUN_1003f0a1c
// address: 0x1003f0a1c
// body: available
// range: 0x1003f0a1c-0x1003f0b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f0b34 to 0x100414aec _swift_unknownObjectWeakAssign (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003f0a1c(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::statusObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::keepUpObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::timeControlObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::readyForDisplayObs) = 0;
  lVar1 = _TtCV7Wallper13VideoLoopView11Coordinator::looper;
  if (*(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::looper) != 0) {
    objc_stub::disableLooping
              (*(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::looper));
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  IVar3 = *(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::player);
  objc_stub::pause(IVar3);
  objc_stub::removeAllItems(IVar3);
  lVar1 = _TtCV7Wallper13VideoLoopView11Coordinator::hostView;
  IVar3 = unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::hostView;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar3 != 0) {
    IVar3 = objc_stub::layer(IVar3);
    if (IVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f0b3c);
      (*pcVar2)();
    }
    _swift_dynamicCastObjCClassUnconditional(IVar3,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
    objc_stub::setPlayer_(IVar3,0);
  }
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,0);
  return;
}

