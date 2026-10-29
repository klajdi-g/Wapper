// rea decompile_all
// name: FUN_1001ebd0c
// address: 0x1001ebd0c
// body: available
// range: 0x1001ebd0c-0x1001ebecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ebe84 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ebd0c(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  ulong uVar6;
  long lVar7;
  long lVar8;
  String function;
  
  lVar7 = *(long *)(unaff_x22 + 0x68);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1001ebecc;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar1 = &DAT_100556a40;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar8 = *(long *)(puVar1 + -8);
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  function.bridgeObject = (void *)0xe900000000000029;
  function.str = (char *)0x2865726975716361;
  Swift::CheckedContinuation::init(continuation,function);
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  (**(code **)(lVar8 + 0x10))();
  _swift_beginAccess(lVar7 + 0x78,unaff_x22 + 0x50,0x21,0);
  uVar6 = *(ulong *)(lVar7 + 0x78);
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar7 + 0x78) = uVar6;
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1001c4b8c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(lVar7 + 0x78) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_1001c4b8c(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  (**(code **)(lVar8 + 0x20))
            (uVar6 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
             *(long *)(lVar8 + 0x48) * uVar4,uVar3,puVar1);
  *(ulong *)(lVar7 + 0x78) = uVar6;
  _swift_endAccess(unaff_x22 + 0x50);
  (**(code **)(lVar8 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

