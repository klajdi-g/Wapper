// rea decompile_all
// name: FUN_10003ff34
// address: 0x10003ff34
// body: available
// range: 0x10003ff34-0x1000401d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003fff0 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000401d4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003ff34(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  NSString *pNVar6;
  NSDictionary *pNVar7;
  long lVar8;
  long unaff_x22;
  String SVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100521138;
  lVar1 = *(long *)(unaff_x22 + 0xb0) + 1;
  if (lVar1 != 500) {
    *(long *)(unaff_x22 + 0xb0) = lVar1;
    iVar2 = 0;
    _CVPixelBufferPoolCreatePixelBufferWithAuxAttributes
              (0,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xa0),
               unaff_x22 + 0x90);
    if (iVar2 == -0x1a21) {
      plVar3 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10003fe94;
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
        (extension_Swift)::Swift::Task::_sleep(10000000);
        return;
      }
      goto LAB_1000401d4;
    }
  }
  if (*(long *)(unaff_x22 + 0x90) == 0) {
    puVar5 = &DAT_10054c048;
    FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar5 + 0x20) = SVar9.str;
    *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar5 + 0x28) = SVar9.bridgeObject;
    *(undefined8 *)(puVar5 + 0x30) = 0xd00000000000001e;
    *(undefined8 *)(puVar5 + 0x38) = 0x80000001004dc050;
    puVar4 = puVar5;
    FUN_100005b10(puVar5);
    _swift_setDeallocating(puVar5);
    FUN_10002a29c(puVar5 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar5 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar4);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar5,pNVar6,4,pNVar7);
    _swift_willThrow(0);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001000401d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100040054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(long *)(unaff_x22 + 0x90));
    return;
  }
LAB_1000401d4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

