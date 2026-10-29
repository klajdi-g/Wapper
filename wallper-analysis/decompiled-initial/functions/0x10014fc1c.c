// rea decompile_all
// name: FUN_10014fc1c
// address: 0x10014fc1c
// body: available
// range: 0x10014fc1c-0x1001500e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010014fd7c) */

ID FUN_10014fc1c(undefined8 param_1,Encoding param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  DateDecodingStrategy DVar3;
  Encoding EVar4;
  undefined7 extraout_var;
  JSONDecoder *pJVar6;
  long lVar7;
  CharacterSet CVar8;
  undefined *puVar9;
  undefined *puVar10;
  NSString *pNVar11;
  NSDictionary *pNVar12;
  ID IVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long lVar16;
  String *pSVar17;
  undefined8 uVar18;
  CharacterSet in;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  char acStack_1b0 [8];
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_f8;
  undefined8 local_98;
  undefined *local_90;
  undefined *local_70;
  long lVar5;
  
  local_1a0 = param_1;
  EVar4 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(EVar4.unknown + -8) + 0x40));
  pcVar14 = acStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  lVar15 = *(long *)(local_1a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  in.unknown = pcVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,DVar3.value);
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar19 = (long)in.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
  pJVar6 = Foundation::JSONDecoder::init(pJVar6);
  if (DAT_100559110 != -1) {
    _swift_once(&DAT_100559110,FUN_10028f2ac);
  }
  lVar7 = lVar5;
  FUN_100099338(lVar5,&DAT_100577db0);
  (**(code **)(lVar16 + 0x10))(lVar19,lVar7,lVar5);
  Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar6,(DateDecodingStrategy)(__int8)lVar19);
  FUN_10015019c();
  puVar9 = &DAT_10052e878;
  Foundation::JSONDecoder::_decode(pJVar6,(Data)0x10052e878);
  _swift_release(pJVar6);
  puVar10 = local_90;
  EVar4.unknown = local_70;
  if (local_90 != (undefined *)0x0) {
    CVar8.unknown = local_90;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
    FUN_100026df4();
    SVar21 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    EVar4.unknown = SVar21.bridgeObject;
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(local_70);
    (**(code **)(lVar15 + 8))(in.unknown,local_1a8);
    _swift_bridgeObjectRelease(puVar10);
    uVar1 = (ulong)SVar21.str & 0xffffffffffff;
    if (((ulong)EVar4.unknown & 0x2000000000000000) != 0) {
      uVar1 = (ulong)EVar4.unknown >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar10 = &DAT_10054c048;
      FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = 2;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pSVar17 = (String *)(puVar10 + 0x20);
      pSVar17->str = SVar20.str;
      *(undefined **)(puVar10 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
      *(void **)(puVar10 + 0x28) = SVar20.bridgeObject;
      *(char **)(puVar10 + 0x30) = SVar21.str;
      uVar18 = local_1a0;
      goto LAB_10014fff0;
    }
  }
  _swift_bridgeObjectRelease();
  puVar2 = PTR___type_metadata_for_Swift_String_100523a98;
  Encoding::_get_utf8(EVar4);
  (extension_Foundation)::Swift::String::_init(param_2);
  if (param_3 != (undefined *)0x0) {
    uVar1 = (ulong)param_2.unknown & 0xffffffffffff;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar10 = &DAT_10054c048;
      FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = 2;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pSVar17 = (String *)(puVar10 + 0x20);
      pSVar17->str = SVar21.str;
      *(undefined **)(puVar10 + 0x48) = puVar2;
      *(void **)(puVar10 + 0x28) = SVar21.bridgeObject;
      *(undefined **)(puVar10 + 0x30) = param_2.unknown;
      EVar4.unknown = param_3;
      uVar18 = local_1a0;
      goto LAB_10014fff0;
    }
    _swift_bridgeObjectRelease(param_3);
  }
  puVar10 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar17 = (String *)(puVar10 + 0x20);
  *pSVar17 = SVar21;
  local_98 = 0;
  local_90 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x18,(_StringGuts)SVar21.bridgeObject);
  _swift_bridgeObjectRelease(local_90);
  uVar18 = local_1a0;
  local_98 = 0xd000000000000015;
  local_90 = (undefined *)0x80000001004de9d0;
  local_f8 = local_1a0;
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar20.bridgeObject = puVar9;
  SVar20.str = pcVar14;
  Swift::String::append(SVar21,SVar20);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar21.bridgeObject = (void *)0xe100000000000000;
  SVar21.str = (char *)0x29;
  SVar22.bridgeObject = puVar9;
  SVar22.str = pcVar14;
  Swift::String::append(SVar21,SVar22);
  *(undefined **)(puVar10 + 0x48) = puVar2;
  *(undefined8 *)(puVar10 + 0x30) = local_98;
  EVar4.unknown = local_90;
LAB_10014fff0:
  *(undefined **)(puVar10 + 0x38) = EVar4.unknown;
  puVar9 = puVar10;
  FUN_100005b10(puVar10);
  _swift_setDeallocating(puVar10);
  FUN_10002a29c(pSVar17,&DAT_10054a1c0,&DAT_10041a250);
  puVar10 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar9);
  IVar13 = objc_stub::initWithDomain_code_userInfo_((ID)puVar10,pNVar11,uVar18,pNVar12);
  return IVar13;
}

