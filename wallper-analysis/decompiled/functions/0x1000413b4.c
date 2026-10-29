// rea decompile_all
// name: FUN_1000413b4
// address: 0x1000413b4
// body: available
// range: 0x1000413b4-0x10004162f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000413b4(void)

{
  String SVar1;
  String SVar2;
  ID IVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  undefined *puVar5;
  NSString *pNVar6;
  NSDictionary *pNVar7;
  undefined8 uVar8;
  long unaff_x22;
  String SVar9;
  
  IVar3 = objc_stub::status(*(ID *)(unaff_x22 + 0x298));
  if (IVar3 == 2) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
    (**(code **)(unaff_x22 + 0x290))
              (*(undefined8 *)(unaff_x22 + 0x248),
               *(long *)(unaff_x22 + 0x250) + *(long *)(unaff_x22 + 0x288),
               *(undefined8 *)(unaff_x22 + 600));
    _swift_task_dealloc(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    SVar2.bridgeObject = (void *)0xee0064656c696166;
    SVar2.str = (char *)0x20676e6974697257;
    SVar1.bridgeObject = (void *)0xee0064656c696166;
    SVar1.str = (char *)0x20676e6974697257;
    IVar3 = *(ID *)(unaff_x22 + 0x298);
    puVar5 = &DAT_10054c048;
    FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar5 + 0x20) = SVar9;
    IVar3 = objc_stub::error(IVar3);
    if (IVar3 == 0) {
      *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    }
    else {
      _swift_getErrorValue(IVar3,unaff_x22 + 0x240,unaff_x22 + 0x218);
      SVar9 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
      SVar2 = SVar1;
      if (SVar9.bridgeObject != (void *)0x0) {
        SVar2 = SVar9;
      }
    }
    *(String *)(puVar5 + 0x30) = SVar2;
    puVar4 = puVar5;
    FUN_100005b10("InteractiveVideoRenderer",puVar5);
    _swift_setDeallocating(puVar5);
    FUN_10002a29c((String *)(puVar5 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
    puVar5 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar4);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar5,pNVar6,8,pNVar7);
    _swift_willThrow(0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x268));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010004162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

