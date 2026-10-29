// rea decompile_all
// name: FUN_1002c8fb0
// address: 0x1002c8fb0
// body: available
// range: 0x1002c8fb0-0x1002c918b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002c8fb0(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  undefined1 *puVar6;
  URL UVar7;
  ID self;
  NSArray *pNVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100170d98();
  FUN_1000087e4(param_1 + *(int *)(lVar5 + 0x24),puVar10,&DAT_100553d90,&DAT_10041bf10);
  puVar6 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,UVar4.unknown);
  if ((int)puVar6 == 1) {
    FUN_10002a29c(puVar10,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    UVar7.unknown = puVar9;
    (**(code **)(lVar11 + 0x20))(puVar9,puVar10,UVar4.unknown);
    bVar2 = Foundation::URL::get_isFileURL(UVar7);
    if (bVar2) {
      self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      puVar3 = &DAT_100556998;
      FUN_100002f94(&DAT_100556998,&DAT_10042e640);
      bVar1 = *(byte *)(lVar11 + 0x50);
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      (**(code **)(lVar11 + 0x10))
                (puVar3 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),puVar9,
                 UVar4.unknown);
      pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar3);
      NSWorkspace::activateFileViewerSelectingURLs_(self,pNVar8);
    }
    (**(code **)(lVar11 + 8))(puVar9,UVar4.unknown);
  }
  return;
}

