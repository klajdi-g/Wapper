// rea decompile_all
// name: FUN_10019682c
// address: 0x10019682c
// body: available
// range: 0x10019682c-0x100196c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100196c0c to 0x100197a48 FUN_100197a48 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019682c(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  NSString *pNVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar8 = &DAT_100429b50;
  _swift_getKeyPath(&DAT_100429b50);
  puVar5 = &DAT_100429b78;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(unaff_x22 + 0x1e8,uVar12,puVar8,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar8);
  if (*(char *)(unaff_x22 + 0x1e8) == '\x01') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    puVar8 = &DAT_100429d78;
    _swift_getKeyPath(&DAT_100429d78);
    puVar5 = &DAT_100429da0;
    _swift_getKeyPath(&DAT_100429da0);
    Combine::Published::_get_subscript(unaff_x22 + 0x88,uVar12,puVar8,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar8);
    uVar2 = *(ulong *)(unaff_x22 + 0x90);
    *(ulong *)(unaff_x22 + 0x1b0) = *(ulong *)(unaff_x22 + 0x88);
    *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
    if (uVar2 == 0) goto LAB_100196994;
    uVar13 = *(ulong *)(unaff_x22 + 0x88) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar13 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar13 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
      puVar8 = &DAT_100429be0;
      _swift_getKeyPath(&DAT_100429be0);
      puVar5 = &DAT_100429c08;
      _swift_getKeyPath(&DAT_100429c08);
      Combine::Published::_get_subscript(unaff_x22 + 0x1e9,uVar12,puVar8,puVar5);
      _swift_release(puVar5);
      _swift_release(puVar8);
      if (*(char *)(unaff_x22 + 0x1e9) == '\0') {
        uVar14 = 0xef636973754d2e65;
        uVar12 = 0xe500000000000000;
        uVar13 = 0x636973754d;
      }
      else {
        if (*(char *)(unaff_x22 + 0x1e9) != '\x01') goto LAB_10019699c;
        uVar14 = 0x80000001004dff80;
        uVar12 = 0xe700000000000000;
        uVar13 = 0x796669746f7053;
      }
      *(ulong *)(unaff_x22 + 0x1c0) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
      lVar16 = _TtC7Wallper17NowPlayingManager::automationRefused;
      lVar17 = *(long *)(unaff_x22 + 0xd8);
      *(undefined8 *)(unaff_x22 + 0x1d0) = uVar14;
      *(long *)(unaff_x22 + 0x1d8) = lVar16;
      _swift_beginAccess(lVar17 + lVar16,unaff_x22 + 0x40,0,0);
      uVar18 = *(undefined8 *)(lVar17 + lVar16);
      _swift_bridgeObjectRetain(uVar18);
      uVar6 = uVar13;
      FUN_1002165a4(uVar13,uVar12,uVar18);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar12);
      if ((uVar6 & 1) == 0) {
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        puVar8 = (undefined *)
                 NSRunningApplication::runningApplicationsWithBundleIdentifier_
                           ((ID)&_OBJC_CLASS___NSRunningApplication,pNVar7);
        FUN_100044230(0,&DAT_100554258,&PTR__OBJC_CLASS___NSRunningApplication_10053fb30);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        if ((ulong)puVar8 >> 0x3e == 0) {
          lVar16 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          _swift_bridgeObjectRelease();
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            _Var1.unknown = puVar8;
          }
          lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          _swift_bridgeObjectRelease(puVar8);
        }
        if (lVar16 != 0) {
          uVar14 = *(undefined8 *)(unaff_x22 + 400);
          uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
          puVar8 = &DAT_10042a1c8;
          _swift_getKeyPath(&DAT_10042a1c8);
          puVar5 = &DAT_10042a1f0;
          _swift_getKeyPath(&DAT_10042a1f0);
          Combine::Published::_get_subscript(uVar14,uVar18,puVar8,puVar5);
          _swift_release(puVar5);
          _swift_release(puVar8);
          plVar9 = (long *)0xe0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1e0) = plVar9;
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_100196c60;
          FUN_100197a48(plVar9,*(undefined8 *)(unaff_x22 + 0x158),uVar13,uVar12);
          return;
        }
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0x198);
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(uVar18);
      _swift_bridgeObjectRelease(uVar14);
      goto LAB_1001969b0;
    }
LAB_10019699c:
    uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
LAB_100196994:
    uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
  }
  _swift_release(uVar12);
LAB_1001969b0:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 400));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100196a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

