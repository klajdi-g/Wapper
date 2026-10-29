// rea decompile_all
// name: FUN_1002d589c
// address: 0x1002d589c
// body: available
// range: 0x1002d589c-0x1002d5a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d589c(void)

{
  byte bVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  ID self;
  NSArray *pNVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffc0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100286760(puVar7);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_10002a29c(puVar7,&DAT_100553d90,&DAT_10041bf10);
    FUN_100044230(0,&DAT_100557e00,&PTR__OBJC_CLASS___NSSound_10053fc30);
    (extension_AppKit)::__C::NSSound::beep();
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,UVar3.unknown);
    self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    puVar2 = &DAT_100556998;
    FUN_100002f94(&DAT_100556998,&DAT_10042e640);
    bVar1 = *(byte *)(lVar8 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    (**(code **)(lVar8 + 0x10))
              (puVar2 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),lVar6,
               UVar3.unknown);
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar2);
    NSWorkspace::activateFileViewerSelectingURLs_(self,pNVar5);
    (**(code **)(lVar8 + 8))(lVar6,UVar3.unknown);
  }
  return;
}

