// rea decompile_all
// name: FUN_1001964a8
// address: 0x1001964a8
// body: available
// range: 0x1001964a8-0x100196563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100196560 to 0x100196644 FUN_100196644 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001964a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long *plVar4;
  Task TVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  TVar5.unknown = (undefined *)(*(long *)(unaff_x22 + 0x50) + 0x10);
  _swift_weakLoadStrong();
  *(undefined **)(unaff_x22 + 0xb8) = TVar5.unknown;
  if (TVar5.unknown == (undefined *)0x0) {
    TVar5.unknown = *(undefined **)(unaff_x22 + 0x90);
  }
  else {
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    if (!bVar3) {
      plVar4 = (long *)0x1f0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xc0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100196564;
      FUN_100196644();
      return;
    }
    _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  }
  _swift_release(TVar5.unknown);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100196530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

