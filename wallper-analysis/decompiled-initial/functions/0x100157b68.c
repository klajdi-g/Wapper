// rea decompile_all
// name: FUN_100157b68
// address: 0x100157b68
// body: available
// range: 0x100157b68-0x100157da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100157d9c to 0x100413658 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$download (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100157da0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_100157b68(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Data DVar6;
  ID IVar7;
  long *plVar8;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  tuple2_conflict1 tVar17;
  
  plVar9 = *(long **)PTR____stack_chk_guard_100521138;
  lVar11 = *(long *)(unaff_x22 + 0x230);
  if (lVar11 == 1) {
LAB_100157ba8:
    (**(code **)(unaff_x22 + 0x210))
              (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1c8));
  }
  else {
    uVar10 = *(ulong *)(unaff_x22 + 0x220);
    if ((uVar10 & 1) == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x228);
      (**(code **)(unaff_x22 + 0x210))
                (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1c8));
      FUN_100158e64(uVar10,uVar13,lVar11);
    }
    else {
      if (lVar11 == 0) goto LAB_100157ba8;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
      lVar2 = *(long *)(unaff_x22 + 0x1d0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1c0);
      Foundation::URL::_init();
      FUN_100158e64(uVar10,uVar12,lVar11);
      (**(code **)(lVar2 + 0x30))(uVar15,1,uVar13);
      if ((int)uVar15 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x1d0) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x1e0),*(undefined8 *)(unaff_x22 + 0x1c0),
                   *(undefined8 *)(unaff_x22 + 0x1c8));
        IVar7 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
        *(ID *)(unaff_x22 + 0x238) = IVar7;
        plVar8 = (long *)(ulong)*(uint *)(PTR__download_100520ec0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x240) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100157da4;
        if (*(long **)PTR____stack_chk_guard_100521138 == plVar9) {
          tVar17 = (extension_Foundation)::__C::NSURLSession::_download
                             ((URL)*(undefined **)(unaff_x22 + 0x1d8));
          return tVar17;
        }
        goto LAB_100157da0;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x1c0);
      (**(code **)(unaff_x22 + 0x210))
                (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1c8));
      FUN_10002a29c(uVar13,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
  plVar8 = plVar9;
  if (*(long **)PTR____stack_chk_guard_100521138 == plVar9) {
    DVar6.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100157d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(0);
    tVar17._ = UNRECOVERED_JUMPTABLE;
    tVar17._.unknown = DVar6.unknown;
    return tVar17;
  }
LAB_100157da0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar8);
}

