// rea decompile_all
// name: FUN_10003d95c
// address: 0x10003d95c
// body: available
// range: 0x10003d95c-0x10003dddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003db68 to 0x1000405c8 FUN_1000405c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003dcd0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003dd74 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003ddb8 to 0x10003fac4 FUN_10003fac4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10003d95c(void)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  ID IVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  
  lVar13 = *(long *)(unaff_x22 + 0x6d8);
  if (lVar13 == 0) {
    IVar6 = 0;
    lVar13 = *(long *)(unaff_x22 + 0x6c0);
    goto LAB_10003d9e0;
  }
  puVar5 = &_OBJC_CLASS___CIImage;
  _objc_allocWithZone();
  IVar6 = objc_stub::initWithCGImage_((ID)puVar5,lVar13);
  lVar13 = *(long *)(unaff_x22 + 0x6c0);
  while( true ) {
    *(long *)(unaff_x22 + 0x6e8) = lVar13;
    *(ID *)(unaff_x22 + 0x6e0) = IVar6;
    if ((lVar13 != 0) && (IVar6 != 0)) {
      lVar13 = *(long *)(unaff_x22 + 0x650);
      lVar14 = *(long *)(unaff_x22 + 0x638);
      objc_stub::lock(*(ID *)(*(long *)(lVar14 + lVar13) + 0x10));
      lVar13 = *(long *)(lVar14 + lVar13);
      if (*(char *)(lVar13 + 0x20) == '\x01') {
        objc_stub::unlock(*(ID *)(lVar13 + 0x10));
      }
      else {
        lVar14 = *(long *)(*(long *)(unaff_x22 + 0x638) + *(long *)(unaff_x22 + 0x658));
        _swift_beginAccess(lVar13 + 0x18,unaff_x22 + 0x440,0,0);
        puVar5 = *(undefined **)(lVar13 + 0x18);
        if ((ulong)puVar5 >> 0x3e == 0) {
          lVar13 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            _Var2.unknown = puVar5;
          }
          lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (SBORROW8(lVar14,lVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10003dde0);
          (*pcVar4)();
        }
        objc_stub::unlock(*(ID *)(*(long *)(*(long *)(unaff_x22 + 0x638) +
                                           *(long *)(unaff_x22 + 0x650)) + 0x10));
        if (2 < lVar14 - lVar13) {
          plVar9 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x6f0) = plVar9;
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_10003dde0;
          (extension_Swift)::Swift::Task::_sleep(4000000);
          return;
        }
      }
      plVar9 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x700) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10003df78;
      FUN_10003fac4();
      return;
    }
LAB_10003d9e0:
    uVar1 = *(long *)(unaff_x22 + 0x690) + 1;
    if (uVar1 == (long)*(double *)(unaff_x22 + 0x598)) {
      *(long *)(unaff_x22 + 0x740) = lVar13;
      *(ID *)(unaff_x22 + 0x738) = IVar6;
      *(undefined8 *)(unaff_x22 + 0x730) = *(undefined8 *)(unaff_x22 + 0x680);
      plVar9 = (long *)0x300;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x748) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10003eebc;
      FUN_1000405c8(plVar9,*(undefined8 *)(unaff_x22 + 0x518));
      return;
    }
    lVar14 = *(long *)(unaff_x22 + 0x6a8);
    *(ID *)(unaff_x22 + 0x6a0) = IVar6;
    *(long *)(unaff_x22 + 0x698) = lVar13;
    *(ulong *)(unaff_x22 + 0x690) = uVar1;
    if (uVar1 == *(ulong *)(unaff_x22 + 0x688)) break;
    (extension_Swift)::Swift::Task::_checkCancellation();
    *(long *)(unaff_x22 + 0x6a8) = lVar14;
    if (lVar14 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x680);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x638);
      FUN_100043c34(*(undefined8 *)(unaff_x22 + 0x600),*(undefined8 *)(unaff_x22 + 0x608),
                    *(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618),
                    *(undefined8 *)(unaff_x22 + 0x620),*(undefined8 *)(unaff_x22 + 0x628),in_x6,
                    in_x7,*(undefined8 *)(unaff_x22 + 0x640),*(undefined8 *)(unaff_x22 + 0x648));
      _swift_release(uVar11);
      _swift_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010003dc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if ((uVar1 * -0x5555555555555555 >> 1 | uVar1 * -0x5555555555555555 << 0x3f) <
        0x2aaaaaaaaaaaaaab && *(code **)(unaff_x22 + 0x548) != (code *)0x0) {
      (**(code **)(unaff_x22 + 0x548))
                ((double)uVar1 / (double)(ulong)(long)*(double *)(unaff_x22 + 0x598));
    }
    lVar14 = (long)*(double *)(unaff_x22 + 0x598);
    if (*(char *)(unaff_x22 + 0x765) == '\0') {
      lVar14 = 5;
    }
    lVar3 = 0;
    if (lVar14 != 0) {
      lVar3 = (long)uVar1 / lVar14;
    }
    if (uVar1 == lVar3 * lVar14) {
      if (IVar6 == 0) {
        pMVar7 = Swift::MainActor::typeMetadataAccessor();
        puVar5 = PTR_typeMetadataAccessor_1005246d8;
        pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
        *(MainActor **)(unaff_x22 + 0x6b0) = pMVar7;
        puVar10 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        UVar8 = Swift::Actor::get_unownedExecutor();
        pcVar4 = FUN_10003d504;
      }
      else {
        *(ID *)(unaff_x22 + 0x6c0) = IVar6;
        if (SCARRY8(*(long *)(unaff_x22 + 0x690),lVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10003ddc4);
          (*pcVar4)();
        }
        *(long *)(unaff_x22 + 0x6c8) = *(long *)(unaff_x22 + 0x690) + lVar14;
        pMVar7 = Swift::MainActor::typeMetadataAccessor();
        puVar5 = PTR_typeMetadataAccessor_1005246d8;
        pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
        *(MainActor **)(unaff_x22 + 0x6d0) = pMVar7;
        puVar10 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        UVar8 = Swift::Actor::get_unownedExecutor();
        pcVar4 = FUN_10003d7ac;
      }
      _swift_task_switch(pcVar4,UVar8.unknown,puVar10);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10003ddc0);
  (*pcVar4)();
}

