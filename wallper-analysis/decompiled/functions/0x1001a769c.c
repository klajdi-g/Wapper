// rea decompile_all
// name: FUN_1001a769c
// address: 0x1001a769c
// body: available
// range: 0x1001a769c-0x1001a79a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a7838 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a78fc to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a79a0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a769c(void)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  NSString *pNVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  long lVar10;
  long unaff_x22;
  String isolation;
  String function;
  
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar4 = (undefined *)
           NSRunningApplication::runningApplicationsWithBundleIdentifier_
                     ((ID)&_OBJC_CLASS___NSRunningApplication,pNVar3);
  FUN_100044230(0,&DAT_100554258,&PTR__OBJC_CLASS___NSRunningApplication_10053fb30);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar4 >> 0x3e == 0) {
    lVar10 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRelease();
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _swift_bridgeObjectRelease(puVar4);
  }
  if (lVar10 != 0) {
    lVar10 = 0;
    FUN_10028e828();
    uVar5 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0xb8) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x80000001004e0a30;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) == 0) {
      *(ulong *)(unaff_x22 + 0x38) = uVar5;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1001a79ec;
      continuation.unknown = (undefined *)(unaff_x22 + 0x10);
      _swift_continuation_init(continuation.unknown,0);
      puVar4 = &DAT_100555ea0;
      FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
      lVar10 = *(long *)(puVar4 + -8);
      uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar5);
      function.bridgeObject = (void *)0xe700000000000000;
      function.str = (char *)0x293a5f286e7572;
      Swift::CheckedContinuation::init(continuation,function);
      FUN_10028e2e0(uVar5,0xd00000000000002c,0x80000001004e0a30);
      (**(code **)(lVar10 + 8))(uVar5,puVar4);
      _swift_task_dealloc(uVar5);
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1001a79a4;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)uVar5;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_1005246d8;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  *(MainActor **)(unaff_x22 + 0xd8) = pMVar7;
  puVar8 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar9 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001a7c8c,UVar9.unknown,puVar8);
  return;
}

