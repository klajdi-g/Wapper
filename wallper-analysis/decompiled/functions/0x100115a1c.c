// rea decompile_all
// name: FUN_100115a1c
// address: 0x100115a1c
// body: available
// range: 0x100115a1c-0x100115c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100115c80 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_100115a1c(Task param_1,NSURLResponse *param_2)

{
  State SVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  bool bVar15;
  undefined *puVar16;
  Data UNRECOVERED_JUMPTABLE;
  ID IVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  tuple2_conflict1 tVar23;
  
  lVar19 = *(long *)(unaff_x22 + 0xc0);
  if (lVar19 == 0) {
    bVar15 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
    if (!bVar15) {
      FUN_1001da870(*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x1b8),
                    *(undefined8 *)(unaff_x22 + 0x1c0));
      IVar17 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
      *(ID *)(unaff_x22 + 0x260) = IVar17;
      plVar18 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x268) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_100115c84;
      tVar23 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URL)*(undefined **)(unaff_x22 + 0x178));
      return tVar23;
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1a0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1f8));
    _swift_release(uVar20);
  }
  else {
    SVar1.unknown = *(undefined **)(unaff_x22 + 0x1e0);
    lVar6 = *(long *)(unaff_x22 + 0x1e8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
    *(undefined8 *)(unaff_x22 + 0x70) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
    SwiftUI::State::get_wrappedValue(SVar1);
    if (lVar6 == *(long *)(unaff_x22 + 0xa0)) {
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1f8);
      lVar6 = *(long *)(unaff_x22 + 0xf0);
      lVar8 = *(long *)(unaff_x22 + 0xf8);
      FUN_1000fec60(lVar19,*(undefined8 *)(unaff_x22 + 0x1f0),uVar20);
      _swift_bridgeObjectRelease(uVar20);
      iVar14 = *(int *)(lVar8 + 0x24);
      *(long *)(unaff_x22 + 0x80) = lVar19;
      puVar16 = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar6 + iVar14),unaff_x22 + 0x80,puVar16);
      iVar14 = *(int *)(lVar8 + 0x28);
      *(undefined1 *)(unaff_x22 + 0x2ce) = 0;
      param_2 = (NSURLResponse *)&DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar6 + iVar14),unaff_x22 + 0x2ce,param_2);
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1f8));
    }
  }
  uVar20 = *(undefined8 *)(unaff_x22 + 400);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100115c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar23._ = param_2;
  tVar23._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar23;
}

