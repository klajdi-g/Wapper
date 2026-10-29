// rea decompile_all
// name: FUN_10024a654
// address: 0x10024a654
// body: available
// range: 0x10024a654-0x10024a763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10024a654(ID param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  objc_stub::setDuration_(param_1);
  IVar3 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100521aa8);
  objc_stub::setTimingFunction_(param_1,IVar3);
  IVar3 = 0;
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    IVar4 = *(ID *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    IVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    IVar3 = IVar4;
  }
  if (IVar4 != 0) {
    if ((long)IVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10024a764);
      (*pcVar2)();
    }
    IVar5 = 0;
    do {
      if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
        IVar3 = *(ID *)(param_2.unknown + IVar5 * 8 + 0x20);
      }
      else {
        IVar3 = IVar5;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar5,param_2);
      }
      IVar5 = IVar5 + 1;
      IVar3 = objc_stub::animator(IVar3);
      objc_stub::setAlphaValue_(IVar3,0);
      IVar3 = 0;
    } while (IVar4 != IVar5);
  }
  return IVar3;
}

