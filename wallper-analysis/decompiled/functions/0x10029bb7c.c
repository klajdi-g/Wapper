// rea decompile_all
// name: FUN_10029bb7c
// address: 0x10029bb7c
// body: available
// range: 0x10029bb7c-0x10029bbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029bbc0 to 0x1004133c4 /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029bb7c(Range<Index> param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  String SVar5;
  
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((ulong)param_1.unknown >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
    SVar5.str = (char *)(uVar2 | uVar1 << 0x10);
    SVar5.bridgeObject = param_2;
    Swift::String::get_subscript(param_1,SVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10029bbc8);
  (*pcVar3)();
}

