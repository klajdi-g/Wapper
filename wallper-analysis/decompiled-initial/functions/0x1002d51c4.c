// rea decompile_all
// name: FUN_1002d51c4
// address: 0x1002d51c4
// body: available
// range: 0x1002d51c4-0x1002d52f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d51c4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  CharacterSet CVar4;
  CharacterSet CVar5;
  CharacterSet CVar6;
  undefined *puVar7;
  void *in_x3;
  long extraout_x8;
  CharacterSet withAllowedCharacters;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_50;
  undefined8 local_48;
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar4.unknown + -8);
  CVar5 = CVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  withAllowedCharacters.unknown =
       (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_50 = 0x207265706c6c6157;
  local_48 = 0xef74726f70707553;
  CVar6 = Foundation::CharacterSet::get_urlQueryAllowed(CVar5);
  FUN_100026df4();
  CVar5.unknown = withAllowedCharacters.unknown;
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
  (**(code **)(lVar8 + 8))(withAllowedCharacters.unknown);
  pcVar1 = (char *)0x0;
  if (puVar7 != (undefined *)0x0) {
    pcVar1 = CVar5.unknown;
  }
  puVar2 = (undefined *)0xe000000000000000;
  if (puVar7 != (undefined *)0x0) {
    puVar2 = puVar7;
  }
  local_50 = 0;
  local_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x25,(_StringGuts)CVar4.unknown);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd000000000000023;
  local_48 = 0x80000001004e48c0;
  SVar9.bridgeObject = puVar2;
  SVar9.str = pcVar1;
  SVar10.bridgeObject = in_x3;
  SVar10.str = CVar6.unknown;
  Swift::String::append(SVar9,SVar10);
  _swift_bridgeObjectRelease(puVar2);
  uVar3 = local_48;
  FUN_1002d5070(local_50,local_48);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

