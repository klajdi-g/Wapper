// rea decompile_all
// name: FUN_100177ec4
// address: 0x100177ec4
// body: available
// range: 0x100177ec4-0x100177f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100177ec4(__int64 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined *puVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar6 = (undefined *)0xea00000000006369;
  pcVar1 = (char *)0x726568746f;
  if (bVar3 != 3) {
    pcVar1 = (char *)0x656e6f6e;
  }
  puVar2 = (undefined *)0xe500000000000000;
  if (bVar3 != 3) {
    puVar2 = (undefined *)0xe400000000000000;
  }
  HVar5.unknown = (undefined *)0xec00000063697375;
  pcVar4 = (char *)0x4d65627574756f79;
  if (bVar3 != 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  pcVar1 = (char *)0x73754d656c707061;
  if (bVar3 != 0) {
    puVar6 = (undefined *)0xe700000000000000;
    pcVar1 = (char *)0x796669746f7073;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar6;
    pcVar4 = pcVar1;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}

