// rea decompile_all
// name: FUN_1001b69c4
// address: 0x1001b69c4
// body: available
// range: 0x1001b69c4-0x1001b6bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b69c4(void)

{
  undefined *puVar1;
  UUID UVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID self;
  NSString *pNVar5;
  UUID self_00;
  NSString *pNVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  String SVar10;
  
  puVar1 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_10042a670;
  _swift_getKeyPath(&DAT_10042a670);
  puVar3 = &DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  Combine::Published::_get_subscript(puVar8);
  _swift_release(puVar1);
  _swift_release(puVar3);
  puVar4 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,UVar2.unknown);
  if ((int)puVar4 == 1) {
    FUN_10002a29c(puVar8,&DAT_10054a9c8,&DAT_10041bbe0);
    self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::removeObjectForKey_(self,pNVar5);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,UVar2.unknown);
    self_00.unknown =
         (undefined *)NSUserDefaults::standardUserDefaults(&_OBJC_CLASS___NSUserDefaults);
    SVar10 = Foundation::UUID::get_uuidString(self_00);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_((ID)self_00.unknown,pNVar5,pNVar6);
    (**(code **)(lVar9 + 8))(lVar7,UVar2.unknown);
  }
  return;
}

