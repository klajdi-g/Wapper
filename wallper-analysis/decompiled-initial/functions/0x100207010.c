// rea decompile_all
// name: FUN_100207010
// address: 0x100207010
// body: available
// range: 0x100207010-0x100207197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100207010(void)

{
  URL UVar1;
  ID self;
  URL UVar2;
  URL in_x3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar3;
  code *pcVar4;
  long lVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar2.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar2);
  SVar6.bridgeObject = (void *)0x80000001004e1140;
  SVar6.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar6,true,in_x3);
  pcVar4 = *(code **)(lVar5 + 8);
  (*pcVar4)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  UVar2.unknown = (undefined *)0x1;
  SVar7.bridgeObject = (void *)0xe800000000000000;
  SVar7.str = (char *)0x74736566696e616d;
  Foundation::URL::appendingPathComponent(SVar7,true,in_x3);
  (*pcVar4)(lVar3,UVar1.unknown);
  SVar8.bridgeObject = (void *)0xec0000006e6f736a;
  SVar8.str = (char *)0x2e73656972746e65;
  Foundation::URL::appendingPathComponent(SVar8,UVar2);
  (*pcVar4)(lVar3 - extraout_x12_00,UVar1.unknown);
  return;
}

