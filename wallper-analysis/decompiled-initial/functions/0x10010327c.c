// rea decompile_all
// name: FUN_10010327c
// address: 0x10010327c
// body: available
// range: 0x10010327c-0x1001033bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10010327c(void)

{
  undefined8 uVar1;
  ID self;
  ID unaff_x20;
  ID self_00;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar2;
  undefined8 extraout_d0_01;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"layout");
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  self_00 = *(ID *)(unaff_x20 +
                   _TtC7WallperP33_B5DA72BA1597CCF89F9E7344D9DD3E3F16SpinningRingView::ring);
  objc_stub::bounds(unaff_x20);
  objc_stub::setBounds_(self_00);
  objc_stub::bounds(unaff_x20);
  uVar1 = extraout_d0;
  _CGRectGetMidX();
  objc_stub::bounds(unaff_x20);
  uVar2 = extraout_d0_00;
  _CGRectGetMidY();
  objc_stub::setPosition_(self_00,uVar1,uVar2);
  objc_stub::lineWidth(self_00);
  objc_stub::bounds(unaff_x20);
  _CGRectInset();
  uVar1 = 0;
  _CGPathCreateWithEllipseInRect(0);
  objc_stub::setPath_(self_00,uVar1);
  self = objc_stub::window(unaff_x20);
  if (self == 0) {
    uVar1 = 0x4000000000000000;
  }
  else {
    objc_stub::backingScaleFactor(self);
    uVar1 = extraout_d0_01;
  }
  objc_stub::setContentsScale_(self_00,uVar1);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  FUN_1001033bc();
  return;
}

