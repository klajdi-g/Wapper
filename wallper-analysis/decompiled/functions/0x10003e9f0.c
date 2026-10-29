// rea decompile_all
// name: FUN_10003e9f0
// address: 0x10003e9f0
// body: available
// range: 0x10003e9f0-0x10003eebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003eab8 to 0x1000405c8 FUN_1000405c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003eda8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003ee50 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003ee98 to 0x10003fac4 FUN_10003fac4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10003e9f0(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  ulong uVar16;
  
  if (*(long *)(unaff_x22 + 0x690) + 1 != (long)*(double *)(unaff_x22 + 0x598)) {
    lVar14 = *(long *)(unaff_x22 + 0x728);
    lVar15 = *(long *)(unaff_x22 + 0x6e8);
    lVar13 = *(long *)(unaff_x22 + 0x6e0);
    lVar11 = *(long *)(unaff_x22 + 0x690);
    uVar16 = lVar11 + 1;
    *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x718);
    uVar9 = (ulong)*(double *)(unaff_x22 + 0x598);
    *(long *)(unaff_x22 + 0x6a0) = lVar13;
    *(long *)(unaff_x22 + 0x698) = lVar15;
    *(ulong *)(unaff_x22 + 0x690) = uVar16;
    bVar3 = uVar16 < uVar9;
    if (!bVar3 && uVar16 != uVar9) {
      uVar9 = lVar11 + 1;
    }
    *(ulong *)(unaff_x22 + 0x688) = uVar9;
    if (bVar3) {
      puVar7 = (undefined8 *)(unaff_x22 + 0x680);
      do {
        (extension_Swift)::Swift::Task::_checkCancellation();
        *(long *)(unaff_x22 + 0x6a8) = lVar14;
        if (lVar14 != 0) {
          uVar12 = *(undefined8 *)(unaff_x22 + 0x680);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x638);
          FUN_100043c34(*(undefined8 *)(unaff_x22 + 0x600),*(undefined8 *)(unaff_x22 + 0x608),
                        *(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618),
                        *(undefined8 *)(unaff_x22 + 0x620),*(undefined8 *)(unaff_x22 + 0x628));
          _swift_release(uVar8);
          _swift_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010003ec58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        if ((uVar16 * -0x5555555555555555 >> 1 | uVar16 * -0x5555555555555555 << 0x3f) <
            0x2aaaaaaaaaaaaaab && *(code **)(unaff_x22 + 0x548) != (code *)0x0) {
          (**(code **)(unaff_x22 + 0x548))
                    ((double)uVar16 / (double)(ulong)(long)*(double *)(unaff_x22 + 0x598));
        }
        uVar9 = (long)*(double *)(unaff_x22 + 0x598);
        if (*(char *)(unaff_x22 + 0x765) == '\0') {
          uVar9 = 5;
        }
        lVar11 = 0;
        if (uVar9 != 0) {
          lVar11 = (long)uVar16 / (long)uVar9;
        }
        if (uVar16 == lVar11 * uVar9) {
          if (lVar13 == 0) {
            pMVar5 = Swift::MainActor::typeMetadataAccessor();
            puVar10 = PTR_typeMetadataAccessor_1005246d8;
            pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
            *(MainActor **)(unaff_x22 + 0x6b0) = pMVar5;
            puVar7 = &DAT_100558b80;
            FUN_1000036d0(&DAT_100558b80,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0
                         );
            UVar6 = Swift::Actor::get_unownedExecutor();
            pcVar2 = FUN_10003d504;
          }
          else {
            *(long *)(unaff_x22 + 0x6c0) = lVar13;
            if (SCARRY8(*(long *)(unaff_x22 + 0x690),uVar9)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10003eea0);
              (*pcVar2)();
            }
            *(ulong *)(unaff_x22 + 0x6c8) = *(long *)(unaff_x22 + 0x690) + uVar9;
            pMVar5 = Swift::MainActor::typeMetadataAccessor();
            puVar10 = PTR_typeMetadataAccessor_1005246d8;
            pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
            *(MainActor **)(unaff_x22 + 0x6d0) = pMVar5;
            puVar7 = &DAT_100558b80;
            FUN_1000036d0(&DAT_100558b80,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0
                         );
            UVar6 = Swift::Actor::get_unownedExecutor();
            pcVar2 = FUN_10003d7ac;
          }
          _swift_task_switch(pcVar2,UVar6.unknown,puVar7);
          return;
        }
        *(long *)(unaff_x22 + 0x6e8) = lVar15;
        *(long *)(unaff_x22 + 0x6e0) = lVar13;
        if ((lVar15 != 0) && (lVar13 != 0)) {
          lVar13 = *(long *)(unaff_x22 + 0x650);
          lVar15 = *(long *)(unaff_x22 + 0x638);
          objc_stub::lock(*(ID *)(*(long *)(lVar15 + lVar13) + 0x10));
          lVar13 = *(long *)(lVar15 + lVar13);
          if (*(char *)(lVar13 + 0x20) == '\x01') {
            objc_stub::unlock(*(ID *)(lVar13 + 0x10));
          }
          else {
            lVar15 = *(long *)(*(long *)(unaff_x22 + 0x638) + *(long *)(unaff_x22 + 0x658));
            _swift_beginAccess(lVar13 + 0x18,unaff_x22 + 0x440,0,0);
            puVar10 = *(undefined **)(lVar13 + 0x18);
            if ((ulong)puVar10 >> 0x3e == 0) {
              lVar13 = *(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                _Var1.unknown = puVar10;
              }
              lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
            }
            if (SBORROW8(lVar15,lVar13)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10003eebc);
              (*pcVar2)();
            }
            objc_stub::unlock(*(ID *)(*(long *)(*(long *)(unaff_x22 + 0x638) +
                                               *(long *)(unaff_x22 + 0x650)) + 0x10));
            if (2 < lVar15 - lVar13) {
              plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
              _swift_task_alloc();
              *(long **)(unaff_x22 + 0x6f0) = plVar4;
              *plVar4 = unaff_x22;
              plVar4[1] = (long)FUN_10003dde0;
              (extension_Swift)::Swift::Task::_sleep(4000000);
              return;
            }
          }
          plVar4 = (long *)0xd0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x700) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_10003df78;
          FUN_10003fac4();
          return;
        }
        uVar16 = *(long *)(unaff_x22 + 0x690) + 1;
        if (uVar16 == (long)*(double *)(unaff_x22 + 0x598)) goto LAB_10003ea5c;
        lVar14 = *(long *)(unaff_x22 + 0x6a8);
        *(long *)(unaff_x22 + 0x6a0) = lVar13;
        *(long *)(unaff_x22 + 0x698) = lVar15;
        *(ulong *)(unaff_x22 + 0x690) = uVar16;
      } while (uVar16 != *(ulong *)(unaff_x22 + 0x688));
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10003ebb4);
    (*pcVar2)();
  }
  puVar7 = (undefined8 *)(unaff_x22 + 0x718);
  lVar15 = *(long *)(unaff_x22 + 0x6e8);
  lVar13 = *(long *)(unaff_x22 + 0x6e0);
LAB_10003ea5c:
  uVar8 = *puVar7;
  *(long *)(unaff_x22 + 0x740) = lVar15;
  *(long *)(unaff_x22 + 0x738) = lVar13;
  *(undefined8 *)(unaff_x22 + 0x730) = uVar8;
  plVar4 = (long *)0x300;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x748) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10003eebc;
  FUN_1000405c8(plVar4,*(undefined8 *)(unaff_x22 + 0x518));
  return;
}

