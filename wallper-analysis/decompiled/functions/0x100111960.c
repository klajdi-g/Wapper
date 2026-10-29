// rea decompile_all
// name: FUN_100111960
// address: 0x100111960
// body: available
// range: 0x100111960-0x100111c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100111960(undefined8 param_1,undefined8 param_2)

{
  Locale LVar1;
  LocalizationValue LVar2;
  undefined *puVar3;
  ID self;
  ID IVar4;
  NSArray *pNVar5;
  NSString *pNVar6;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  LocalizationValue localized;
  String SVar7;
  String stringLiteral;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  localized.unknown =
       (undefined *)
       ((long)&local_80 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  puVar3 = &_OBJC_CLASS___NSOpenPanel;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar3);
  IVar4 = self;
  FUN_100268ef4();
  UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(IVar4);
  objc_stub::setAllowedContentTypes_(self,pNVar5);
  objc_stub::setAllowsMultipleSelection_(self,1);
  objc_stub::setCanChooseDirectories_(self,0);
  objc_stub::setCanChooseFiles_(self,1);
  SVar7.bridgeObject = (void *)0x80000001004dda50;
  SVar7.str = (char *)0xd00000000000001c;
  LVar2 = LocalizationValue::_init(SVar7);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar7 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  objc_stub::setMessage_(self,pNVar6);
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x74726f706d49;
  LVar2 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar2.unknown);
  SVar7 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  objc_stub::setPrompt_(self,pNVar6);
  puVar3 = &DAT_10052ca70;
  _swift_allocObject(&DAT_10052ca70,0x28,7);
  *(ID *)(puVar3 + 0x10) = self;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  local_60 = FUN_100112e6c;
  local_80 = PTR___NSConcreteStackBlock_100521110;
  local_78 = 0x42000000;
  local_70 = FUN_100112008;
  puStack_68 = &DAT_10052ca88;
  local_58 = puVar3;
  aBlock = __Block_copy(&local_80);
  puVar3 = local_58;
  _swift_retain(param_1);
  _swift_release(puVar3);
  objc_stub::beginWithCompletionHandler_(self,aBlock);
  __Block_release(aBlock);
  return 0;
}

