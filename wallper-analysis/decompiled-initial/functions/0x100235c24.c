// rea decompile_all
// name: FUN_100235c24
// address: 0x100235c24
// body: available
// range: 0x100235c24-0x100235e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100235cac to 0x100237ac8 FUN_100237ac8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100235c24(ulong param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  NSString *pNVar2;
  NSDictionary *pNVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  long local_68;
  
  pNVar2 = (NSString *)0x0;
  if (param_2 != 0) {
    puVar1 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    _swift_initStaticObject();
    FUN_10026abd8(param_1,param_2,puVar1);
    if ((param_1 & 1) != 0) {
      FUN_100237ac8();
      return param_1;
    }
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  FUN_1000087e4(param_3,auStack_80,&DAT_10054d428,&DAT_100420300);
  if (local_68 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    FUN_100007bd0(auStack_80,local_68);
    lVar6 = *(long *)(local_68 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
    puVar5 = auStack_80 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar6 + 0x10))(puVar5);
    puVar4 = puVar5;
    Swift::__bridgeAnythingToObjectiveC(puVar5,local_68);
    (**(code **)(lVar6 + 8))(puVar5,local_68);
    FUN_100043f24();
  }
  pNVar3 = (NSDictionary *)0x0;
  if (param_4 != 0) {
    FUN_100007ea8(0);
    FUN_1000036d0(&DAT_10054a598,FUN_100007ea8,&TargetProtocolConformanceDescriptor_10041b340);
    pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  }
  FUN_100255db4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,
                      "observeValueForKeyPath:ofObject:change:context:",pNVar2,puVar4,pNVar3,param_5
                     );
  _swift_unknownObjectRelease(puVar4);
  return 0;
}

