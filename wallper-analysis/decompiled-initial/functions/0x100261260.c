// rea decompile_all
// name: FUN_100261260
// address: 0x100261260
// body: available
// range: 0x100261260-0x1002612e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002612e0 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100261260(Hasher param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  void *pvVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar1 = (char *)0x746f6c73;
  if (bVar5 != 2) {
    pcVar1 = (char *)0x6e61726165707061;
  }
  pvVar4 = (void *)0xe400000000000000;
  if (bVar5 != 2) {
    pvVar4 = (void *)0xea00000000006563;
  }
  pcVar2 = &DAT_00006469;
  if (bVar5 != 0) {
    pcVar2 = (char *)0x74726170;
  }
  pvVar3 = (void *)0xe200000000000000;
  if (bVar5 != 0) {
    pvVar3 = (void *)0xe400000000000000;
  }
  if (bVar5 < 2) {
    pvVar4 = pvVar3;
    pcVar1 = pcVar2;
  }
  SVar6.bridgeObject = pvVar4;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(pvVar4);
  return;
}

