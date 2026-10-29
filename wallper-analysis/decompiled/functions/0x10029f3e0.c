// rea decompile_all
// name: FUN_10029f3e0
// address: 0x10029f3e0
// body: available
// range: 0x10029f3e0-0x10029f61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029f504 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029f570 to 0x1002a27f8 FUN_1002a27f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029f618 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029f3e0(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  AVPartialAsyncProperty *pAVar6;
  long *plVar7;
  URL UVar8;
  long lVar9;
  _ArrayBuffer _Var10;
  long unaff_x22;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  _Var10.unknown = *(undefined **)(unaff_x22 + 0x338);
  if ((ulong)_Var10.unknown >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
      _Var1.unknown = _Var10.unknown;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
    _swift_bridgeObjectRelease(_Var10.unknown);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x38))(uVar5,1,1,UVar8.unknown);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010029f600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10029f618);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(_Var10.unknown + 0x20);
    }
    else {
      uVar5 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var10);
    }
    *(undefined8 *)(unaff_x22 + 0x380) = uVar5;
    _swift_bridgeObjectRelease(_Var10.unknown);
    pAVar6 = (AVPartialAsyncProperty *)&DAT_100558e78;
    FUN_100002f94(&DAT_100558e78,&DAT_10042d780);
    (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_naturalSize(pAVar6);
    *(AVPartialAsyncProperty **)(unaff_x22 + 0x388) = pAVar6;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
    *(byte *)(unaff_x22 + 0x5e8) = bVar3 & 1;
    if ((bVar3 & 1) == 0) {
      plVar7 = (long *)0xc0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x398) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10029f6f0;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
        FUN_1002a27f8(pAVar6,0,0);
        return;
      }
    }
    else {
      plVar7 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x390) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10029f61c;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
        (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

