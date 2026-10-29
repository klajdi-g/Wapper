// rea decompile_all
// name: FUN_1002b7090
// address: 0x1002b7090
// body: available
// range: 0x1002b7090-0x1002b73a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b7090(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  NSString *pNVar5;
  NSDictionary *pNVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  URLError UVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(unaff_x22 + 0xc0);
  _swift_dynamicCastObjCClass(lVar9,&_OBJC_CLASS___NSHTTPURLResponse);
  if (lVar9 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar9 = *(long *)(unaff_x22 + 0x90);
    uStack_68 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    local_70 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar1 = *(long *)(unaff_x22 + 0x78);
    UVar10.unknown = *(undefined **)(unaff_x22 + 0x68);
    Foundation::URLError::Code::get_badServerResponse((Code)0x0);
    FUN_1002b6ddc(PTR___swiftEmptyArrayStorage_100524190);
    FUN_1000036d0(&DAT_100558c40,PTR_typeMetadataAccessor_100520d70,
                  PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100520d68)
    ;
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                )UVar10.unknown);
    Foundation::URLError::get__nsError(UVar10);
    _swift_willThrow();
    FUN_100093624(uVar13,uVar8);
    (**(code **)(lVar1 + 8))(uVar12,uVar11);
    pcVar7 = *(code **)(lVar9 + 8);
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0xb0);
    FUN_1002b5e7c(uVar2,*(undefined8 *)(unaff_x22 + 0xb8),lVar9,*(undefined8 *)(unaff_x22 + 0x98));
    if ((uVar2 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
      (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x88));
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001002b7148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))
                (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xb8),lVar9);
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar9 = *(long *)(unaff_x22 + 0x90);
    uStack_68 = *(undefined8 *)(unaff_x22 + 0x98);
    local_70 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar4 = &DAT_10054c048;
    FUN_100002f94("WallperAPISecurity",&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar4 + 0x20) = SVar14.str;
    *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar4 + 0x28) = SVar14.bridgeObject;
    *(undefined8 *)(puVar4 + 0x30) = 0xd000000000000026;
    *(undefined8 *)(puVar4 + 0x38) = 0x80000001004e3df0;
    puVar3 = puVar4;
    FUN_100005b10(puVar4);
    _swift_setDeallocating(puVar4);
    FUN_10002a29c(puVar4 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar4 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar3);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar4,pNVar5,1,pNVar6);
    _swift_willThrow(0);
    FUN_100093624(uVar12,uVar8);
    pcVar7 = *(code **)(lVar9 + 8);
  }
  (*pcVar7)(uStack_68,local_70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002b73a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

