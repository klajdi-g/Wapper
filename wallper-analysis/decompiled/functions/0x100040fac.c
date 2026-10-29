// rea decompile_all
// name: FUN_100040fac
// address: 0x100040fac
// body: available
// range: 0x100040fac-0x100041373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000410b8 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100041178 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100040fac(void)

{
  code *pcVar1;
  ID IVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSString *pNVar7;
  NSDictionary *pNVar8;
  _ArrayBuffer _Var9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  String SVar13;
  
  IVar2 = objc_stub::isReadyForMoreMediaData(*(ID *)(unaff_x22 + 0x2a0));
  if ((int)IVar2 == 0) goto LAB_100041064;
  while ((IVar2 = objc_stub::status(*(ID *)(unaff_x22 + 0x298)), IVar2 == 1 &&
         (lVar10 = *(long *)(unaff_x22 + 0x2b0), lVar12 = *(long *)(unaff_x22 + 0x278),
         objc_stub::appendSampleBuffer_
                   (*(ID *)(unaff_x22 + 0x2a0),*(undefined8 *)(unaff_x22 + 0x2a8)), lVar10 != lVar12
         ))) {
    uVar11 = *(ulong *)(unaff_x22 + 0x2b0);
    _Var9.unknown = *(undefined **)(unaff_x22 + 0x270);
    if (((ulong)_Var9.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100041374);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(_Var9.unknown + uVar11 * 8 + 0x20);
    }
    else {
      uVar3 = uVar11;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var9);
    }
    *(ulong *)(unaff_x22 + 0x2a8) = uVar3;
    *(ulong *)(unaff_x22 + 0x2b0) = uVar11 + 1;
    if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100041370);
      (*pcVar1)();
    }
    IVar2 = objc_stub::isReadyForMoreMediaData(*(ID *)(unaff_x22 + 0x2a0));
    if ((IVar2 & 1) == 0) {
LAB_100041064:
      IVar2 = objc_stub::status(*(ID *)(unaff_x22 + 0x298));
      if (IVar2 == 1) {
        plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x2b8) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_100040f50;
        (extension_Swift)::Swift::Task::_sleep(5000000);
        return;
      }
    }
  }
  IVar2 = *(ID *)(unaff_x22 + 0x298);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x270));
  IVar2 = objc_stub::status(IVar2);
  if (IVar2 == 1) {
    IVar2 = *(ID *)(unaff_x22 + 0x298);
    objc_stub::markAsFinished(*(ID *)(unaff_x22 + 0x2a0));
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100041374;
    lVar10 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar10,0);
    puVar6 = &DAT_10054c080;
    FUN_100002f94(&DAT_10054c080,&DAT_10041d820);
    *(undefined **)(unaff_x22 + 0x1c8) = puVar6;
    *(long *)(unaff_x22 + 0x1b0) = lVar10;
    *(undefined **)(unaff_x22 + 400) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x198) = 0x42000000;
    *(code **)(unaff_x22 + 0x1a0) = FUN_1000426d4;
    *(undefined **)(unaff_x22 + 0x1a8) = &DAT_100526558;
    objc_stub::finishWritingWithCompletionHandler_(IVar2,unaff_x22 + 400);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  IVar2 = *(ID *)(unaff_x22 + 0x298);
  puVar6 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar6 + 0x20) = SVar13;
  IVar2 = objc_stub::error(IVar2);
  if (IVar2 == 0) {
    *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
  }
  else {
    _swift_getErrorValue(IVar2,unaff_x22 + 0x238,unaff_x22 + 0x200);
    SVar13 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    if (SVar13.bridgeObject != (void *)0x0) goto LAB_10004125c;
  }
  SVar13.bridgeObject = (void *)0xee0064656c696166;
  SVar13.str = (char *)0x20676e6974697257;
LAB_10004125c:
  *(String *)(puVar6 + 0x30) = SVar13;
  puVar5 = puVar6;
  FUN_100005b10("InteractiveVideoRenderer",puVar6);
  _swift_setDeallocating(puVar6);
  FUN_10002a29c((String *)(puVar6 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
  puVar6 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  objc_stub::initWithDomain_code_userInfo_((ID)puVar6,pNVar7,8,pNVar8);
  _swift_willThrow(0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x268));
                    /* WARNING: Could not recover jumptable at 0x000100041368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

