// rea decompile_all
// name: FUN_1001a6f08
// address: 0x1001a6f08
// body: available
// range: 0x1001a6f08-0x1001a708b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a6fc0 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a7088 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a6f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x22;
  long lVar7;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xd8);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001a708c;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)*(ulong *)(unaff_x22 + 0xe8);
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1001a70d4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar5 = &DAT_100555ea0;
  FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
  lVar7 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  function.bridgeObject = (void *)0xe700000000000000;
  function.str = (char *)0x293a5f286e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_10028e2e0(uVar6,uVar1,uVar2);
  (**(code **)(lVar7 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

