// rea decompile_all
// name: FUN_1001d39ac
// address: 0x1001d39ac
// body: available
// range: 0x1001d39ac-0x1001d3a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d3a30 to 0x1004133c4 /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d39ac(long param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  code *pcVar2;
  char *pcVar3;
  uint uVar4;
  Index limitedBy;
  String SVar5;
  String SVar6;
  
  if (-1 < param_1) {
    pcVar3 = param_2;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      pcVar3 = (char *)((ulong)param_3 >> 0x38 & 0xf);
    }
    uVar4 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if (((ulong)param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar1 = 7;
    if (uVar4 == 0) {
      uVar1 = 0xb;
    }
    limitedBy.unknown = (undefined *)(uVar1 | (long)pcVar3 << 0x10);
    pcVar3 = (char *)0xf;
    SVar6.bridgeObject = param_3;
    SVar6.str = param_2;
    Swift::String::_index((Index)0xf,param_1,limitedBy,SVar6);
    if (((uint)param_1 & 0xff) != 1) {
      limitedBy.unknown = pcVar3;
    }
    SVar5.bridgeObject = param_2;
    SVar5.str = limitedBy.unknown;
    Swift::String::get_subscript((Range<Index>)0xf,SVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d3a38);
  (*pcVar2)();
}

