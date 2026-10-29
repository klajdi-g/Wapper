// rea decompile_all
// name: FUN_1001370d0
// address: 0x1001370d0
// body: available
// range: 0x1001370d0-0x100137277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100137224 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001370d0(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  Task TVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  double dVar12;
  
  TVar4.unknown = *(undefined **)(unaff_x22 + 0x148);
  _swift_release();
  bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar4);
  if (!bVar3) {
    lVar5 = *(long *)(unaff_x22 + 0xd0) + 0x10;
    _swift_weakLoadStrong();
    *(long *)(unaff_x22 + 0x148) = lVar5;
    if (lVar5 != 0) {
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      _swift_stdlib_random(unaff_x22 + 0xb8,8);
      uVar7 = *(ulong *)(unaff_x22 + 0xb8);
      uVar8 = uVar7 + (uVar7 << 0x35);
      while (uVar8 < 0x1ffffffffff801) {
        *(undefined8 *)(unaff_x22 + 200) = 0;
        _swift_stdlib_random(unaff_x22 + 200,8);
        uVar7 = *(ulong *)(unaff_x22 + 200);
        uVar8 = uVar7 + (uVar7 << 0x35);
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      uVar8 = SUB168(auVar1 * ZEXT816(0x20000000000001),8);
      dVar12 = 2100000000000.0;
      if (uVar8 != 0x20000000000000) {
        dVar12 = (((double)uVar8 / 9007199254740992.0) * 300.0 + 0.0 + 1800.0) * 1000000000.0;
      }
      if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100137270);
        (*pcVar2)();
      }
      if (dVar12 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100137274);
        (*pcVar2)();
      }
      if (1.8446744073709552e+19 <= dVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100137278);
        (*pcVar2)();
      }
      plVar6 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x150) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_100136810;
      (extension_Swift)::Swift::Task::_sleep((long)dVar12);
      return;
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100137268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

