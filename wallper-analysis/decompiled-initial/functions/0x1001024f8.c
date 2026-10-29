// rea decompile_all
// name: FUN_1001024f8
// address: 0x1001024f8
// body: available
// range: 0x1001024f8-0x1001026a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001024f8(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID IVar3;
  ID unaff_x20;
  _ArrayBuffer _Var4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 extraout_d0;
  undefined8 uVar8;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"layout");
  IVar3 = objc_stub::window(unaff_x20);
  if (IVar3 == 0) {
    uVar8 = 0x4000000000000000;
  }
  else {
    objc_stub::backingScaleFactor(IVar3);
    uVar8 = extraout_d0;
  }
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  _Var4.unknown =
       *(undefined **)
        (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::copies);
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar5 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var1.unknown = _Var4.unknown;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100102618);
          (*pcVar2)();
        }
        IVar3 = *(ID *)(_Var4.unknown + uVar6 * 8 + 0x20);
      }
      else {
        IVar3 = uVar6;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar6,_Var4);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100102614);
        (*pcVar2)();
      }
      lVar7 = uVar6 + 1;
      objc_stub::setContentsScale_(IVar3,uVar8);
      uVar6 = uVar6 + 1;
    } while (lVar7 != lVar5);
  }
  IVar3 = *(ID *)(unaff_x20 +
                 _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::strip);
  objc_stub::bounds(unaff_x20);
  _CGRectGetHeight();
  objc_stub::bounds(IVar3);
  _CGRectGetHeight();
  objc_stub::frame(IVar3);
  objc_stub::setFrame_(IVar3);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return;
}

