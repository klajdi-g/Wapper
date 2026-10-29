// rea decompile_all
// name: FUN_1001ae30c
// address: 0x1001ae30c
// body: available
// range: 0x1001ae30c-0x1001ae5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ae4f0 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001ae5d4 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001ae5d8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ae30c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  _StringGuts _Var7;
  long lVar8;
  long unaff_x22;
  String SVar9;
  String SVar10;
  String SVar11;
  String isolation;
  String function;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  char *local_68;
  void *pvVar6;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100521138;
  _NSTemporaryDirectory();
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar6 = SVar9.bridgeObject;
  _swift_bridgeObjectRetain(pvVar6);
  _Var7.unknown = (undefined *)0x80000001004dfb00;
  SVar10.bridgeObject = (void *)0x80000001004dfb00;
  SVar10.str = (char *)0xd000000000000013;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  _swift_bridgeObjectRelease(pvVar6);
  local_68 = SVar9.str;
  *(char **)(unaff_x22 + 0xd8) = local_68;
  *(void **)(unaff_x22 + 0xe0) = pvVar6;
  Swift::_StringGuts::grow(0x2a2,_Var7);
  SVar11.bridgeObject = (void *)0x80000001004dfb20;
  SVar11.str = (char *)0xd0000000000001a0;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  SVar9.bridgeObject = (void *)0x80000001004dfcd0;
  SVar9.str = (char *)0xd000000000000100;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar9,SVar15);
  *(undefined8 *)(unaff_x22 + 0xe8) = 0xe000000000000000;
  lVar2 = 0;
  FUN_10028e828();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0xe000000000000000;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) == 0) {
    *(ulong *)(unaff_x22 + 0x38) = uVar3;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1001ae65c;
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
    FUN_10028e2e0(uVar3,0,0xe000000000000000);
    _swift_bridgeObjectRelease(0xe000000000000000);
    (**(code **)(lVar2 + 8))(uVar3,puVar5);
    _swift_task_dealloc(uVar3);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
  }
  else {
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001ae5dc;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
      isolation.bridgeObject = (void *)0x0;
      isolation.str = (char *)uVar3;
      Swift::_withCheckedContinuation(isolation);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

