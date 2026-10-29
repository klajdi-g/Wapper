// rea decompile_all
// name: FUN_1002a0428
// address: 0x1002a0428
// body: available
// range: 0x1002a0428-0x1002a05bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a0540 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a05b4 to 0x1002a2578 FUN_1002a2578 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a05b8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002a0428(void)

{
  char cVar1;
  AVPartialAsyncProperty *pAVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100521138;
  cVar1 = *(char *)(unaff_x22 + 0x5e8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x460);
  *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x5d8);
  *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x468);
  *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x490);
  *(undefined4 *)(unaff_x22 + 0x578) = *(undefined4 *)(unaff_x22 + 0x5e4);
  *(undefined4 *)(unaff_x22 + 0x57c) = *(undefined4 *)(unaff_x22 + 0x5e0);
  *(undefined8 *)(unaff_x22 + 0x580) = *(undefined8 *)(unaff_x22 + 0x488);
  objc_stub::setTimeRange_(*(ID *)(unaff_x22 + 0x458),unaff_x22 + 0x558);
  pAVar2 = (AVPartialAsyncProperty *)
           AVMutableVideoCompositionLayerInstruction::
           videoCompositionLayerInstructionWithAssetTrack_
                     ((ID)&_OBJC_CLASS___AVMutableVideoCompositionLayerInstruction,uVar5);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x498) = pAVar2;
  (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_preferredTransform(pAVar2);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x4a0) = pAVar2;
  if (cVar1 == '\x01') {
    plVar3 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4b0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1002a0648;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar4) {
      (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
      return;
    }
  }
  else {
    plVar3 = (long *)0x100;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4b8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1002a0728;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar4) {
      FUN_1002a2578(plVar3,unaff_x22 + 0x208,pAVar2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

