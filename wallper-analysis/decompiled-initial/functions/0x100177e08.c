// rea decompile_all
// name: FUN_100177e08
// address: 0x100177e08
// body: available
// range: 0x100177e08-0x100177ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100177ec0 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100177e08(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  byte bVar4;
  char *pcVar5;
  void *pvVar6;
  byte *unaff_x20;
  String SVar7;
  
  bVar4 = *unaff_x20;
  pvVar6 = (void *)0xea00000000006369;
  pcVar1 = (char *)0x726568746f;
  if (bVar4 != 3) {
    pcVar1 = (char *)0x656e6f6e;
  }
  pvVar2 = (void *)0xe500000000000000;
  if (bVar4 != 3) {
    pvVar2 = (void *)0xe400000000000000;
  }
  pvVar3 = (void *)0xec00000063697375;
  pcVar5 = (char *)0x4d65627574756f79;
  if (bVar4 != 2) {
    pvVar3 = pvVar2;
    pcVar5 = pcVar1;
  }
  pcVar1 = (char *)0x73754d656c707061;
  if (bVar4 != 0) {
    pvVar6 = (void *)0xe700000000000000;
    pcVar1 = (char *)0x796669746f7073;
  }
  if (bVar4 < 2) {
    pvVar3 = pvVar6;
    pcVar5 = pcVar1;
  }
  SVar7.bridgeObject = pvVar3;
  SVar7.str = pcVar5;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(pvVar3);
  return;
}

