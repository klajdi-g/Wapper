// rea decompile_all
// name: FUN_1002d951c
// address: 0x1002d951c
// body: available
// range: 0x1002d951c-0x1002d96b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002d951c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  State SVar4;
  ID IVar5;
  NSString *pNVar6;
  long lVar7;
  long *unaff_x20;
  char local_61;
  long local_60;
  long lStack_58;
  
  lVar7 = *unaff_x20;
  if (lVar7 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d96b4);
    (*pcVar1)();
  }
  puVar2 = &DAT_10042eed8;
  _swift_getKeyPath(&DAT_10042eed8);
  puVar3 = &DAT_10042ef00;
  _swift_getKeyPath(&DAT_10042ef00);
  _swift_retain(lVar7);
  Combine::Published::_get_subscript(&local_60);
  _swift_release(lVar7);
  _swift_release(puVar2);
  _swift_release(puVar3);
  lVar7 = lStack_58;
  if (lStack_58 != 0) {
    lStack_58 = unaff_x20[5];
    local_60 = unaff_x20[4];
    SVar4.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar4);
    if (local_61 == '\x01') {
      IVar5 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
      NSPasteboard::clearContents(IVar5);
      IVar5 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar7);
      NSPasteboard::setString_forType_
                (IVar5,pNVar6,*(undefined8 *)PTR__NSPasteboardTypeString_100521310);
      return 1;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  return 0;
}

