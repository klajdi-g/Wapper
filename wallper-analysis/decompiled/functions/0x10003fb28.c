// rea decompile_all
// name: FUN_10003fb28
// address: 0x10003fb28
// body: available
// range: 0x10003fb28-0x10003fe93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003fcb0 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003fe90 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003fb28(void)

{
  int iVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  undefined *puVar4;
  NSString *pNVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  long lVar9;
  String SVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100521138;
  plVar8 = (long *)(unaff_x22 + 0x90);
  *plVar8 = 0;
  lVar9 = *(long *)(unaff_x22 + 0x98);
  puVar4 = &DAT_10054c0a8;
  FUN_100002f94(&DAT_10054c0a8,&DAT_10041d840);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) =
       *(undefined8 *)PTR__kCVPixelBufferPoolAllocationThresholdKey_1005218a0;
  *(undefined8 *)(puVar4 + 0x28) = 5;
  puVar2 = puVar4;
  FUN_1000066b0(puVar4);
  _swift_setDeallocating(puVar4);
  FUN_10002a29c(puVar4 + 0x20,&DAT_10054c0b0,&DAT_10041d848);
  FUN_100007e08(0);
  FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  *(NSDictionary **)(unaff_x22 + 0xa0) = pNVar3;
  _swift_bridgeObjectRelease(puVar2);
  uVar6 = *(undefined8 *)(lVar9 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  iVar1 = 0;
  _CVPixelBufferPoolCreatePixelBufferWithAuxAttributes
            (0,uVar6,*(undefined8 *)(unaff_x22 + 0xa0),plVar8);
  if (iVar1 == -0x1a21) {
    plVar8 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_10003fe94;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar7) {
      (extension_Swift)::Swift::Task::_sleep(10000000);
      return;
    }
  }
  else if (*plVar8 == 0) {
    puVar4 = &DAT_10054c048;
    FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar4 + 0x20) = SVar10.str;
    *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar4 + 0x28) = SVar10.bridgeObject;
    *(undefined8 *)(puVar4 + 0x30) = 0xd00000000000001e;
    *(undefined8 *)(puVar4 + 0x38) = 0x80000001004dc050;
    puVar2 = puVar4;
    FUN_100005b10(puVar4);
    _swift_setDeallocating(puVar4);
    FUN_10002a29c(puVar4 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar4 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar2);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar4,pNVar5,4,pNVar3);
    _swift_willThrow(0);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010003fe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100521138 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010003fd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*plVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

