// rea decompile_all
// name: FUN_1001061a4
// address: 0x1001061a4
// body: available
// range: 0x1001061a4-0x10010630b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001061a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::ring;
  puVar2 = &_OBJC_CLASS___CAShapeLayer;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::dot;
  puVar2 = &_OBJC_CLASS___CAShapeLayer;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  objc_stub::setWantsLayer_(IVar3,1);
  IVar4 = objc_stub::layer(IVar3);
  if (IVar4 != 0) {
    objc_stub::setMasksToBounds_(IVar4,0);
  }
  IVar4 = objc_stub::layer(IVar3);
  if (IVar4 != 0) {
    objc_stub::addSublayer_
              (IVar4,*(undefined8 *)
                      (IVar3 + _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::
                               ring));
  }
  IVar4 = objc_stub::layer(IVar3);
  if (IVar4 != 0) {
    objc_stub::addSublayer_
              (IVar4,*(undefined8 *)
                      (IVar3 + _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::dot
                      ));
  }
  return IVar3;
}

