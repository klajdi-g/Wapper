// rea decompile_all
// name: FUN_100295970
// address: 0x100295970
// body: available
// range: 0x100295970-0x100295a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100295970(void)

{
  char *pcVar1;
  NSString *pNVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  uVar5 = 0x6e776f6e6b6e75;
  uVar7 = (ulong)*(uint *)PTR__kIOMainPortDefault_100521998;
  pcVar1 = "IOPlatformExpertDevice";
  _IOServiceMatching("IOPlatformExpertDevice");
  _IOServiceGetMatchingService(uVar7,pcVar1);
  if ((int)uVar7 == 0) {
    uVar8 = 0xe700000000000000;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    uVar3 = uVar7;
    _IORegistryEntryCreateCFProperty
              (uVar7,pNVar2,*(undefined8 *)PTR__kCFAllocatorDefault_1005215b0,0);
    uVar6 = uVar5;
    uVar8 = 0xe700000000000000;
    if (uVar3 != 0) {
      _swift_unknownObjectRetain(uVar3);
      puVar4 = &local_48;
      local_38 = uVar3;
      _swift_dynamicCast(puVar4,&local_38,PTR___type_metadata_for_Swift_AnyObject_100524170 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      uVar6 = local_48;
      uVar8 = uStack_40;
      if ((int)puVar4 == 0) {
        uVar8 = 0xe700000000000000;
        uVar6 = uVar5;
      }
    }
    _IOObjectRelease(uVar7);
    uVar5 = uVar6;
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar5;
  return auVar9;
}

