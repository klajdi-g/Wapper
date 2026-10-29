// rea decompile_all
// name: FUN_100336898
// address: 0x100336898
// body: available
// range: 0x100336898-0x1003369f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100336898(void)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  URL self;
  NSURL *pNVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_init();
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar2.unknown);
  if ((int)puVar3 == 1) {
    FUN_10002a29c(puVar6,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar6,UVar2.unknown);
    self.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
    pNVar4 = Foundation::URL::_bridgeToObjectiveC(self);
    NSWorkspace::openURL_((ID)self.unknown,pNVar4);
    (**(code **)(lVar7 + 8))(lVar5,UVar2.unknown);
  }
  return;
}

