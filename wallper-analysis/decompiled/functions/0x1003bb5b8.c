// rea decompile_all
// name: FUN_1003bb5b8
// address: 0x1003bb5b8
// body: available
// range: 0x1003bb5b8-0x1003bb6d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bb6d4 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bb5b8(Hasher param_1,byte param_2)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  
  if (param_2 < 4) {
    pcVar3 = (char *)0x656c746974;
    if (param_2 != 2) {
      pcVar3 = (char *)0x79726f6765746163;
    }
    pvVar4 = (void *)0xe500000000000000;
    if (param_2 != 2) {
      pvVar4 = (void *)0xe800000000000000;
    }
    pcVar2 = (char *)0x656e6f6e;
    if (param_2 != 0) {
      pcVar2 = (char *)0x7265626d756e;
    }
    pvVar1 = (void *)0xe400000000000000;
    if (param_2 != 0) {
      pvVar1 = (void *)0xe600000000000000;
    }
    if (param_2 < 2) {
      pcVar3 = pcVar2;
      pvVar4 = pvVar1;
    }
  }
  else {
    pcVar2 = (char *)0x657a6973;
    if (param_2 != 7) {
      pcVar2 = (char *)0x73656b696c;
    }
    pvVar1 = (void *)0xe400000000000000;
    if (param_2 != 7) {
      pvVar1 = (void *)0xe500000000000000;
    }
    pvVar4 = (void *)0xea00000000006e6f;
    pcVar3 = (char *)0x6974756c6f736572;
    if (param_2 != 6) {
      pvVar4 = pvVar1;
      pcVar3 = pcVar2;
    }
    pcVar2 = (char *)0x726f68747561;
    if (param_2 != 4) {
      pcVar2 = (char *)0x6e6f697461727564;
    }
    pvVar1 = (void *)0xe600000000000000;
    if (param_2 != 4) {
      pvVar1 = (void *)0xe800000000000000;
    }
    if (param_2 < 6) {
      pcVar3 = pcVar2;
      pvVar4 = pvVar1;
    }
  }
  SVar5.bridgeObject = pvVar4;
  SVar5.str = pcVar3;
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(pvVar4);
  return;
}

