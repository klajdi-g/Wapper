// rea decompile_all
// name: FUN_10007a398
// address: 0x10007a398
// body: available
// range: 0x10007a398-0x10007a51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007a398(void)

{
  long lVar1;
  ID self;
  ID unaff_x20;
  ID self_00;
  ID self_01;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar2;
  double extraout_d0_01;
  double dVar3;
  double extraout_d0_02;
  double dVar4;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  double dVar5;
  undefined8 uVar6;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"layout");
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  self_00 = *(ID *)(unaff_x20 +
                   _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::disc);
  objc_stub::bounds(unaff_x20);
  objc_stub::setBounds_(self_00);
  objc_stub::bounds(unaff_x20);
  uVar6 = extraout_d0;
  _CGRectGetMidX();
  objc_stub::bounds(unaff_x20);
  uVar2 = extraout_d0_00;
  _CGRectGetMidY();
  objc_stub::setPosition_(self_00,uVar6,uVar2);
  self_01 = *(ID *)(unaff_x20 +
                   _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::label);
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0_01;
  _CGRectGetWidth();
  lVar1 = _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::labelFraction;
  dVar5 = *(double *)
           (unaff_x20 +
           _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::labelFraction);
  objc_stub::bounds(unaff_x20);
  dVar4 = extraout_d0_02;
  _CGRectGetHeight();
  objc_stub::setBounds_(self_01,0,0,dVar3 * dVar5,dVar4 * *(double *)(unaff_x20 + lVar1));
  objc_stub::bounds(unaff_x20);
  uVar6 = extraout_d0_03;
  _CGRectGetMidX();
  objc_stub::bounds(unaff_x20);
  uVar2 = extraout_d0_04;
  _CGRectGetMidY();
  objc_stub::setPosition_(self_01,uVar6,uVar2);
  self = objc_stub::window(unaff_x20);
  if (self == 0) {
    uVar6 = 0x4000000000000000;
  }
  else {
    objc_stub::backingScaleFactor(self);
    uVar6 = extraout_d0_05;
  }
  objc_stub::setContentsScale_(self_00,uVar6);
  objc_stub::setContentsScale_(self_01,uVar6);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return;
}

