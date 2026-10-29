// rea decompile_all
// name: FUN_10003b940
// address: 0x10003b940
// body: available
// range: 0x10003b940-0x10003bbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003ba1c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003bbb0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003b940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSString *pNVar9;
  NSDictionary *pNVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  String SVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100521138;
  FUN_10003a6ac(unaff_x22 + 0x90,*(undefined1 *)(unaff_x22 + 0x1e8));
  if (*(long *)(unaff_x22 + 0x98) == 0) {
    puVar8 = &DAT_10054c048;
    FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar8 + 0x20) = SVar13.str;
    *(undefined **)(puVar8 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar8 + 0x28) = SVar13.bridgeObject;
    *(undefined8 *)(puVar8 + 0x30) = 0xd00000000000001b;
    *(undefined8 *)(puVar8 + 0x38) = 0x80000001004dbf70;
    puVar7 = puVar8;
    FUN_100005b10(puVar8);
    _swift_setDeallocating(puVar8);
    FUN_10002a29c(puVar8 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar8 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar7);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar8,pNVar9,1,pNVar10);
    _swift_willThrow(0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar2);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010003bbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x68) = *(long *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xb0);
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar8 = PTR_typeMetadataAccessor_1005246d8;
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
    *(MainActor **)(unaff_x22 + 0x1b0) = pMVar4;
    puVar5 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar6 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar11) {
      _swift_task_switch(FUN_10003bbb4,UVar6.unknown,puVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

