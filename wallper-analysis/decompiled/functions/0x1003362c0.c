// rea decompile_all
// name: thunk_FUN_100336898
// address: 0x1003362c0
// body: available
// range: 0x1003362c0-0x1003362c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100336898(void)

{
  undefined *puVar1;
  URL UVar2;
  SEL pcVar3;
  URL self;
  NSURL *pNVar4;
  SEL op;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  op = &stack0xffffffffffffffc0 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)op - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_init();
  pcVar3 = op;
  (**(code **)(lVar6 + 0x30))(op,1,UVar2.unknown);
  if ((int)pcVar3 == 1) {
    FUN_10002a29c(op,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5,op,UVar2.unknown);
    self.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace,op);
    pNVar4 = Foundation::URL::_bridgeToObjectiveC(self);
    NSWorkspace::openURL_((ID)self.unknown,op,pNVar4);
    (**(code **)(lVar6 + 8))(lVar5,UVar2.unknown);
  }
  return;
}

