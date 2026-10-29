// rea decompile_all
// name: FUN_10019c2c0
// address: 0x10019c2c0
// body: available
// range: 0x10019c2c0-0x10019c66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019c478 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019c588 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019c66c to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019c2c0(void)

{
  byte bVar1;
  void *pvVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar9;
  undefined8 uVar11;
  ID IVar12;
  undefined8 uVar13;
  long unaff_x22;
  String SVar14;
  String function;
  void *pvVar10;
  
  IVar12 = **(ID **)(unaff_x22 + 0x118);
  FUN_100029548(*(ID **)(unaff_x22 + 0x118),FUN_10028e828);
  if (IVar12 == 0) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x118));
  }
  else {
    IVar12 = objc_stub::stringValue(IVar12);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
    if (IVar12 == 0) {
      _swift_task_dealloc(uVar11);
    }
    else {
      SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar10 = SVar14.bridgeObject;
      _swift_task_dealloc(uVar11);
      uVar7 = (ulong)SVar14.str & 0xffffffffffff;
      if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
        uVar7 = (ulong)pvVar10 >> 0x38 & 0xf;
      }
      pvVar2 = pvVar10;
      if (uVar7 != 0) {
        *(String *)(unaff_x22 + 0xf0) = SVar14;
        *(undefined8 *)(unaff_x22 + 0x100) = 0x7c7c7c;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xe300000000000000;
        FUN_100026df4();
        pvVar2 = (void *)(unaff_x22 + 0x100);
        (extension_Foundation)::Swift::StringProtocol::_components
                  (pvVar2,PTR___type_metadata_for_Swift_String_100523a98,
                   PTR___type_metadata_for_Swift_String_100523a98,uVar11,uVar11);
        _swift_bridgeObjectRelease(pvVar10);
        if (*(long *)((long)pvVar2 + 0x10) == 3) {
          *(undefined1 *)(unaff_x22 + 0x174) = 0;
          *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)((long)pvVar2 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)((long)pvVar2 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)((long)pvVar2 + 0x30);
          uVar11 = *(undefined8 *)((long)pvVar2 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x150) = uVar11;
          *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)((long)pvVar2 + 0x40);
          uVar13 = *(undefined8 *)((long)pvVar2 + 0x48);
          *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar13);
          _swift_bridgeObjectRelease(pvVar2);
          pMVar3 = Swift::MainActor::typeMetadataAccessor();
          puVar9 = PTR_typeMetadataAccessor_1005246d8;
          pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
          *(MainActor **)(unaff_x22 + 0x168) = pMVar3;
          puVar4 = &DAT_100558b80;
          FUN_1000036d0(&DAT_100558b80,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
          UVar5 = Swift::Actor::get_unownedExecutor();
          _swift_task_switch(FUN_10019c8e8,UVar5.unknown,puVar4);
          return;
        }
      }
      _swift_bridgeObjectRelease(pvVar2);
    }
  }
  if (*(char *)(unaff_x22 + 0x173) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010019c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = 0;
  FUN_10028e828();
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0xd0000000000001df;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0x80000001004e01e0;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) == 0) {
    *(ulong *)(unaff_x22 + 0x38) = uVar7;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10019c6b8;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,0);
    puVar9 = &DAT_100555ea0;
    FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
    lVar6 = *(long *)(puVar9 + -8);
    uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar7);
    function.bridgeObject = (void *)0xe700000000000000;
    function.str = (char *)0x293a5f286e7572;
    Swift::CheckedContinuation::init(continuation,function);
    FUN_10028e2e0(uVar7,0xd0000000000001df,0x80000001004e01e0);
    (**(code **)(lVar6 + 8))(uVar7,puVar9);
    _swift_task_dealloc(uVar7);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  plVar8 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x130) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10019c670;
  SVar14.bridgeObject = (void *)0x0;
  SVar14.str = (char *)uVar7;
  Swift::_withCheckedContinuation(SVar14);
  return;
}

