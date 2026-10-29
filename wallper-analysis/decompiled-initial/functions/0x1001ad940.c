// rea decompile_all
// name: FUN_1001ad940
// address: 0x1001ad940
// body: available
// range: 0x1001ad940-0x1001adaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ada38 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001adafc to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ad940(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  long unaff_x22;
  String isolation;
  String function;
  
  lVar2 = 0;
  FUN_10028e828();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x68) = 0x80000001004df9c0;
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xd000000000000138;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001adb00;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)uVar3;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1001adb48;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar5 = &DAT_100555ea0;
  FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
  lVar2 = *(long *)(puVar5 + -8);
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  function.bridgeObject = (void *)0xe700000000000000;
  function.str = (char *)0x293a5f286e7572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_10028e2e0(uVar3,0xd000000000000138,0x80000001004df9c0);
  (**(code **)(lVar2 + 8))(uVar3,puVar5);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

