// rea decompile_all
// name: FUN_1000d5a28
// address: 0x1000d5a28
// body: available
// range: 0x1000d5a28-0x1000d5ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d5aac to 0x1004133c4 /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d5a28(long param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  Index IVar4;
  uint uVar5;
  String SVar6;
  String SVar7;
  
  if (-1 < param_1) {
    param_1 = -param_1;
    uVar5 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if (((ulong)param_3 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    pcVar2 = param_2;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      pcVar2 = (char *)((ulong)param_3 >> 0x38 & 0xf);
    }
    uVar1 = 7;
    if (uVar5 == 0) {
      uVar1 = 0xb;
    }
    IVar4.unknown = (undefined *)(uVar1 | (long)pcVar2 << 0x10);
    SVar7.bridgeObject = param_3;
    SVar7.str = param_2;
    Swift::String::_index(IVar4,param_1,(Index)0xf,SVar7);
    pcVar2 = (char *)0xf;
    if (((uint)param_1 & 0xff) != 1) {
      pcVar2 = IVar4.unknown;
    }
    SVar6.bridgeObject = param_2;
    SVar6.str = pcVar2;
    Swift::String::get_subscript((Range<Index>)0xf,SVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d5ab4);
  (*pcVar3)();
}

