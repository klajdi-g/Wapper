// rea decompile_all
// name: FUN_1004072dc
// address: 0x1004072dc
// body: available
// range: 0x1004072dc-0x100407387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100407384 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004072dc(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  byte bVar4;
  char *pcVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar4 = *unaff_x20;
  pvVar3 = (void *)0xea00000000006874;
  pcVar5 = (char *)0x6e6f4d207473614c;
  if (bVar4 != 2) {
    pvVar3 = (void *)0xe900000000000072;
    pcVar5 = (char *)0x6165592073696854;
  }
  pcVar1 = (char *)0x656d6954206c6c41;
  if (bVar4 != 0) {
    pcVar1 = (char *)0x656557207473614c;
  }
  pvVar2 = (void *)0xe800000000000000;
  if (bVar4 != 0) {
    pvVar2 = (void *)0xe90000000000006b;
  }
  if (bVar4 < 2) {
    pvVar3 = pvVar2;
    pcVar5 = pcVar1;
  }
  SVar6.bridgeObject = pvVar3;
  SVar6.str = pcVar5;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(pvVar3);
  return;
}

