// rea decompile_all
// name: FUN_100113fec
// address: 0x100113fec
// body: available
// range: 0x100113fec-0x100114093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100113fec(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  String SVar4;
  undefined1 auVar5 [16];
  String SVar6;
  String SVar7;
  
  lVar1 = 0;
  FUN_100113f00();
  if (*(char *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x1c) + 8) == '\x01') {
    uVar2 = *unaff_x20;
    uVar3 = unaff_x20[1];
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    uVar2 = *unaff_x20;
    uVar3 = unaff_x20[1];
    _swift_bridgeObjectRetain();
    SVar4.bridgeObject = (void *)0xe100000000000000;
    SVar4.str = (char *)0x40;
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar4,SVar6);
    SVar4 = Swift::CustomStringConvertible::get_description();
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar4,SVar7);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

