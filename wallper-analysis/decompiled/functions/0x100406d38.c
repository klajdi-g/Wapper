// rea decompile_all
// name: FUN_100406d38
// address: 0x100406d38
// body: available
// range: 0x100406d38-0x100406daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100406dac to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100406d38(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x747365646c4f;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x6b694c2074736f4d;
  }
  pvVar2 = (void *)0xe600000000000000;
  if (cVar5 != '\x01') {
    pvVar2 = (void *)0xea00000000006465;
  }
  pcVar3 = (char *)0x74736577654e;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  pvVar4 = (void *)0xe600000000000000;
  if (cVar5 != '\0') {
    pvVar4 = pvVar2;
  }
  SVar6.bridgeObject = pvVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(pvVar4);
  return;
}

