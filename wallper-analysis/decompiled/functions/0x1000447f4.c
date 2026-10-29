// rea decompile_all
// name: FUN_1000447f4
// address: 0x1000447f4
// body: available
// range: 0x1000447f4-0x100044983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000447f4(double param_1,ulong param_2)

{
  ID self;
  double dVar1;
  double dVar2;
  long unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_1 - *(double *)(unaff_x20 + 0x20);
  dVar1 = 0.1;
  dVar6 = dVar1;
  if (dVar5 <= 0.1) {
    dVar6 = dVar5;
  }
  dVar2 = 0.016666666666666666;
  dVar5 = dVar2;
  if (*(double *)(unaff_x20 + 0x20) != 0.0) {
    dVar5 = dVar6;
  }
  *(double *)(unaff_x20 + 0x20) = param_1;
  if ((param_2 & 1) != 0) {
    *(double *)(unaff_x20 + 0x28) = dVar5 + *(double *)(unaff_x20 + 0x28);
    dVar8 = *(double *)(unaff_x20 + 0x10);
    dVar7 = *(double *)(unaff_x20 + 0x18);
    NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent);
    dVar4 = dVar2;
    self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
    if (self != 0) {
      NSScreen::frame(self);
      dVar3 = extraout_d0_00;
      _CGRectGetWidth();
      if ((0.0 < dVar3) &&
         (dVar3 = extraout_d0_00, _CGRectGetHeight(extraout_d0_00,dVar4,dVar6,dVar1), 0.0 < dVar3))
      {
        dVar8 = extraout_d0_00;
        _CGRectGetWidth(extraout_d0_00,dVar4,dVar6,dVar1);
        dVar8 = (extraout_d0 - extraout_d0_00) / dVar8;
        dVar7 = extraout_d0_00;
        _CGRectGetHeight(extraout_d0_00,dVar4,dVar6,dVar1);
        dVar7 = (dVar2 - dVar4) / dVar7;
      }
    }
    dVar5 = dVar5 * -9.0;
    _exp(0);
    *(double *)(unaff_x20 + 0x10) =
         *(double *)(unaff_x20 + 0x10) + (1.0 - dVar5) * (dVar8 - *(double *)(unaff_x20 + 0x10));
    *(double *)(unaff_x20 + 0x18) =
         *(double *)(unaff_x20 + 0x18) + (1.0 - dVar5) * (dVar7 - *(double *)(unaff_x20 + 0x18));
  }
  return *(undefined8 *)(unaff_x20 + 0x28);
}

