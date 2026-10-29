// rea decompile_all
// name: FUN_10029ffe8
// address: 0x10029ffe8
// body: available
// range: 0x10029ffe8-0x1002a01d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a0158 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a01c4 to 0x1002a22e0 FUN_1002a22e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a01d4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029ffe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  AVPartialAsyncProperty *pAVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ID IVar9;
  long unaff_x22;
  float fVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100521138;
  fVar10 = 1.0;
  if (1.0 < *(float *)(unaff_x22 + 0x5d4)) {
    fVar10 = *(float *)(unaff_x22 + 0x5d4);
  }
  fVar10 = (float)(int)fVar10;
  if (0x7f7fffff < (uint)ABS(fVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a01cc);
    (*pcVar2)();
  }
  if (fVar10 <= -2.147484e+09) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a01d0);
    (*pcVar2)();
  }
  if (fVar10 < 2.1474836e+09) {
    IVar9 = *(ID *)(unaff_x22 + 0x430);
    cVar1 = *(char *)(unaff_x22 + 0x5e8);
    uVar7 = (ulong)(uint)(int)fVar10;
    uVar3 = 1;
    ___extension_in_CoreMedia____C_CMTime_init_value__Swift_Int64_timescale__Swift_Int32___>___C_CMTime
              ();
    *(undefined8 *)(unaff_x22 + 0x5b8) = uVar3;
    *(int *)(unaff_x22 + 0x5c0) = (int)uVar7;
    *(int *)(unaff_x22 + 0x5c4) = (int)(uVar7 >> 0x20);
    *(undefined8 *)(unaff_x22 + 0x5c8) = param_3;
    objc_stub::setFrameDuration_(IVar9,unaff_x22 + 0x5b8);
    puVar4 = &_OBJC_CLASS___AVMutableVideoCompositionInstruction;
    _objc_allocWithZone();
    IVar9 = objc_stub::init((ID)puVar4);
    *(ID *)(unaff_x22 + 0x458) = IVar9;
    puVar4 = PTR__kCMTimeZero_100521868;
    *(undefined8 *)(unaff_x22 + 0x460) = *(undefined8 *)PTR__kCMTimeZero_100521868;
    *(undefined8 *)(unaff_x22 + 0x5d8) = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(unaff_x22 + 0x468) = *(undefined8 *)(puVar4 + 0x10);
    pAVar5 = (AVPartialAsyncProperty *)&DAT_100556fa0;
    FUN_100002f94(&DAT_100556fa0,&DAT_10042af10);
    (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_duration(pAVar5);
    *(AVPartialAsyncProperty **)(unaff_x22 + 0x470) = pAVar5;
    if (cVar1 == '\x01') {
      plVar6 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x478) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1002a0258;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
        (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
        return;
      }
    }
    else {
      plVar6 = (long *)0xc0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x480) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1002a033c;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
        FUN_1002a22e0(pAVar5,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a01d4);
  (*pcVar2)();
}

