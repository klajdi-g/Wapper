// rea decompile_all
// name: FUN_10020cba0
// address: 0x10020cba0
// body: available
// range: 0x10020cba0-0x10020cc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020cc40 to 0x1004133c4 /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020cba0(long param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  ulong uVar2;
  Range<Index> RVar3;
  code *pcVar4;
  Index IVar5;
  uint uVar6;
  Index IVar7;
  String SVar8;
  String SVar9;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10020cc48);
    (*pcVar4)();
  }
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  uVar6 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if (((ulong)param_3 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar2 = 7;
  if (uVar6 == 0) {
    uVar2 = 0xb;
  }
  IVar7.unknown = (undefined *)(uVar2 | uVar1 << 0x10);
  param_1 = -param_1;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  IVar5.unknown = IVar7.unknown;
  Swift::String::_index(IVar7,param_1,(Index)0xf,SVar9);
  RVar3.unknown = (undefined *)0xf;
  if (((uint)param_1 & 0xff) != 1) {
    RVar3.unknown = IVar5.unknown;
  }
  if ((ulong)RVar3.unknown >> 0xe <= uVar1 << 2) {
    SVar8.bridgeObject = param_2;
    SVar8.str = IVar7.unknown;
    Swift::String::get_subscript(RVar3,SVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10020cc4c);
  (*pcVar4)();
}

