// rea decompile_all
// name: FUN_100260364
// address: 0x100260364
// body: available
// range: 0x100260364-0x1002603b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002603b0 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100260364(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6b726164;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x746867696c;
  }
  pvVar2 = (void *)0xe400000000000000;
  if (*unaff_x20 != '\x01') {
    pvVar2 = (void *)0xe500000000000000;
  }
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(pvVar2);
  return;
}

