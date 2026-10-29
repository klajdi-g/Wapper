// rea decompile_all
// name: FUN_1001f18c8
// address: 0x1001f18c8
// body: available
// range: 0x1001f18c8-0x1001f19a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f1924 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001f1990 to 0x1001f1afc FUN_1001f1afc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f18c8(void)

{
  Task TVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x28) != 0) {
    TVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x68) = TVar1.unknown;
    *(long *)TVar1.unknown = unaff_x22;
    *(code **)(TVar1.unknown + 8) = FUN_1001f19a8;
    (extension_Swift)::Swift::Task::_get_value(TVar1);
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x30);
  _swift_beginAccess(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x70) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0x6c0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1001f1a84;
    FUN_1001f1afc(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                  *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                  *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001f19a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

