// rea decompile_all
// name: FUN_1003f1a84
// address: 0x1003f1a84
// body: available
// range: 0x1003f1a84-0x1003f1dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f1a84(void)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  NSKeyValueObservingOptions NVar3;
  undefined *puVar4;
  NSKeyValueObservation *pNVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  
  self = unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::hostView;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    IVar2 = objc_stub::layer(self);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f1dac);
      (*pcVar1)();
    }
    _swift_dynamicCastObjCClassUnconditional(IVar2,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
    NVar3.unknown = &DAT_100436b90;
    _swift_getKeyPath();
    puVar7 = &DAT_10053e358;
    puVar4 = puVar7;
    _swift_allocObject(&DAT_10053e358,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    pNVar5 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar3);
    _swift_release(NVar3.unknown);
    _swift_release(puVar4);
    *(NSKeyValueObservation **)
     (unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::readyForDisplayObs) = pNVar5;
    NVar3.unknown = &DAT_100436bc0;
    _swift_getKeyPath();
    puVar6 = puVar7;
    _swift_allocObject(&DAT_10053e358,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    puVar4 = &DAT_10053e470;
    _swift_allocObject(&DAT_10053e470,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(ID *)(puVar4 + 0x18) = self;
    pNVar5 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar3);
    _swift_release(NVar3.unknown);
    _swift_release(puVar4);
    *(NSKeyValueObservation **)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::statusObs) =
         pNVar5;
    NVar3.unknown = &DAT_100436c08;
    _swift_getKeyPath();
    puVar6 = puVar7;
    _swift_allocObject(&DAT_10053e358,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    puVar4 = &DAT_10053e498;
    _swift_allocObject(&DAT_10053e498,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(ID *)(puVar4 + 0x18) = self;
    pNVar5 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar3);
    _swift_release(NVar3.unknown);
    _swift_release(puVar4);
    *(NSKeyValueObservation **)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::keepUpObs) =
         pNVar5;
    NVar3.unknown = &DAT_100436c48;
    _swift_getKeyPath();
    _swift_allocObject(&DAT_10053e358,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar4 = &DAT_10053e4c0;
    _swift_allocObject(&DAT_10053e4c0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar7;
    *(ID *)(puVar4 + 0x18) = self;
    pNVar5 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar3);
    _swift_release(NVar3.unknown);
    _swift_release(puVar4);
    *(NSKeyValueObservation **)
     (unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::timeControlObs) = pNVar5;
  }
  return;
}

