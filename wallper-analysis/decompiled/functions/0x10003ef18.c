// rea decompile_all
// name: FUN_10003ef18
// address: 0x10003ef18
// body: available
// range: 0x10003ef18-0x10003f02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003ef94 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003ef18(void)

{
  Task TVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x730) != 0) {
    TVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x758) = TVar1.unknown;
    *(long *)TVar1.unknown = unaff_x22;
    *(code **)(TVar1.unknown + 8) = FUN_10003f030;
    (extension_Swift)::Swift::Task::_get_value(TVar1);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x638);
  FUN_100043c34(*(undefined8 *)(unaff_x22 + 0x600),*(undefined8 *)(unaff_x22 + 0x608),
                *(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618),
                *(undefined8 *)(unaff_x22 + 0x620),*(undefined8 *)(unaff_x22 + 0x628));
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003f02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

