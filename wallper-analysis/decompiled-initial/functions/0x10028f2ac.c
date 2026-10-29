// rea decompile_all
// name: FUN_10028f2ac
// address: 0x10028f2ac
// body: available
// range: 0x10028f2ac-0x10028f4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10028f2ac(void)

{
  DateDecodingStrategy DVar1;
  Locale LVar2;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  ID self;
  Locale LVar6;
  NSLocale *pNVar7;
  NSString *pNVar8;
  ContiguousArray extraout_x1;
  undefined *extraout_x1_00;
  ContiguousArray CVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  ContiguousArray oldCount;
  undefined **ppuVar12;
  String identifier;
  undefined1 auStack_90 [8];
  ID local_88;
  ID local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined8 *puVar3;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  lVar11 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  DVar1 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  puVar3 = (undefined8 *)CONCAT71(extraout_var,DVar1.value);
  FUN_1000a1ff8(puVar3,&DAT_100577db0);
  local_70 = puVar3;
  FUN_100099338(puVar3,&DAT_100577db0);
  puVar4 = &_OBJC_CLASS___NSISO8601DateFormatter;
  local_78 = puVar3;
  _objc_allocWithZone();
  local_80 = objc_stub::init((ID)puVar4);
  objc_stub::setFormatOptions_(local_80,0xf73);
  puVar4 = &_OBJC_CLASS___NSISO8601DateFormatter;
  _objc_allocWithZone();
  local_88 = objc_stub::init((ID)puVar4);
  objc_stub::setFormatOptions_(local_88,0x773);
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  lVar10 = 4;
  Swift::ContiguousArray::_reserveCapacity(4,extraout_x1);
  ppuVar12 = &PTR_s_app_wallper_applescript_100559148;
  do {
    puVar4 = *ppuVar12;
    puVar5 = &_OBJC_CLASS___NSDateFormatter;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(puVar4);
    self = objc_stub::init((ID)puVar5);
    identifier.bridgeObject = (void *)0xeb00000000584953;
    identifier.str = (char *)0x4f505f53555f6e65;
    LVar6 = Foundation::Locale::init(identifier);
    pNVar7 = Foundation::Locale::_bridgeToObjectiveC(LVar6);
    (**(code **)(lVar11 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),LVar2.unknown)
    ;
    objc_stub::setLocale_(self,pNVar7);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setDateFormat_(self,pNVar8);
    CVar9.unknown = extraout_x1_00;
    _swift_bridgeObjectRelease(puVar4);
    Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
    oldCount.unknown = local_68[0x10];
    Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)oldCount.unknown,CVar9);
    Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,self);
    Swift::ContiguousArray::__endMutation(oldCount);
    ppuVar12 = ppuVar12 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  _swift_arrayDestroy(&DAT_100559140,4,PTR___type_metadata_for_Swift_String_100523a98);
  puVar5 = local_68;
  puVar4 = &DAT_100536e30;
  _swift_allocObject(&DAT_100536e30,0x28,7);
  *(ID *)(puVar4 + 0x10) = local_80;
  *(ID *)(puVar4 + 0x18) = local_88;
  *(undefined **)(puVar4 + 0x20) = puVar5;
  *local_78 = FUN_10028f9e0;
  local_78[1] = puVar4;
  (**(code **)(local_70[-1] + 0x68))
            (local_78,*(undefined4 *)
                       PTR___enum_case_for_Foundation_JSONDecoder_DateDecodingStrategy_custom_Foundation_JSONDecoder_DateDecodingStrategy_Type___>___Swift_Decoder__throws__>_Foundation_Date___>_Foundation_JSONDecoder_DateDecodingStrategy_100520728
            );
  return;
}

