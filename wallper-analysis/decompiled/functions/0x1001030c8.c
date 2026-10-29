// rea decompile_all
// name: FUN_1001030c8
// address: 0x1001030c8
// body: available
// range: 0x1001030c8-0x1001031df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_1001030c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  ID self_00;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  _swift_getObjectType();
  lVar1 = _TtC7WallperP33_B5DA72BA1597CCF89F9E7344D9DD3E3F16SpinningRingView::ring;
  self = &_OBJC_CLASS___CAShapeLayer;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  auVar3._0_8_ = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1
                                     ,param_2,param_3,param_4);
  objc_stub::setWantsLayer_(auVar3._0_8_,1);
  lVar1 = _TtC7WallperP33_B5DA72BA1597CCF89F9E7344D9DD3E3F16SpinningRingView::ring;
  objc_stub::setFillColor_
            (*(ID *)(auVar3._0_8_ +
                    _TtC7WallperP33_B5DA72BA1597CCF89F9E7344D9DD3E3F16SpinningRingView::ring),0);
  objc_stub::setStrokeStart_(*(ID *)(auVar3._0_8_ + lVar1),0x3fc999999999999a);
  objc_stub::setStrokeEnd_(*(ID *)(auVar3._0_8_ + lVar1),0x3ff0000000000000);
  self_00 = objc_stub::layer(auVar3._0_8_);
  IVar2 = auVar3._0_8_;
  if (self_00 != 0) {
    objc_stub::addSublayer_(self_00,*(undefined8 *)(auVar3._0_8_ + lVar1));
    IVar2 = self_00;
  }
  auVar3._8_8_ = IVar2;
  return auVar3;
}

