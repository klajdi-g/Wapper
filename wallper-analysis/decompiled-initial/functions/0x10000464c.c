// rea decompile_all
// name: FUN_10000464c
// address: 0x10000464c
// body: available
// range: 0x10000464c-0x1000046af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000046ac to 0x1000049cc FUN_1000049cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000464c(char *param_1,void *param_2)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_1000049cc(param_1,param_2,_Var1);
  return;
}

