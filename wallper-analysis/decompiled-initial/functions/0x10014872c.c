// rea decompile_all
// name: FUN_10014872c
// address: 0x10014872c
// body: available
// range: 0x10014872c-0x100148843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100148840 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014872c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  String function;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x71;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100148844;
  uVar3 = *(undefined1 *)(unaff_x22 + 0x72);
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar4 = &DAT_100554ab0;
  FUN_100002f94(&DAT_100554ab0,&DAT_100427c60);
  lVar7 = *(long *)(puVar4 + -8);
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  function.bridgeObject = (void *)0x80000001004de770;
  function.str = (char *)0xd000000000000018;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_100147594(uVar5,uVar1,uVar6,uVar3);
  _swift_release(uVar2);
  (**(code **)(lVar7 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

