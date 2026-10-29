// rea decompile_all
// name: FUN_1003bb6d8
// address: 0x1003bb6d8
// body: available
// range: 0x1003bb6d8-0x1003bb7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bb7ec to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bb6d8(Hasher param_1,byte param_2)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  void *pvVar6;
  String SVar7;
  
  pvVar5 = (void *)0xea00000000006f65;
  pcVar3 = (char *)0x4e6b6f6f4263614d;
  if (param_2 != 6) {
    pvVar5 = (void *)0xe700000000000000;
    pcVar3 = (char *)0x6e776f6e6b6e55;
  }
  pvVar6 = (void *)0xe90000000000006f;
  pcVar1 = (char *)0x696475745363614d;
  if (param_2 != 4) {
    pvVar6 = (void *)0xe600000000000000;
    pcVar1 = (char *)0x6f725063614d;
  }
  if (param_2 < 6) {
    pvVar5 = pvVar6;
    pcVar3 = pcVar1;
  }
  pcVar1 = (char *)0x63614d69;
  if (param_2 != 2) {
    pcVar1 = (char *)0x696e694d63614d;
  }
  pvVar6 = (void *)0xe400000000000000;
  if (param_2 != 2) {
    pvVar6 = (void *)0xe700000000000000;
  }
  pvVar2 = (void *)0xea00000000007269;
  pcVar4 = (char *)0x416b6f6f4263614d;
  if (param_2 != 0) {
    pvVar2 = (void *)0xea00000000006f72;
    pcVar4 = (char *)0x506b6f6f4263614d;
  }
  if (param_2 < 2) {
    pvVar6 = pvVar2;
    pcVar1 = pcVar4;
  }
  if (param_2 < 4) {
    pvVar5 = pvVar6;
    pcVar3 = pcVar1;
  }
  SVar7.bridgeObject = pvVar5;
  SVar7.str = pcVar3;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(pvVar5);
  return;
}

