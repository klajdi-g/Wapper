// rea decompile_all
// name: FUN_1001600e0
// address: 0x1001600e0
// body: available
// range: 0x1001600e0-0x100160227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001600e0(void)

{
  code *pcVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  long extraout_x8;
  long lVar5;
  String SVar6;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  FUN_1000a1ff8();
  FUN_100099338(UVar2.unknown,&DAT_100577c80);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar4.unknown = (undefined *)0x1;
  IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,0xe);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar3 + 0x10) != 0) {
    (**(code **)(lVar5 + 0x10))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               IVar3 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)),UVar2.unknown);
    _swift_bridgeObjectRelease(IVar3);
    SVar6.bridgeObject = (void *)0xee0073636972794c;
    SVar6.str = (char *)0x2f7265706c6c6157;
    Foundation::URL::appendingPathComponent(SVar6,true,UVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100160228);
  (*pcVar1)();
}

