// rea decompile_all
// name: FUN_1003d69c4
// address: 0x1003d69c4
// body: available
// range: 0x1003d69c4-0x1003d6b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003d69c4(char *param_1,code *param_2,char *param_3,void *param_4)

{
  long lVar1;
  bool bVar2;
  NSString *pNVar3;
  undefined *puVar4;
  State SVar5;
  ID self;
  String SVar6;
  String SVar7;
  _StringGuts local_70;
  _StringGuts _Stack_68;
  
  if (DAT_1005528e0 != -1) {
    param_1 = (char *)&DAT_1005528e0;
    param_2 = FUN_1000fe734;
    _swift_once();
  }
  lVar1 = DAT_100577c20;
  FUN_1003cffb8();
  SVar6.bridgeObject = param_2;
  SVar6.str = param_1;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar6,SVar7);
  _swift_bridgeObjectRelease(param_2);
  self = *(ID *)(lVar1 + 0x10);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar4 = (undefined *)objc_stub::objectForKey_(self,pNVar3);
  _swift_bridgeObjectRelease(0xe800000000000000);
  if (puVar4 != (undefined *)0x0) {
    return puVar4;
  }
  FUN_1003e4bc8();
  SVar5.unknown = &DAT_10054ab90;
  puVar4 = &DAT_10041bdb0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar5);
  FUN_1003cffb8();
  if (_Stack_68.unknown == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar4);
LAB_1003d6b58:
    local_70.unknown = (undefined *)0x0;
  }
  else {
    if ((local_70.unknown == SVar5.unknown) && (_Stack_68.unknown == puVar4)) {
      _swift_bridgeObjectRelease(_Stack_68.unknown);
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        (local_70,_Stack_68,(_StringComparisonResult)(__int8)SVar5.unknown);
      _swift_bridgeObjectRelease(_Stack_68.unknown);
      _swift_bridgeObjectRelease(puVar4);
      if (!bVar2) goto LAB_1003d6b58;
    }
    SVar5.unknown = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::get_wrappedValue(SVar5);
  }
  return local_70.unknown;
}

