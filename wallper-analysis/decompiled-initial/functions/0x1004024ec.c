// rea decompile_all
// name: FUN_1004024ec
// address: 0x1004024ec
// body: available
// range: 0x1004024ec-0x1004025fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004024ec(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  Hasher HVar4;
  char *pcVar5;
  String SVar6;
  undefined1 auStack_68 [72];
  
  pcVar5 = (char *)0x746e656964617267;
  Swift::Hasher::init(param_1);
  HVar4.unknown = (undefined *)0xef747365726f662d;
  pcVar1 = pcVar5;
  if (param_2 != 5) {
    pcVar1 = (char *)0xd000000000000011;
    HVar4.unknown = (undefined *)0x80000001004dbf90;
  }
  puVar2 = (undefined *)0xed00006e6f656e2d;
  if (param_2 != 3) {
    puVar2 = (undefined *)0xee007265626d652d;
  }
  if (param_2 < 5) {
    HVar4.unknown = puVar2;
    pcVar1 = pcVar5;
  }
  puVar2 = (undefined *)0xef7465736e75732d;
  if (param_2 != 1) {
    puVar2 = (undefined *)0xee006e6165636f2d;
  }
  puVar3 = (undefined *)0xef61726f7275612d;
  if (param_2 != 0) {
    puVar3 = puVar2;
  }
  if (param_2 < 3) {
    HVar4.unknown = puVar3;
    pcVar1 = pcVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}

