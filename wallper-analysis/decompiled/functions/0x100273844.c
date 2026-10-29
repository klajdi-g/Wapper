// rea decompile_all
// name: FUN_100273844
// address: 0x100273844
// body: available
// range: 0x100273844-0x100273f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100273b80) */
/* WARNING: Removing unreachable block (ram,0x000100273bac) */
/* WARNING: Removing unreachable block (ram,0x000100273bcc) */

void FUN_100273844(undefined8 param_1,ulong param_2,char *param_3,void *param_4,
                  dispatch_group_t param_5,ID param_6,long param_7,undefined8 param_8,long param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  KeyDecodingStrategy KVar3;
  DateDecodingStrategy DVar4;
  Code CVar5;
  URLError UVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  char *self;
  ID IVar9;
  JSONDecoder *pJVar10;
  Data DVar11;
  URLError UVar12;
  NSError *pNVar13;
  undefined8 uVar14;
  URL UVar15;
  undefined *puVar16;
  undefined *puVar17;
  NSString *pNVar18;
  NSDictionary *pNVar19;
  ID IVar20;
  undefined8 uVar21;
  void *pvVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar23;
  long extraout_x12;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  ID local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulong local_108;
  char *local_100;
  dispatch_group_t local_f8;
  ID local_98 [3];
  undefined8 local_80;
  undefined8 local_78;
  long lVar7;
  long lVar8;
  
  pvVar22 = param_4;
  local_118 = param_8;
  local_110 = param_1;
  local_108 = param_2;
  local_100 = param_3;
  local_f8 = param_5;
  CVar5 = Foundation::URLError::Code::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar5.unknown + -8) + 0x40));
  UVar12.unknown = (undefined *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar6 = Foundation::URLError::typeMetadataAccessor();
  lVar25 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar27 = (long)UVar12.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  KVar3 = Foundation::JSONDecoder::KeyDecodingStrategy::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,KVar3.value);
  lVar24 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar26 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,DVar4.value);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  uVar1 = local_108;
  lVar23 = lVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  if (param_4 == (void *)0x0) {
    local_160 = lVar23;
    local_150 = lVar8;
    local_148 = lVar26;
    local_140 = lVar24;
    local_138 = lVar7;
    local_130 = lVar27;
    local_128 = lVar25;
    local_120 = param_6;
    if (((local_108 >> 0x3c < 0xf) && (local_100 != (char *)0x0)) &&
       (self = local_100, local_158 = extraout_x12,
       _swift_dynamicCastObjCClass(local_100,&_OBJC_CLASS___NSHTTPURLResponse), uVar14 = local_110,
       self != (char *)0x0)) {
      FUN_1001b0bb0(local_110,uVar1);
      IVar9 = objc_stub::statusCode((ID)self);
      if (IVar9 - 200 < 100) {
        pJVar10 = Foundation::JSONDecoder::typeMetadataAccessor();
        _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
        pJVar10 = Foundation::JSONDecoder::init(pJVar10);
        if (DAT_100559110 != -1) {
          _swift_once(&DAT_100559110,FUN_10028f2ac);
        }
        lVar8 = local_150;
        lVar23 = local_150;
        FUN_100099338(local_150,&DAT_100577db0);
        lVar7 = local_160;
        (**(code **)(local_158 + 0x10))(local_160,lVar23,lVar8);
        Foundation::JSONDecoder::set_dateDecodingStrategy
                  (pJVar10,(DateDecodingStrategy)(__int8)lVar7);
        lVar7 = local_148;
        (**(code **)(local_140 + 0x68))
                  (local_148,
                   *(undefined4 *)
                    PTR___enum_case_for_Foundation_JSONDecoder_KeyDecodingStrategy_convertFromSnakeCase_Foundation_JSONDecoder_KeyDecodingStrategy_Type___>_Foundation_JSONDecoder_KeyDecodingStrategy_100520710
                   ,local_138);
        Foundation::JSONDecoder::set_keyDecodingStrategy(pJVar10,(KeyDecodingStrategy)(__int8)lVar7)
        ;
        DVar11.unknown = &DAT_100558c48;
        FUN_100002f94(&DAT_100558c48,&DAT_10042d448);
        FUN_100284524(&DAT_100558c50,&DAT_100558c58,&TargetProtocolConformanceDescriptor_1004379d0,
                      PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
        Foundation::JSONDecoder::_decode(pJVar10,DVar11);
        uVar2 = local_80;
        IVar9 = local_120;
        objc_stub::lock(local_120);
        _swift_beginAccess(param_9 + 0x10,&local_80,1,0);
        uVar21 = *(undefined8 *)(param_9 + 0x10);
        *(undefined8 *)(param_9 + 0x10) = uVar2;
        _swift_bridgeObjectRelease(uVar21);
        objc_stub::unlock(IVar9);
        FUN_1000a3004(uVar14,uVar1);
        _swift_release(pJVar10);
      }
      else {
        IVar9 = objc_stub::statusCode((ID)self,"VideoLibraryStore");
        puVar17 = &DAT_10054c048;
        FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
        _swift_initStackObject();
        *(undefined8 *)(puVar17 + 0x18) = 2;
        *(undefined8 *)(puVar17 + 0x10) = 1;
        SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar17 + 0x20) = SVar28;
        local_80 = 0;
        local_78 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1a,(_StringGuts)SVar28.bridgeObject);
        _swift_bridgeObjectRelease(local_78);
        local_80 = 0xd000000000000010;
        local_78 = 0x80000001004e3000;
        local_98[0] = objc_stub::statusCode((ID)self);
        SVar28 = Swift::CustomStringConvertible::get_description();
        SVar29.bridgeObject = pvVar22;
        SVar29.str = param_3;
        Swift::String::append(SVar28,SVar29);
        _swift_bridgeObjectRelease(SVar28.bridgeObject);
        UVar15.unknown = (undefined *)0x20726f662029;
        SVar28.bridgeObject = (void *)0xe600000000000000;
        SVar28.str = (char *)0x20726f662029;
        SVar30.bridgeObject = pvVar22;
        SVar30.str = param_3;
        Swift::String::append(SVar28,SVar30);
        SVar28 = Foundation::URL::get_path(UVar15);
        SVar31.bridgeObject = pvVar22;
        SVar31.str = param_3;
        Swift::String::append(SVar28,SVar31);
        _swift_bridgeObjectRelease(SVar28.bridgeObject);
        *(undefined **)(puVar17 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
        *(undefined8 *)(puVar17 + 0x30) = local_80;
        *(undefined8 *)(puVar17 + 0x38) = local_78;
        puVar16 = puVar17;
        FUN_100005b10(puVar17);
        _swift_setDeallocating(puVar17);
        FUN_10002a29c((String *)(puVar17 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
        puVar17 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar19 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar16);
        IVar20 = objc_stub::initWithDomain_code_userInfo_((ID)puVar17,pNVar18,IVar9,pNVar19);
        IVar9 = local_120;
        objc_stub::lock(local_120);
        _swift_beginAccess(param_7 + 0x10,&local_80,0,0);
        if (*(long *)(param_7 + 0x10) == 0) {
          _swift_beginAccess(param_7 + 0x10,local_98,1,0);
          *(ID *)(param_7 + 0x10) = IVar20;
        }
        objc_stub::unlock(IVar9);
        FUN_1000a3004(local_110,uVar1);
      }
    }
    else {
      IVar9 = local_120;
      objc_stub::lock(local_120);
      CVar5.unknown = (undefined *)(param_7 + 0x10);
      _swift_beginAccess(CVar5.unknown,&local_80,0,0);
      if (*(long *)(param_7 + 0x10) == 0) {
        Foundation::URLError::Code::get_badServerResponse(CVar5);
        FUN_1002b6ddc(PTR___swiftEmptyArrayStorage_100524190);
        FUN_1000036d0(&DAT_100558c40,PTR_typeMetadataAccessor_100520d70,
                      PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100520d68
                     );
        lVar7 = local_130;
        (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
                  ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                    )UVar12.unknown);
        pNVar13 = Foundation::URLError::get__nsError(UVar12);
        (**(code **)(local_128 + 8))(lVar7,UVar6.unknown);
        _swift_beginAccess(param_7 + 0x10,local_98,1,0);
        uVar14 = *(undefined8 *)(param_7 + 0x10);
        *(NSError **)(param_7 + 0x10) = pNVar13;
        _swift_errorRelease(uVar14);
      }
      objc_stub::unlock(IVar9);
    }
  }
  else {
    _swift_errorRetain(param_4);
    objc_stub::lock(param_6);
    _swift_beginAccess(param_7 + 0x10,&local_80,0,0);
    if (*(long *)(param_7 + 0x10) == 0) {
      _swift_beginAccess(param_7 + 0x10,local_98,1,0);
      *(void **)(param_7 + 0x10) = param_4;
      _swift_errorRetain(param_4);
    }
    objc_stub::unlock(param_6);
    _swift_errorRelease(param_4);
  }
  _dispatch_group_leave(local_f8);
  return;
}

