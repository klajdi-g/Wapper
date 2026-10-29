// rea decompile_all
// name: FUN_10013c448
// address: 0x10013c448
// body: available
// range: 0x10013c448-0x10013c817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10013c448(ID param_1,Encoding param_2,void *param_3,void *param_4,undefined8 param_5)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Code CVar5;
  URLError UVar6;
  Encoding EVar7;
  undefined *puVar8;
  undefined *puVar9;
  NSString *pNVar10;
  NSDictionary *pNVar11;
  URLError UVar12;
  void *pvVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  char *pcVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  char acStack_e0 [8];
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  
  local_d8 = param_3;
  local_d0 = param_4;
  local_c8 = param_5;
  CVar5 = Foundation::URLError::Code::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar5.unknown + -8) + 0x40));
  UVar12.unknown = acStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar6 = Foundation::URLError::typeMetadataAccessor();
  lVar14 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = (long)UVar12.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  EVar7 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(EVar7.unknown + -8) + 0x40));
  pcVar15 = (char *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___NSHTTPURLResponse);
  if (param_1 == 0) {
    Foundation::URLError::Code::get_badServerResponse((Code)0x0);
    FUN_1002b6ddc(PTR___swiftEmptyArrayStorage_100524190);
    FUN_1000036d0(&DAT_100558c40,PTR_typeMetadataAccessor_100520d70,
                  PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100520d68)
    ;
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                )UVar12.unknown);
    Foundation::URLError::get__nsError(UVar12);
    _swift_willThrow();
    (**(code **)(lVar14 + 8))(lVar16,UVar6.unknown);
  }
  else {
    EVar7.unknown = (undefined *)objc_stub::statusCode(param_1);
    if ((undefined *)0x63 < EVar7.unknown + -200) {
      Encoding::_get_utf8(EVar7);
      pvVar13 = local_d8;
      (extension_Foundation)::Swift::String::_init(param_2);
      pcVar1 = (char *)0x6f62207974706d45;
      if (pvVar13 != (void *)0x0) {
        pcVar1 = param_2.unknown;
      }
      pvVar2 = (void *)0xea00000000007964;
      if (pvVar13 != (void *)0x0) {
        pvVar2 = pvVar13;
      }
      local_d8 = (void *)objc_stub::statusCode(param_1);
      puVar9 = &DAT_10054c048;
      FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar9 + 0x20) = SVar17;
      local_c0 = (void *)0x0;
      local_b8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x12,(_StringGuts)SVar17.bridgeObject);
      uVar4 = local_b8;
      uVar3 = local_c8;
      _swift_bridgeObjectRetain(local_c8);
      _swift_bridgeObjectRelease(uVar4);
      local_c0 = local_d0;
      local_b8 = uVar3;
      SVar17.bridgeObject = (void *)0xe900000000000028;
      SVar17.str = (char *)0x2064656c69616620;
      SVar20.bridgeObject = param_4;
      SVar20.str = pcVar15;
      Swift::String::append(SVar17,SVar20);
      objc_stub::statusCode(param_1);
      SVar17 = Swift::CustomStringConvertible::get_description();
      SVar21.bridgeObject = param_4;
      SVar21.str = pcVar15;
      Swift::String::append(SVar17,SVar21);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      SVar18.bridgeObject = (void *)0xe300000000000000;
      SVar18.str = (char *)0x203a29;
      SVar22.bridgeObject = param_4;
      SVar22.str = pcVar15;
      Swift::String::append(SVar18,SVar22);
      SVar19.bridgeObject = pvVar2;
      SVar19.str = pcVar1;
      SVar23.bridgeObject = param_4;
      SVar23.str = pcVar15;
      Swift::String::append(SVar19,SVar23);
      _swift_bridgeObjectRelease(pvVar2);
      *(undefined **)(puVar9 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
      *(void **)(puVar9 + 0x30) = local_c0;
      *(undefined8 *)(puVar9 + 0x38) = local_b8;
      puVar8 = puVar9;
      FUN_100005b10(puVar9);
      _swift_setDeallocating(puVar9);
      FUN_10002a29c((String *)(puVar9 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
      puVar9 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar11 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar8);
      objc_stub::initWithDomain_code_userInfo_((ID)puVar9,pNVar10,local_d8,pNVar11);
      _swift_willThrow(0);
    }
  }
  return param_1;
}

